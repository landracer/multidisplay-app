/****************************************************************************
** Meta object code from reading C++ file 'AppEngine.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AppEngine.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AppEngine.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9AppEngineE_t {};
} // unnamed namespace

template <> constexpr inline auto AppEngine::qt_create_metaobjectdata<qt_meta_tag_ZN9AppEngineE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AppEngine",
        "showStatusMessage",
        "",
        "showStatusBarSampleCount",
        "newDfBoostTransferFunction",
        "setReplaySpeedUpFactor",
        "f",
        "saveData",
        "saveDataAs",
        "saveDataAsCSV",
        "openData",
        "fn",
        "clearData",
        "changeSerialOptions",
        "changeDataWinMarkToDisplayRecord",
        "record",
        "changeDataWinMark",
        "nwm",
        "changeDataWinSize",
        "ns",
        "changeDVSliderUp",
        "changeDVSliderDown",
        "changeDVSliderMin",
        "changeDVSliderMax",
        "changeDataWinMarkMicroLeft",
        "changeDataWinMarkMicroRight",
        "writeSettings",
        "replayData"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showStatusMessage'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'showStatusBarSampleCount'
        QtMocHelpers::SignalData<void(QString)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'newDfBoostTransferFunction'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setReplaySpeedUpFactor'
        QtMocHelpers::SlotData<void(double)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 6 },
        }}),
        // Slot 'saveData'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveDataAs'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveDataAsCSV'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openData'
        QtMocHelpers::SlotData<void(QString)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Slot 'openData'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'clearData'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changeSerialOptions'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changeDataWinMarkToDisplayRecord'
        QtMocHelpers::SlotData<void(const int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'changeDataWinMark'
        QtMocHelpers::SlotData<void(const int &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 17 },
        }}),
        // Slot 'changeDataWinSize'
        QtMocHelpers::SlotData<void(int)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Slot 'changeDVSliderUp'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changeDVSliderDown'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changeDVSliderMin'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changeDVSliderMax'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changeDataWinMarkMicroLeft'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changeDataWinMarkMicroRight'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'writeSettings'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'replayData'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AppEngine, qt_meta_tag_ZN9AppEngineE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AppEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9AppEngineE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9AppEngineE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9AppEngineE_t>.metaTypes,
    nullptr
} };

void AppEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AppEngine *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showStatusMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->showStatusBarSampleCount((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->newDfBoostTransferFunction((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setReplaySpeedUpFactor((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->saveData(); break;
        case 5: _t->saveDataAs(); break;
        case 6: _t->saveDataAsCSV(); break;
        case 7: _t->openData((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->openData(); break;
        case 9: _t->clearData(); break;
        case 10: _t->changeSerialOptions(); break;
        case 11: _t->changeDataWinMarkToDisplayRecord((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->changeDataWinMark((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->changeDataWinSize((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->changeDVSliderUp(); break;
        case 15: _t->changeDVSliderDown(); break;
        case 16: _t->changeDVSliderMin(); break;
        case 17: _t->changeDVSliderMax(); break;
        case 18: _t->changeDataWinMarkMicroLeft(); break;
        case 19: _t->changeDataWinMarkMicroRight(); break;
        case 20: _t->writeSettings(); break;
        case 21: _t->replayData(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AppEngine::*)(QString )>(_a, &AppEngine::showStatusMessage, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppEngine::*)(QString )>(_a, &AppEngine::showStatusBarSampleCount, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppEngine::*)(int )>(_a, &AppEngine::newDfBoostTransferFunction, 2))
            return;
    }
}

const QMetaObject *AppEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9AppEngineE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AppEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void AppEngine::showStatusMessage(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void AppEngine::showStatusBarSampleCount(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void AppEngine::newDfBoostTransferFunction(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
