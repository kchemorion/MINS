/****************************************************************************
** Meta object code from reading C++ file 'osm_qSlicerSegmentationsSubjectHierarchyPlugins.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "osm_qSlicerSegmentationsSubjectHierarchyPlugins.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osm_qSlicerSegmentationsSubjectHierarchyPlugins.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchySegmentationsPlugin_t {
    QByteArrayData data[7];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchySegmentationsPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchySegmentationsPlugin_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchySegmentationsPlugin = {
    {
QT_MOC_LITERAL(0, 0, 58), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 59, 46), // "new_qSlicerSubjectHierarchySe..."
QT_MOC_LITERAL(2, 106, 43), // "qSlicerSubjectHierarchySegmen..."
QT_MOC_LITERAL(3, 150, 0), // ""
QT_MOC_LITERAL(4, 151, 6), // "parent"
QT_MOC_LITERAL(5, 158, 49), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 208, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchySegmentationsPlugin\0"
    "new_qSlicerSubjectHierarchySegmentationsPlugin\0"
    "qSlicerSubjectHierarchySegmentationsPlugin*\0"
    "\0parent\0delete_qSlicerSubjectHierarchySegmentationsPlugin\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchySegmentationsPlugin[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchySegmentationsPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchySegmentationsPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchySegmentationsPlugin* _r = _t->new_qSlicerSubjectHierarchySegmentationsPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchySegmentationsPlugin**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchySegmentationsPlugin* _r = _t->new_qSlicerSubjectHierarchySegmentationsPlugin();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchySegmentationsPlugin**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchySegmentationsPlugin((*reinterpret_cast< qSlicerSubjectHierarchySegmentationsPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchySegmentationsPlugin* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchySegmentationsPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchySegmentationsPlugin.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchySegmentationsPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchySegmentationsPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchySegmentationsPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchySegmentationsPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchySegmentationsPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchySegmentsPlugin_t {
    QByteArrayData data[7];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchySegmentsPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchySegmentsPlugin_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchySegmentsPlugin = {
    {
QT_MOC_LITERAL(0, 0, 53), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 54, 41), // "new_qSlicerSubjectHierarchySe..."
QT_MOC_LITERAL(2, 96, 38), // "qSlicerSubjectHierarchySegmen..."
QT_MOC_LITERAL(3, 135, 0), // ""
QT_MOC_LITERAL(4, 136, 6), // "parent"
QT_MOC_LITERAL(5, 143, 44), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 188, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchySegmentsPlugin\0"
    "new_qSlicerSubjectHierarchySegmentsPlugin\0"
    "qSlicerSubjectHierarchySegmentsPlugin*\0"
    "\0parent\0delete_qSlicerSubjectHierarchySegmentsPlugin\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchySegmentsPlugin[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchySegmentsPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchySegmentsPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchySegmentsPlugin* _r = _t->new_qSlicerSubjectHierarchySegmentsPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchySegmentsPlugin**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchySegmentsPlugin* _r = _t->new_qSlicerSubjectHierarchySegmentsPlugin();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchySegmentsPlugin**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchySegmentsPlugin((*reinterpret_cast< qSlicerSubjectHierarchySegmentsPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchySegmentsPlugin* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchySegmentsPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchySegmentsPlugin.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchySegmentsPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchySegmentsPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchySegmentsPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchySegmentsPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchySegmentsPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
