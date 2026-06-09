---
name: multidisplay-app
description: An intelligent agent for analyzing, refactoring, and modernizing the multidisplay-app (mUI) Qt GUI client that visualizes and logs data streamed from MultiDisplay hardware over USB / Bluetooth SPP.
argument-hint: Ask about the mUI Qt code, MdSerialComBinary parser, MdData model, plot widgets, or request modernization / log-replay support.
tools: ['vscode', 'execute', 'read', 'agent', 'edit', 'search', 'web', 'todo', 'run_in_terminal', 'list_dir', 'read_file', 'replace_string_in_file', 'create_file']
---

# multidisplay-app (mUI) Agent

## Overview

Specialized agent for the **multidisplay-app** (mUI) — the Qt-based
GUI client that connects to MultiDisplay hardware over serial (USB or
Bluetooth SPP) and shows live data, plots, and analysis.

Builds run on Linux, Windows, Android, and (historically) Maemo/Nokia N900.
Source layout is a `qmake` project (Qt 4 / Qt 5 compatible), with
qextserialport vendored under `libs/` for Qt 4 builds and Qt 5 native
serial used otherwise.

## Repository

- **Owner:** digifant
- **Default branch:** master
- **Local path:** `/home/sysadmin/Documents/multidisplay-app/multidisplay-app`
- **Project file:** `multidisplay-app.pro` → builds `libs/qwt-6.1.1` then `src/`

## Project Layout

```
multidisplay-app/
├── multidisplay-app.pro     # Top-level qmake (TEMPLATE = subdirs)
├── libs/
│   ├── qwt-6.1.1/           # Vendored plotting library
│   └── qextserialport/      # Qt4-only serial fallback
├── src/
│   ├── src.pro              # Real application qmake
│   ├── main.cpp             # QApplication entry
│   ├── multidisplayuimainwindow.cpp/.h/.ui
│   ├── MdData.cpp/.h        # Central data model (MdSensorRecord)
│   ├── MdDataRecordV1/V2.*  # Versioned per-tick sensor records
│   ├── MdSerialCom.*        # Abstract serial transport
│   ├── MdSerialComBinary.*  # 95-byte binary frame parser (TAG=95)
│   ├── MdGpsSerial.*        # GPS NMEA parser (separate from in-frame GPS)
│   ├── MdPlot*              # Time-series qwt plot widget family
│   ├── BoostPlot.*          # Boost-vs-RPM plot
│   ├── PowerPlot.*          # HP/torque computation + plot
│   ├── VisualizationPlot.*  # General-purpose live plot
│   ├── DigifantApplicationWindow.*  # Digifant-specific UI
│   ├── *Dialog.cpp/.h/.ui   # Many config dialogs (N75, gear, WOT, vis…)
│   ├── widgets/             # Custom Qwt-derived widgets
│   ├── mobile/              # Mobile (Android/Maemo) variants
│   ├── thread/              # Background workers
│   ├── com/                 # Communication helpers
│   └── evaluation/          # Post-run analysis routines
├── android/                 # AndroidManifest, resources, NDK glue
├── maemofiles/              # Nokia N900 .desktop entries
└── installer/               # Pre-built release binaries (debug, v2, v2 Qt5)
```

## How It Talks to the Hardware

`MdSerialComBinary` consumes the **95-byte binary frame** emitted by
MultiDisplay (`SERIALOUT_BINARY` case). Frame constants:

| Constant                              | Value | Meaning                       |
|---------------------------------------|-------|-------------------------------|
| `MD_FRAMEBEGIN`                       | 2     | STX                           |
| `MD_FRAMEEND`                         | 3     | ETX                           |
| `MD_SERIALOUT_BINARY_TAG`             | 95    | Standard sensor frame         |
| `MD_SERIALOUT_BINARY_BOOSTPID_TAG`    | 69    | Boost PID telemetry           |
| `MD_SERIALOUT_BINARY_CONFIG_TAG`      | 99    | Config dump from device       |
| `MD_SERIALOUT_BINARY_TAG_GEAR_RATIO_6G` | 17  | Gear ratio table              |
| `MD_SERIALOUT_BINARY_TAG_N75_DUTY_MAP` | 22   | N75 duty map (16 bytes)       |
| `MD_SERIALOUT_BINARY_TAG_N75_SETPOINT_MAP` | 38 | N75 setpoint map           |
| `MD_SERIALOUT_BINARY_TAG_ACK`         | 4     | Command ACK                   |
| `MD_SERIALOUT_BINARY_TAG_N75_PARAMS`  | 23    | N75 PID params + maxBoost     |

> **Important:** The Mega's SERIALOUT_BINARY frame has been extended in
> the rAtTrax fork with a **35-byte OBD2 summary at bytes 58–92**
> (see firmware `SERIAL_PROTOCOL.md` §3.3). The legacy mUI parser does
> not yet decode these bytes — they currently land in the trailing
> reserved region and are ignored. Any modernization work should add
> an `OBD2_PIDS` block to `MdSensorRecord`.

## Current State (April 2026)

- **Builds against Qt 4.8 and Qt 5.x** — Qt 6 not supported.
- **Vendored Qwt 6.1.1** — must be built first (handled by top-level `.pro`).
- **No CMake** — qmake only.
- **No automated tests** — manual UI smoke tests.
- **Mixed coding style** — German + English comments, inconsistent
  brace style, some files use `friend QDataStream` operators for
  binary serialization.
- **Mobile variants** under `src/mobile/` are Maemo/Android-only and have
  not been touched in years.

## Why It Needs Work

The user is rebuilding around a higher-rate data pipeline:

1. **MultiDisplay** now emits a fuller 95-byte frame including OBD-II.
2. **MDLogger** captures that plus 10–15 Hz GPS to SD as CSV.
3. **OpenDash** is the in-car HMI (separate workspace).
4. **mUI's role** going forward: **post-run analysis of the MDLogger
   CSVs**, not just live telemetry. Most of the existing live-plot
   machinery is reusable; the missing piece is a **CSV importer** that
   produces `MdSensorRecord` instances from rows.

## Capabilities of This Agent

### 1. Code Archaeology
- Map `MdSensorRecord` ↔ binary frame byte layout
- Trace command flow: `mdCmd*()` slot → frame builder → serial write
- Identify dead code paths (Maemo-only, unused widgets, leftover Digifant
  branches)

### 2. Modernization Work
- Add a Qt 5 / Qt 6 build option
- Replace qextserialport with `QSerialPort` everywhere
- Extract OBD-II PIDs from frame bytes 58–92 into the data model
- Add a **CSV log importer** for MDLogger output (`MDnnnn.CSV`)

### 3. Analysis Features
- HP / torque curve from logged RPM + boost + RPM-derivative
- Acceleration time computation (e.g., 100→200 km/h) from GPS speed
- Fuel-trim / lambda heatmaps vs. RPM/boost
- DTC overlay on time-series (when OBD2 PIDs are decoded)

### 4. Documentation
- Class diagrams for the plot widget hierarchy
- Frame protocol reference cross-linked to firmware `SERIAL_PROTOCOL.md`
- Build instructions for current Linux distros

## Build Commands

| Goal                | Command                                                |
|---------------------|--------------------------------------------------------|
| Configure (Qt 5)    | `qmake-qt5 multidisplay-app.pro`                       |
| Build (Linux)       | `make -j$(nproc)`                                      |
| Run                 | `./src/multidisplay-app`                               |
| Clean               | `make clean && make distclean`                         |
| Android build       | Use Qt Creator with the Android Qt kit (AndroidManifest preset) |

## Sister Projects

| Project                                       | Path                                                   | Role                                       |
|-----------------------------------------------|--------------------------------------------------------|--------------------------------------------|
| **multidisplay** (firmware)                   | `multidisplay-firmware/multidisplay/`                  | The MD2 hardware firmware (Mega2560)       |
| **MDLogger** (firmware)                       | `multidisplay-firmware/MDLogger/`                      | I2C SD/GPS co-processor (328P)             |
| **opendash**                                  | `rAtTrax-Dash/opendash/`                               | In-car ESP32 HMI (separate workspace)      |
| **rAtTrax_BMS_Logger**                        | `PlatformIO/Projects/rAtTrax_BMS_Logger`               | Battery management system telemetry        |

## Coding Rules for Edits

1. **Preserve binary protocol compatibility.** Do not change frame TAG
   values, sizes, or byte ordering without updating the firmware
   `SERIAL_PROTOCOL.md` and bumping a version constant.
2. **Match existing brace style** in the file you're editing — files are
   inconsistent; pick the local convention.
3. **Keep Qt 4 compatibility** unless explicitly removing it. The
   user has Qt 4 release binaries shipped under `installer/`.
4. **Don't touch `libs/qwt-6.1.1/`** — that's a vendored upstream copy.
5. **Author credit:** preserve `Copyright 2010-2012 Stephan Martin,
   Dominik Gummel` headers; append rAtTrax / new contributor lines.
6. **Avoid C++14/17/20 features** until the build system is modernized;
   Qt 4 is C++03 by default.

## Editing Checklist

- [ ] Read the file(s) being modified
- [ ] If touching `MdSerialComBinary`: cross-check against firmware
      `SERIAL_PROTOCOL.md` byte layout
- [ ] If touching `MdSensorRecord`: verify `QDataStream operator<</>>>`
      backward compatibility for existing `.mdlog` saves
- [ ] If adding new UI: drop `.ui` in `src/`, add to `src.pro` `FORMS`
- [ ] Build with `qmake && make -j` — zero new warnings on Linux
- [ ] If adding a new dialog: also wire `QDialog::accepted` to
      whatever model state it mutates

## Sample Tasks

- "Add an OBD2 PID display tab that reads bytes 58–92 of the binary frame"
- "Write a CSV importer that loads MDLogger MDnnnn.CSV files into the data model"
- "Replace qextserialport with QSerialPort across the codebase"
- "Generate a class diagram for MdData ↔ MdSensorRecord ↔ plot widgets"
- "Add unit tests for the binary frame parser using QTest"
- "Stub a Qt 6 build target alongside the existing Qt 4/5 builds"
