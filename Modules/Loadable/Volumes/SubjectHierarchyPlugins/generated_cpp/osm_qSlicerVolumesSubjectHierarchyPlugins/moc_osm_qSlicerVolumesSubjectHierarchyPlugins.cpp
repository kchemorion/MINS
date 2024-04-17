/****************************************************************************
** Meta object code from reading C++ file 'osm_qSlicerVolumesSubjectHierarchyPlugins.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "osm_qSlicerVolumesSubjectHierarchyPlugins.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osm_qSlicerVolumesSubjectHierarchyPlugins.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyVolumesPlugin_t {
    QByteArrayData data[7];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyVolumesPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyVolumesPlugin_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyVolumesPlugin = {
    {
QT_MOC_LITERAL(0, 0, 52), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 53, 40), // "new_qSlicerSubjectHierarchyVo..."
QT_MOC_LITERAL(2, 94, 37), // "qSlicerSubjectHierarchyVolume..."
QT_MOC_LITERAL(3, 132, 0), // ""
QT_MOC_LITERAL(4, 133, 6), // "parent"
QT_MOC_LITERAL(5, 140, 43), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 184, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchyVolumesPlugin\0"
    "new_qSlicerSubjectHierarchyVolumesPlugin\0"
    "qSlicerSubjectHierarchyVolumesPlugin*\0"
    "\0parent\0delete_qSlicerSubjectHierarchyVolumesPlugin\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyVolumesPlugin[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchyVolumesPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchyVolumesPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchyVolumesPlugin* _r = _t->new_qSlicerSubjectHierarchyVolumesPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyVolumesPlugin**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchyVolumesPlugin* _r = _t->new_qSlicerSubjectHierarchyVolumesPlugin();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyVolumesPlugin**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchyVolumesPlugin((*reinterpret_cast< qSlicerSubjectHierarchyVolumesPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchyVolumesPlugin* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchyVolumesPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyVolumesPlugin.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyVolumesPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchyVolumesPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchyVolumesPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyVolumesPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchyVolumesPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyLabelMapsPlugin_t {
    QByteArrayData data[7];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyLabelMapsPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyLabelMapsPlugin_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyLabelMapsPlugin = {
    {
QT_MOC_LITERAL(0, 0, 54), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 55, 42), // "new_qSlicerSubjectHierarchyLa..."
QT_MOC_LITERAL(2, 98, 39), // "qSlicerSubjectHierarchyLabelM..."
QT_MOC_LITERAL(3, 138, 0), // ""
QT_MOC_LITERAL(4, 139, 6), // "parent"
QT_MOC_LITERAL(5, 146, 45), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 192, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchyLabelMapsPlugin\0"
    "new_qSlicerSubjectHierarchyLabelMapsPlugin\0"
    "qSlicerSubjectHierarchyLabelMapsPlugin*\0"
    "\0parent\0delete_qSlicerSubjectHierarchyLabelMapsPlugin\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyLabelMapsPlugin[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchyLabelMapsPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchyLabelMapsPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchyLabelMapsPlugin* _r = _t->new_qSlicerSubjectHierarchyLabelMapsPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyLabelMapsPlugin**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchyLabelMapsPlugin* _r = _t->new_qSlicerSubjectHierarchyLabelMapsPlugin();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyLabelMapsPlugin**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchyLabelMapsPlugin((*reinterpret_cast< qSlicerSubjectHierarchyLabelMapsPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchyLabelMapsPlugin* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchyLabelMapsPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyLabelMapsPlugin.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyLabelMapsPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchyLabelMapsPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchyLabelMapsPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyLabelMapsPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchyLabelMapsPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin_t {
    QByteArrayData data[7];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin = {
    {
QT_MOC_LITERAL(0, 0, 67), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 68, 55), // "new_qSlicerSubjectHierarchyDi..."
QT_MOC_LITERAL(2, 124, 52), // "qSlicerSubjectHierarchyDiffus..."
QT_MOC_LITERAL(3, 177, 0), // ""
QT_MOC_LITERAL(4, 178, 6), // "parent"
QT_MOC_LITERAL(5, 185, 58), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 244, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin\0"
    "new_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin\0"
    "qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin*\0"
    "\0parent\0"
    "delete_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin* _r = _t->new_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin* _r = _t->new_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin((*reinterpret_cast< qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchyDiffusionTensorVolumesPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
