/****************************************************************************
** Meta object code from reading C++ file 'MdGpsSerial.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MdGpsSerial.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MdGpsSerial.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11MdGpsSerialE_t {};
} // unnamed namespace

template <> constexpr inline auto MdGpsSerial::qt_create_metaobjectdata<qt_meta_tag_ZN11MdGpsSerialE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MdGpsSerial",
        "bytesRead",
        "",
        "stringRead",
        "lineRead",
        "showStatusMessage",
        "portOpened",
        "portClosed",
        "closePort",
        "openPort",
        "incomingData",
        "bytes"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'bytesRead'
        QtMocHelpers::SignalData<void(QByteArray)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 2 },
        }}),
        // Signal 'stringRead'
        QtMocHelpers::SignalData<void(QString)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'lineRead'
        QtMocHelpers::SignalData<void(QString)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'showStatusMessage'
        QtMocHelpers::SignalData<void(QString)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'portOpened'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'portClosed'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closePort'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openPort'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'incomingData'
        QtMocHelpers::SlotData<void(const QByteArray &)>(10, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QByteArray, 11 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MdGpsSerial, qt_meta_tag_ZN11MdGpsSerialE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MdGpsSerial::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11MdGpsSerialE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11MdGpsSerialE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11MdGpsSerialE_t>.metaTypes,
    nullptr
} };

void MdGpsSerial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MdGpsSerial *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->bytesRead((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->stringRead((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->lineRead((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->showStatusMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->portOpened(); break;
        case 5: _t->portClosed(); break;
        case 6: _t->closePort(); break;
        case 7: _t->openPort(); break;
        case 8: _t->incomingData((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MdGpsSerial::*)(QByteArray )>(_a, &MdGpsSerial::bytesRead, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdGpsSerial::*)(QString )>(_a, &MdGpsSerial::stringRead, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdGpsSerial::*)(QString )>(_a, &MdGpsSerial::lineRead, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdGpsSerial::*)(QString )>(_a, &MdGpsSerial::showStatusMessage, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdGpsSerial::*)()>(_a, &MdGpsSerial::portOpened, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdGpsSerial::*)()>(_a, &MdGpsSerial::portClosed, 5))
            return;
    }
}

const QMetaObject *MdGpsSerial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MdGpsSerial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11MdGpsSerialE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MdGpsSerial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MdGpsSerial::bytesRead(QByteArray _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void MdGpsSerial::stringRead(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void MdGpsSerial::lineRead(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void MdGpsSerial::showStatusMessage(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void MdGpsSerial::portOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MdGpsSerial::portClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
