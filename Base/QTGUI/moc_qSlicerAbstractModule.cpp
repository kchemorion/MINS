/****************************************************************************
** Meta object code from reading C++ file 'qSlicerAbstractModule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerAbstractModule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerAbstractModule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerAbstractModule_t {
    QByteArrayData data[6];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerAbstractModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerAbstractModule_t qt_meta_stringdata_qSlicerAbstractModule = {
    {
QT_MOC_LITERAL(0, 0, 21), // "qSlicerAbstractModule"
QT_MOC_LITERAL(1, 22, 6), // "action"
QT_MOC_LITERAL(2, 29, 8), // "QAction*"
QT_MOC_LITERAL(3, 38, 0), // ""
QT_MOC_LITERAL(4, 39, 4), // "icon"
QT_MOC_LITERAL(5, 44, 4) // "logo"

    },
    "qSlicerAbstractModule\0action\0QAction*\0"
    "\0icon\0logo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerAbstractModule[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2,

 // properties: name, type, flags
       4, QMetaType::QIcon, 0x00095001,
       5, QMetaType::QImage, 0x00095001,

       0        // eod
};

void qSlicerAbstractModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerAbstractModule *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QAction* _r = _t->action();
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerAbstractModule *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIcon*>(_v) = _t->icon(); break;
        case 1: *reinterpret_cast< QImage*>(_v) = _t->logo(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerAbstractModule::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerAbstractCoreModule::staticMetaObject>(),
    qt_meta_stringdata_qSlicerAbstractModule.data,
    qt_meta_data_qSlicerAbstractModule,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerAbstractModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerAbstractModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerAbstractModule.stringdata0))
        return static_cast<void*>(this);
    return qSlicerAbstractCoreModule::qt_metacast(_clname);
}

int qSlicerAbstractModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerAbstractCoreModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
