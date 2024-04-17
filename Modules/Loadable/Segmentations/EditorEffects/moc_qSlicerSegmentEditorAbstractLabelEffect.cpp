/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSegmentEditorAbstractLabelEffect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Segmentations/EditorEffects/qSlicerSegmentEditorAbstractLabelEffect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSegmentEditorAbstractLabelEffect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSegmentEditorAbstractLabelEffect_t {
    QByteArrayData data[24];
    char stringdata0[362];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSegmentEditorAbstractLabelEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSegmentEditorAbstractLabelEffect_t qt_meta_stringdata_qSlicerSegmentEditorAbstractLabelEffect = {
    {
QT_MOC_LITERAL(0, 0, 39), // "qSlicerSegmentEditorAbstractL..."
QT_MOC_LITERAL(1, 40, 17), // "updateGUIFromMRML"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 17), // "updateMRMLFromGUI"
QT_MOC_LITERAL(4, 77, 14), // "appendPolyMask"
QT_MOC_LITERAL(5, 92, 21), // "vtkOrientedImageData*"
QT_MOC_LITERAL(6, 114, 5), // "input"
QT_MOC_LITERAL(7, 120, 12), // "vtkPolyData*"
QT_MOC_LITERAL(8, 133, 8), // "polyData"
QT_MOC_LITERAL(9, 142, 17), // "qMRMLSliceWidget*"
QT_MOC_LITERAL(10, 160, 11), // "sliceWidget"
QT_MOC_LITERAL(11, 172, 24), // "vtkMRMLSegmentationNode*"
QT_MOC_LITERAL(12, 197, 16), // "segmentationNode"
QT_MOC_LITERAL(13, 214, 27), // "createMaskImageFromPolyData"
QT_MOC_LITERAL(14, 242, 10), // "outputMask"
QT_MOC_LITERAL(15, 253, 11), // "appendImage"
QT_MOC_LITERAL(16, 265, 10), // "inputImage"
QT_MOC_LITERAL(17, 276, 13), // "appendedImage"
QT_MOC_LITERAL(18, 290, 18), // "imageToWorldMatrix"
QT_MOC_LITERAL(19, 309, 18), // "vtkMRMLVolumeNode*"
QT_MOC_LITERAL(20, 328, 4), // "node"
QT_MOC_LITERAL(21, 333, 13), // "vtkMatrix4x4*"
QT_MOC_LITERAL(22, 347, 8), // "ijkToRas"
QT_MOC_LITERAL(23, 356, 5) // "image"

    },
    "qSlicerSegmentEditorAbstractLabelEffect\0"
    "updateGUIFromMRML\0\0updateMRMLFromGUI\0"
    "appendPolyMask\0vtkOrientedImageData*\0"
    "input\0vtkPolyData*\0polyData\0"
    "qMRMLSliceWidget*\0sliceWidget\0"
    "vtkMRMLSegmentationNode*\0segmentationNode\0"
    "createMaskImageFromPolyData\0outputMask\0"
    "appendImage\0inputImage\0appendedImage\0"
    "imageToWorldMatrix\0vtkMRMLVolumeNode*\0"
    "node\0vtkMatrix4x4*\0ijkToRas\0image"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSegmentEditorAbstractLabelEffect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    4,   56,    2, 0x02 /* Public */,
       4,    3,   65,    2, 0x22 /* Public | MethodCloned */,
      13,    3,   72,    2, 0x02 /* Public */,
      15,    2,   79,    2, 0x02 /* Public */,
      18,    2,   84,    2, 0x02 /* Public */,
      18,    3,   89,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 9, 0x80000000 | 11,    6,    8,   10,   12,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 9,    6,    8,   10,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 5, 0x80000000 | 9,    8,   14,   10,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,   16,   17,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 21,   20,   22,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 11, 0x80000000 | 21,   23,   20,   22,

       0        // eod
};

void qSlicerSegmentEditorAbstractLabelEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSegmentEditorAbstractLabelEffect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateGUIFromMRML(); break;
        case 1: _t->updateMRMLFromGUI(); break;
        case 2: _t->appendPolyMask((*reinterpret_cast< vtkOrientedImageData*(*)>(_a[1])),(*reinterpret_cast< vtkPolyData*(*)>(_a[2])),(*reinterpret_cast< qMRMLSliceWidget*(*)>(_a[3])),(*reinterpret_cast< vtkMRMLSegmentationNode*(*)>(_a[4]))); break;
        case 3: _t->appendPolyMask((*reinterpret_cast< vtkOrientedImageData*(*)>(_a[1])),(*reinterpret_cast< vtkPolyData*(*)>(_a[2])),(*reinterpret_cast< qMRMLSliceWidget*(*)>(_a[3]))); break;
        case 4: _t->createMaskImageFromPolyData((*reinterpret_cast< vtkPolyData*(*)>(_a[1])),(*reinterpret_cast< vtkOrientedImageData*(*)>(_a[2])),(*reinterpret_cast< qMRMLSliceWidget*(*)>(_a[3]))); break;
        case 5: _t->appendImage((*reinterpret_cast< vtkOrientedImageData*(*)>(_a[1])),(*reinterpret_cast< vtkOrientedImageData*(*)>(_a[2]))); break;
        case 6: _t->imageToWorldMatrix((*reinterpret_cast< vtkMRMLVolumeNode*(*)>(_a[1])),(*reinterpret_cast< vtkMatrix4x4*(*)>(_a[2]))); break;
        case 7: _t->imageToWorldMatrix((*reinterpret_cast< vtkOrientedImageData*(*)>(_a[1])),(*reinterpret_cast< vtkMRMLSegmentationNode*(*)>(_a[2])),(*reinterpret_cast< vtkMatrix4x4*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSegmentEditorAbstractLabelEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerSegmentEditorAbstractEffect::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSegmentEditorAbstractLabelEffect.data,
    qt_meta_data_qSlicerSegmentEditorAbstractLabelEffect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSegmentEditorAbstractLabelEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSegmentEditorAbstractLabelEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSegmentEditorAbstractLabelEffect.stringdata0))
        return static_cast<void*>(this);
    return qSlicerSegmentEditorAbstractEffect::qt_metacast(_clname);
}

int qSlicerSegmentEditorAbstractLabelEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerSegmentEditorAbstractEffect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
