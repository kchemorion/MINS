/****************************************************************************
** Meta object code from reading C++ file 'qSlicerBaseQTAppPythonQtDecorators.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qSlicerBaseQTAppPythonQtDecorators.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerBaseQTAppPythonQtDecorators.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerBaseQTAppPythonQtDecorators_t {
    QByteArrayData data[5];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerBaseQTAppPythonQtDecorators_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerBaseQTAppPythonQtDecorators_t qt_meta_stringdata_qSlicerBaseQTAppPythonQtDecorators = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qSlicerBaseQTAppPythonQtDecor..."
QT_MOC_LITERAL(1, 35, 57), // "static_qSlicerApplicationHelp..."
QT_MOC_LITERAL(2, 93, 0), // ""
QT_MOC_LITERAL(3, 94, 28), // "qSlicerModuleFactoryManager*"
QT_MOC_LITERAL(4, 123, 20) // "moduleFactoryManager"

    },
    "qSlicerBaseQTAppPythonQtDecorators\0"
    "static_qSlicerApplicationHelper_setupModuleFactoryManager\0"
    "\0qSlicerModuleFactoryManager*\0"
    "moduleFactoryManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerBaseQTAppPythonQtDecorators[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void qSlicerBaseQTAppPythonQtDecorators::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerBaseQTAppPythonQtDecorators *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->static_qSlicerApplicationHelper_setupModuleFactoryManager((*reinterpret_cast< qSlicerModuleFactoryManager*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerModuleFactoryManager* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerBaseQTAppPythonQtDecorators::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerBaseQTAppPythonQtDecorators.data,
    qt_meta_data_qSlicerBaseQTAppPythonQtDecorators,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerBaseQTAppPythonQtDecorators::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerBaseQTAppPythonQtDecorators::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerBaseQTAppPythonQtDecorators.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerBaseQTAppPythonQtDecorators::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
