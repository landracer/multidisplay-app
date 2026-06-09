/****************************************************************************
** Meta object code from reading C++ file 'MdAbstractCom.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../com/MdAbstractCom.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MdAbstractCom.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13MdAbstractComE_t {};
} // unnamed namespace

template <> constexpr inline auto MdAbstractCom::qt_create_metaobjectdata<qt_meta_tag_ZN13MdAbstractComE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MdAbstractCom",
        "showStatusMessage",
        "",
        "showStatusBarSampleCount",
        "portOpened",
        "portClosed",
        "bytesRead",
        "togglePort",
        "closePort",
        "openPort",
        "setupPort",
        "sport",
        "speed",
        "changePortSettings",
        "transmitMsg",
        "s",
        "ba",
        "onReadyRead"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showStatusMessage'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'showStatusBarSampleCount'
        QtMocHelpers::SignalData<void(const QString &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'portOpened'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'portClosed'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'bytesRead'
        QtMocHelpers::SignalData<void(const QByteArray &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 2 },
        }}),
        // Slot 'togglePort'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closePort'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openPort'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setupPort'
        QtMocHelpers::SlotData<bool(QString, QString)>(10, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 11 }, { QMetaType::QString, 12 },
        }}),
        // Slot 'setupPort'
        QtMocHelpers::SlotData<bool(QString)>(10, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 11 },
        }}),
        // Slot 'setupPort'
        QtMocHelpers::SlotData<bool()>(10, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool),
        // Slot 'changePortSettings'
        QtMocHelpers::SlotData<bool(QString, QString)>(13, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 11 }, { QMetaType::QString, 12 },
        }}),
        // Slot 'changePortSettings'
        QtMocHelpers::SlotData<bool(QString)>(13, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 11 },
        }}),
        // Slot 'changePortSettings'
        QtMocHelpers::SlotData<bool()>(13, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool),
        // Slot 'transmitMsg'
        QtMocHelpers::SlotData<void(const QString &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 15 },
        }}),
        // Slot 'transmitMsg'
        QtMocHelpers::SlotData<void(const QByteArray &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 16 },
        }}),
        // Slot 'onReadyRead'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MdAbstractCom, qt_meta_tag_ZN13MdAbstractComE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MdAbstractCom::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13MdAbstractComE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13MdAbstractComE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13MdAbstractComE_t>.metaTypes,
    nullptr
} };

void MdAbstractCom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MdAbstractCom *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showStatusMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->showStatusBarSampleCount((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->portOpened(); break;
        case 3: _t->portClosed(); break;
        case 4: _t->bytesRead((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 5: _t->togglePort(); break;
        case 6: _t->closePort(); break;
        case 7: _t->openPort(); break;
        case 8: { bool _r = _t->setupPort((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->setupPort((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->setupPort();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->changePortSettings((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->changePortSettings((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->changePortSettings();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->transmitMsg((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->transmitMsg((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 16: _t->onReadyRead(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MdAbstractCom::*)(const QString & )>(_a, &MdAbstractCom::showStatusMessage, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdAbstractCom::*)(const QString & )>(_a, &MdAbstractCom::showStatusBarSampleCount, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdAbstractCom::*)()>(_a, &MdAbstractCom::portOpened, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdAbstractCom::*)()>(_a, &MdAbstractCom::portClosed, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdAbstractCom::*)(const QByteArray & )>(_a, &MdAbstractCom::bytesRead, 4))
            return;
    }
}

const QMetaObject *MdAbstractCom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MdAbstractCom::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13MdAbstractComE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MdAbstractCom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MdAbstractCom::showStatusMessage(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void MdAbstractCom::showStatusBarSampleCount(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void MdAbstractCom::portOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MdAbstractCom::portClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MdAbstractCom::bytesRead(const QByteArray & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
