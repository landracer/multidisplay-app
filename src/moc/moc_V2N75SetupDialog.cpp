/****************************************************************************
** Meta object code from reading C++ file 'V2N75SetupDialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../V2N75SetupDialog.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'V2N75SetupDialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16V2N75SetupDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto V2N75SetupDialog::qt_create_metaobjectdata<qt_meta_tag_ZN16V2N75SetupDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "V2N75SetupDialog",
        "n75reqDutyMap",
        "",
        "gear",
        "mode",
        "serial",
        "n75reqSetpointMap",
        "n75writeDutyMap",
        "QList<quint8>*",
        "data",
        "n75writeSetpointMap",
        "QList<double>*",
        "n75modeChanged",
        "index",
        "n75read",
        "n75readSlow",
        "n75write",
        "n75writeSlow",
        "n75dutyMap",
        "n75SetpointMap",
        "ackReceived",
        "timerUpdateRead",
        "timerUpdateWrite"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'n75reqDutyMap'
        QtMocHelpers::SignalData<void(quint8, quint8, quint8)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 3 }, { QMetaType::UChar, 4 }, { QMetaType::UChar, 5 },
        }}),
        // Signal 'n75reqSetpointMap'
        QtMocHelpers::SignalData<void(quint8, quint8, quint8)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 3 }, { QMetaType::UChar, 4 }, { QMetaType::UChar, 5 },
        }}),
        // Signal 'n75writeDutyMap'
        QtMocHelpers::SignalData<void(quint8, quint8, quint8, QVector<quint8> *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 3 }, { QMetaType::UChar, 4 }, { QMetaType::UChar, 5 }, { 0x80000000 | 8, 9 },
        }}),
        // Signal 'n75writeSetpointMap'
        QtMocHelpers::SignalData<void(quint8, quint8, quint8, QVector<double> *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 3 }, { QMetaType::UChar, 4 }, { QMetaType::UChar, 5 }, { 0x80000000 | 11, 9 },
        }}),
        // Slot 'n75modeChanged'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'n75read'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'n75readSlow'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'n75write'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'n75writeSlow'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'n75dutyMap'
        QtMocHelpers::SlotData<void(quint8, quint8, quint8, QVector<quint8> *)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 3 }, { QMetaType::UChar, 4 }, { QMetaType::UChar, 5 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'n75SetpointMap'
        QtMocHelpers::SlotData<void(quint8, quint8, quint8, QVector<double> *)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 3 }, { QMetaType::UChar, 4 }, { QMetaType::UChar, 5 }, { 0x80000000 | 11, 9 },
        }}),
        // Slot 'ackReceived'
        QtMocHelpers::SlotData<void(quint8)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 5 },
        }}),
        // Slot 'timerUpdateRead'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'timerUpdateWrite'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<V2N75SetupDialog, qt_meta_tag_ZN16V2N75SetupDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject V2N75SetupDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16V2N75SetupDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16V2N75SetupDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16V2N75SetupDialogE_t>.metaTypes,
    nullptr
} };

void V2N75SetupDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<V2N75SetupDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->n75reqDutyMap((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[3]))); break;
        case 1: _t->n75reqSetpointMap((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[3]))); break;
        case 2: _t->n75writeDutyMap((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QList<quint8>*>>(_a[4]))); break;
        case 3: _t->n75writeSetpointMap((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QList<double>*>>(_a[4]))); break;
        case 4: _t->n75modeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->n75read(); break;
        case 6: _t->n75readSlow(); break;
        case 7: _t->n75write(); break;
        case 8: _t->n75writeSlow(); break;
        case 9: _t->n75dutyMap((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QList<quint8>*>>(_a[4]))); break;
        case 10: _t->n75SetpointMap((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QList<double>*>>(_a[4]))); break;
        case 11: _t->ackReceived((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1]))); break;
        case 12: _t->timerUpdateRead(); break;
        case 13: _t->timerUpdateWrite(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (V2N75SetupDialog::*)(quint8 , quint8 , quint8 )>(_a, &V2N75SetupDialog::n75reqDutyMap, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (V2N75SetupDialog::*)(quint8 , quint8 , quint8 )>(_a, &V2N75SetupDialog::n75reqSetpointMap, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (V2N75SetupDialog::*)(quint8 , quint8 , quint8 , QVector<quint8> * )>(_a, &V2N75SetupDialog::n75writeDutyMap, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (V2N75SetupDialog::*)(quint8 , quint8 , quint8 , QVector<double> * )>(_a, &V2N75SetupDialog::n75writeSetpointMap, 3))
            return;
    }
}

const QMetaObject *V2N75SetupDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *V2N75SetupDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16V2N75SetupDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int V2N75SetupDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void V2N75SetupDialog::n75reqDutyMap(quint8 _t1, quint8 _t2, quint8 _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void V2N75SetupDialog::n75reqSetpointMap(quint8 _t1, quint8 _t2, quint8 _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}

// SIGNAL 2
void V2N75SetupDialog::n75writeDutyMap(quint8 _t1, quint8 _t2, quint8 _t3, QVector<quint8> * _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 3
void V2N75SetupDialog::n75writeSetpointMap(quint8 _t1, quint8 _t2, quint8 _t3, QVector<double> * _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3, _t4);
}
QT_WARNING_POP
