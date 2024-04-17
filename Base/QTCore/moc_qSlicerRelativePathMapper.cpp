/****************************************************************************
** Meta object code from reading C++ file 'qSlicerRelativePathMapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTCore/qSlicerRelativePathMapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerRelativePathMapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerRelativePathMapper_t {
    QByteArrayData data[18];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerRelativePathMapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerRelativePathMapper_t qt_meta_stringdata_qSlicerRelativePathMapper = {
    {
QT_MOC_LITERAL(0, 0, 25), // "qSlicerRelativePathMapper"
QT_MOC_LITERAL(1, 26, 11), // "pathChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "value"
QT_MOC_LITERAL(4, 45, 12), // "pathsChanged"
QT_MOC_LITERAL(5, 58, 19), // "relativePathChanged"
QT_MOC_LITERAL(6, 78, 20), // "relativePathsChanged"
QT_MOC_LITERAL(7, 99, 7), // "setPath"
QT_MOC_LITERAL(8, 107, 4), // "path"
QT_MOC_LITERAL(9, 112, 8), // "setPaths"
QT_MOC_LITERAL(10, 121, 15), // "setRelativePath"
QT_MOC_LITERAL(11, 137, 16), // "setRelativePaths"
QT_MOC_LITERAL(12, 154, 5), // "paths"
QT_MOC_LITERAL(13, 160, 15), // "emitPathChanged"
QT_MOC_LITERAL(14, 176, 16), // "emitPathsChanged"
QT_MOC_LITERAL(15, 193, 12), // "propertyName"
QT_MOC_LITERAL(16, 206, 12), // "relativePath"
QT_MOC_LITERAL(17, 219, 13) // "relativePaths"

    },
    "qSlicerRelativePathMapper\0pathChanged\0"
    "\0value\0pathsChanged\0relativePathChanged\0"
    "relativePathsChanged\0setPath\0path\0"
    "setPaths\0setRelativePath\0setRelativePaths\0"
    "paths\0emitPathChanged\0emitPathsChanged\0"
    "propertyName\0relativePath\0relativePaths"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerRelativePathMapper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       5,    1,   70,    2, 0x06 /* Public */,
       6,    1,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   76,    2, 0x0a /* Public */,
       9,    1,   79,    2, 0x0a /* Public */,
      10,    1,   82,    2, 0x0a /* Public */,
      11,    1,   85,    2, 0x0a /* Public */,
      13,    0,   88,    2, 0x09 /* Protected */,
      14,    0,   89,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QStringList,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QStringList,   12,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::QByteArray, 0x00095001,
       8, QMetaType::QString, 0x00495103,
      12, QMetaType::QStringList, 0x00495103,
      16, QMetaType::QString, 0x00485103,
      17, QMetaType::QStringList, 0x00485103,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,

       0        // eod
};

void qSlicerRelativePathMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerRelativePathMapper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->pathsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->relativePathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->relativePathsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->setPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setPaths((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 6: _t->setRelativePath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setRelativePaths((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 8: _t->emitPathChanged(); break;
        case 9: _t->emitPathsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qSlicerRelativePathMapper::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerRelativePathMapper::pathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qSlicerRelativePathMapper::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerRelativePathMapper::pathsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qSlicerRelativePathMapper::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerRelativePathMapper::relativePathChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (qSlicerRelativePathMapper::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerRelativePathMapper::relativePathsChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerRelativePathMapper *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->propertyName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->path(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->paths(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->relativePath(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->relativePaths(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerRelativePathMapper *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setPath(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPaths(*reinterpret_cast< QStringList*>(_v)); break;
        case 3: _t->setRelativePath(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setRelativePaths(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerRelativePathMapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerRelativePathMapper.data,
    qt_meta_data_qSlicerRelativePathMapper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerRelativePathMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerRelativePathMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerRelativePathMapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerRelativePathMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qSlicerRelativePathMapper::pathChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qSlicerRelativePathMapper::pathsChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qSlicerRelativePathMapper::relativePathChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qSlicerRelativePathMapper::relativePathsChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
