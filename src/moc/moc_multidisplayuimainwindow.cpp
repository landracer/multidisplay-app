/****************************************************************************
** Meta object code from reading C++ file 'multidisplayuimainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../multidisplayuimainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multidisplayuimainwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN24MultidisplayUIMainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MultidisplayUIMainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN24MultidisplayUIMainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MultidisplayUIMainWindow",
        "writeSettings",
        "",
        "showStatusMessage",
        "msg",
        "showStatusBarSampleCount",
        "enableReplay",
        "disableReplay",
        "newDfBoostTransferFunction",
        "name",
        "dfMapSelected100",
        "b",
        "dfMapSelected200",
        "dfMapSelected250",
        "dfMapSelected300",
        "dfMapSelected400"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'writeSettings'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showStatusMessage'
        QtMocHelpers::SlotData<void(QString)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Slot 'showStatusBarSampleCount'
        QtMocHelpers::SlotData<void(QString)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Slot 'enableReplay'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'disableReplay'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'newDfBoostTransferFunction'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'dfMapSelected100'
        QtMocHelpers::SlotData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Slot 'dfMapSelected200'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Slot 'dfMapSelected250'
        QtMocHelpers::SlotData<void(bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Slot 'dfMapSelected300'
        QtMocHelpers::SlotData<void(bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Slot 'dfMapSelected400'
        QtMocHelpers::SlotData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MultidisplayUIMainWindow, qt_meta_tag_ZN24MultidisplayUIMainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MultidisplayUIMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24MultidisplayUIMainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24MultidisplayUIMainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN24MultidisplayUIMainWindowE_t>.metaTypes,
    nullptr
} };

void MultidisplayUIMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MultidisplayUIMainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->writeSettings(); break;
        case 1: _t->showStatusMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->showStatusBarSampleCount((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->enableReplay(); break;
        case 4: _t->disableReplay(); break;
        case 5: _t->newDfBoostTransferFunction((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->dfMapSelected100((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->dfMapSelected200((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->dfMapSelected250((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->dfMapSelected300((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->dfMapSelected400((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MultidisplayUIMainWindow::*)()>(_a, &MultidisplayUIMainWindow::writeSettings, 0))
            return;
    }
}

const QMetaObject *MultidisplayUIMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultidisplayUIMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24MultidisplayUIMainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MultidisplayUIMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void MultidisplayUIMainWindow::writeSettings()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
