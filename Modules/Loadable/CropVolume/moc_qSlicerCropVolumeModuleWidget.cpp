/****************************************************************************
** Meta object code from reading C++ file 'qSlicerCropVolumeModuleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/CropVolume/qSlicerCropVolumeModuleWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerCropVolumeModuleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerCropVolumeModuleWidget_t {
    QByteArrayData data[25];
    char stringdata0[453];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerCropVolumeModuleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerCropVolumeModuleWidget_t qt_meta_stringdata_qSlicerCropVolumeModuleWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "qSlicerCropVolumeModuleWidget"
QT_MOC_LITERAL(1, 30, 17), // "setParametersNode"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 62, 4), // "node"
QT_MOC_LITERAL(5, 67, 14), // "setInputVolume"
QT_MOC_LITERAL(6, 82, 15), // "setOutputVolume"
QT_MOC_LITERAL(7, 98, 11), // "setInputROI"
QT_MOC_LITERAL(8, 110, 18), // "initializeInputROI"
QT_MOC_LITERAL(9, 129, 15), // "onInputROIAdded"
QT_MOC_LITERAL(10, 145, 22), // "onROIVisibilityChanged"
QT_MOC_LITERAL(11, 168, 8), // "onROIFit"
QT_MOC_LITERAL(12, 177, 26), // "onInterpolationModeChanged"
QT_MOC_LITERAL(13, 204, 7), // "onApply"
QT_MOC_LITERAL(14, 212, 14), // "onFixAlignment"
QT_MOC_LITERAL(15, 227, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(16, 248, 28), // "onSpacingScalingValueChanged"
QT_MOC_LITERAL(17, 277, 22), // "onIsotropicModeChanged"
QT_MOC_LITERAL(18, 300, 31), // "onMRMLSceneEndBatchProcessEvent"
QT_MOC_LITERAL(19, 332, 22), // "onInterpolationEnabled"
QT_MOC_LITERAL(20, 355, 20), // "interpolationEnabled"
QT_MOC_LITERAL(21, 376, 33), // "onVolumeInformationSectionCli..."
QT_MOC_LITERAL(22, 410, 6), // "isOpen"
QT_MOC_LITERAL(23, 417, 18), // "onFillValueChanged"
QT_MOC_LITERAL(24, 436, 16) // "updateVolumeInfo"

    },
    "qSlicerCropVolumeModuleWidget\0"
    "setParametersNode\0\0vtkMRMLNode*\0node\0"
    "setInputVolume\0setOutputVolume\0"
    "setInputROI\0initializeInputROI\0"
    "onInputROIAdded\0onROIVisibilityChanged\0"
    "onROIFit\0onInterpolationModeChanged\0"
    "onApply\0onFixAlignment\0updateWidgetFromMRML\0"
    "onSpacingScalingValueChanged\0"
    "onIsotropicModeChanged\0"
    "onMRMLSceneEndBatchProcessEvent\0"
    "onInterpolationEnabled\0interpolationEnabled\0"
    "onVolumeInformationSectionClicked\0"
    "isOpen\0onFillValueChanged\0updateVolumeInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerCropVolumeModuleWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x0a /* Public */,
       5,    1,  112,    2, 0x09 /* Protected */,
       6,    1,  115,    2, 0x09 /* Protected */,
       7,    1,  118,    2, 0x09 /* Protected */,
       8,    1,  121,    2, 0x09 /* Protected */,
       9,    1,  124,    2, 0x09 /* Protected */,
      10,    1,  127,    2, 0x09 /* Protected */,
      11,    0,  130,    2, 0x09 /* Protected */,
      12,    0,  131,    2, 0x09 /* Protected */,
      13,    0,  132,    2, 0x09 /* Protected */,
      14,    0,  133,    2, 0x09 /* Protected */,
      15,    0,  134,    2, 0x09 /* Protected */,
      16,    1,  135,    2, 0x09 /* Protected */,
      17,    1,  138,    2, 0x09 /* Protected */,
      18,    0,  141,    2, 0x09 /* Protected */,
      19,    1,  142,    2, 0x09 /* Protected */,
      21,    1,  145,    2, 0x09 /* Protected */,
      23,    1,  148,    2, 0x09 /* Protected */,
      24,    0,  151,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,

       0        // eod
};

void qSlicerCropVolumeModuleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerCropVolumeModuleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setParametersNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->setInputVolume((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->setOutputVolume((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->setInputROI((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 4: _t->initializeInputROI((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 5: _t->onInputROIAdded((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 6: _t->onROIVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onROIFit(); break;
        case 8: _t->onInterpolationModeChanged(); break;
        case 9: _t->onApply(); break;
        case 10: _t->onFixAlignment(); break;
        case 11: _t->updateWidgetFromMRML(); break;
        case 12: _t->onSpacingScalingValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->onIsotropicModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->onMRMLSceneEndBatchProcessEvent(); break;
        case 15: _t->onInterpolationEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->onVolumeInformationSectionClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->onFillValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->updateVolumeInfo(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerCropVolumeModuleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerAbstractModuleWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerCropVolumeModuleWidget.data,
    qt_meta_data_qSlicerCropVolumeModuleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerCropVolumeModuleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerCropVolumeModuleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerCropVolumeModuleWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerAbstractModuleWidget::qt_metacast(_clname);
}

int qSlicerCropVolumeModuleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerAbstractModuleWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
