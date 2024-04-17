/****************************************************************************
** Meta object code from reading C++ file 'qSlicerCorePythonManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTCore/qSlicerCorePythonManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerCorePythonManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerCorePythonManager_t {
    QByteArrayData data[12];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerCorePythonManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerCorePythonManager_t qt_meta_stringdata_qSlicerCorePythonManager = {
    {
QT_MOC_LITERAL(0, 0, 24), // "qSlicerCorePythonManager"
QT_MOC_LITERAL(1, 25, 24), // "addVTKObjectToPythonMain"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 4), // "name"
QT_MOC_LITERAL(4, 56, 10), // "vtkObject*"
QT_MOC_LITERAL(5, 67, 6), // "object"
QT_MOC_LITERAL(6, 74, 16), // "appendPythonPath"
QT_MOC_LITERAL(7, 91, 4), // "path"
QT_MOC_LITERAL(8, 96, 17), // "appendPythonPaths"
QT_MOC_LITERAL(9, 114, 5), // "paths"
QT_MOC_LITERAL(10, 120, 21), // "toPythonStringLiteral"
QT_MOC_LITERAL(11, 142, 11) // "pythonPaths"

    },
    "qSlicerCorePythonManager\0"
    "addVTKObjectToPythonMain\0\0name\0"
    "vtkObject*\0object\0appendPythonPath\0"
    "path\0appendPythonPaths\0paths\0"
    "toPythonStringLiteral\0pythonPaths"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerCorePythonManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x02 /* Public */,
       6,    1,   39,    2, 0x02 /* Public */,
       8,    1,   42,    2, 0x02 /* Public */,
      10,    1,   45,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QStringList,    9,
    QMetaType::QString, QMetaType::QString,    7,

 // properties: name, type, flags
      11, QMetaType::QStringList, 0x00095001,

       0        // eod
};

void qSlicerCorePythonManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerCorePythonManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addVTKObjectToPythonMain((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        case 1: _t->appendPythonPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->appendPythonPaths((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: { QString _r = _t->toPythonStringLiteral((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerCorePythonManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->pythonPaths(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerCorePythonManager::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkAbstractPythonManager::staticMetaObject>(),
    qt_meta_stringdata_qSlicerCorePythonManager.data,
    qt_meta_data_qSlicerCorePythonManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerCorePythonManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerCorePythonManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerCorePythonManager.stringdata0))
        return static_cast<void*>(this);
    return ctkAbstractPythonManager::qt_metacast(_clname);
}

int qSlicerCorePythonManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkAbstractPythonManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
