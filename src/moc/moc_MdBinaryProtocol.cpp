/****************************************************************************
** Meta object code from reading C++ file 'MdBinaryProtocol.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../com/MdBinaryProtocol.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MdBinaryProtocol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN16MdBinaryProtocolE_t {};
} // unnamed namespace

template <> constexpr inline auto MdBinaryProtocol::qt_create_metaobjectdata<qt_meta_tag_ZN16MdBinaryProtocolE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MdBinaryProtocol",
        "portOpened",
        "",
        "portClosed",
        "n75DutyMapreceived",
        "gear",
        "mode",
        "serial",
        "QList<quint8>*",
        "data",
        "n75SetpointMapreceived",
        "QList<double>*",
        "ackReceived",
        "n75SettingsReceived",
        "aKp",
        "aKi",
        "aKd",
        "cKp",
        "cKi",
        "cKd",
        "aAT",
        "cAT",
        "pid_enabled",
        "maxBoost",
        "gearboxSettingsReceived",
        "g1",
        "g2",
        "g3",
        "g4",
        "g5",
        "g6",
        "frameReceived",
        "showStatusMessage",
        "showStatusBarSampleCount",
        "mdCmdAp",
        "mdCmdAh",
        "mdCmdBp",
        "mdCmdBh",
        "mdCmdActivateSerialOutput",
        "mdCmdActivateSerialBinaryOutput",
        "mdCmdDisableSerialOutput",
        "mdCmdCalBoost",
        "mdCmdReadEeprom",
        "mdCmdLoadFromEeprom",
        "mdCmdSave2Eeprom",
        "mdCmdReqN75DutyMap",
        "mdCmdReqN75SetpointMap",
        "mdCmdWriteN75DutyMap",
        "mdCmdWriteN75SetpointMap",
        "mdCmdWriteN75MapsToEEprom",
        "mdCmdLoadN75MapsFromEEprom",
        "mdCmdReqN75Settings",
        "mdCmdWriteN75Settings",
        "mdCmdReadN75SettingsFromEEprom",
        "mdCmdWriteN75SettingsToEEprom",
        "mdSendCommand",
        "cmd",
        "subcmd",
        "mdCmdSetSerialFrequency",
        "frequency",
        "mdCmdReadGearbox",
        "mdCmdWriteGearbox",
        "openPort",
        "closePort",
        "changePortSettings",
        "sport",
        "speed",
        "incomingData",
        "bytes",
        "onPortOpened",
        "onPortClosed",
        "debugDataGenUpdate"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'portOpened'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'portClosed'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'n75DutyMapreceived'
        QtMocHelpers::SignalData<void(quint8, quint8, quint8, QVector<quint8> *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 5 }, { QMetaType::UChar, 6 }, { QMetaType::UChar, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Signal 'n75SetpointMapreceived'
        QtMocHelpers::SignalData<void(quint8, quint8, quint8, QVector<double> *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 5 }, { QMetaType::UChar, 6 }, { QMetaType::UChar, 7 }, { 0x80000000 | 11, 9 },
        }}),
        // Signal 'ackReceived'
        QtMocHelpers::SignalData<void(quint8)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 7 },
        }}),
        // Signal 'n75SettingsReceived'
        QtMocHelpers::SignalData<void(quint8, double, double, double, double, double, double, double, double, bool, double)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 7 }, { QMetaType::Double, 14 }, { QMetaType::Double, 15 }, { QMetaType::Double, 16 },
            { QMetaType::Double, 17 }, { QMetaType::Double, 18 }, { QMetaType::Double, 19 }, { QMetaType::Double, 20 },
            { QMetaType::Double, 21 }, { QMetaType::Bool, 22 }, { QMetaType::Double, 23 },
        }}),
        // Signal 'gearboxSettingsReceived'
        QtMocHelpers::SignalData<void(quint8, double, double, double, double, double, double)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 7 }, { QMetaType::Double, 25 }, { QMetaType::Double, 26 }, { QMetaType::Double, 27 },
            { QMetaType::Double, 28 }, { QMetaType::Double, 29 }, { QMetaType::Double, 30 },
        }}),
        // Signal 'frameReceived'
        QtMocHelpers::SignalData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showStatusMessage'
        QtMocHelpers::SignalData<void(const QString &)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'showStatusBarSampleCount'
        QtMocHelpers::SignalData<void(const QString &)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'mdCmdAp'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mdCmdAh'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mdCmdBp'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mdCmdBh'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mdCmdActivateSerialOutput'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mdCmdActivateSerialBinaryOutput'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mdCmdDisableSerialOutput'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mdCmdCalBoost'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mdCmdReadEeprom'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mdCmdLoadFromEeprom'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mdCmdSave2Eeprom'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mdCmdReqN75DutyMap'
        QtMocHelpers::SlotData<void(quint8, quint8, quint8)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 5 }, { QMetaType::UChar, 6 }, { QMetaType::UChar, 7 },
        }}),
        // Slot 'mdCmdReqN75SetpointMap'
        QtMocHelpers::SlotData<void(quint8, quint8, quint8)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 5 }, { QMetaType::UChar, 6 }, { QMetaType::UChar, 7 },
        }}),
        // Slot 'mdCmdWriteN75DutyMap'
        QtMocHelpers::SlotData<void(quint8, quint8, quint8, QVector<quint8> *)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 5 }, { QMetaType::UChar, 6 }, { QMetaType::UChar, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'mdCmdWriteN75SetpointMap'
        QtMocHelpers::SlotData<void(quint8, quint8, quint8, QVector<double> *)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 5 }, { QMetaType::UChar, 6 }, { QMetaType::UChar, 7 }, { 0x80000000 | 11, 9 },
        }}),
        // Slot 'mdCmdWriteN75MapsToEEprom'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mdCmdLoadN75MapsFromEEprom'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mdCmdReqN75Settings'
        QtMocHelpers::SlotData<void(quint8)>(51, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 7 },
        }}),
        // Slot 'mdCmdReqN75Settings'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'mdCmdWriteN75Settings'
        QtMocHelpers::SlotData<void(quint8, double, double, double, double, double, double, double, double, bool, double)>(52, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 7 }, { QMetaType::Double, 14 }, { QMetaType::Double, 15 }, { QMetaType::Double, 16 },
            { QMetaType::Double, 17 }, { QMetaType::Double, 18 }, { QMetaType::Double, 19 }, { QMetaType::Double, 20 },
            { QMetaType::Double, 21 }, { QMetaType::Bool, 22 }, { QMetaType::Double, 23 },
        }}),
        // Slot 'mdCmdReadN75SettingsFromEEprom'
        QtMocHelpers::SlotData<void(quint8)>(53, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 7 },
        }}),
        // Slot 'mdCmdReadN75SettingsFromEEprom'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'mdCmdWriteN75SettingsToEEprom'
        QtMocHelpers::SlotData<void(quint8)>(54, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 7 },
        }}),
        // Slot 'mdCmdWriteN75SettingsToEEprom'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'mdSendCommand'
        QtMocHelpers::SlotData<void(quint8, quint8, quint8)>(55, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 56 }, { QMetaType::UChar, 57 }, { QMetaType::UChar, 7 },
        }}),
        // Slot 'mdSendCommand'
        QtMocHelpers::SlotData<void(quint8, quint8)>(55, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::UChar, 56 }, { QMetaType::UChar, 57 },
        }}),
        // Slot 'mdCmdSetSerialFrequency'
        QtMocHelpers::SlotData<void(quint16, quint8)>(58, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UShort, 59 }, { QMetaType::UChar, 7 },
        }}),
        // Slot 'mdCmdSetSerialFrequency'
        QtMocHelpers::SlotData<void(quint16)>(58, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::UShort, 59 },
        }}),
        // Slot 'mdCmdReadGearbox'
        QtMocHelpers::SlotData<void(quint8)>(60, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 7 },
        }}),
        // Slot 'mdCmdReadGearbox'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'mdCmdWriteGearbox'
        QtMocHelpers::SlotData<void(double, double, double, double, double, double, quint8)>(61, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 25 }, { QMetaType::Double, 26 }, { QMetaType::Double, 27 }, { QMetaType::Double, 28 },
            { QMetaType::Double, 29 }, { QMetaType::Double, 30 }, { QMetaType::UChar, 7 },
        }}),
        // Slot 'mdCmdWriteGearbox'
        QtMocHelpers::SlotData<void(double, double, double, double, double, double)>(61, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Double, 25 }, { QMetaType::Double, 26 }, { QMetaType::Double, 27 }, { QMetaType::Double, 28 },
            { QMetaType::Double, 29 }, { QMetaType::Double, 30 },
        }}),
        // Slot 'openPort'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closePort'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changePortSettings'
        QtMocHelpers::SlotData<bool(QString, QString)>(64, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 65 }, { QMetaType::QString, 66 },
        }}),
        // Slot 'incomingData'
        QtMocHelpers::SlotData<void(const QByteArray &)>(67, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QByteArray, 68 },
        }}),
        // Slot 'onPortOpened'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onPortClosed'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'debugDataGenUpdate'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MdBinaryProtocol, qt_meta_tag_ZN16MdBinaryProtocolE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MdBinaryProtocol::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16MdBinaryProtocolE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16MdBinaryProtocolE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16MdBinaryProtocolE_t>.metaTypes,
    nullptr
} };

void MdBinaryProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MdBinaryProtocol *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->portOpened(); break;
        case 1: _t->portClosed(); break;
        case 2: _t->n75DutyMapreceived((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QList<quint8>*>>(_a[4]))); break;
        case 3: _t->n75SetpointMapreceived((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QList<double>*>>(_a[4]))); break;
        case 4: _t->ackReceived((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1]))); break;
        case 5: _t->n75SettingsReceived((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[10])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[11]))); break;
        case 6: _t->gearboxSettingsReceived((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[7]))); break;
        case 7: _t->frameReceived(); break;
        case 8: _t->showStatusMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->showStatusBarSampleCount((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->mdCmdAp(); break;
        case 11: _t->mdCmdAh(); break;
        case 12: _t->mdCmdBp(); break;
        case 13: _t->mdCmdBh(); break;
        case 14: _t->mdCmdActivateSerialOutput(); break;
        case 15: _t->mdCmdActivateSerialBinaryOutput(); break;
        case 16: _t->mdCmdDisableSerialOutput(); break;
        case 17: _t->mdCmdCalBoost(); break;
        case 18: _t->mdCmdReadEeprom(); break;
        case 19: _t->mdCmdLoadFromEeprom(); break;
        case 20: _t->mdCmdSave2Eeprom(); break;
        case 21: _t->mdCmdReqN75DutyMap((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[3]))); break;
        case 22: _t->mdCmdReqN75SetpointMap((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[3]))); break;
        case 23: _t->mdCmdWriteN75DutyMap((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QList<quint8>*>>(_a[4]))); break;
        case 24: _t->mdCmdWriteN75SetpointMap((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QList<double>*>>(_a[4]))); break;
        case 25: _t->mdCmdWriteN75MapsToEEprom(); break;
        case 26: _t->mdCmdLoadN75MapsFromEEprom(); break;
        case 27: _t->mdCmdReqN75Settings((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1]))); break;
        case 28: _t->mdCmdReqN75Settings(); break;
        case 29: _t->mdCmdWriteN75Settings((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[10])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[11]))); break;
        case 30: _t->mdCmdReadN75SettingsFromEEprom((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1]))); break;
        case 31: _t->mdCmdReadN75SettingsFromEEprom(); break;
        case 32: _t->mdCmdWriteN75SettingsToEEprom((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1]))); break;
        case 33: _t->mdCmdWriteN75SettingsToEEprom(); break;
        case 34: _t->mdSendCommand((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[3]))); break;
        case 35: _t->mdSendCommand((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2]))); break;
        case 36: _t->mdCmdSetSerialFrequency((*reinterpret_cast<std::add_pointer_t<quint16>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2]))); break;
        case 37: _t->mdCmdSetSerialFrequency((*reinterpret_cast<std::add_pointer_t<quint16>>(_a[1]))); break;
        case 38: _t->mdCmdReadGearbox((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1]))); break;
        case 39: _t->mdCmdReadGearbox(); break;
        case 40: _t->mdCmdWriteGearbox((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[7]))); break;
        case 41: _t->mdCmdWriteGearbox((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[6]))); break;
        case 42: _t->openPort(); break;
        case 43: _t->closePort(); break;
        case 44: { bool _r = _t->changePortSettings((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 45: _t->incomingData((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 46: _t->onPortOpened(); break;
        case 47: _t->onPortClosed(); break;
        case 48: _t->debugDataGenUpdate(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MdBinaryProtocol::*)()>(_a, &MdBinaryProtocol::portOpened, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdBinaryProtocol::*)()>(_a, &MdBinaryProtocol::portClosed, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdBinaryProtocol::*)(quint8 , quint8 , quint8 , QVector<quint8> * )>(_a, &MdBinaryProtocol::n75DutyMapreceived, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdBinaryProtocol::*)(quint8 , quint8 , quint8 , QVector<double> * )>(_a, &MdBinaryProtocol::n75SetpointMapreceived, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdBinaryProtocol::*)(quint8 )>(_a, &MdBinaryProtocol::ackReceived, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdBinaryProtocol::*)(quint8 , double , double , double , double , double , double , double , double , bool , double )>(_a, &MdBinaryProtocol::n75SettingsReceived, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdBinaryProtocol::*)(quint8 , double , double , double , double , double , double )>(_a, &MdBinaryProtocol::gearboxSettingsReceived, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdBinaryProtocol::*)()>(_a, &MdBinaryProtocol::frameReceived, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdBinaryProtocol::*)(const QString & )>(_a, &MdBinaryProtocol::showStatusMessage, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdBinaryProtocol::*)(const QString & )>(_a, &MdBinaryProtocol::showStatusBarSampleCount, 9))
            return;
    }
}

const QMetaObject *MdBinaryProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MdBinaryProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16MdBinaryProtocolE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MdBinaryProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 49;
    }
    return _id;
}

// SIGNAL 0
void MdBinaryProtocol::portOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MdBinaryProtocol::portClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MdBinaryProtocol::n75DutyMapreceived(quint8 _t1, quint8 _t2, quint8 _t3, QVector<quint8> * _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 3
void MdBinaryProtocol::n75SetpointMapreceived(quint8 _t1, quint8 _t2, quint8 _t3, QVector<double> * _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 4
void MdBinaryProtocol::ackReceived(quint8 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void MdBinaryProtocol::n75SettingsReceived(quint8 _t1, double _t2, double _t3, double _t4, double _t5, double _t6, double _t7, double _t8, double _t9, bool _t10, double _t11)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7, _t8, _t9, _t10, _t11);
}

// SIGNAL 6
void MdBinaryProtocol::gearboxSettingsReceived(quint8 _t1, double _t2, double _t3, double _t4, double _t5, double _t6, double _t7)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7);
}

// SIGNAL 7
void MdBinaryProtocol::frameReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MdBinaryProtocol::showStatusMessage(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void MdBinaryProtocol::showStatusBarSampleCount(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}
QT_WARNING_POP
