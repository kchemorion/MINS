/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSegmentationsModuleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/Segmentations/qSlicerSegmentationsModuleWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSegmentationsModuleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSegmentationsModuleWidget_t {
    QByteArrayData data[34];
    char stringdata0[779];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSegmentationsModuleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSegmentationsModuleWidget_t qt_meta_stringdata_qSlicerSegmentationsModuleWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "qSlicerSegmentationsModuleWidget"
QT_MOC_LITERAL(1, 33, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 22), // "selectSegmentationNode"
QT_MOC_LITERAL(4, 78, 24), // "vtkMRMLSegmentationNode*"
QT_MOC_LITERAL(5, 103, 16), // "segmentationNode"
QT_MOC_LITERAL(6, 120, 25), // "onSegmentationNodeChanged"
QT_MOC_LITERAL(7, 146, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(8, 159, 4), // "node"
QT_MOC_LITERAL(9, 164, 40), // "setOtherSegmentationOrReprese..."
QT_MOC_LITERAL(10, 205, 26), // "updateCopyMoveButtonStates"
QT_MOC_LITERAL(11, 232, 25), // "onSegmentSelectionChanged"
QT_MOC_LITERAL(12, 258, 14), // "QItemSelection"
QT_MOC_LITERAL(13, 273, 8), // "selected"
QT_MOC_LITERAL(14, 282, 10), // "deselected"
QT_MOC_LITERAL(15, 293, 34), // "onSegmentationNodeReferenceCh..."
QT_MOC_LITERAL(16, 328, 12), // "onAddSegment"
QT_MOC_LITERAL(17, 341, 18), // "onEditSegmentation"
QT_MOC_LITERAL(18, 360, 24), // "onRemoveSelectedSegments"
QT_MOC_LITERAL(19, 385, 18), // "updateLayerWidgets"
QT_MOC_LITERAL(20, 404, 22), // "collapseLabelmapLayers"
QT_MOC_LITERAL(21, 427, 25), // "updateImportExportWidgets"
QT_MOC_LITERAL(22, 453, 19), // "onImportExportApply"
QT_MOC_LITERAL(23, 473, 28), // "onImportExportClearSelection"
QT_MOC_LITERAL(24, 502, 24), // "updateExportColorWidgets"
QT_MOC_LITERAL(25, 527, 25), // "onExportColorTableChanged"
QT_MOC_LITERAL(26, 553, 29), // "onMoveFromCurrentSegmentation"
QT_MOC_LITERAL(27, 583, 29), // "onCopyFromCurrentSegmentation"
QT_MOC_LITERAL(28, 613, 27), // "onCopyToCurrentSegmentation"
QT_MOC_LITERAL(29, 641, 27), // "onMoveToCurrentSegmentation"
QT_MOC_LITERAL(30, 669, 25), // "onMRMLSceneEndImportEvent"
QT_MOC_LITERAL(31, 695, 26), // "onMRMLSceneEndRestoreEvent"
QT_MOC_LITERAL(32, 722, 31), // "onMRMLSceneEndBatchProcessEvent"
QT_MOC_LITERAL(33, 754, 24) // "onMRMLSceneEndCloseEvent"

    },
    "qSlicerSegmentationsModuleWidget\0"
    "updateWidgetFromMRML\0\0selectSegmentationNode\0"
    "vtkMRMLSegmentationNode*\0segmentationNode\0"
    "onSegmentationNodeChanged\0vtkMRMLNode*\0"
    "node\0setOtherSegmentationOrRepresentationNode\0"
    "updateCopyMoveButtonStates\0"
    "onSegmentSelectionChanged\0QItemSelection\0"
    "selected\0deselected\0"
    "onSegmentationNodeReferenceChanged\0"
    "onAddSegment\0onEditSegmentation\0"
    "onRemoveSelectedSegments\0updateLayerWidgets\0"
    "collapseLabelmapLayers\0updateImportExportWidgets\0"
    "onImportExportApply\0onImportExportClearSelection\0"
    "updateExportColorWidgets\0"
    "onExportColorTableChanged\0"
    "onMoveFromCurrentSegmentation\0"
    "onCopyFromCurrentSegmentation\0"
    "onCopyToCurrentSegmentation\0"
    "onMoveToCurrentSegmentation\0"
    "onMRMLSceneEndImportEvent\0"
    "onMRMLSceneEndRestoreEvent\0"
    "onMRMLSceneEndBatchProcessEvent\0"
    "onMRMLSceneEndCloseEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSegmentationsModuleWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  139,    2, 0x0a /* Public */,
       3,    1,  140,    2, 0x0a /* Public */,
       6,    1,  143,    2, 0x09 /* Protected */,
       9,    1,  146,    2, 0x09 /* Protected */,
      10,    0,  149,    2, 0x09 /* Protected */,
      11,    2,  150,    2, 0x09 /* Protected */,
      15,    0,  155,    2, 0x09 /* Protected */,
      16,    0,  156,    2, 0x09 /* Protected */,
      17,    0,  157,    2, 0x09 /* Protected */,
      18,    0,  158,    2, 0x09 /* Protected */,
      19,    0,  159,    2, 0x09 /* Protected */,
      20,    0,  160,    2, 0x09 /* Protected */,
      21,    0,  161,    2, 0x09 /* Protected */,
      22,    0,  162,    2, 0x09 /* Protected */,
      23,    0,  163,    2, 0x09 /* Protected */,
      24,    0,  164,    2, 0x09 /* Protected */,
      25,    0,  165,    2, 0x09 /* Protected */,
      26,    0,  166,    2, 0x09 /* Protected */,
      27,    0,  167,    2, 0x09 /* Protected */,
      28,    0,  168,    2, 0x09 /* Protected */,
      29,    0,  169,    2, 0x09 /* Protected */,
      30,    0,  170,    2, 0x09 /* Protected */,
      31,    0,  171,    2, 0x09 /* Protected */,
      32,    0,  172,    2, 0x09 /* Protected */,
      33,    0,  173,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qSlicerSegmentationsModuleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSegmentationsModuleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateWidgetFromMRML(); break;
        case 1: _t->selectSegmentationNode((*reinterpret_cast< vtkMRMLSegmentationNode*(*)>(_a[1]))); break;
        case 2: _t->onSegmentationNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->setOtherSegmentationOrRepresentationNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 4: _t->updateCopyMoveButtonStates(); break;
        case 5: _t->onSegmentSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 6: _t->onSegmentationNodeReferenceChanged(); break;
        case 7: _t->onAddSegment(); break;
        case 8: _t->onEditSegmentation(); break;
        case 9: _t->onRemoveSelectedSegments(); break;
        case 10: _t->updateLayerWidgets(); break;
        case 11: _t->collapseLabelmapLayers(); break;
        case 12: _t->updateImportExportWidgets(); break;
        case 13: _t->onImportExportApply(); break;
        case 14: _t->onImportExportClearSelection(); break;
        case 15: _t->updateExportColorWidgets(); break;
        case 16: _t->onExportColorTableChanged(); break;
        case 17: _t->onMoveFromCurrentSegmentation(); break;
        case 18: _t->onCopyFromCurrentSegmentation(); break;
        case 19: _t->onCopyToCurrentSegmentation(); break;
        case 20: _t->onMoveToCurrentSegmentation(); break;
        case 21: _t->onMRMLSceneEndImportEvent(); break;
        case 22: _t->onMRMLSceneEndRestoreEvent(); break;
        case 23: _t->onMRMLSceneEndBatchProcessEvent(); break;
        case 24: _t->onMRMLSceneEndCloseEvent(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSegmentationsModuleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerAbstractModuleWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSegmentationsModuleWidget.data,
    qt_meta_data_qSlicerSegmentationsModuleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSegmentationsModuleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSegmentationsModuleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSegmentationsModuleWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerAbstractModuleWidget::qt_metacast(_clname);
}

int qSlicerSegmentationsModuleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerAbstractModuleWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 25;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
