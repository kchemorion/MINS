/****************************************************************************
** Meta object code from reading C++ file 'osb_qSlicerBaseQTCore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "osb_qSlicerBaseQTCore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osb_qSlicerBaseQTCore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythonQtWrapper_qSlicerAbstractModuleFactoryManager_t {
    QByteArrayData data[7];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerAbstractModuleFactoryManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerAbstractModuleFactoryManager_t qt_meta_stringdata_PythonQtWrapper_qSlicerAbstractModuleFactoryManager = {
    {
QT_MOC_LITERAL(0, 0, 51), // "PythonQtWrapper_qSlicerAbstra..."
QT_MOC_LITERAL(1, 52, 39), // "new_qSlicerAbstractModuleFact..."
QT_MOC_LITERAL(2, 92, 36), // "qSlicerAbstractModuleFactoryM..."
QT_MOC_LITERAL(3, 129, 0), // ""
QT_MOC_LITERAL(4, 130, 6), // "parent"
QT_MOC_LITERAL(5, 137, 42), // "delete_qSlicerAbstractModuleF..."
QT_MOC_LITERAL(6, 180, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerAbstractModuleFactoryManager\0"
    "new_qSlicerAbstractModuleFactoryManager\0"
    "qSlicerAbstractModuleFactoryManager*\0"
    "\0parent\0delete_qSlicerAbstractModuleFactoryManager\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerAbstractModuleFactoryManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerAbstractModuleFactoryManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerAbstractModuleFactoryManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerAbstractModuleFactoryManager* _r = _t->new_qSlicerAbstractModuleFactoryManager((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerAbstractModuleFactoryManager**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerAbstractModuleFactoryManager* _r = _t->new_qSlicerAbstractModuleFactoryManager();
            if (_a[0]) *reinterpret_cast< qSlicerAbstractModuleFactoryManager**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerAbstractModuleFactoryManager((*reinterpret_cast< qSlicerAbstractModuleFactoryManager*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerAbstractModuleFactoryManager* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerAbstractModuleFactoryManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerAbstractModuleFactoryManager.data,
    qt_meta_data_PythonQtWrapper_qSlicerAbstractModuleFactoryManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerAbstractModuleFactoryManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerAbstractModuleFactoryManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerAbstractModuleFactoryManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerAbstractModuleFactoryManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerCoreIOManager_t {
    QByteArrayData data[7];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerCoreIOManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerCoreIOManager_t qt_meta_stringdata_PythonQtWrapper_qSlicerCoreIOManager = {
    {
QT_MOC_LITERAL(0, 0, 36), // "PythonQtWrapper_qSlicerCoreIO..."
QT_MOC_LITERAL(1, 37, 24), // "new_qSlicerCoreIOManager"
QT_MOC_LITERAL(2, 62, 21), // "qSlicerCoreIOManager*"
QT_MOC_LITERAL(3, 84, 0), // ""
QT_MOC_LITERAL(4, 85, 6), // "parent"
QT_MOC_LITERAL(5, 92, 27), // "delete_qSlicerCoreIOManager"
QT_MOC_LITERAL(6, 120, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerCoreIOManager\0"
    "new_qSlicerCoreIOManager\0qSlicerCoreIOManager*\0"
    "\0parent\0delete_qSlicerCoreIOManager\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerCoreIOManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerCoreIOManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerCoreIOManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerCoreIOManager* _r = _t->new_qSlicerCoreIOManager((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerCoreIOManager**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerCoreIOManager* _r = _t->new_qSlicerCoreIOManager();
            if (_a[0]) *reinterpret_cast< qSlicerCoreIOManager**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerCoreIOManager((*reinterpret_cast< qSlicerCoreIOManager*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerCoreIOManager* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerCoreIOManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerCoreIOManager.data,
    qt_meta_data_PythonQtWrapper_qSlicerCoreIOManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerCoreIOManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerCoreIOManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerCoreIOManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerCoreIOManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFactoryManager_t {
    QByteArrayData data[7];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFactoryManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFactoryManager_t qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFactoryManager = {
    {
QT_MOC_LITERAL(0, 0, 43), // "PythonQtWrapper_qSlicerModule..."
QT_MOC_LITERAL(1, 44, 31), // "new_qSlicerModuleFactoryManager"
QT_MOC_LITERAL(2, 76, 28), // "qSlicerModuleFactoryManager*"
QT_MOC_LITERAL(3, 105, 0), // ""
QT_MOC_LITERAL(4, 106, 6), // "parent"
QT_MOC_LITERAL(5, 113, 34), // "delete_qSlicerModuleFactoryMa..."
QT_MOC_LITERAL(6, 148, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerModuleFactoryManager\0"
    "new_qSlicerModuleFactoryManager\0"
    "qSlicerModuleFactoryManager*\0\0parent\0"
    "delete_qSlicerModuleFactoryManager\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerModuleFactoryManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerModuleFactoryManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerModuleFactoryManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerModuleFactoryManager* _r = _t->new_qSlicerModuleFactoryManager((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerModuleFactoryManager**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerModuleFactoryManager* _r = _t->new_qSlicerModuleFactoryManager();
            if (_a[0]) *reinterpret_cast< qSlicerModuleFactoryManager**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerModuleFactoryManager((*reinterpret_cast< qSlicerModuleFactoryManager*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerModuleFactoryManager* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerModuleFactoryManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFactoryManager.data,
    qt_meta_data_PythonQtWrapper_qSlicerModuleFactoryManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerModuleFactoryManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerModuleFactoryManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFactoryManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerModuleFactoryManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerModuleManager_t {
    QByteArrayData data[7];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerModuleManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerModuleManager_t qt_meta_stringdata_PythonQtWrapper_qSlicerModuleManager = {
    {
QT_MOC_LITERAL(0, 0, 36), // "PythonQtWrapper_qSlicerModule..."
QT_MOC_LITERAL(1, 37, 24), // "new_qSlicerModuleManager"
QT_MOC_LITERAL(2, 62, 21), // "qSlicerModuleManager*"
QT_MOC_LITERAL(3, 84, 0), // ""
QT_MOC_LITERAL(4, 85, 6), // "parent"
QT_MOC_LITERAL(5, 92, 27), // "delete_qSlicerModuleManager"
QT_MOC_LITERAL(6, 120, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerModuleManager\0"
    "new_qSlicerModuleManager\0qSlicerModuleManager*\0"
    "\0parent\0delete_qSlicerModuleManager\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerModuleManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerModuleManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerModuleManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerModuleManager* _r = _t->new_qSlicerModuleManager((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerModuleManager**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerModuleManager* _r = _t->new_qSlicerModuleManager();
            if (_a[0]) *reinterpret_cast< qSlicerModuleManager**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerModuleManager((*reinterpret_cast< qSlicerModuleManager*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerModuleManager* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerModuleManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerModuleManager.data,
    qt_meta_data_PythonQtWrapper_qSlicerModuleManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerModuleManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerModuleManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerModuleManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerModuleManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSceneBundleReader_t {
    QByteArrayData data[7];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSceneBundleReader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSceneBundleReader_t qt_meta_stringdata_PythonQtWrapper_qSlicerSceneBundleReader = {
    {
QT_MOC_LITERAL(0, 0, 40), // "PythonQtWrapper_qSlicerSceneB..."
QT_MOC_LITERAL(1, 41, 28), // "new_qSlicerSceneBundleReader"
QT_MOC_LITERAL(2, 70, 25), // "qSlicerSceneBundleReader*"
QT_MOC_LITERAL(3, 96, 0), // ""
QT_MOC_LITERAL(4, 97, 6), // "parent"
QT_MOC_LITERAL(5, 104, 31), // "delete_qSlicerSceneBundleReader"
QT_MOC_LITERAL(6, 136, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSceneBundleReader\0"
    "new_qSlicerSceneBundleReader\0"
    "qSlicerSceneBundleReader*\0\0parent\0"
    "delete_qSlicerSceneBundleReader\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSceneBundleReader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerSceneBundleReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSceneBundleReader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSceneBundleReader* _r = _t->new_qSlicerSceneBundleReader((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSceneBundleReader**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSceneBundleReader* _r = _t->new_qSlicerSceneBundleReader();
            if (_a[0]) *reinterpret_cast< qSlicerSceneBundleReader**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSceneBundleReader((*reinterpret_cast< qSlicerSceneBundleReader*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSceneBundleReader* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSceneBundleReader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSceneBundleReader.data,
    qt_meta_data_PythonQtWrapper_qSlicerSceneBundleReader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSceneBundleReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSceneBundleReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSceneBundleReader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSceneBundleReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileReader_t {
    QByteArrayData data[7];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileReader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileReader_t qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileReader = {
    {
QT_MOC_LITERAL(0, 0, 41), // "PythonQtWrapper_qSlicerScript..."
QT_MOC_LITERAL(1, 42, 29), // "new_qSlicerScriptedFileReader"
QT_MOC_LITERAL(2, 72, 26), // "qSlicerScriptedFileReader*"
QT_MOC_LITERAL(3, 99, 0), // ""
QT_MOC_LITERAL(4, 100, 6), // "parent"
QT_MOC_LITERAL(5, 107, 32), // "delete_qSlicerScriptedFileReader"
QT_MOC_LITERAL(6, 140, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerScriptedFileReader\0"
    "new_qSlicerScriptedFileReader\0"
    "qSlicerScriptedFileReader*\0\0parent\0"
    "delete_qSlicerScriptedFileReader\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerScriptedFileReader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerScriptedFileReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerScriptedFileReader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerScriptedFileReader* _r = _t->new_qSlicerScriptedFileReader((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerScriptedFileReader**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerScriptedFileReader* _r = _t->new_qSlicerScriptedFileReader();
            if (_a[0]) *reinterpret_cast< qSlicerScriptedFileReader**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerScriptedFileReader((*reinterpret_cast< qSlicerScriptedFileReader*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerScriptedFileReader* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerScriptedFileReader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileReader.data,
    qt_meta_data_PythonQtWrapper_qSlicerScriptedFileReader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerScriptedFileReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerScriptedFileReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileReader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerScriptedFileReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileWriter_t {
    QByteArrayData data[7];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileWriter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileWriter_t qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileWriter = {
    {
QT_MOC_LITERAL(0, 0, 41), // "PythonQtWrapper_qSlicerScript..."
QT_MOC_LITERAL(1, 42, 29), // "new_qSlicerScriptedFileWriter"
QT_MOC_LITERAL(2, 72, 26), // "qSlicerScriptedFileWriter*"
QT_MOC_LITERAL(3, 99, 0), // ""
QT_MOC_LITERAL(4, 100, 6), // "parent"
QT_MOC_LITERAL(5, 107, 32), // "delete_qSlicerScriptedFileWriter"
QT_MOC_LITERAL(6, 140, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerScriptedFileWriter\0"
    "new_qSlicerScriptedFileWriter\0"
    "qSlicerScriptedFileWriter*\0\0parent\0"
    "delete_qSlicerScriptedFileWriter\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerScriptedFileWriter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerScriptedFileWriter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerScriptedFileWriter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerScriptedFileWriter* _r = _t->new_qSlicerScriptedFileWriter((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerScriptedFileWriter**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerScriptedFileWriter* _r = _t->new_qSlicerScriptedFileWriter();
            if (_a[0]) *reinterpret_cast< qSlicerScriptedFileWriter**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerScriptedFileWriter((*reinterpret_cast< qSlicerScriptedFileWriter*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerScriptedFileWriter* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerScriptedFileWriter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileWriter.data,
    qt_meta_data_PythonQtWrapper_qSlicerScriptedFileWriter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerScriptedFileWriter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerScriptedFileWriter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileWriter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerScriptedFileWriter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerCorePythonManager_t {
    QByteArrayData data[7];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerCorePythonManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerCorePythonManager_t qt_meta_stringdata_PythonQtWrapper_qSlicerCorePythonManager = {
    {
QT_MOC_LITERAL(0, 0, 40), // "PythonQtWrapper_qSlicerCorePy..."
QT_MOC_LITERAL(1, 41, 28), // "new_qSlicerCorePythonManager"
QT_MOC_LITERAL(2, 70, 25), // "qSlicerCorePythonManager*"
QT_MOC_LITERAL(3, 96, 0), // ""
QT_MOC_LITERAL(4, 97, 6), // "parent"
QT_MOC_LITERAL(5, 104, 31), // "delete_qSlicerCorePythonManager"
QT_MOC_LITERAL(6, 136, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerCorePythonManager\0"
    "new_qSlicerCorePythonManager\0"
    "qSlicerCorePythonManager*\0\0parent\0"
    "delete_qSlicerCorePythonManager\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerCorePythonManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerCorePythonManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerCorePythonManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerCorePythonManager* _r = _t->new_qSlicerCorePythonManager((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerCorePythonManager**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerCorePythonManager* _r = _t->new_qSlicerCorePythonManager();
            if (_a[0]) *reinterpret_cast< qSlicerCorePythonManager**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerCorePythonManager((*reinterpret_cast< qSlicerCorePythonManager*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerCorePythonManager* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerCorePythonManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerCorePythonManager.data,
    qt_meta_data_PythonQtWrapper_qSlicerCorePythonManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerCorePythonManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerCorePythonManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerCorePythonManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerCorePythonManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
