/****************************************************************************
** Meta object code from reading C++ file 'MdData.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MdData.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MdData.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6MdDataE_t {};
} // unnamed namespace

template <> constexpr inline auto MdData::qt_create_metaobjectdata<qt_meta_tag_ZN6MdDataE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MdData",
        "showStatusMessage",
        "",
        "rtNewDataRecord",
        "MdDataRecord*",
        "nr",
        "showRecordInVis1",
        "record",
        "changeDataWinMarkToDisplayRecord",
        "element",
        "maxMark",
        "changeDataWinMarkMicroRelative",
        "quotient",
        "left",
        "changeDataWinMark",
        "nm",
        "changeDataWinSize",
        "ns",
        "toggleZoomMode",
        "showCfgVis1",
        "showCfgDataTable",
        "acceptCfgDataTable",
        "clearPlots",
        "visualizeDataRecord",
        "doReplot",
        "helperGetUniqueRows",
        "QList<int>",
        "QItemSelectionModel*",
        "select",
        "tableDataView_customContextMenu",
        "QPoint",
        "showDataListIdx"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showStatusMessage'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'rtNewDataRecord'
        QtMocHelpers::SignalData<void(MdDataRecord *)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Signal 'showRecordInVis1'
        QtMocHelpers::SignalData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'changeDataWinMarkToDisplayRecord'
        QtMocHelpers::SlotData<int(const int &, const int &)>(8, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::Int, 9 }, { QMetaType::Int, 10 },
        }}),
        // Slot 'changeDataWinMarkMicroRelative'
        QtMocHelpers::SlotData<void(const int &, const bool &, const int &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { QMetaType::Bool, 13 }, { QMetaType::Int, 10 },
        }}),
        // Slot 'changeDataWinMark'
        QtMocHelpers::SlotData<void(const int &, const int &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 }, { QMetaType::Int, 10 },
        }}),
        // Slot 'changeDataWinMark'
        QtMocHelpers::SlotData<void(const int &)>(14, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'changeDataWinSize'
        QtMocHelpers::SlotData<void(const int &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 17 },
        }}),
        // Slot 'toggleZoomMode'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showCfgVis1'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showCfgDataTable'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'acceptCfgDataTable'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clearPlots'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'visualizeDataRecord'
        QtMocHelpers::SlotData<void(MdDataRecord *, bool)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { QMetaType::Bool, 24 },
        }}),
        // Slot 'visualizeDataRecord'
        QtMocHelpers::SlotData<void(MdDataRecord *)>(23, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'helperGetUniqueRows'
        QtMocHelpers::SlotData<QList<int>(QItemSelectionModel *)>(25, 2, QMC::AccessPublic, 0x80000000 | 26, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Slot 'tableDataView_customContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 30, 2 },
        }}),
        // Slot 'showDataListIdx'
        QtMocHelpers::SlotData<void(int)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MdData, qt_meta_tag_ZN6MdDataE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MdData::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6MdDataE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6MdDataE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6MdDataE_t>.metaTypes,
    nullptr
} };

void MdData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MdData *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showStatusMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->rtNewDataRecord((*reinterpret_cast<std::add_pointer_t<MdDataRecord*>>(_a[1]))); break;
        case 2: _t->showRecordInVis1((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: { int _r = _t->changeDataWinMarkToDisplayRecord((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->changeDataWinMarkMicroRelative((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 5: _t->changeDataWinMark((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->changeDataWinMark((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->changeDataWinSize((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->toggleZoomMode(); break;
        case 9: _t->showCfgVis1(); break;
        case 10: _t->showCfgDataTable(); break;
        case 11: _t->acceptCfgDataTable(); break;
        case 12: _t->clearPlots(); break;
        case 13: _t->visualizeDataRecord((*reinterpret_cast<std::add_pointer_t<MdDataRecord*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 14: _t->visualizeDataRecord((*reinterpret_cast<std::add_pointer_t<MdDataRecord*>>(_a[1]))); break;
        case 15: { QList<int> _r = _t->helperGetUniqueRows((*reinterpret_cast<std::add_pointer_t<QItemSelectionModel*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->tableDataView_customContextMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 17: _t->showDataListIdx((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelectionModel* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MdData::*)(QString )>(_a, &MdData::showStatusMessage, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdData::*)(MdDataRecord * )>(_a, &MdData::rtNewDataRecord, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MdData::*)(int )>(_a, &MdData::showRecordInVis1, 2))
            return;
    }
}

const QMetaObject *MdData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MdData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6MdDataE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int MdData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void MdData::showStatusMessage(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void MdData::rtNewDataRecord(MdDataRecord * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void MdData::showRecordInVis1(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
