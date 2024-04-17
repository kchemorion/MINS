/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSegmentEditorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Segmentations/Widgets/qMRMLSegmentEditorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSegmentEditorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSegmentEditorWidget_t {
    QByteArrayData data[162];
    char stringdata0[3316];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSegmentEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSegmentEditorWidget_t qt_meta_stringdata_qMRMLSegmentEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "qMRMLSegmentEditorWidget"
QT_MOC_LITERAL(1, 25, 23), // "currentSegmentIDChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 23), // "sourceVolumeNodeChanged"
QT_MOC_LITERAL(4, 74, 18), // "vtkMRMLVolumeNode*"
QT_MOC_LITERAL(5, 93, 23), // "masterVolumeNodeChanged"
QT_MOC_LITERAL(6, 117, 23), // "segmentationNodeChanged"
QT_MOC_LITERAL(7, 141, 24), // "vtkMRMLSegmentationNode*"
QT_MOC_LITERAL(8, 166, 12), // "setMRMLScene"
QT_MOC_LITERAL(9, 179, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(10, 193, 8), // "newScene"
QT_MOC_LITERAL(11, 202, 24), // "setMRMLSegmentEditorNode"
QT_MOC_LITERAL(12, 227, 25), // "vtkMRMLSegmentEditorNode*"
QT_MOC_LITERAL(13, 253, 20), // "newSegmentEditorNode"
QT_MOC_LITERAL(14, 274, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(15, 295, 19), // "setSegmentationNode"
QT_MOC_LITERAL(16, 315, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(17, 328, 4), // "node"
QT_MOC_LITERAL(18, 333, 21), // "setSegmentationNodeID"
QT_MOC_LITERAL(19, 355, 6), // "nodeID"
QT_MOC_LITERAL(20, 362, 19), // "setSourceVolumeNode"
QT_MOC_LITERAL(21, 382, 21), // "setSourceVolumeNodeID"
QT_MOC_LITERAL(22, 404, 19), // "setMasterVolumeNode"
QT_MOC_LITERAL(23, 424, 21), // "setMasterVolumeNodeID"
QT_MOC_LITERAL(24, 446, 19), // "setCurrentSegmentID"
QT_MOC_LITERAL(25, 466, 9), // "segmentID"
QT_MOC_LITERAL(26, 476, 21), // "setActiveEffectByName"
QT_MOC_LITERAL(27, 498, 10), // "effectName"
QT_MOC_LITERAL(28, 509, 16), // "saveStateForUndo"
QT_MOC_LITERAL(29, 526, 12), // "updateVolume"
QT_MOC_LITERAL(30, 539, 9), // "volumePtr"
QT_MOC_LITERAL(31, 549, 5), // "bool&"
QT_MOC_LITERAL(32, 555, 7), // "success"
QT_MOC_LITERAL(33, 563, 34), // "setSegmentationNodeSelectorVi..."
QT_MOC_LITERAL(34, 598, 34), // "setSourceVolumeNodeSelectorVi..."
QT_MOC_LITERAL(35, 633, 27), // "setAutoShowSourceVolumeNode"
QT_MOC_LITERAL(36, 661, 37), // "setSwitchToSegmentationsButto..."
QT_MOC_LITERAL(37, 699, 14), // "setUndoEnabled"
QT_MOC_LITERAL(38, 714, 28), // "setMaximumNumberOfUndoStates"
QT_MOC_LITERAL(39, 743, 11), // "setReadOnly"
QT_MOC_LITERAL(40, 755, 9), // "aReadOnly"
QT_MOC_LITERAL(41, 765, 38), // "toggleSourceVolumeIntensityMa..."
QT_MOC_LITERAL(42, 804, 34), // "setMasterVolumeNodeSelectorVi..."
QT_MOC_LITERAL(43, 839, 7), // "visible"
QT_MOC_LITERAL(44, 847, 27), // "setAutoShowMasterVolumeNode"
QT_MOC_LITERAL(45, 875, 8), // "autoShow"
QT_MOC_LITERAL(46, 884, 38), // "toggleMasterVolumeIntensityMa..."
QT_MOC_LITERAL(47, 923, 4), // "undo"
QT_MOC_LITERAL(48, 928, 4), // "redo"
QT_MOC_LITERAL(49, 933, 24), // "installKeyboardShortcuts"
QT_MOC_LITERAL(50, 958, 8), // "QWidget*"
QT_MOC_LITERAL(51, 967, 6), // "parent"
QT_MOC_LITERAL(52, 974, 26), // "uninstallKeyboardShortcuts"
QT_MOC_LITERAL(53, 1001, 17), // "turnOffLightboxes"
QT_MOC_LITERAL(54, 1019, 14), // "hideLabelLayer"
QT_MOC_LITERAL(55, 1034, 20), // "setEffectButtonStyle"
QT_MOC_LITERAL(56, 1055, 19), // "Qt::ToolButtonStyle"
QT_MOC_LITERAL(57, 1075, 15), // "toolButtonStyle"
QT_MOC_LITERAL(58, 1091, 20), // "setEffectColumnCount"
QT_MOC_LITERAL(59, 1112, 11), // "columnCount"
QT_MOC_LITERAL(60, 1124, 16), // "updateEffectList"
QT_MOC_LITERAL(61, 1141, 30), // "showSourceVolumeInSliceViewers"
QT_MOC_LITERAL(62, 1172, 21), // "forceShowInBackground"
QT_MOC_LITERAL(63, 1194, 8), // "fitSlice"
QT_MOC_LITERAL(64, 1203, 30), // "showMasterVolumeInSliceViewers"
QT_MOC_LITERAL(65, 1234, 30), // "rotateSliceViewsToSegmentation"
QT_MOC_LITERAL(66, 1265, 18), // "setInteractionNode"
QT_MOC_LITERAL(67, 1284, 23), // "vtkMRMLInteractionNode*"
QT_MOC_LITERAL(68, 1308, 15), // "interactionNode"
QT_MOC_LITERAL(69, 1324, 21), // "selectPreviousSegment"
QT_MOC_LITERAL(70, 1346, 17), // "selectNextSegment"
QT_MOC_LITERAL(71, 1364, 21), // "selectSegmentAtOffset"
QT_MOC_LITERAL(72, 1386, 6), // "offset"
QT_MOC_LITERAL(73, 1393, 10), // "jumpSlices"
QT_MOC_LITERAL(74, 1404, 31), // "setJumpToSelectedSegmentEnabled"
QT_MOC_LITERAL(75, 1436, 6), // "enable"
QT_MOC_LITERAL(76, 1443, 25), // "onSegmentationNodeChanged"
QT_MOC_LITERAL(77, 1469, 25), // "onSourceVolumeNodeChanged"
QT_MOC_LITERAL(78, 1495, 25), // "onSegmentSelectionChanged"
QT_MOC_LITERAL(79, 1521, 14), // "QItemSelection"
QT_MOC_LITERAL(80, 1536, 8), // "selected"
QT_MOC_LITERAL(81, 1545, 10), // "deselected"
QT_MOC_LITERAL(82, 1556, 25), // "onInteractionNodeModified"
QT_MOC_LITERAL(83, 1582, 21), // "onEffectButtonClicked"
QT_MOC_LITERAL(84, 1604, 16), // "QAbstractButton*"
QT_MOC_LITERAL(85, 1621, 6), // "button"
QT_MOC_LITERAL(86, 1628, 22), // "onSelectEffectShortcut"
QT_MOC_LITERAL(87, 1651, 23), // "onSelectSegmentShortcut"
QT_MOC_LITERAL(88, 1675, 12), // "onAddSegment"
QT_MOC_LITERAL(89, 1688, 15), // "onRemoveSegment"
QT_MOC_LITERAL(90, 1704, 23), // "onSwitchToSegmentations"
QT_MOC_LITERAL(91, 1728, 22), // "onCreateSurfaceToggled"
QT_MOC_LITERAL(92, 1751, 2), // "on"
QT_MOC_LITERAL(93, 1754, 21), // "onSegmentAddedRemoved"
QT_MOC_LITERAL(94, 1776, 31), // "onSourceVolumeImageDataModified"
QT_MOC_LITERAL(95, 1808, 15), // "onLayoutChanged"
QT_MOC_LITERAL(96, 1824, 11), // "layoutIndex"
QT_MOC_LITERAL(97, 1836, 29), // "onSegmentationDisplayModified"
QT_MOC_LITERAL(98, 1866, 17), // "onMaskModeChanged"
QT_MOC_LITERAL(99, 1884, 34), // "onSourceVolumeIntensityMaskCh..."
QT_MOC_LITERAL(100, 1919, 7), // "checked"
QT_MOC_LITERAL(101, 1927, 39), // "onSourceVolumeIntensityMaskRa..."
QT_MOC_LITERAL(102, 1967, 3), // "low"
QT_MOC_LITERAL(103, 1971, 4), // "high"
QT_MOC_LITERAL(104, 1976, 22), // "onOverwriteModeChanged"
QT_MOC_LITERAL(105, 1999, 24), // "onMRMLSceneEndCloseEvent"
QT_MOC_LITERAL(106, 2024, 31), // "onMRMLSceneEndBatchProcessEvent"
QT_MOC_LITERAL(107, 2056, 26), // "initializeParameterSetNode"
QT_MOC_LITERAL(108, 2083, 26), // "updateUndoRedoButtonsState"
QT_MOC_LITERAL(109, 2110, 28), // "onSegmentationHistoryChanged"
QT_MOC_LITERAL(110, 2139, 27), // "onImportExportActionClicked"
QT_MOC_LITERAL(111, 2167, 28), // "onExportToFilesActionClicked"
QT_MOC_LITERAL(112, 2196, 20), // "updateMaskingSection"
QT_MOC_LITERAL(113, 2217, 40), // "updateSliceRotateWarningButto..."
QT_MOC_LITERAL(114, 2258, 30), // "showSegmentationGeometryDialog"
QT_MOC_LITERAL(115, 2289, 21), // "mrmlSegmentEditorNode"
QT_MOC_LITERAL(116, 2311, 16), // "segmentationNode"
QT_MOC_LITERAL(117, 2328, 18), // "segmentationNodeID"
QT_MOC_LITERAL(118, 2347, 16), // "sourceVolumeNode"
QT_MOC_LITERAL(119, 2364, 18), // "sourceVolumeNodeID"
QT_MOC_LITERAL(120, 2383, 16), // "masterVolumeNode"
QT_MOC_LITERAL(121, 2400, 18), // "masterVolumeNodeID"
QT_MOC_LITERAL(122, 2419, 16), // "currentSegmentID"
QT_MOC_LITERAL(123, 2436, 12), // "activeEffect"
QT_MOC_LITERAL(124, 2449, 35), // "qSlicerSegmentEditorAbstractE..."
QT_MOC_LITERAL(125, 2485, 15), // "setActiveEffect"
QT_MOC_LITERAL(126, 2501, 6), // "effect"
QT_MOC_LITERAL(127, 2508, 12), // "effectByName"
QT_MOC_LITERAL(128, 2521, 4), // "name"
QT_MOC_LITERAL(129, 2526, 20), // "availableEffectNames"
QT_MOC_LITERAL(130, 2547, 18), // "setEffectNameOrder"
QT_MOC_LITERAL(131, 2566, 11), // "effectNames"
QT_MOC_LITERAL(132, 2578, 15), // "effectNameOrder"
QT_MOC_LITERAL(133, 2594, 11), // "effectCount"
QT_MOC_LITERAL(134, 2606, 13), // "effectByIndex"
QT_MOC_LITERAL(135, 2620, 5), // "index"
QT_MOC_LITERAL(136, 2626, 21), // "setupViewObservations"
QT_MOC_LITERAL(137, 2648, 22), // "removeViewObservations"
QT_MOC_LITERAL(138, 2671, 36), // "segmentationNodeSelectorAddAt..."
QT_MOC_LITERAL(139, 2708, 8), // "nodeType"
QT_MOC_LITERAL(140, 2717, 13), // "attributeName"
QT_MOC_LITERAL(141, 2731, 14), // "attributeValue"
QT_MOC_LITERAL(142, 2746, 39), // "segmentationNodeSelectorRemov..."
QT_MOC_LITERAL(143, 2786, 36), // "sourceVolumeNodeSelectorAddAt..."
QT_MOC_LITERAL(144, 2823, 39), // "sourceVolumeNodeSelectorRemov..."
QT_MOC_LITERAL(145, 2863, 36), // "masterVolumeNodeSelectorAddAt..."
QT_MOC_LITERAL(146, 2900, 39), // "masterVolumeNodeSelectorRemov..."
QT_MOC_LITERAL(147, 2940, 31), // "segmentationNodeSelectorVisible"
QT_MOC_LITERAL(148, 2972, 31), // "sourceVolumeNodeSelectorVisible"
QT_MOC_LITERAL(149, 3004, 24), // "autoShowSourceVolumeNode"
QT_MOC_LITERAL(150, 3029, 31), // "masterVolumeNodeSelectorVisible"
QT_MOC_LITERAL(151, 3061, 24), // "autoShowMasterVolumeNode"
QT_MOC_LITERAL(152, 3086, 34), // "switchToSegmentationsButtonVi..."
QT_MOC_LITERAL(153, 3121, 11), // "undoEnabled"
QT_MOC_LITERAL(154, 3133, 25), // "maximumNumberOfUndoStates"
QT_MOC_LITERAL(155, 3159, 8), // "readOnly"
QT_MOC_LITERAL(156, 3168, 17), // "effectButtonStyle"
QT_MOC_LITERAL(157, 3186, 17), // "effectColumnCount"
QT_MOC_LITERAL(158, 3204, 23), // "unorderedEffectsVisible"
QT_MOC_LITERAL(159, 3228, 34), // "defaultTerminologyEntrySettin..."
QT_MOC_LITERAL(160, 3263, 23), // "defaultTerminologyEntry"
QT_MOC_LITERAL(161, 3287, 28) // "jumpToSelectedSegmentEnabled"

    },
    "qMRMLSegmentEditorWidget\0"
    "currentSegmentIDChanged\0\0"
    "sourceVolumeNodeChanged\0vtkMRMLVolumeNode*\0"
    "masterVolumeNodeChanged\0segmentationNodeChanged\0"
    "vtkMRMLSegmentationNode*\0setMRMLScene\0"
    "vtkMRMLScene*\0newScene\0setMRMLSegmentEditorNode\0"
    "vtkMRMLSegmentEditorNode*\0"
    "newSegmentEditorNode\0updateWidgetFromMRML\0"
    "setSegmentationNode\0vtkMRMLNode*\0node\0"
    "setSegmentationNodeID\0nodeID\0"
    "setSourceVolumeNode\0setSourceVolumeNodeID\0"
    "setMasterVolumeNode\0setMasterVolumeNodeID\0"
    "setCurrentSegmentID\0segmentID\0"
    "setActiveEffectByName\0effectName\0"
    "saveStateForUndo\0updateVolume\0volumePtr\0"
    "bool&\0success\0setSegmentationNodeSelectorVisible\0"
    "setSourceVolumeNodeSelectorVisible\0"
    "setAutoShowSourceVolumeNode\0"
    "setSwitchToSegmentationsButtonVisible\0"
    "setUndoEnabled\0setMaximumNumberOfUndoStates\0"
    "setReadOnly\0aReadOnly\0"
    "toggleSourceVolumeIntensityMaskEnabled\0"
    "setMasterVolumeNodeSelectorVisible\0"
    "visible\0setAutoShowMasterVolumeNode\0"
    "autoShow\0toggleMasterVolumeIntensityMaskEnabled\0"
    "undo\0redo\0installKeyboardShortcuts\0"
    "QWidget*\0parent\0uninstallKeyboardShortcuts\0"
    "turnOffLightboxes\0hideLabelLayer\0"
    "setEffectButtonStyle\0Qt::ToolButtonStyle\0"
    "toolButtonStyle\0setEffectColumnCount\0"
    "columnCount\0updateEffectList\0"
    "showSourceVolumeInSliceViewers\0"
    "forceShowInBackground\0fitSlice\0"
    "showMasterVolumeInSliceViewers\0"
    "rotateSliceViewsToSegmentation\0"
    "setInteractionNode\0vtkMRMLInteractionNode*\0"
    "interactionNode\0selectPreviousSegment\0"
    "selectNextSegment\0selectSegmentAtOffset\0"
    "offset\0jumpSlices\0setJumpToSelectedSegmentEnabled\0"
    "enable\0onSegmentationNodeChanged\0"
    "onSourceVolumeNodeChanged\0"
    "onSegmentSelectionChanged\0QItemSelection\0"
    "selected\0deselected\0onInteractionNodeModified\0"
    "onEffectButtonClicked\0QAbstractButton*\0"
    "button\0onSelectEffectShortcut\0"
    "onSelectSegmentShortcut\0onAddSegment\0"
    "onRemoveSegment\0onSwitchToSegmentations\0"
    "onCreateSurfaceToggled\0on\0"
    "onSegmentAddedRemoved\0"
    "onSourceVolumeImageDataModified\0"
    "onLayoutChanged\0layoutIndex\0"
    "onSegmentationDisplayModified\0"
    "onMaskModeChanged\0onSourceVolumeIntensityMaskChecked\0"
    "checked\0onSourceVolumeIntensityMaskRangeChanged\0"
    "low\0high\0onOverwriteModeChanged\0"
    "onMRMLSceneEndCloseEvent\0"
    "onMRMLSceneEndBatchProcessEvent\0"
    "initializeParameterSetNode\0"
    "updateUndoRedoButtonsState\0"
    "onSegmentationHistoryChanged\0"
    "onImportExportActionClicked\0"
    "onExportToFilesActionClicked\0"
    "updateMaskingSection\0"
    "updateSliceRotateWarningButtonVisibility\0"
    "showSegmentationGeometryDialog\0"
    "mrmlSegmentEditorNode\0segmentationNode\0"
    "segmentationNodeID\0sourceVolumeNode\0"
    "sourceVolumeNodeID\0masterVolumeNode\0"
    "masterVolumeNodeID\0currentSegmentID\0"
    "activeEffect\0qSlicerSegmentEditorAbstractEffect*\0"
    "setActiveEffect\0effect\0effectByName\0"
    "name\0availableEffectNames\0setEffectNameOrder\0"
    "effectNames\0effectNameOrder\0effectCount\0"
    "effectByIndex\0index\0setupViewObservations\0"
    "removeViewObservations\0"
    "segmentationNodeSelectorAddAttribute\0"
    "nodeType\0attributeName\0attributeValue\0"
    "segmentationNodeSelectorRemoveAttribute\0"
    "sourceVolumeNodeSelectorAddAttribute\0"
    "sourceVolumeNodeSelectorRemoveAttribute\0"
    "masterVolumeNodeSelectorAddAttribute\0"
    "masterVolumeNodeSelectorRemoveAttribute\0"
    "segmentationNodeSelectorVisible\0"
    "sourceVolumeNodeSelectorVisible\0"
    "autoShowSourceVolumeNode\0"
    "masterVolumeNodeSelectorVisible\0"
    "autoShowMasterVolumeNode\0"
    "switchToSegmentationsButtonVisible\0"
    "undoEnabled\0maximumNumberOfUndoStates\0"
    "readOnly\0effectButtonStyle\0effectColumnCount\0"
    "unorderedEffectsVisible\0"
    "defaultTerminologyEntrySettingsKey\0"
    "defaultTerminologyEntry\0"
    "jumpToSelectedSegmentEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSegmentEditorWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     108,   14, // methods
      15,  810, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  554,    2, 0x06 /* Public */,
       3,    1,  557,    2, 0x06 /* Public */,
       5,    1,  560,    2, 0x06 /* Public */,
       6,    1,  563,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  566,    2, 0x0a /* Public */,
      11,    1,  569,    2, 0x0a /* Public */,
      14,    0,  572,    2, 0x0a /* Public */,
      15,    1,  573,    2, 0x0a /* Public */,
      18,    1,  576,    2, 0x0a /* Public */,
      20,    1,  579,    2, 0x0a /* Public */,
      21,    1,  582,    2, 0x0a /* Public */,
      22,    1,  585,    2, 0x0a /* Public */,
      23,    1,  588,    2, 0x0a /* Public */,
      24,    1,  591,    2, 0x0a /* Public */,
      26,    1,  594,    2, 0x0a /* Public */,
      28,    0,  597,    2, 0x0a /* Public */,
      29,    2,  598,    2, 0x0a /* Public */,
      33,    1,  603,    2, 0x0a /* Public */,
      34,    1,  606,    2, 0x0a /* Public */,
      35,    1,  609,    2, 0x0a /* Public */,
      36,    1,  612,    2, 0x0a /* Public */,
      37,    1,  615,    2, 0x0a /* Public */,
      38,    1,  618,    2, 0x0a /* Public */,
      39,    1,  621,    2, 0x0a /* Public */,
      41,    0,  624,    2, 0x0a /* Public */,
      42,    1,  625,    2, 0x0a /* Public */,
      44,    1,  628,    2, 0x0a /* Public */,
      46,    0,  631,    2, 0x0a /* Public */,
      47,    0,  632,    2, 0x0a /* Public */,
      48,    0,  633,    2, 0x0a /* Public */,
      49,    1,  634,    2, 0x0a /* Public */,
      49,    0,  637,    2, 0x2a /* Public | MethodCloned */,
      52,    0,  638,    2, 0x0a /* Public */,
      53,    0,  639,    2, 0x0a /* Public */,
      54,    0,  640,    2, 0x0a /* Public */,
      55,    1,  641,    2, 0x0a /* Public */,
      58,    1,  644,    2, 0x0a /* Public */,
      60,    0,  647,    2, 0x0a /* Public */,
      61,    2,  648,    2, 0x0a /* Public */,
      61,    1,  653,    2, 0x2a /* Public | MethodCloned */,
      61,    0,  656,    2, 0x2a /* Public | MethodCloned */,
      64,    2,  657,    2, 0x0a /* Public */,
      64,    1,  662,    2, 0x2a /* Public | MethodCloned */,
      64,    0,  665,    2, 0x2a /* Public | MethodCloned */,
      65,    0,  666,    2, 0x0a /* Public */,
      66,    1,  667,    2, 0x0a /* Public */,
      69,    0,  670,    2, 0x0a /* Public */,
      70,    0,  671,    2, 0x0a /* Public */,
      71,    1,  672,    2, 0x0a /* Public */,
      73,    0,  675,    2, 0x0a /* Public */,
      74,    1,  676,    2, 0x0a /* Public */,
      76,    1,  679,    2, 0x09 /* Protected */,
      77,    1,  682,    2, 0x09 /* Protected */,
      78,    2,  685,    2, 0x09 /* Protected */,
      82,    0,  690,    2, 0x09 /* Protected */,
      83,    1,  691,    2, 0x09 /* Protected */,
      86,    0,  694,    2, 0x09 /* Protected */,
      87,    0,  695,    2, 0x09 /* Protected */,
      88,    0,  696,    2, 0x09 /* Protected */,
      89,    0,  697,    2, 0x09 /* Protected */,
      90,    0,  698,    2, 0x09 /* Protected */,
      91,    1,  699,    2, 0x09 /* Protected */,
      93,    0,  702,    2, 0x09 /* Protected */,
      94,    0,  703,    2, 0x09 /* Protected */,
      95,    1,  704,    2, 0x09 /* Protected */,
      97,    0,  707,    2, 0x09 /* Protected */,
      98,    1,  708,    2, 0x09 /* Protected */,
      99,    1,  711,    2, 0x09 /* Protected */,
     101,    2,  714,    2, 0x09 /* Protected */,
     104,    1,  719,    2, 0x09 /* Protected */,
     105,    0,  722,    2, 0x09 /* Protected */,
     106,    0,  723,    2, 0x09 /* Protected */,
     107,    0,  724,    2, 0x09 /* Protected */,
     108,    0,  725,    2, 0x09 /* Protected */,
     109,    0,  726,    2, 0x09 /* Protected */,
     110,    0,  727,    2, 0x09 /* Protected */,
     111,    0,  728,    2, 0x09 /* Protected */,
     112,    0,  729,    2, 0x09 /* Protected */,
     113,    0,  730,    2, 0x09 /* Protected */,
     114,    0,  731,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
     115,    0,  732,    2, 0x02 /* Public */,
     116,    0,  733,    2, 0x02 /* Public */,
     117,    0,  734,    2, 0x02 /* Public */,
     118,    0,  735,    2, 0x02 /* Public */,
     119,    0,  736,    2, 0x02 /* Public */,
     120,    0,  737,    2, 0x02 /* Public */,
     121,    0,  738,    2, 0x02 /* Public */,
     122,    0,  739,    2, 0x02 /* Public */,
     123,    0,  740,    2, 0x02 /* Public */,
     125,    1,  741,    2, 0x02 /* Public */,
     127,    1,  744,    2, 0x02 /* Public */,
     129,    0,  747,    2, 0x02 /* Public */,
     130,    1,  748,    2, 0x02 /* Public */,
     132,    0,  751,    2, 0x02 /* Public */,
     133,    0,  752,    2, 0x02 /* Public */,
     134,    1,  753,    2, 0x02 /* Public */,
     136,    0,  756,    2, 0x02 /* Public */,
     137,    0,  757,    2, 0x02 /* Public */,
     138,    3,  758,    2, 0x02 /* Public */,
     138,    2,  765,    2, 0x22 /* Public | MethodCloned */,
     142,    2,  770,    2, 0x02 /* Public */,
     143,    3,  775,    2, 0x02 /* Public */,
     143,    2,  782,    2, 0x22 /* Public | MethodCloned */,
     144,    2,  787,    2, 0x02 /* Public */,
     145,    3,  792,    2, 0x02 /* Public */,
     145,    2,  799,    2, 0x22 /* Public | MethodCloned */,
     146,    2,  804,    2, 0x02 /* Public */,
      68,    0,  809,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::VoidStar, 0x80000000 | 31,   30,   32,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 56,   57,
    QMetaType::Void, QMetaType::Int,   59,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   62,   63,
    QMetaType::Void, QMetaType::Bool,   62,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   62,   63,
    QMetaType::Void, QMetaType::Bool,   62,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 67,   68,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   72,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   75,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 79, 0x80000000 | 79,   80,   81,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 84,   85,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   92,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   96,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,  100,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,  102,  103,
    QMetaType::Void, QMetaType::Int,    2,
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

 // methods: parameters
    0x80000000 | 12,
    0x80000000 | 16,
    QMetaType::QString,
    0x80000000 | 16,
    QMetaType::QString,
    0x80000000 | 16,
    QMetaType::QString,
    QMetaType::QString,
    0x80000000 | 124,
    QMetaType::Void, 0x80000000 | 124,  126,
    0x80000000 | 124, QMetaType::QString,  128,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QStringList,  131,
    QMetaType::QStringList,
    QMetaType::Int,
    0x80000000 | 124, QMetaType::Int,  135,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QVariant,  139,  140,  141,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  139,  140,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  139,  140,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QVariant,  139,  140,  141,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  139,  140,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  139,  140,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QVariant,  139,  140,  141,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  139,  140,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  139,  140,
    0x80000000 | 67,

 // properties: name, type, flags
     147, QMetaType::Bool, 0x00095103,
     148, QMetaType::Bool, 0x00095103,
     149, QMetaType::Bool, 0x00095103,
     150, QMetaType::Bool, 0x00095103,
     151, QMetaType::Bool, 0x00095103,
     152, QMetaType::Bool, 0x00095103,
     153, QMetaType::Bool, 0x00095103,
     154, QMetaType::Int, 0x00095103,
     155, QMetaType::Bool, 0x00095103,
     156, 0x80000000 | 56, 0x0009510b,
     157, QMetaType::Int, 0x00095103,
     158, QMetaType::Bool, 0x00095103,
     159, QMetaType::QString, 0x00095103,
     160, QMetaType::QString, 0x00095103,
     161, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qMRMLSegmentEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSegmentEditorWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentSegmentIDChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->sourceVolumeNodeChanged((*reinterpret_cast< vtkMRMLVolumeNode*(*)>(_a[1]))); break;
        case 2: _t->masterVolumeNodeChanged((*reinterpret_cast< vtkMRMLVolumeNode*(*)>(_a[1]))); break;
        case 3: _t->segmentationNodeChanged((*reinterpret_cast< vtkMRMLSegmentationNode*(*)>(_a[1]))); break;
        case 4: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 5: _t->setMRMLSegmentEditorNode((*reinterpret_cast< vtkMRMLSegmentEditorNode*(*)>(_a[1]))); break;
        case 6: _t->updateWidgetFromMRML(); break;
        case 7: _t->setSegmentationNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 8: _t->setSegmentationNodeID((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setSourceVolumeNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 10: _t->setSourceVolumeNodeID((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->setMasterVolumeNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 12: _t->setMasterVolumeNodeID((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->setCurrentSegmentID((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->setActiveEffectByName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->saveStateForUndo(); break;
        case 16: _t->updateVolume((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 17: _t->setSegmentationNodeSelectorVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->setSourceVolumeNodeSelectorVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->setAutoShowSourceVolumeNode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->setSwitchToSegmentationsButtonVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->setUndoEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->setMaximumNumberOfUndoStates((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->setReadOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->toggleSourceVolumeIntensityMaskEnabled(); break;
        case 25: _t->setMasterVolumeNodeSelectorVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->setAutoShowMasterVolumeNode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->toggleMasterVolumeIntensityMaskEnabled(); break;
        case 28: _t->undo(); break;
        case 29: _t->redo(); break;
        case 30: _t->installKeyboardShortcuts((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 31: _t->installKeyboardShortcuts(); break;
        case 32: _t->uninstallKeyboardShortcuts(); break;
        case 33: { bool _r = _t->turnOffLightboxes();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: _t->hideLabelLayer(); break;
        case 35: _t->setEffectButtonStyle((*reinterpret_cast< Qt::ToolButtonStyle(*)>(_a[1]))); break;
        case 36: _t->setEffectColumnCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->updateEffectList(); break;
        case 38: _t->showSourceVolumeInSliceViewers((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 39: _t->showSourceVolumeInSliceViewers((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->showSourceVolumeInSliceViewers(); break;
        case 41: _t->showMasterVolumeInSliceViewers((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 42: _t->showMasterVolumeInSliceViewers((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->showMasterVolumeInSliceViewers(); break;
        case 44: _t->rotateSliceViewsToSegmentation(); break;
        case 45: _t->setInteractionNode((*reinterpret_cast< vtkMRMLInteractionNode*(*)>(_a[1]))); break;
        case 46: _t->selectPreviousSegment(); break;
        case 47: _t->selectNextSegment(); break;
        case 48: _t->selectSegmentAtOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->jumpSlices(); break;
        case 50: _t->setJumpToSelectedSegmentEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->onSegmentationNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 52: _t->onSourceVolumeNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 53: _t->onSegmentSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 54: _t->onInteractionNodeModified(); break;
        case 55: _t->onEffectButtonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 56: _t->onSelectEffectShortcut(); break;
        case 57: _t->onSelectSegmentShortcut(); break;
        case 58: _t->onAddSegment(); break;
        case 59: _t->onRemoveSegment(); break;
        case 60: _t->onSwitchToSegmentations(); break;
        case 61: _t->onCreateSurfaceToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: _t->onSegmentAddedRemoved(); break;
        case 63: _t->onSourceVolumeImageDataModified(); break;
        case 64: _t->onLayoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 65: _t->onSegmentationDisplayModified(); break;
        case 66: _t->onMaskModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 67: _t->onSourceVolumeIntensityMaskChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 68: _t->onSourceVolumeIntensityMaskRangeChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 69: _t->onOverwriteModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 70: _t->onMRMLSceneEndCloseEvent(); break;
        case 71: _t->onMRMLSceneEndBatchProcessEvent(); break;
        case 72: _t->initializeParameterSetNode(); break;
        case 73: _t->updateUndoRedoButtonsState(); break;
        case 74: _t->onSegmentationHistoryChanged(); break;
        case 75: _t->onImportExportActionClicked(); break;
        case 76: _t->onExportToFilesActionClicked(); break;
        case 77: _t->updateMaskingSection(); break;
        case 78: _t->updateSliceRotateWarningButtonVisibility(); break;
        case 79: _t->showSegmentationGeometryDialog(); break;
        case 80: { vtkMRMLSegmentEditorNode* _r = _t->mrmlSegmentEditorNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLSegmentEditorNode**>(_a[0]) = std::move(_r); }  break;
        case 81: { vtkMRMLNode* _r = _t->segmentationNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLNode**>(_a[0]) = std::move(_r); }  break;
        case 82: { QString _r = _t->segmentationNodeID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 83: { vtkMRMLNode* _r = _t->sourceVolumeNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLNode**>(_a[0]) = std::move(_r); }  break;
        case 84: { QString _r = _t->sourceVolumeNodeID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 85: { vtkMRMLNode* _r = _t->masterVolumeNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLNode**>(_a[0]) = std::move(_r); }  break;
        case 86: { QString _r = _t->masterVolumeNodeID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 87: { QString _r = _t->currentSegmentID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 88: { qSlicerSegmentEditorAbstractEffect* _r = _t->activeEffect();
            if (_a[0]) *reinterpret_cast< qSlicerSegmentEditorAbstractEffect**>(_a[0]) = std::move(_r); }  break;
        case 89: _t->setActiveEffect((*reinterpret_cast< qSlicerSegmentEditorAbstractEffect*(*)>(_a[1]))); break;
        case 90: { qSlicerSegmentEditorAbstractEffect* _r = _t->effectByName((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSegmentEditorAbstractEffect**>(_a[0]) = std::move(_r); }  break;
        case 91: { QStringList _r = _t->availableEffectNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 92: _t->setEffectNameOrder((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 93: { QStringList _r = _t->effectNameOrder();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 94: { int _r = _t->effectCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 95: { qSlicerSegmentEditorAbstractEffect* _r = _t->effectByIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSegmentEditorAbstractEffect**>(_a[0]) = std::move(_r); }  break;
        case 96: _t->setupViewObservations(); break;
        case 97: _t->removeViewObservations(); break;
        case 98: _t->segmentationNodeSelectorAddAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 99: _t->segmentationNodeSelectorAddAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 100: _t->segmentationNodeSelectorRemoveAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 101: _t->sourceVolumeNodeSelectorAddAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 102: _t->sourceVolumeNodeSelectorAddAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 103: _t->sourceVolumeNodeSelectorRemoveAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 104: _t->masterVolumeNodeSelectorAddAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 105: _t->masterVolumeNodeSelectorAddAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 106: _t->masterVolumeNodeSelectorRemoveAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 107: { vtkMRMLInteractionNode* _r = _t->interactionNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLInteractionNode**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLSegmentEditorWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSegmentEditorWidget::currentSegmentIDChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLSegmentEditorWidget::*)(vtkMRMLVolumeNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSegmentEditorWidget::sourceVolumeNodeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qMRMLSegmentEditorWidget::*)(vtkMRMLVolumeNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSegmentEditorWidget::masterVolumeNodeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (qMRMLSegmentEditorWidget::*)(vtkMRMLSegmentationNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSegmentEditorWidget::segmentationNodeChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSegmentEditorWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->segmentationNodeSelectorVisible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->sourceVolumeNodeSelectorVisible(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->autoShowSourceVolumeNode(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->masterVolumeNodeSelectorVisible(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->autoShowMasterVolumeNode(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->switchToSegmentationsButtonVisible(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->undoEnabled(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->maximumNumberOfUndoStates(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->readOnly(); break;
        case 9: *reinterpret_cast< Qt::ToolButtonStyle*>(_v) = _t->effectButtonStyle(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->effectColumnCount(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->unorderedEffectsVisible(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->defaultTerminologyEntrySettingsKey(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->defaultTerminologyEntry(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->jumpToSelectedSegmentEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSegmentEditorWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSegmentationNodeSelectorVisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setSourceVolumeNodeSelectorVisible(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setAutoShowSourceVolumeNode(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setMasterVolumeNodeSelectorVisible(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setAutoShowMasterVolumeNode(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setSwitchToSegmentationsButtonVisible(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setUndoEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setMaximumNumberOfUndoStates(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setEffectButtonStyle(*reinterpret_cast< Qt::ToolButtonStyle*>(_v)); break;
        case 10: _t->setEffectColumnCount(*reinterpret_cast< int*>(_v)); break;
        case 11: _t->setUnorderedEffectsVisible(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setDefaultTerminologyEntrySettingsKey(*reinterpret_cast< QString*>(_v)); break;
        case 13: _t->setDefaultTerminologyEntry(*reinterpret_cast< QString*>(_v)); break;
        case 14: _t->setJumpToSelectedSegmentEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSegmentEditorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSegmentEditorWidget.data,
    qt_meta_data_qMRMLSegmentEditorWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSegmentEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSegmentEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSegmentEditorWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLSegmentEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 108)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 108;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 108)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 108;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qMRMLSegmentEditorWidget::currentSegmentIDChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLSegmentEditorWidget::sourceVolumeNodeChanged(vtkMRMLVolumeNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qMRMLSegmentEditorWidget::masterVolumeNodeChanged(vtkMRMLVolumeNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qMRMLSegmentEditorWidget::segmentationNodeChanged(vtkMRMLSegmentationNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
