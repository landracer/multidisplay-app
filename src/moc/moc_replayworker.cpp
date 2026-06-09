/****************************************************************************
** Meta object code from reading C++ file 'replayworker.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../thread/replayworker.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'replayworker.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12ReplayWorkerE_t {};
} // unnamed namespace

template <> constexpr inline auto ReplayWorker::qt_create_metaobjectdata<qt_meta_tag_ZN12ReplayWorkerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ReplayWorker",
        "visualizeDataRecord",
        "",
        "MdDataRecord*",
        "clearPlots",
        "showStatusMessage",
        "update",
        "pause",
        "resume",
        "stop"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'visualizeDataRecord'
        QtMocHelpers::SignalData<void(MdDataRecord *, bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Bool, 2 },
        }}),
        // Signal 'clearPlots'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showStatusMessage'
        QtMocHelpers::SignalData<void(QString)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pause'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resume'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'stop'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ReplayWorker, qt_meta_tag_ZN12ReplayWorkerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ReplayWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<WorkerJob::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ReplayWorkerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ReplayWorkerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12ReplayWorkerE_t>.metaTypes,
    nullptr
} };

void ReplayWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ReplayWorker *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->visualizeDataRecord((*reinterpret_cast<std::add_pointer_t<MdDataRecord*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->clearPlots(); break;
        case 2: _t->showStatusMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->update(); break;
        case 4: _t->pause(); break;
        case 5: _t->resume(); break;
        case 6: _t->stop(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ReplayWorker::*)(MdDataRecord * , bool )>(_a, &ReplayWorker::visualizeDataRecord, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ReplayWorker::*)()>(_a, &ReplayWorker::clearPlots, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ReplayWorker::*)(QString )>(_a, &ReplayWorker::showStatusMessage, 2))
            return;
    }
}

const QMetaObject *ReplayWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReplayWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ReplayWorkerE_t>.strings))
        return static_cast<void*>(this);
    return WorkerJob::qt_metacast(_clname);
}

int ReplayWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WorkerJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ReplayWorker::visualizeDataRecord(MdDataRecord * _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void ReplayWorker::clearPlots()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ReplayWorker::showStatusMessage(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
