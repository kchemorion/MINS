/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSubjectHierarchySegmentationsPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Segmentations/SubjectHierarchyPlugins/qSlicerSubjectHierarchySegmentationsPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSubjectHierarchySegmentationsPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSubjectHierarchySegmentationsPlugin_t {
    QByteArrayData data[23];
    char stringdata0[544];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSubjectHierarchySegmentationsPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSubjectHierarchySegmentationsPlugin_t qt_meta_stringdata_qSlicerSubjectHierarchySegmentationsPlugin = {
    {
QT_MOC_LITERAL(0, 0, 42), // "qSlicerSubjectHierarchySegmen..."
QT_MOC_LITERAL(1, 43, 14), // "onSegmentAdded"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 10), // "vtkObject*"
QT_MOC_LITERAL(4, 70, 6), // "caller"
QT_MOC_LITERAL(5, 77, 8), // "callData"
QT_MOC_LITERAL(6, 86, 16), // "onSegmentRemoved"
QT_MOC_LITERAL(7, 103, 17), // "onSegmentModified"
QT_MOC_LITERAL(8, 121, 21), // "onDisplayNodeModified"
QT_MOC_LITERAL(9, 143, 30), // "onSubjectHierarchyItemModified"
QT_MOC_LITERAL(10, 174, 38), // "onSubjectHierarchyItemAboutTo..."
QT_MOC_LITERAL(11, 213, 22), // "exportToBinaryLabelmap"
QT_MOC_LITERAL(12, 236, 21), // "exportToClosedSurface"
QT_MOC_LITERAL(13, 258, 29), // "convertLabelmapToSegmentation"
QT_MOC_LITERAL(14, 288, 26), // "convertModelToSegmentation"
QT_MOC_LITERAL(15, 315, 27), // "convertModelsToSegmentation"
QT_MOC_LITERAL(16, 343, 22), // "toggle2DFillVisibility"
QT_MOC_LITERAL(17, 366, 25), // "toggle2DOutlineVisibility"
QT_MOC_LITERAL(18, 392, 34), // "createBinaryLabelmapRepresent..."
QT_MOC_LITERAL(19, 427, 33), // "createClosedSurfaceRepresenta..."
QT_MOC_LITERAL(20, 461, 34), // "removeBinaryLabelmapRepresent..."
QT_MOC_LITERAL(21, 496, 33), // "removeClosedSurfaceRepresenta..."
QT_MOC_LITERAL(22, 530, 13) // "roleForPlugin"

    },
    "qSlicerSubjectHierarchySegmentationsPlugin\0"
    "onSegmentAdded\0\0vtkObject*\0caller\0"
    "callData\0onSegmentRemoved\0onSegmentModified\0"
    "onDisplayNodeModified\0"
    "onSubjectHierarchyItemModified\0"
    "onSubjectHierarchyItemAboutToBeRemoved\0"
    "exportToBinaryLabelmap\0exportToClosedSurface\0"
    "convertLabelmapToSegmentation\0"
    "convertModelToSegmentation\0"
    "convertModelsToSegmentation\0"
    "toggle2DFillVisibility\0toggle2DOutlineVisibility\0"
    "createBinaryLabelmapRepresentation\0"
    "createClosedSurfaceRepresentation\0"
    "removeBinaryLabelmapRepresentation\0"
    "removeClosedSurfaceRepresentation\0"
    "roleForPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSubjectHierarchySegmentationsPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  104,    2, 0x0a /* Public */,
       6,    2,  109,    2, 0x0a /* Public */,
       7,    2,  114,    2, 0x0a /* Public */,
       8,    1,  119,    2, 0x0a /* Public */,
       9,    2,  122,    2, 0x0a /* Public */,
      10,    2,  127,    2, 0x0a /* Public */,
      11,    0,  132,    2, 0x09 /* Protected */,
      12,    0,  133,    2, 0x09 /* Protected */,
      13,    0,  134,    2, 0x09 /* Protected */,
      14,    0,  135,    2, 0x09 /* Protected */,
      15,    0,  136,    2, 0x09 /* Protected */,
      16,    1,  137,    2, 0x09 /* Protected */,
      17,    1,  140,    2, 0x09 /* Protected */,
      18,    0,  143,    2, 0x09 /* Protected */,
      19,    0,  144,    2, 0x09 /* Protected */,
      20,    0,  145,    2, 0x09 /* Protected */,
      21,    0,  146,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      22,    0,  147,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::VoidStar,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::VoidStar,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::VoidStar,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::VoidStar,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::VoidStar,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString,

       0        // eod
};

void qSlicerSubjectHierarchySegmentationsPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSubjectHierarchySegmentationsPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSegmentAdded((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 1: _t->onSegmentRemoved((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 2: _t->onSegmentModified((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 3: _t->onDisplayNodeModified((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 4: _t->onSubjectHierarchyItemModified((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 5: _t->onSubjectHierarchyItemAboutToBeRemoved((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 6: _t->exportToBinaryLabelmap(); break;
        case 7: _t->exportToClosedSurface(); break;
        case 8: _t->convertLabelmapToSegmentation(); break;
        case 9: _t->convertModelToSegmentation(); break;
        case 10: _t->convertModelsToSegmentation(); break;
        case 11: _t->toggle2DFillVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->toggle2DOutlineVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->createBinaryLabelmapRepresentation(); break;
        case 14: _t->createClosedSurfaceRepresentation(); break;
        case 15: _t->removeBinaryLabelmapRepresentation(); break;
        case 16: _t->removeClosedSurfaceRepresentation(); break;
        case 17: { QString _r = _t->roleForPlugin();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSubjectHierarchySegmentationsPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerSubjectHierarchyAbstractPlugin::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSubjectHierarchySegmentationsPlugin.data,
    qt_meta_data_qSlicerSubjectHierarchySegmentationsPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSubjectHierarchySegmentationsPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSubjectHierarchySegmentationsPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSubjectHierarchySegmentationsPlugin.stringdata0))
        return static_cast<void*>(this);
    return qSlicerSubjectHierarchyAbstractPlugin::qt_metacast(_clname);
}

int qSlicerSubjectHierarchySegmentationsPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerSubjectHierarchyAbstractPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
