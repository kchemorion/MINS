/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSegmentEditorAbstractEffect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Segmentations/EditorEffects/qSlicerSegmentEditorAbstractEffect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSegmentEditorAbstractEffect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSegmentEditorAbstractEffect_t {
    QByteArrayData data[112];
    char stringdata0[1661];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSegmentEditorAbstractEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSegmentEditorAbstractEffect_t qt_meta_stringdata_qSlicerSegmentEditorAbstractEffect = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qSlicerSegmentEditorAbstractE..."
QT_MOC_LITERAL(1, 35, 17), // "updateGUIFromMRML"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 17), // "updateMRMLFromGUI"
QT_MOC_LITERAL(4, 72, 8), // "helpText"
QT_MOC_LITERAL(5, 81, 8), // "activate"
QT_MOC_LITERAL(6, 90, 10), // "deactivate"
QT_MOC_LITERAL(7, 101, 6), // "active"
QT_MOC_LITERAL(8, 108, 31), // "modifySelectedSegmentByLabelmap"
QT_MOC_LITERAL(9, 140, 21), // "vtkOrientedImageData*"
QT_MOC_LITERAL(10, 162, 16), // "modifierLabelmap"
QT_MOC_LITERAL(11, 179, 16), // "ModificationMode"
QT_MOC_LITERAL(12, 196, 16), // "modificationMode"
QT_MOC_LITERAL(13, 213, 12), // "const int[6]"
QT_MOC_LITERAL(14, 226, 18), // "modificationExtent"
QT_MOC_LITERAL(15, 245, 13), // "bypassMasking"
QT_MOC_LITERAL(16, 259, 10), // "QList<int>"
QT_MOC_LITERAL(17, 270, 6), // "extent"
QT_MOC_LITERAL(18, 277, 23), // "modifySegmentByLabelmap"
QT_MOC_LITERAL(19, 301, 24), // "vtkMRMLSegmentationNode*"
QT_MOC_LITERAL(20, 326, 16), // "segmentationNode"
QT_MOC_LITERAL(21, 343, 11), // "const char*"
QT_MOC_LITERAL(22, 355, 9), // "segmentID"
QT_MOC_LITERAL(23, 365, 14), // "applyImageMask"
QT_MOC_LITERAL(24, 380, 5), // "input"
QT_MOC_LITERAL(25, 386, 4), // "mask"
QT_MOC_LITERAL(26, 391, 9), // "fillValue"
QT_MOC_LITERAL(27, 401, 7), // "notMask"
QT_MOC_LITERAL(28, 409, 16), // "parameterSetNode"
QT_MOC_LITERAL(29, 426, 25), // "vtkMRMLSegmentEditorNode*"
QT_MOC_LITERAL(30, 452, 19), // "setParameterSetNode"
QT_MOC_LITERAL(31, 472, 4), // "node"
QT_MOC_LITERAL(32, 477, 5), // "scene"
QT_MOC_LITERAL(33, 483, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(34, 497, 12), // "optionsFrame"
QT_MOC_LITERAL(35, 510, 7), // "QFrame*"
QT_MOC_LITERAL(36, 518, 13), // "optionsLayout"
QT_MOC_LITERAL(37, 532, 12), // "QFormLayout*"
QT_MOC_LITERAL(38, 545, 10), // "addActor2D"
QT_MOC_LITERAL(39, 556, 12), // "qMRMLWidget*"
QT_MOC_LITERAL(40, 569, 10), // "viewWidget"
QT_MOC_LITERAL(41, 580, 11), // "vtkActor2D*"
QT_MOC_LITERAL(42, 592, 5), // "actor"
QT_MOC_LITERAL(43, 598, 13), // "removeActor2D"
QT_MOC_LITERAL(44, 612, 10), // "addActor3D"
QT_MOC_LITERAL(45, 623, 10), // "vtkProp3D*"
QT_MOC_LITERAL(46, 634, 13), // "removeActor3D"
QT_MOC_LITERAL(47, 648, 16), // "addOptionsWidget"
QT_MOC_LITERAL(48, 665, 8), // "QWidget*"
QT_MOC_LITERAL(49, 674, 16), // "newOptionsWidget"
QT_MOC_LITERAL(50, 691, 8), // "QLayout*"
QT_MOC_LITERAL(51, 700, 23), // "addLabeledOptionsWidget"
QT_MOC_LITERAL(52, 724, 5), // "label"
QT_MOC_LITERAL(53, 730, 9), // "cursorOff"
QT_MOC_LITERAL(54, 740, 8), // "cursorOn"
QT_MOC_LITERAL(55, 749, 12), // "selectEffect"
QT_MOC_LITERAL(56, 762, 10), // "effectName"
QT_MOC_LITERAL(57, 773, 9), // "parameter"
QT_MOC_LITERAL(58, 783, 4), // "name"
QT_MOC_LITERAL(59, 788, 16), // "integerParameter"
QT_MOC_LITERAL(60, 805, 15), // "doubleParameter"
QT_MOC_LITERAL(61, 821, 12), // "setParameter"
QT_MOC_LITERAL(62, 834, 5), // "value"
QT_MOC_LITERAL(63, 840, 19), // "setParameterDefault"
QT_MOC_LITERAL(64, 860, 18), // "setCommonParameter"
QT_MOC_LITERAL(65, 879, 25), // "setCommonParameterDefault"
QT_MOC_LITERAL(66, 905, 16), // "parameterDefined"
QT_MOC_LITERAL(67, 922, 22), // "commonParameterDefined"
QT_MOC_LITERAL(68, 945, 28), // "confirmCurrentSegmentVisible"
QT_MOC_LITERAL(69, 974, 23), // "defaultModifierLabelmap"
QT_MOC_LITERAL(70, 998, 12), // "maskLabelmap"
QT_MOC_LITERAL(71, 1011, 23), // "selectedSegmentLabelmap"
QT_MOC_LITERAL(72, 1035, 22), // "referenceGeometryImage"
QT_MOC_LITERAL(73, 1058, 21), // "sourceVolumeImageData"
QT_MOC_LITERAL(74, 1080, 21), // "masterVolumeImageData"
QT_MOC_LITERAL(75, 1102, 16), // "saveStateForUndo"
QT_MOC_LITERAL(76, 1119, 12), // "renderWindow"
QT_MOC_LITERAL(77, 1132, 16), // "vtkRenderWindow*"
QT_MOC_LITERAL(78, 1149, 8), // "renderer"
QT_MOC_LITERAL(79, 1158, 12), // "vtkRenderer*"
QT_MOC_LITERAL(80, 1171, 8), // "viewNode"
QT_MOC_LITERAL(81, 1180, 24), // "vtkMRMLAbstractViewNode*"
QT_MOC_LITERAL(82, 1205, 7), // "rasToXy"
QT_MOC_LITERAL(83, 1213, 3), // "ras"
QT_MOC_LITERAL(84, 1217, 17), // "qMRMLSliceWidget*"
QT_MOC_LITERAL(85, 1235, 11), // "sliceWidget"
QT_MOC_LITERAL(86, 1247, 8), // "xyzToRas"
QT_MOC_LITERAL(87, 1256, 8), // "inputXyz"
QT_MOC_LITERAL(88, 1265, 7), // "xyToRas"
QT_MOC_LITERAL(89, 1273, 2), // "xy"
QT_MOC_LITERAL(90, 1276, 8), // "xyzToIjk"
QT_MOC_LITERAL(91, 1285, 5), // "image"
QT_MOC_LITERAL(92, 1291, 21), // "vtkMRMLTransformNode*"
QT_MOC_LITERAL(93, 1313, 15), // "parentTransform"
QT_MOC_LITERAL(94, 1329, 7), // "xyToIjk"
QT_MOC_LITERAL(95, 1337, 11), // "forceRender"
QT_MOC_LITERAL(96, 1349, 14), // "scheduleRender"
QT_MOC_LITERAL(97, 1364, 12), // "sliceSpacing"
QT_MOC_LITERAL(98, 1377, 29), // "segmentationDisplayableInView"
QT_MOC_LITERAL(99, 1407, 5), // "title"
QT_MOC_LITERAL(100, 1413, 10), // "perSegment"
QT_MOC_LITERAL(101, 1424, 15), // "requireSegments"
QT_MOC_LITERAL(102, 1440, 27), // "showEffectCursorInSliceView"
QT_MOC_LITERAL(103, 1468, 28), // "showEffectCursorInThreeDView"
QT_MOC_LITERAL(104, 1497, 19), // "ModificationModeSet"
QT_MOC_LITERAL(105, 1517, 19), // "ModificationModeAdd"
QT_MOC_LITERAL(106, 1537, 22), // "ModificationModeRemove"
QT_MOC_LITERAL(107, 1560, 25), // "ModificationModeRemoveAll"
QT_MOC_LITERAL(108, 1586, 18), // "ConfirmationResult"
QT_MOC_LITERAL(109, 1605, 12), // "NotConfirmed"
QT_MOC_LITERAL(110, 1618, 22), // "ConfirmedWithoutDialog"
QT_MOC_LITERAL(111, 1641, 19) // "ConfirmedWithDialog"

    },
    "qSlicerSegmentEditorAbstractEffect\0"
    "updateGUIFromMRML\0\0updateMRMLFromGUI\0"
    "helpText\0activate\0deactivate\0active\0"
    "modifySelectedSegmentByLabelmap\0"
    "vtkOrientedImageData*\0modifierLabelmap\0"
    "ModificationMode\0modificationMode\0"
    "const int[6]\0modificationExtent\0"
    "bypassMasking\0QList<int>\0extent\0"
    "modifySegmentByLabelmap\0"
    "vtkMRMLSegmentationNode*\0segmentationNode\0"
    "const char*\0segmentID\0applyImageMask\0"
    "input\0mask\0fillValue\0notMask\0"
    "parameterSetNode\0vtkMRMLSegmentEditorNode*\0"
    "setParameterSetNode\0node\0scene\0"
    "vtkMRMLScene*\0optionsFrame\0QFrame*\0"
    "optionsLayout\0QFormLayout*\0addActor2D\0"
    "qMRMLWidget*\0viewWidget\0vtkActor2D*\0"
    "actor\0removeActor2D\0addActor3D\0"
    "vtkProp3D*\0removeActor3D\0addOptionsWidget\0"
    "QWidget*\0newOptionsWidget\0QLayout*\0"
    "addLabeledOptionsWidget\0label\0cursorOff\0"
    "cursorOn\0selectEffect\0effectName\0"
    "parameter\0name\0integerParameter\0"
    "doubleParameter\0setParameter\0value\0"
    "setParameterDefault\0setCommonParameter\0"
    "setCommonParameterDefault\0parameterDefined\0"
    "commonParameterDefined\0"
    "confirmCurrentSegmentVisible\0"
    "defaultModifierLabelmap\0maskLabelmap\0"
    "selectedSegmentLabelmap\0referenceGeometryImage\0"
    "sourceVolumeImageData\0masterVolumeImageData\0"
    "saveStateForUndo\0renderWindow\0"
    "vtkRenderWindow*\0renderer\0vtkRenderer*\0"
    "viewNode\0vtkMRMLAbstractViewNode*\0"
    "rasToXy\0ras\0qMRMLSliceWidget*\0sliceWidget\0"
    "xyzToRas\0inputXyz\0xyToRas\0xy\0xyzToIjk\0"
    "image\0vtkMRMLTransformNode*\0parentTransform\0"
    "xyToIjk\0forceRender\0scheduleRender\0"
    "sliceSpacing\0segmentationDisplayableInView\0"
    "title\0perSegment\0requireSegments\0"
    "showEffectCursorInSliceView\0"
    "showEffectCursorInThreeDView\0"
    "ModificationModeSet\0ModificationModeAdd\0"
    "ModificationModeRemove\0ModificationModeRemoveAll\0"
    "ConfirmationResult\0NotConfirmed\0"
    "ConfirmedWithoutDialog\0ConfirmedWithDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSegmentEditorAbstractEffect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      74,   14, // methods
       6,  698, // properties
       2,  716, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  384,    2, 0x0a /* Public */,
       3,    0,  385,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,  386,    2, 0x02 /* Public */,
       5,    0,  387,    2, 0x02 /* Public */,
       6,    0,  388,    2, 0x02 /* Public */,
       7,    0,  389,    2, 0x02 /* Public */,
       8,    4,  390,    2, 0x02 /* Public */,
       8,    3,  399,    2, 0x22 /* Public | MethodCloned */,
       8,    3,  406,    2, 0x02 /* Public */,
       8,    2,  413,    2, 0x22 /* Public | MethodCloned */,
       8,    4,  418,    2, 0x02 /* Public */,
       8,    3,  427,    2, 0x22 /* Public | MethodCloned */,
      18,    5,  434,    2, 0x02 /* Public */,
      18,    4,  445,    2, 0x22 /* Public | MethodCloned */,
      18,    6,  454,    2, 0x02 /* Public */,
      18,    5,  467,    2, 0x22 /* Public | MethodCloned */,
      23,    4,  478,    2, 0x02 /* Public */,
      23,    3,  487,    2, 0x22 /* Public | MethodCloned */,
      28,    0,  494,    2, 0x02 /* Public */,
      30,    1,  495,    2, 0x02 /* Public */,
      32,    0,  498,    2, 0x02 /* Public */,
      34,    0,  499,    2, 0x02 /* Public */,
      36,    0,  500,    2, 0x02 /* Public */,
      38,    2,  501,    2, 0x02 /* Public */,
      43,    2,  506,    2, 0x02 /* Public */,
      44,    2,  511,    2, 0x02 /* Public */,
      46,    2,  516,    2, 0x02 /* Public */,
      47,    1,  521,    2, 0x02 /* Public */,
      47,    1,  524,    2, 0x02 /* Public */,
      51,    2,  527,    2, 0x02 /* Public */,
      51,    2,  532,    2, 0x02 /* Public */,
      53,    1,  537,    2, 0x02 /* Public */,
      54,    1,  540,    2, 0x02 /* Public */,
      55,    1,  543,    2, 0x02 /* Public */,
      57,    1,  546,    2, 0x02 /* Public */,
      59,    1,  549,    2, 0x02 /* Public */,
      60,    1,  552,    2, 0x02 /* Public */,
      61,    2,  555,    2, 0x02 /* Public */,
      63,    2,  560,    2, 0x02 /* Public */,
      64,    2,  565,    2, 0x02 /* Public */,
      65,    2,  570,    2, 0x02 /* Public */,
      61,    2,  575,    2, 0x02 /* Public */,
      63,    2,  580,    2, 0x02 /* Public */,
      64,    2,  585,    2, 0x02 /* Public */,
      65,    2,  590,    2, 0x02 /* Public */,
      61,    2,  595,    2, 0x02 /* Public */,
      63,    2,  600,    2, 0x02 /* Public */,
      64,    2,  605,    2, 0x02 /* Public */,
      65,    2,  610,    2, 0x02 /* Public */,
      66,    1,  615,    2, 0x02 /* Public */,
      67,    1,  618,    2, 0x02 /* Public */,
      68,    0,  621,    2, 0x02 /* Public */,
      10,    0,  622,    2, 0x02 /* Public */,
      69,    0,  623,    2, 0x02 /* Public */,
      70,    0,  624,    2, 0x02 /* Public */,
      71,    0,  625,    2, 0x02 /* Public */,
      72,    0,  626,    2, 0x02 /* Public */,
      73,    0,  627,    2, 0x02 /* Public */,
      74,    0,  628,    2, 0x02 /* Public */,
      75,    0,  629,    2, 0x02 /* Public */,
      76,    1,  630,    2, 0x02 /* Public */,
      78,    1,  633,    2, 0x02 /* Public */,
      80,    1,  636,    2, 0x02 /* Public */,
      82,    2,  639,    2, 0x02 /* Public */,
      86,    2,  644,    2, 0x02 /* Public */,
      88,    2,  649,    2, 0x02 /* Public */,
      90,    4,  654,    2, 0x02 /* Public */,
      90,    3,  663,    2, 0x22 /* Public | MethodCloned */,
      94,    4,  670,    2, 0x02 /* Public */,
      94,    3,  679,    2, 0x22 /* Public | MethodCloned */,
      95,    1,  686,    2, 0x02 /* Public */,
      96,    1,  689,    2, 0x02 /* Public */,
      97,    1,  692,    2, 0x02 /* Public */,
      98,    1,  695,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11, 0x80000000 | 13, QMetaType::Bool,   10,   12,   14,   15,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11, 0x80000000 | 13,   10,   12,   14,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11, QMetaType::Bool,   10,   12,   15,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11, 0x80000000 | 16, QMetaType::Bool,   10,   12,   17,   15,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11, 0x80000000 | 16,   10,   12,   17,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 21, 0x80000000 | 9, 0x80000000 | 11, QMetaType::Bool,   20,   22,   10,   12,   15,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 21, 0x80000000 | 9, 0x80000000 | 11,   20,   22,   10,   12,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 21, 0x80000000 | 9, 0x80000000 | 11, 0x80000000 | 13, QMetaType::Bool,   20,   22,   10,   12,   14,   15,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 21, 0x80000000 | 9, 0x80000000 | 11, 0x80000000 | 13,   20,   22,   10,   12,   14,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, QMetaType::Double, QMetaType::Bool,   24,   25,   26,   27,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, QMetaType::Double,   24,   25,   26,
    0x80000000 | 29,
    QMetaType::Void, 0x80000000 | 29,   31,
    0x80000000 | 33,
    0x80000000 | 35,
    0x80000000 | 37,
    QMetaType::Void, 0x80000000 | 39, 0x80000000 | 41,   40,   42,
    QMetaType::Void, 0x80000000 | 39, 0x80000000 | 41,   40,   42,
    QMetaType::Void, 0x80000000 | 39, 0x80000000 | 45,   40,   42,
    QMetaType::Void, 0x80000000 | 39, 0x80000000 | 45,   40,   42,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void, 0x80000000 | 50,   49,
    0x80000000 | 48, QMetaType::QString, 0x80000000 | 48,   52,   49,
    0x80000000 | 48, QMetaType::QString, 0x80000000 | 50,   52,   49,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, QMetaType::QString,   56,
    QMetaType::QString, QMetaType::QString,   58,
    QMetaType::Int, QMetaType::QString,   58,
    QMetaType::Double, QMetaType::QString,   58,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   58,   62,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   58,   62,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   58,   62,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   58,   62,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   58,   62,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   58,   62,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   58,   62,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   58,   62,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,   58,   62,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,   58,   62,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,   58,   62,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,   58,   62,
    QMetaType::Bool, QMetaType::QString,   58,
    QMetaType::Bool, QMetaType::QString,   58,
    QMetaType::Int,
    0x80000000 | 9,
    0x80000000 | 9,
    0x80000000 | 9,
    0x80000000 | 9,
    0x80000000 | 9,
    0x80000000 | 9,
    0x80000000 | 9,
    QMetaType::Void,
    0x80000000 | 77, 0x80000000 | 39,   40,
    0x80000000 | 79, 0x80000000 | 39,   40,
    0x80000000 | 81, 0x80000000 | 39,   40,
    QMetaType::QPoint, QMetaType::QVector3D, 0x80000000 | 84,   83,   85,
    QMetaType::QVector3D, QMetaType::QVector3D, 0x80000000 | 84,   87,   85,
    QMetaType::QVector3D, QMetaType::QPoint, 0x80000000 | 84,   89,   85,
    QMetaType::QVector3D, QMetaType::QVector3D, 0x80000000 | 84, 0x80000000 | 9, 0x80000000 | 92,   87,   85,   91,   93,
    QMetaType::QVector3D, QMetaType::QVector3D, 0x80000000 | 84, 0x80000000 | 9,   87,   85,   91,
    QMetaType::QVector3D, QMetaType::QPoint, 0x80000000 | 84, 0x80000000 | 9, 0x80000000 | 92,   89,   85,   91,   93,
    QMetaType::QVector3D, QMetaType::QPoint, 0x80000000 | 84, 0x80000000 | 9,   89,   85,   91,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Double, 0x80000000 | 84,   85,
    QMetaType::Bool, 0x80000000 | 81,   80,

 // properties: name, type, flags
      58, QMetaType::QString, 0x00095103,
      99, QMetaType::QString, 0x00095103,
     100, QMetaType::Bool, 0x00095103,
     101, QMetaType::Bool, 0x00095103,
     102, QMetaType::Bool, 0x00095103,
     103, QMetaType::Bool, 0x00095103,

 // enums: name, alias, flags, count, data
      11,   11, 0x0,    4,  726,
     108,  108, 0x0,    3,  734,

 // enum data: key, value
     104, uint(qSlicerSegmentEditorAbstractEffect::ModificationModeSet),
     105, uint(qSlicerSegmentEditorAbstractEffect::ModificationModeAdd),
     106, uint(qSlicerSegmentEditorAbstractEffect::ModificationModeRemove),
     107, uint(qSlicerSegmentEditorAbstractEffect::ModificationModeRemoveAll),
     109, uint(qSlicerSegmentEditorAbstractEffect::NotConfirmed),
     110, uint(qSlicerSegmentEditorAbstractEffect::ConfirmedWithoutDialog),
     111, uint(qSlicerSegmentEditorAbstractEffect::ConfirmedWithDialog),

       0        // eod
};

void qSlicerSegmentEditorAbstractEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSegmentEditorAbstractEffect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateGUIFromMRML(); break;
        case 1: _t->updateMRMLFromGUI(); break;
        case 2: { QString _r = _t->helpText();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->activate(); break;
        case 4: _t->deactivate(); break;
        case 5: { bool _r = _t->active();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->modifySelectedSegmentByLabelmap((*reinterpret_cast< vtkOrientedImageData*(*)>(_a[1])),(*reinterpret_cast< ModificationMode(*)>(_a[2])),(*reinterpret_cast< const int(*)[6]>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 7: _t->modifySelectedSegmentByLabelmap((*reinterpret_cast< vtkOrientedImageData*(*)>(_a[1])),(*reinterpret_cast< ModificationMode(*)>(_a[2])),(*reinterpret_cast< const int(*)[6]>(_a[3]))); break;
        case 8: _t->modifySelectedSegmentByLabelmap((*reinterpret_cast< vtkOrientedImageData*(*)>(_a[1])),(*reinterpret_cast< ModificationMode(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 9: _t->modifySelectedSegmentByLabelmap((*reinterpret_cast< vtkOrientedImageData*(*)>(_a[1])),(*reinterpret_cast< ModificationMode(*)>(_a[2]))); break;
        case 10: _t->modifySelectedSegmentByLabelmap((*reinterpret_cast< vtkOrientedImageData*(*)>(_a[1])),(*reinterpret_cast< ModificationMode(*)>(_a[2])),(*reinterpret_cast< QList<int>(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 11: _t->modifySelectedSegmentByLabelmap((*reinterpret_cast< vtkOrientedImageData*(*)>(_a[1])),(*reinterpret_cast< ModificationMode(*)>(_a[2])),(*reinterpret_cast< QList<int>(*)>(_a[3]))); break;
        case 12: _t->modifySegmentByLabelmap((*reinterpret_cast< vtkMRMLSegmentationNode*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< vtkOrientedImageData*(*)>(_a[3])),(*reinterpret_cast< ModificationMode(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 13: _t->modifySegmentByLabelmap((*reinterpret_cast< vtkMRMLSegmentationNode*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< vtkOrientedImageData*(*)>(_a[3])),(*reinterpret_cast< ModificationMode(*)>(_a[4]))); break;
        case 14: _t->modifySegmentByLabelmap((*reinterpret_cast< vtkMRMLSegmentationNode*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< vtkOrientedImageData*(*)>(_a[3])),(*reinterpret_cast< ModificationMode(*)>(_a[4])),(*reinterpret_cast< const int(*)[6]>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 15: _t->modifySegmentByLabelmap((*reinterpret_cast< vtkMRMLSegmentationNode*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< vtkOrientedImageData*(*)>(_a[3])),(*reinterpret_cast< ModificationMode(*)>(_a[4])),(*reinterpret_cast< const int(*)[6]>(_a[5]))); break;
        case 16: _t->applyImageMask((*reinterpret_cast< vtkOrientedImageData*(*)>(_a[1])),(*reinterpret_cast< vtkOrientedImageData*(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 17: _t->applyImageMask((*reinterpret_cast< vtkOrientedImageData*(*)>(_a[1])),(*reinterpret_cast< vtkOrientedImageData*(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 18: { vtkMRMLSegmentEditorNode* _r = _t->parameterSetNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLSegmentEditorNode**>(_a[0]) = std::move(_r); }  break;
        case 19: _t->setParameterSetNode((*reinterpret_cast< vtkMRMLSegmentEditorNode*(*)>(_a[1]))); break;
        case 20: { vtkMRMLScene* _r = _t->scene();
            if (_a[0]) *reinterpret_cast< vtkMRMLScene**>(_a[0]) = std::move(_r); }  break;
        case 21: { QFrame* _r = _t->optionsFrame();
            if (_a[0]) *reinterpret_cast< QFrame**>(_a[0]) = std::move(_r); }  break;
        case 22: { QFormLayout* _r = _t->optionsLayout();
            if (_a[0]) *reinterpret_cast< QFormLayout**>(_a[0]) = std::move(_r); }  break;
        case 23: _t->addActor2D((*reinterpret_cast< qMRMLWidget*(*)>(_a[1])),(*reinterpret_cast< vtkActor2D*(*)>(_a[2]))); break;
        case 24: _t->removeActor2D((*reinterpret_cast< qMRMLWidget*(*)>(_a[1])),(*reinterpret_cast< vtkActor2D*(*)>(_a[2]))); break;
        case 25: _t->addActor3D((*reinterpret_cast< qMRMLWidget*(*)>(_a[1])),(*reinterpret_cast< vtkProp3D*(*)>(_a[2]))); break;
        case 26: _t->removeActor3D((*reinterpret_cast< qMRMLWidget*(*)>(_a[1])),(*reinterpret_cast< vtkProp3D*(*)>(_a[2]))); break;
        case 27: _t->addOptionsWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 28: _t->addOptionsWidget((*reinterpret_cast< QLayout*(*)>(_a[1]))); break;
        case 29: { QWidget* _r = _t->addLabeledOptionsWidget((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        case 30: { QWidget* _r = _t->addLabeledOptionsWidget((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QLayout*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        case 31: _t->cursorOff((*reinterpret_cast< qMRMLWidget*(*)>(_a[1]))); break;
        case 32: _t->cursorOn((*reinterpret_cast< qMRMLWidget*(*)>(_a[1]))); break;
        case 33: _t->selectEffect((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: { QString _r = _t->parameter((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 35: { int _r = _t->integerParameter((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 36: { double _r = _t->doubleParameter((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->setParameter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 38: _t->setParameterDefault((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 39: _t->setCommonParameter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 40: _t->setCommonParameterDefault((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 41: _t->setParameter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 42: _t->setParameterDefault((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 43: _t->setCommonParameter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 44: _t->setCommonParameterDefault((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->setParameter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 46: _t->setParameterDefault((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 47: _t->setCommonParameter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 48: _t->setCommonParameterDefault((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 49: { bool _r = _t->parameterDefined((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 50: { bool _r = _t->commonParameterDefined((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 51: { int _r = _t->confirmCurrentSegmentVisible();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 52: { vtkOrientedImageData* _r = _t->modifierLabelmap();
            if (_a[0]) *reinterpret_cast< vtkOrientedImageData**>(_a[0]) = std::move(_r); }  break;
        case 53: { vtkOrientedImageData* _r = _t->defaultModifierLabelmap();
            if (_a[0]) *reinterpret_cast< vtkOrientedImageData**>(_a[0]) = std::move(_r); }  break;
        case 54: { vtkOrientedImageData* _r = _t->maskLabelmap();
            if (_a[0]) *reinterpret_cast< vtkOrientedImageData**>(_a[0]) = std::move(_r); }  break;
        case 55: { vtkOrientedImageData* _r = _t->selectedSegmentLabelmap();
            if (_a[0]) *reinterpret_cast< vtkOrientedImageData**>(_a[0]) = std::move(_r); }  break;
        case 56: { vtkOrientedImageData* _r = _t->referenceGeometryImage();
            if (_a[0]) *reinterpret_cast< vtkOrientedImageData**>(_a[0]) = std::move(_r); }  break;
        case 57: { vtkOrientedImageData* _r = _t->sourceVolumeImageData();
            if (_a[0]) *reinterpret_cast< vtkOrientedImageData**>(_a[0]) = std::move(_r); }  break;
        case 58: { vtkOrientedImageData* _r = _t->masterVolumeImageData();
            if (_a[0]) *reinterpret_cast< vtkOrientedImageData**>(_a[0]) = std::move(_r); }  break;
        case 59: _t->saveStateForUndo(); break;
        case 60: { vtkRenderWindow* _r = _t->renderWindow((*reinterpret_cast< qMRMLWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< vtkRenderWindow**>(_a[0]) = std::move(_r); }  break;
        case 61: { vtkRenderer* _r = _t->renderer((*reinterpret_cast< qMRMLWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< vtkRenderer**>(_a[0]) = std::move(_r); }  break;
        case 62: { vtkMRMLAbstractViewNode* _r = _t->viewNode((*reinterpret_cast< qMRMLWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< vtkMRMLAbstractViewNode**>(_a[0]) = std::move(_r); }  break;
        case 63: { QPoint _r = _t->rasToXy((*reinterpret_cast< QVector3D(*)>(_a[1])),(*reinterpret_cast< qMRMLSliceWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = std::move(_r); }  break;
        case 64: { QVector3D _r = _t->xyzToRas((*reinterpret_cast< QVector3D(*)>(_a[1])),(*reinterpret_cast< qMRMLSliceWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 65: { QVector3D _r = _t->xyToRas((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< qMRMLSliceWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 66: { QVector3D _r = _t->xyzToIjk((*reinterpret_cast< QVector3D(*)>(_a[1])),(*reinterpret_cast< qMRMLSliceWidget*(*)>(_a[2])),(*reinterpret_cast< vtkOrientedImageData*(*)>(_a[3])),(*reinterpret_cast< vtkMRMLTransformNode*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 67: { QVector3D _r = _t->xyzToIjk((*reinterpret_cast< QVector3D(*)>(_a[1])),(*reinterpret_cast< qMRMLSliceWidget*(*)>(_a[2])),(*reinterpret_cast< vtkOrientedImageData*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 68: { QVector3D _r = _t->xyToIjk((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< qMRMLSliceWidget*(*)>(_a[2])),(*reinterpret_cast< vtkOrientedImageData*(*)>(_a[3])),(*reinterpret_cast< vtkMRMLTransformNode*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 69: { QVector3D _r = _t->xyToIjk((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< qMRMLSliceWidget*(*)>(_a[2])),(*reinterpret_cast< vtkOrientedImageData*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 70: _t->forceRender((*reinterpret_cast< qMRMLWidget*(*)>(_a[1]))); break;
        case 71: _t->scheduleRender((*reinterpret_cast< qMRMLWidget*(*)>(_a[1]))); break;
        case 72: { double _r = _t->sliceSpacing((*reinterpret_cast< qMRMLSliceWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 73: { bool _r = _t->segmentationDisplayableInView((*reinterpret_cast< vtkMRMLAbstractViewNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerSegmentEditorAbstractEffect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->perSegment(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->requireSegments(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showEffectCursorInSliceView(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->showEffectCursorInThreeDView(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerSegmentEditorAbstractEffect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPerSegment(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setRequireSegments(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setShowEffectCursorInSliceView(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setShowEffectCursorInThreeDView(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSegmentEditorAbstractEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSegmentEditorAbstractEffect.data,
    qt_meta_data_qSlicerSegmentEditorAbstractEffect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSegmentEditorAbstractEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSegmentEditorAbstractEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSegmentEditorAbstractEffect.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerSegmentEditorAbstractEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
