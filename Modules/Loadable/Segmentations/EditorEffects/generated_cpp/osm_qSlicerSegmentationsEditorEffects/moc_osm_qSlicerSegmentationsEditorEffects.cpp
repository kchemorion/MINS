/****************************************************************************
** Meta object code from reading C++ file 'osm_qSlicerSegmentationsEditorEffects.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "osm_qSlicerSegmentationsEditorEffects.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osm_qSlicerSegmentationsEditorEffects.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorEffectFactory_t {
    QByteArrayData data[7];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorEffectFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorEffectFactory_t qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorEffectFactory = {
    {
QT_MOC_LITERAL(0, 0, 49), // "PythonQtWrapper_qSlicerSegmen..."
QT_MOC_LITERAL(1, 50, 37), // "new_qSlicerSegmentEditorEffec..."
QT_MOC_LITERAL(2, 88, 34), // "qSlicerSegmentEditorEffectFac..."
QT_MOC_LITERAL(3, 123, 0), // ""
QT_MOC_LITERAL(4, 124, 6), // "parent"
QT_MOC_LITERAL(5, 131, 40), // "delete_qSlicerSegmentEditorEf..."
QT_MOC_LITERAL(6, 172, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSegmentEditorEffectFactory\0"
    "new_qSlicerSegmentEditorEffectFactory\0"
    "qSlicerSegmentEditorEffectFactory*\0\0"
    "parent\0delete_qSlicerSegmentEditorEffectFactory\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSegmentEditorEffectFactory[] = {

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

void PythonQtWrapper_qSlicerSegmentEditorEffectFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSegmentEditorEffectFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSegmentEditorEffectFactory* _r = _t->new_qSlicerSegmentEditorEffectFactory((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSegmentEditorEffectFactory**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSegmentEditorEffectFactory* _r = _t->new_qSlicerSegmentEditorEffectFactory();
            if (_a[0]) *reinterpret_cast< qSlicerSegmentEditorEffectFactory**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSegmentEditorEffectFactory((*reinterpret_cast< qSlicerSegmentEditorEffectFactory*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSegmentEditorEffectFactory* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSegmentEditorEffectFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorEffectFactory.data,
    qt_meta_data_PythonQtWrapper_qSlicerSegmentEditorEffectFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSegmentEditorEffectFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSegmentEditorEffectFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorEffectFactory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSegmentEditorEffectFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorPaintEffect_t {
    QByteArrayData data[7];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorPaintEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorPaintEffect_t qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorPaintEffect = {
    {
QT_MOC_LITERAL(0, 0, 47), // "PythonQtWrapper_qSlicerSegmen..."
QT_MOC_LITERAL(1, 48, 35), // "new_qSlicerSegmentEditorPaint..."
QT_MOC_LITERAL(2, 84, 32), // "qSlicerSegmentEditorPaintEffect*"
QT_MOC_LITERAL(3, 117, 0), // ""
QT_MOC_LITERAL(4, 118, 6), // "parent"
QT_MOC_LITERAL(5, 125, 38), // "delete_qSlicerSegmentEditorPa..."
QT_MOC_LITERAL(6, 164, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSegmentEditorPaintEffect\0"
    "new_qSlicerSegmentEditorPaintEffect\0"
    "qSlicerSegmentEditorPaintEffect*\0\0"
    "parent\0delete_qSlicerSegmentEditorPaintEffect\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSegmentEditorPaintEffect[] = {

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

void PythonQtWrapper_qSlicerSegmentEditorPaintEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSegmentEditorPaintEffect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSegmentEditorPaintEffect* _r = _t->new_qSlicerSegmentEditorPaintEffect((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSegmentEditorPaintEffect**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSegmentEditorPaintEffect* _r = _t->new_qSlicerSegmentEditorPaintEffect();
            if (_a[0]) *reinterpret_cast< qSlicerSegmentEditorPaintEffect**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSegmentEditorPaintEffect((*reinterpret_cast< qSlicerSegmentEditorPaintEffect*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSegmentEditorPaintEffect* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSegmentEditorPaintEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorPaintEffect.data,
    qt_meta_data_PythonQtWrapper_qSlicerSegmentEditorPaintEffect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSegmentEditorPaintEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSegmentEditorPaintEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorPaintEffect.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSegmentEditorPaintEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorEraseEffect_t {
    QByteArrayData data[7];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorEraseEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorEraseEffect_t qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorEraseEffect = {
    {
QT_MOC_LITERAL(0, 0, 47), // "PythonQtWrapper_qSlicerSegmen..."
QT_MOC_LITERAL(1, 48, 35), // "new_qSlicerSegmentEditorErase..."
QT_MOC_LITERAL(2, 84, 32), // "qSlicerSegmentEditorEraseEffect*"
QT_MOC_LITERAL(3, 117, 0), // ""
QT_MOC_LITERAL(4, 118, 6), // "parent"
QT_MOC_LITERAL(5, 125, 38), // "delete_qSlicerSegmentEditorEr..."
QT_MOC_LITERAL(6, 164, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSegmentEditorEraseEffect\0"
    "new_qSlicerSegmentEditorEraseEffect\0"
    "qSlicerSegmentEditorEraseEffect*\0\0"
    "parent\0delete_qSlicerSegmentEditorEraseEffect\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSegmentEditorEraseEffect[] = {

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

void PythonQtWrapper_qSlicerSegmentEditorEraseEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSegmentEditorEraseEffect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSegmentEditorEraseEffect* _r = _t->new_qSlicerSegmentEditorEraseEffect((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSegmentEditorEraseEffect**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSegmentEditorEraseEffect* _r = _t->new_qSlicerSegmentEditorEraseEffect();
            if (_a[0]) *reinterpret_cast< qSlicerSegmentEditorEraseEffect**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSegmentEditorEraseEffect((*reinterpret_cast< qSlicerSegmentEditorEraseEffect*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSegmentEditorEraseEffect* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSegmentEditorEraseEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorEraseEffect.data,
    qt_meta_data_PythonQtWrapper_qSlicerSegmentEditorEraseEffect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSegmentEditorEraseEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSegmentEditorEraseEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorEraseEffect.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSegmentEditorEraseEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScissorsEffect_t {
    QByteArrayData data[7];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScissorsEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScissorsEffect_t qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScissorsEffect = {
    {
QT_MOC_LITERAL(0, 0, 50), // "PythonQtWrapper_qSlicerSegmen..."
QT_MOC_LITERAL(1, 51, 38), // "new_qSlicerSegmentEditorSciss..."
QT_MOC_LITERAL(2, 90, 35), // "qSlicerSegmentEditorScissorsE..."
QT_MOC_LITERAL(3, 126, 0), // ""
QT_MOC_LITERAL(4, 127, 6), // "parent"
QT_MOC_LITERAL(5, 134, 41), // "delete_qSlicerSegmentEditorSc..."
QT_MOC_LITERAL(6, 176, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSegmentEditorScissorsEffect\0"
    "new_qSlicerSegmentEditorScissorsEffect\0"
    "qSlicerSegmentEditorScissorsEffect*\0"
    "\0parent\0delete_qSlicerSegmentEditorScissorsEffect\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSegmentEditorScissorsEffect[] = {

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

void PythonQtWrapper_qSlicerSegmentEditorScissorsEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSegmentEditorScissorsEffect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSegmentEditorScissorsEffect* _r = _t->new_qSlicerSegmentEditorScissorsEffect((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSegmentEditorScissorsEffect**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSegmentEditorScissorsEffect* _r = _t->new_qSlicerSegmentEditorScissorsEffect();
            if (_a[0]) *reinterpret_cast< qSlicerSegmentEditorScissorsEffect**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSegmentEditorScissorsEffect((*reinterpret_cast< qSlicerSegmentEditorScissorsEffect*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSegmentEditorScissorsEffect* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSegmentEditorScissorsEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScissorsEffect.data,
    qt_meta_data_PythonQtWrapper_qSlicerSegmentEditorScissorsEffect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSegmentEditorScissorsEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSegmentEditorScissorsEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScissorsEffect.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSegmentEditorScissorsEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedEffect_t {
    QByteArrayData data[7];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedEffect_t qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedEffect = {
    {
QT_MOC_LITERAL(0, 0, 50), // "PythonQtWrapper_qSlicerSegmen..."
QT_MOC_LITERAL(1, 51, 38), // "new_qSlicerSegmentEditorScrip..."
QT_MOC_LITERAL(2, 90, 35), // "qSlicerSegmentEditorScriptedE..."
QT_MOC_LITERAL(3, 126, 0), // ""
QT_MOC_LITERAL(4, 127, 6), // "parent"
QT_MOC_LITERAL(5, 134, 41), // "delete_qSlicerSegmentEditorSc..."
QT_MOC_LITERAL(6, 176, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSegmentEditorScriptedEffect\0"
    "new_qSlicerSegmentEditorScriptedEffect\0"
    "qSlicerSegmentEditorScriptedEffect*\0"
    "\0parent\0delete_qSlicerSegmentEditorScriptedEffect\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSegmentEditorScriptedEffect[] = {

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

void PythonQtWrapper_qSlicerSegmentEditorScriptedEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSegmentEditorScriptedEffect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSegmentEditorScriptedEffect* _r = _t->new_qSlicerSegmentEditorScriptedEffect((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSegmentEditorScriptedEffect**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSegmentEditorScriptedEffect* _r = _t->new_qSlicerSegmentEditorScriptedEffect();
            if (_a[0]) *reinterpret_cast< qSlicerSegmentEditorScriptedEffect**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSegmentEditorScriptedEffect((*reinterpret_cast< qSlicerSegmentEditorScriptedEffect*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSegmentEditorScriptedEffect* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSegmentEditorScriptedEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedEffect.data,
    qt_meta_data_PythonQtWrapper_qSlicerSegmentEditorScriptedEffect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSegmentEditorScriptedEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSegmentEditorScriptedEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedEffect.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSegmentEditorScriptedEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedLabelEffect_t {
    QByteArrayData data[7];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedLabelEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedLabelEffect_t qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedLabelEffect = {
    {
QT_MOC_LITERAL(0, 0, 55), // "PythonQtWrapper_qSlicerSegmen..."
QT_MOC_LITERAL(1, 56, 43), // "new_qSlicerSegmentEditorScrip..."
QT_MOC_LITERAL(2, 100, 40), // "qSlicerSegmentEditorScriptedL..."
QT_MOC_LITERAL(3, 141, 0), // ""
QT_MOC_LITERAL(4, 142, 6), // "parent"
QT_MOC_LITERAL(5, 149, 46), // "delete_qSlicerSegmentEditorSc..."
QT_MOC_LITERAL(6, 196, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSegmentEditorScriptedLabelEffect\0"
    "new_qSlicerSegmentEditorScriptedLabelEffect\0"
    "qSlicerSegmentEditorScriptedLabelEffect*\0"
    "\0parent\0delete_qSlicerSegmentEditorScriptedLabelEffect\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSegmentEditorScriptedLabelEffect[] = {

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

void PythonQtWrapper_qSlicerSegmentEditorScriptedLabelEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSegmentEditorScriptedLabelEffect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSegmentEditorScriptedLabelEffect* _r = _t->new_qSlicerSegmentEditorScriptedLabelEffect((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSegmentEditorScriptedLabelEffect**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSegmentEditorScriptedLabelEffect* _r = _t->new_qSlicerSegmentEditorScriptedLabelEffect();
            if (_a[0]) *reinterpret_cast< qSlicerSegmentEditorScriptedLabelEffect**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSegmentEditorScriptedLabelEffect((*reinterpret_cast< qSlicerSegmentEditorScriptedLabelEffect*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSegmentEditorScriptedLabelEffect* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSegmentEditorScriptedLabelEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedLabelEffect.data,
    qt_meta_data_PythonQtWrapper_qSlicerSegmentEditorScriptedLabelEffect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSegmentEditorScriptedLabelEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSegmentEditorScriptedLabelEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedLabelEffect.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSegmentEditorScriptedLabelEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedPaintEffect_t {
    QByteArrayData data[7];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedPaintEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedPaintEffect_t qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedPaintEffect = {
    {
QT_MOC_LITERAL(0, 0, 55), // "PythonQtWrapper_qSlicerSegmen..."
QT_MOC_LITERAL(1, 56, 43), // "new_qSlicerSegmentEditorScrip..."
QT_MOC_LITERAL(2, 100, 40), // "qSlicerSegmentEditorScriptedP..."
QT_MOC_LITERAL(3, 141, 0), // ""
QT_MOC_LITERAL(4, 142, 6), // "parent"
QT_MOC_LITERAL(5, 149, 46), // "delete_qSlicerSegmentEditorSc..."
QT_MOC_LITERAL(6, 196, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSegmentEditorScriptedPaintEffect\0"
    "new_qSlicerSegmentEditorScriptedPaintEffect\0"
    "qSlicerSegmentEditorScriptedPaintEffect*\0"
    "\0parent\0delete_qSlicerSegmentEditorScriptedPaintEffect\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSegmentEditorScriptedPaintEffect[] = {

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

void PythonQtWrapper_qSlicerSegmentEditorScriptedPaintEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSegmentEditorScriptedPaintEffect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSegmentEditorScriptedPaintEffect* _r = _t->new_qSlicerSegmentEditorScriptedPaintEffect((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSegmentEditorScriptedPaintEffect**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSegmentEditorScriptedPaintEffect* _r = _t->new_qSlicerSegmentEditorScriptedPaintEffect();
            if (_a[0]) *reinterpret_cast< qSlicerSegmentEditorScriptedPaintEffect**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSegmentEditorScriptedPaintEffect((*reinterpret_cast< qSlicerSegmentEditorScriptedPaintEffect*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSegmentEditorScriptedPaintEffect* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSegmentEditorScriptedPaintEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedPaintEffect.data,
    qt_meta_data_PythonQtWrapper_qSlicerSegmentEditorScriptedPaintEffect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSegmentEditorScriptedPaintEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSegmentEditorScriptedPaintEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSegmentEditorScriptedPaintEffect.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSegmentEditorScriptedPaintEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
