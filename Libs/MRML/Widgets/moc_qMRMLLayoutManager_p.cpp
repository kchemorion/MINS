/****************************************************************************
** Meta object code from reading C++ file 'qMRMLLayoutManager_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLLayoutManager_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLLayoutManager_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLLayoutManagerPrivate_t {
    QByteArrayData data[18];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLLayoutManagerPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLLayoutManagerPrivate_t qt_meta_stringdata_qMRMLLayoutManagerPrivate = {
    {
QT_MOC_LITERAL(0, 0, 25), // "qMRMLLayoutManagerPrivate"
QT_MOC_LITERAL(1, 26, 16), // "onNodeAddedEvent"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 10), // "vtkObject*"
QT_MOC_LITERAL(4, 55, 5), // "scene"
QT_MOC_LITERAL(5, 61, 4), // "node"
QT_MOC_LITERAL(6, 66, 18), // "onNodeRemovedEvent"
QT_MOC_LITERAL(7, 85, 27), // "onSceneAboutToBeClosedEvent"
QT_MOC_LITERAL(8, 113, 18), // "onSceneClosedEvent"
QT_MOC_LITERAL(9, 132, 20), // "onSceneRestoredEvent"
QT_MOC_LITERAL(10, 153, 25), // "onLayoutNodeModifiedEvent"
QT_MOC_LITERAL(11, 179, 10), // "layoutNode"
QT_MOC_LITERAL(12, 190, 25), // "updateLayoutFromMRMLScene"
QT_MOC_LITERAL(13, 216, 29), // "onActiveThreeDViewNodeChanged"
QT_MOC_LITERAL(14, 246, 24), // "vtkMRMLAbstractViewNode*"
QT_MOC_LITERAL(15, 271, 28), // "onActiveTableViewNodeChanged"
QT_MOC_LITERAL(16, 300, 27), // "onActivePlotViewNodeChanged"
QT_MOC_LITERAL(17, 328, 26) // "updateSegmentationControls"

    },
    "qMRMLLayoutManagerPrivate\0onNodeAddedEvent\0"
    "\0vtkObject*\0scene\0node\0onNodeRemovedEvent\0"
    "onSceneAboutToBeClosedEvent\0"
    "onSceneClosedEvent\0onSceneRestoredEvent\0"
    "onLayoutNodeModifiedEvent\0layoutNode\0"
    "updateLayoutFromMRMLScene\0"
    "onActiveThreeDViewNodeChanged\0"
    "vtkMRMLAbstractViewNode*\0"
    "onActiveTableViewNodeChanged\0"
    "onActivePlotViewNodeChanged\0"
    "updateSegmentationControls"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLLayoutManagerPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x0a /* Public */,
       6,    2,   74,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x0a /* Public */,
      10,    1,   82,    2, 0x0a /* Public */,
      12,    0,   85,    2, 0x0a /* Public */,
      13,    1,   86,    2, 0x0a /* Public */,
      15,    1,   89,    2, 0x0a /* Public */,
      16,    1,   92,    2, 0x0a /* Public */,
      17,    0,   95,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void,

       0        // eod
};

void qMRMLLayoutManagerPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLLayoutManagerPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onNodeAddedEvent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        case 1: _t->onNodeRemovedEvent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        case 2: _t->onSceneAboutToBeClosedEvent(); break;
        case 3: _t->onSceneClosedEvent(); break;
        case 4: _t->onSceneRestoredEvent(); break;
        case 5: _t->onLayoutNodeModifiedEvent((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 6: _t->updateLayoutFromMRMLScene(); break;
        case 7: _t->onActiveThreeDViewNodeChanged((*reinterpret_cast< vtkMRMLAbstractViewNode*(*)>(_a[1]))); break;
        case 8: _t->onActiveTableViewNodeChanged((*reinterpret_cast< vtkMRMLAbstractViewNode*(*)>(_a[1]))); break;
        case 9: _t->onActivePlotViewNodeChanged((*reinterpret_cast< vtkMRMLAbstractViewNode*(*)>(_a[1]))); break;
        case 10: _t->updateSegmentationControls(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLLayoutManagerPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qMRMLLayoutManagerPrivate.data,
    qt_meta_data_qMRMLLayoutManagerPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLLayoutManagerPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLLayoutManagerPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLLayoutManagerPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qMRMLLayoutManagerPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
struct qt_meta_stringdata_qMRMLLayoutThreeDViewFactory_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLLayoutThreeDViewFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLLayoutThreeDViewFactory_t qt_meta_stringdata_qMRMLLayoutThreeDViewFactory = {
    {
QT_MOC_LITERAL(0, 0, 28) // "qMRMLLayoutThreeDViewFactory"

    },
    "qMRMLLayoutThreeDViewFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLLayoutThreeDViewFactory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void qMRMLLayoutThreeDViewFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject qMRMLLayoutThreeDViewFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLLayoutViewFactory::staticMetaObject>(),
    qt_meta_stringdata_qMRMLLayoutThreeDViewFactory.data,
    qt_meta_data_qMRMLLayoutThreeDViewFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLLayoutThreeDViewFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLLayoutThreeDViewFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLLayoutThreeDViewFactory.stringdata0))
        return static_cast<void*>(this);
    return qMRMLLayoutViewFactory::qt_metacast(_clname);
}

int qMRMLLayoutThreeDViewFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLLayoutViewFactory::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_qMRMLLayoutTableViewFactory_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLLayoutTableViewFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLLayoutTableViewFactory_t qt_meta_stringdata_qMRMLLayoutTableViewFactory = {
    {
QT_MOC_LITERAL(0, 0, 27) // "qMRMLLayoutTableViewFactory"

    },
    "qMRMLLayoutTableViewFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLLayoutTableViewFactory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void qMRMLLayoutTableViewFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject qMRMLLayoutTableViewFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLLayoutViewFactory::staticMetaObject>(),
    qt_meta_stringdata_qMRMLLayoutTableViewFactory.data,
    qt_meta_data_qMRMLLayoutTableViewFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLLayoutTableViewFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLLayoutTableViewFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLLayoutTableViewFactory.stringdata0))
        return static_cast<void*>(this);
    return qMRMLLayoutViewFactory::qt_metacast(_clname);
}

int qMRMLLayoutTableViewFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLLayoutViewFactory::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_qMRMLLayoutPlotViewFactory_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLLayoutPlotViewFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLLayoutPlotViewFactory_t qt_meta_stringdata_qMRMLLayoutPlotViewFactory = {
    {
QT_MOC_LITERAL(0, 0, 26) // "qMRMLLayoutPlotViewFactory"

    },
    "qMRMLLayoutPlotViewFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLLayoutPlotViewFactory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void qMRMLLayoutPlotViewFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject qMRMLLayoutPlotViewFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLLayoutViewFactory::staticMetaObject>(),
    qt_meta_stringdata_qMRMLLayoutPlotViewFactory.data,
    qt_meta_data_qMRMLLayoutPlotViewFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLLayoutPlotViewFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLLayoutPlotViewFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLLayoutPlotViewFactory.stringdata0))
        return static_cast<void*>(this);
    return qMRMLLayoutViewFactory::qt_metacast(_clname);
}

int qMRMLLayoutPlotViewFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLLayoutViewFactory::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_qMRMLLayoutSliceViewFactory_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLLayoutSliceViewFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLLayoutSliceViewFactory_t qt_meta_stringdata_qMRMLLayoutSliceViewFactory = {
    {
QT_MOC_LITERAL(0, 0, 27) // "qMRMLLayoutSliceViewFactory"

    },
    "qMRMLLayoutSliceViewFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLLayoutSliceViewFactory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void qMRMLLayoutSliceViewFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject qMRMLLayoutSliceViewFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLLayoutViewFactory::staticMetaObject>(),
    qt_meta_stringdata_qMRMLLayoutSliceViewFactory.data,
    qt_meta_data_qMRMLLayoutSliceViewFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLLayoutSliceViewFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLLayoutSliceViewFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLLayoutSliceViewFactory.stringdata0))
        return static_cast<void*>(this);
    return qMRMLLayoutViewFactory::qt_metacast(_clname);
}

int qMRMLLayoutSliceViewFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLLayoutViewFactory::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
