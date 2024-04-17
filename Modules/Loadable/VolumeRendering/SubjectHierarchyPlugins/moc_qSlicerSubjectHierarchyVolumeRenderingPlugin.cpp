/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSubjectHierarchyVolumeRenderingPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/VolumeRendering/SubjectHierarchyPlugins/qSlicerSubjectHierarchyVolumeRenderingPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSubjectHierarchyVolumeRenderingPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSubjectHierarchyVolumeRenderingPlugin_t {
    QByteArrayData data[13];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSubjectHierarchyVolumeRenderingPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSubjectHierarchyVolumeRenderingPlugin_t qt_meta_stringdata_qSlicerSubjectHierarchyVolumeRenderingPlugin = {
    {
QT_MOC_LITERAL(0, 0, 44), // "qSlicerSubjectHierarchyVolume..."
QT_MOC_LITERAL(1, 45, 35), // "toggleVolumeRenderingForCurre..."
QT_MOC_LITERAL(2, 81, 0), // ""
QT_MOC_LITERAL(3, 82, 40), // "showVolumeRenderingOptionsFor..."
QT_MOC_LITERAL(4, 123, 23), // "setVolumeRenderingLogic"
QT_MOC_LITERAL(5, 147, 30), // "vtkSlicerVolumeRenderingLogic*"
QT_MOC_LITERAL(6, 178, 20), // "volumeRenderingLogic"
QT_MOC_LITERAL(7, 199, 19), // "showVolumeRendering"
QT_MOC_LITERAL(8, 219, 4), // "show"
QT_MOC_LITERAL(9, 224, 9), // "vtkIdType"
QT_MOC_LITERAL(10, 234, 6), // "itemID"
QT_MOC_LITERAL(11, 241, 16), // "vtkMRMLViewNode*"
QT_MOC_LITERAL(12, 258, 8) // "viewNode"

    },
    "qSlicerSubjectHierarchyVolumeRenderingPlugin\0"
    "toggleVolumeRenderingForCurrentItem\0"
    "\0showVolumeRenderingOptionsForCurrentItem\0"
    "setVolumeRenderingLogic\0"
    "vtkSlicerVolumeRenderingLogic*\0"
    "volumeRenderingLogic\0showVolumeRendering\0"
    "show\0vtkIdType\0itemID\0vtkMRMLViewNode*\0"
    "viewNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSubjectHierarchyVolumeRenderingPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x09 /* Protected */,
       3,    0,   42,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   43,    2, 0x02 /* Public */,
       7,    3,   46,    2, 0x02 /* Public */,
       7,    2,   53,    2, 0x22 /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Bool, QMetaType::Bool, 0x80000000 | 9, 0x80000000 | 11,    8,   10,   12,
    QMetaType::Bool, QMetaType::Bool, 0x80000000 | 9,    8,   10,

       0        // eod
};

void qSlicerSubjectHierarchyVolumeRenderingPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSubjectHierarchyVolumeRenderingPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toggleVolumeRenderingForCurrentItem((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->showVolumeRenderingOptionsForCurrentItem(); break;
        case 2: _t->setVolumeRenderingLogic((*reinterpret_cast< vtkSlicerVolumeRenderingLogic*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->showVolumeRendering((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< vtkIdType(*)>(_a[2])),(*reinterpret_cast< vtkMRMLViewNode*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->showVolumeRendering((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< vtkIdType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSubjectHierarchyVolumeRenderingPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerSubjectHierarchyAbstractPlugin::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSubjectHierarchyVolumeRenderingPlugin.data,
    qt_meta_data_qSlicerSubjectHierarchyVolumeRenderingPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSubjectHierarchyVolumeRenderingPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSubjectHierarchyVolumeRenderingPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSubjectHierarchyVolumeRenderingPlugin.stringdata0))
        return static_cast<void*>(this);
    return qSlicerSubjectHierarchyAbstractPlugin::qt_metacast(_clname);
}

int qSlicerSubjectHierarchyVolumeRenderingPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerSubjectHierarchyAbstractPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
