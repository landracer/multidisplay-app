/****************************************************************************
** Meta object code from reading C++ file 'PowerPlot.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PowerPlot.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PowerPlot.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9PowerPlotE_t {};
} // unnamed namespace

template <> constexpr inline auto PowerPlot::qt_create_metaobjectdata<qt_meta_tag_ZN9PowerPlotE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PowerPlot",
        "resultString",
        "",
        "dinTemp",
        "setDinTemp",
        "t",
        "setDinAirPressure",
        "p",
        "dinAirPressure",
        "getCarMass",
        "setCarMass",
        "nm",
        "getSmoothAmount",
        "setSmoothAmount",
        "s",
        "getDriveTrainLoss",
        "setDriveTrainLoss",
        "l",
        "reCalculate",
        "useGpsSpeed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'resultString'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'dinTemp'
        QtMocHelpers::SlotData<qreal()>(3, 2, QMC::AccessPublic, QMetaType::QReal),
        // Slot 'setDinTemp'
        QtMocHelpers::SlotData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'setDinAirPressure'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'dinAirPressure'
        QtMocHelpers::SlotData<qreal()>(8, 2, QMC::AccessPublic, QMetaType::QReal),
        // Slot 'setDinTemp'
        QtMocHelpers::SlotData<void(qreal)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 5 },
        }}),
        // Slot 'setDinAirPressure'
        QtMocHelpers::SlotData<void(qreal)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 5 },
        }}),
        // Slot 'getCarMass'
        QtMocHelpers::SlotData<qreal()>(9, 2, QMC::AccessPublic, QMetaType::QReal),
        // Slot 'setCarMass'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
        // Slot 'getSmoothAmount'
        QtMocHelpers::SlotData<int()>(12, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'setSmoothAmount'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
        // Slot 'getDriveTrainLoss'
        QtMocHelpers::SlotData<double()>(15, 2, QMC::AccessPublic, QMetaType::Double),
        // Slot 'setDriveTrainLoss'
        QtMocHelpers::SlotData<void(double)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 17 },
        }}),
        // Slot 'reCalculate'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'reCalculate'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PowerPlot, qt_meta_tag_ZN9PowerPlotE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PowerPlot::staticMetaObject = { {
    QMetaObject::SuperData::link<MdPlot::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9PowerPlotE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9PowerPlotE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9PowerPlotE_t>.metaTypes,
    nullptr
} };

void PowerPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PowerPlot *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->resultString((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: { qreal _r = _t->dinTemp();
            if (_a[0]) *reinterpret_cast<qreal*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setDinTemp((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setDinAirPressure((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: { qreal _r = _t->dinAirPressure();
            if (_a[0]) *reinterpret_cast<qreal*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setDinTemp((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 6: _t->setDinAirPressure((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 7: { qreal _r = _t->getCarMass();
            if (_a[0]) *reinterpret_cast<qreal*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setCarMass((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: { int _r = _t->getSmoothAmount();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->setSmoothAmount((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: { double _r = _t->getDriveTrainLoss();
            if (_a[0]) *reinterpret_cast<double*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->setDriveTrainLoss((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->reCalculate((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->reCalculate(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PowerPlot::*)(QString )>(_a, &PowerPlot::resultString, 0))
            return;
    }
}

const QMetaObject *PowerPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PowerPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9PowerPlotE_t>.strings))
        return static_cast<void*>(this);
    return MdPlot::qt_metacast(_clname);
}

int PowerPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MdPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void PowerPlot::resultString(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
