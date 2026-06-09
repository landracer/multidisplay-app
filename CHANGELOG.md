# Changelog - multidisplay-app Qt6 Port

## Version 2.0 (Qt6 Port)

### Major Changes
- Complete Qt5 to Qt6 migration
- QWT upgraded from 6.1.1 to 6.2.0 (Qt6-compatible)
- All deprecated APIs removed and replaced with Qt6 equivalents

### Key Fixes Applied
1. **Q_WS_X11** → **Q_OS_LINUX** (30+ occurrences)
2. **Q_WS_MAEMO_5** → **QT_MAEMO5_ENABLE** (30+ occurrences)  
3. **QFontMetrics::width()** → **horizontalAdvance()**
4. **QRegExp** → **QRegularExpression**
5. **QTime** → **QElapsedTimer**
6. **QString::toAscii()** → **toLatin1()**
7. **QMutex::Recursive** → **default constructor**
8. **QComboBox::currentIndexChanged(QString)** → **QComboBox::currentIndexChanged(int)** (removed in Qt6)

### Library Dependencies
- QWT 6.2.0 (Qt6-compatible)
- qextserialport with Qt6 fixes
- System libqwt-qt6 package required

### Build Requirements
- Qt6 development libraries
- Modern C++ compiler (C++17 or higher)
- qmake6 for building

### Runtime Requirements
- Linux desktop system
- Bluetooth or USB connectivity to multidisplay hardware
- System libqwt-qt6 package installed

### Notes
- No more LD_LIBRARY_PATH needed for runtime
- Binary compiles and runs without crashes
- All core functionality preserved
- Old-style SIGNAL/SLOT macros converted in most files (remaining warnings are cosmetic)

## Previous Versions
- Original Qt5 version with Maemo5/Android support
- Desktop Linux support with Qt5