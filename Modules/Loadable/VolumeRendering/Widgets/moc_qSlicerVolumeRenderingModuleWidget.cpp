/****************************************************************************
** Meta object code from reading C++ file 'qSlicerVolumeRenderingModuleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/VolumeRendering/Widgets/qSlicerVolumeRenderingModuleWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerVolumeRenderingModuleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerVolumeRenderingModuleWidget_t {
    QByteArrayData data[44];
    char stringdata0[931];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerVolumeRenderingModuleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerVolumeRenderingModuleWidget_t qt_meta_stringdata_qSlicerVolumeRenderingModuleWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qSlicerVolumeRenderingModuleW..."
QT_MOC_LITERAL(1, 35, 17), // "setMRMLVolumeNode"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 67, 4), // "node"
QT_MOC_LITERAL(5, 72, 14), // "setMRMLROINode"
QT_MOC_LITERAL(6, 87, 25), // "setMRMLVolumePropertyNode"
QT_MOC_LITERAL(7, 113, 14), // "fitROIToVolume"
QT_MOC_LITERAL(8, 128, 30), // "onCurrentMRMLVolumeNodeChanged"
QT_MOC_LITERAL(9, 159, 19), // "onVisibilityChanged"
QT_MOC_LITERAL(10, 179, 13), // "onCropToggled"
QT_MOC_LITERAL(11, 193, 27), // "onCurrentMRMLROINodeChanged"
QT_MOC_LITERAL(12, 221, 38), // "onCurrentMRMLVolumePropertyNo..."
QT_MOC_LITERAL(13, 260, 24), // "onNewVolumePropertyAdded"
QT_MOC_LITERAL(14, 285, 31), // "onCurrentRenderingMethodChanged"
QT_MOC_LITERAL(15, 317, 5), // "index"
QT_MOC_LITERAL(16, 323, 26), // "onCurrentMemorySizeChanged"
QT_MOC_LITERAL(17, 350, 30), // "onCurrentQualityControlChanged"
QT_MOC_LITERAL(18, 381, 25), // "onCurrentFramerateChanged"
QT_MOC_LITERAL(19, 407, 3), // "fps"
QT_MOC_LITERAL(20, 411, 45), // "onAutoReleaseGraphicsResource..."
QT_MOC_LITERAL(21, 457, 11), // "autoRelease"
QT_MOC_LITERAL(22, 469, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(23, 490, 23), // "updateWidgetFromROINode"
QT_MOC_LITERAL(24, 514, 28), // "synchronizeScalarDisplayNode"
QT_MOC_LITERAL(25, 543, 26), // "setFollowVolumeDisplayNode"
QT_MOC_LITERAL(26, 570, 25), // "setIgnoreVolumesThreshold"
QT_MOC_LITERAL(27, 596, 6), // "ignore"
QT_MOC_LITERAL(28, 603, 18), // "onThresholdChanged"
QT_MOC_LITERAL(29, 622, 9), // "threshold"
QT_MOC_LITERAL(30, 632, 31), // "onROICropDisplayCheckBoxToggled"
QT_MOC_LITERAL(31, 664, 6), // "toggle"
QT_MOC_LITERAL(32, 671, 21), // "onChartsExtentChanged"
QT_MOC_LITERAL(33, 693, 24), // "onEffectiveRangeModified"
QT_MOC_LITERAL(34, 718, 14), // "mrmlVolumeNode"
QT_MOC_LITERAL(35, 733, 18), // "vtkMRMLVolumeNode*"
QT_MOC_LITERAL(36, 752, 11), // "mrmlROINode"
QT_MOC_LITERAL(37, 764, 23), // "vtkMRMLDisplayableNode*"
QT_MOC_LITERAL(38, 788, 18), // "mrmlMarkupsROINode"
QT_MOC_LITERAL(39, 807, 22), // "vtkMRMLMarkupsROINode*"
QT_MOC_LITERAL(40, 830, 22), // "mrmlVolumePropertyNode"
QT_MOC_LITERAL(41, 853, 26), // "vtkMRMLVolumePropertyNode*"
QT_MOC_LITERAL(42, 880, 15), // "mrmlDisplayNode"
QT_MOC_LITERAL(43, 896, 34) // "vtkMRMLVolumeRenderingDisplay..."

    },
    "qSlicerVolumeRenderingModuleWidget\0"
    "setMRMLVolumeNode\0\0vtkMRMLNode*\0node\0"
    "setMRMLROINode\0setMRMLVolumePropertyNode\0"
    "fitROIToVolume\0onCurrentMRMLVolumeNodeChanged\0"
    "onVisibilityChanged\0onCropToggled\0"
    "onCurrentMRMLROINodeChanged\0"
    "onCurrentMRMLVolumePropertyNodeChanged\0"
    "onNewVolumePropertyAdded\0"
    "onCurrentRenderingMethodChanged\0index\0"
    "onCurrentMemorySizeChanged\0"
    "onCurrentQualityControlChanged\0"
    "onCurrentFramerateChanged\0fps\0"
    "onAutoReleaseGraphicsResourcesCheckBoxToggled\0"
    "autoRelease\0updateWidgetFromMRML\0"
    "updateWidgetFromROINode\0"
    "synchronizeScalarDisplayNode\0"
    "setFollowVolumeDisplayNode\0"
    "setIgnoreVolumesThreshold\0ignore\0"
    "onThresholdChanged\0threshold\0"
    "onROICropDisplayCheckBoxToggled\0toggle\0"
    "onChartsExtentChanged\0onEffectiveRangeModified\0"
    "mrmlVolumeNode\0vtkMRMLVolumeNode*\0"
    "mrmlROINode\0vtkMRMLDisplayableNode*\0"
    "mrmlMarkupsROINode\0vtkMRMLMarkupsROINode*\0"
    "mrmlVolumePropertyNode\0"
    "vtkMRMLVolumePropertyNode*\0mrmlDisplayNode\0"
    "vtkMRMLVolumeRenderingDisplayNode*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerVolumeRenderingModuleWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  159,    2, 0x0a /* Public */,
       5,    1,  162,    2, 0x0a /* Public */,
       6,    1,  165,    2, 0x0a /* Public */,
       7,    0,  168,    2, 0x0a /* Public */,
       8,    1,  169,    2, 0x09 /* Protected */,
       9,    1,  172,    2, 0x09 /* Protected */,
      10,    1,  175,    2, 0x09 /* Protected */,
      11,    1,  178,    2, 0x09 /* Protected */,
      12,    1,  181,    2, 0x09 /* Protected */,
      13,    1,  184,    2, 0x09 /* Protected */,
      14,    1,  187,    2, 0x09 /* Protected */,
      16,    0,  190,    2, 0x09 /* Protected */,
      17,    1,  191,    2, 0x09 /* Protected */,
      18,    1,  194,    2, 0x09 /* Protected */,
      20,    1,  197,    2, 0x09 /* Protected */,
      22,    0,  200,    2, 0x09 /* Protected */,
      23,    0,  201,    2, 0x09 /* Protected */,
      24,    0,  202,    2, 0x09 /* Protected */,
      25,    1,  203,    2, 0x09 /* Protected */,
      26,    1,  206,    2, 0x09 /* Protected */,
      28,    1,  209,    2, 0x09 /* Protected */,
      30,    1,  212,    2, 0x09 /* Protected */,
      32,    0,  215,    2, 0x09 /* Protected */,
      33,    0,  216,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      34,    0,  217,    2, 0x02 /* Public */,
      36,    0,  218,    2, 0x02 /* Public */,
      38,    0,  219,    2, 0x02 /* Public */,
      40,    0,  220,    2, 0x02 /* Public */,
      42,    0,  221,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Double,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 35,
    0x80000000 | 37,
    0x80000000 | 39,
    0x80000000 | 41,
    0x80000000 | 43,

       0        // eod
};

void qSlicerVolumeRenderingModuleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerVolumeRenderingModuleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLVolumeNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLROINode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->setMRMLVolumePropertyNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->fitROIToVolume(); break;
        case 4: _t->onCurrentMRMLVolumeNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 5: _t->onVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onCropToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onCurrentMRMLROINodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 8: _t->onCurrentMRMLVolumePropertyNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 9: _t->onNewVolumePropertyAdded((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 10: _t->onCurrentRenderingMethodChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->onCurrentMemorySizeChanged(); break;
        case 12: _t->onCurrentQualityControlChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->onCurrentFramerateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->onAutoReleaseGraphicsResourcesCheckBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->updateWidgetFromMRML(); break;
        case 16: _t->updateWidgetFromROINode(); break;
        case 17: _t->synchronizeScalarDisplayNode(); break;
        case 18: _t->setFollowVolumeDisplayNode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->setIgnoreVolumesThreshold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->onThresholdChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->onROICropDisplayCheckBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->onChartsExtentChanged(); break;
        case 23: _t->onEffectiveRangeModified(); break;
        case 24: { vtkMRMLVolumeNode* _r = _t->mrmlVolumeNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLVolumeNode**>(_a[0]) = std::move(_r); }  break;
        case 25: { vtkMRMLDisplayableNode* _r = _t->mrmlROINode();
            if (_a[0]) *reinterpret_cast< vtkMRMLDisplayableNode**>(_a[0]) = std::move(_r); }  break;
        case 26: { vtkMRMLMarkupsROINode* _r = _t->mrmlMarkupsROINode();
            if (_a[0]) *reinterpret_cast< vtkMRMLMarkupsROINode**>(_a[0]) = std::move(_r); }  break;
        case 27: { vtkMRMLVolumePropertyNode* _r = _t->mrmlVolumePropertyNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLVolumePropertyNode**>(_a[0]) = std::move(_r); }  break;
        case 28: { vtkMRMLVolumeRenderingDisplayNode* _r = _t->mrmlDisplayNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLVolumeRenderingDisplayNode**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerVolumeRenderingModuleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerAbstractModuleWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerVolumeRenderingModuleWidget.data,
    qt_meta_data_qSlicerVolumeRenderingModuleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerVolumeRenderingModuleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerVolumeRenderingModuleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerVolumeRenderingModuleWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerAbstractModuleWidget::qt_metacast(_clname);
}

int qSlicerVolumeRenderingModuleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerAbstractModuleWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 29;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
