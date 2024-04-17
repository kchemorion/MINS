/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSliceControllerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLSliceControllerWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSliceControllerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSliceControllerWidget_t {
    QByteArrayData data[139];
    char stringdata0[2383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSliceControllerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSliceControllerWidget_t qt_meta_stringdata_qMRMLSliceControllerWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "qMRMLSliceControllerWidget"
QT_MOC_LITERAL(1, 27, 26), // "imageDataConnectionChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 19), // "vtkAlgorithmOutput*"
QT_MOC_LITERAL(4, 75, 19), // "imageDataConnection"
QT_MOC_LITERAL(5, 95, 15), // "renderRequested"
QT_MOC_LITERAL(6, 111, 19), // "nodeAboutToBeEdited"
QT_MOC_LITERAL(7, 131, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(8, 144, 4), // "node"
QT_MOC_LITERAL(9, 149, 12), // "setMRMLScene"
QT_MOC_LITERAL(10, 162, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(11, 176, 8), // "newScene"
QT_MOC_LITERAL(12, 185, 16), // "setMRMLSliceNode"
QT_MOC_LITERAL(13, 202, 17), // "vtkMRMLSliceNode*"
QT_MOC_LITERAL(14, 220, 12), // "newSliceNode"
QT_MOC_LITERAL(15, 233, 22), // "setImageDataConnection"
QT_MOC_LITERAL(16, 256, 22), // "newImageDataConnection"
QT_MOC_LITERAL(17, 279, 16), // "setSliceViewSize"
QT_MOC_LITERAL(18, 296, 7), // "newSize"
QT_MOC_LITERAL(19, 304, 20), // "fitSliceToBackground"
QT_MOC_LITERAL(20, 325, 19), // "setSliceOrientation"
QT_MOC_LITERAL(21, 345, 11), // "orientation"
QT_MOC_LITERAL(22, 357, 24), // "setShowSliceOffsetSlider"
QT_MOC_LITERAL(23, 382, 4), // "show"
QT_MOC_LITERAL(24, 387, 19), // "setSliceOffsetValue"
QT_MOC_LITERAL(25, 407, 6), // "offset"
QT_MOC_LITERAL(26, 414, 21), // "trackSliceOffsetValue"
QT_MOC_LITERAL(27, 436, 15), // "setSliceVisible"
QT_MOC_LITERAL(28, 452, 7), // "visible"
QT_MOC_LITERAL(29, 460, 12), // "setSliceLink"
QT_MOC_LITERAL(30, 473, 6), // "linked"
QT_MOC_LITERAL(31, 480, 12), // "setHotLinked"
QT_MOC_LITERAL(32, 493, 3), // "hot"
QT_MOC_LITERAL(33, 497, 20), // "setMoreButtonVisible"
QT_MOC_LITERAL(34, 518, 19), // "isMoreButtonVisible"
QT_MOC_LITERAL(35, 538, 22), // "moveBackgroundComboBox"
QT_MOC_LITERAL(36, 561, 4), // "move"
QT_MOC_LITERAL(37, 566, 36), // "updateSegmentationControlsVis..."
QT_MOC_LITERAL(38, 603, 29), // "rotateSliceToLowestVolumeAxes"
QT_MOC_LITERAL(39, 633, 21), // "setSegmentationHidden"
QT_MOC_LITERAL(40, 655, 4), // "hide"
QT_MOC_LITERAL(41, 660, 17), // "setLabelMapHidden"
QT_MOC_LITERAL(42, 678, 19), // "setForegroundHidden"
QT_MOC_LITERAL(43, 698, 19), // "setBackgroundHidden"
QT_MOC_LITERAL(44, 718, 22), // "setSegmentationOpacity"
QT_MOC_LITERAL(45, 741, 7), // "opacity"
QT_MOC_LITERAL(46, 749, 18), // "setLabelMapOpacity"
QT_MOC_LITERAL(47, 768, 20), // "setForegroundOpacity"
QT_MOC_LITERAL(48, 789, 20), // "setBackgroundOpacity"
QT_MOC_LITERAL(49, 810, 29), // "toggleSegmentationOutlineFill"
QT_MOC_LITERAL(50, 840, 16), // "showLabelOutline"
QT_MOC_LITERAL(51, 857, 18), // "showReformatWidget"
QT_MOC_LITERAL(52, 876, 26), // "lockReformatWidgetToCamera"
QT_MOC_LITERAL(53, 903, 4), // "lock"
QT_MOC_LITERAL(54, 908, 28), // "showSlabReconstructionWidget"
QT_MOC_LITERAL(55, 937, 35), // "toggleSlabReconstructionInter..."
QT_MOC_LITERAL(56, 973, 11), // "interactive"
QT_MOC_LITERAL(57, 985, 14), // "setCompositing"
QT_MOC_LITERAL(58, 1000, 4), // "mode"
QT_MOC_LITERAL(59, 1005, 26), // "setCompositingToAlphaBlend"
QT_MOC_LITERAL(60, 1032, 33), // "setCompositingToReverseAlphaB..."
QT_MOC_LITERAL(61, 1066, 19), // "setCompositingToAdd"
QT_MOC_LITERAL(62, 1086, 24), // "setCompositingToSubtract"
QT_MOC_LITERAL(63, 1111, 19), // "setSliceSpacingMode"
QT_MOC_LITERAL(64, 1131, 9), // "automatic"
QT_MOC_LITERAL(65, 1141, 15), // "setSliceSpacing"
QT_MOC_LITERAL(66, 1157, 7), // "spacing"
QT_MOC_LITERAL(67, 1165, 11), // "setSliceFOV"
QT_MOC_LITERAL(68, 1177, 3), // "fov"
QT_MOC_LITERAL(69, 1181, 17), // "setSliceModelMode"
QT_MOC_LITERAL(70, 1199, 24), // "setSliceModelModeVolumes"
QT_MOC_LITERAL(71, 1224, 19), // "setSliceModelMode2D"
QT_MOC_LITERAL(72, 1244, 27), // "setSliceModelMode2D_Volumes"
QT_MOC_LITERAL(73, 1272, 27), // "setSliceModelModeVolumes_2D"
QT_MOC_LITERAL(74, 1300, 23), // "setSliceModelModeCustom"
QT_MOC_LITERAL(75, 1324, 16), // "setSliceModelFOV"
QT_MOC_LITERAL(76, 1341, 5), // "index"
QT_MOC_LITERAL(77, 1347, 17), // "setSliceModelFOVX"
QT_MOC_LITERAL(78, 1365, 17), // "setSliceModelFOVY"
QT_MOC_LITERAL(79, 1383, 19), // "setSliceModelOrigin"
QT_MOC_LITERAL(80, 1403, 20), // "setSliceModelOriginX"
QT_MOC_LITERAL(81, 1424, 20), // "setSliceModelOriginY"
QT_MOC_LITERAL(82, 1445, 22), // "setSliceModelDimension"
QT_MOC_LITERAL(83, 1468, 3), // "dim"
QT_MOC_LITERAL(84, 1472, 23), // "setSliceModelDimensionX"
QT_MOC_LITERAL(85, 1496, 23), // "setSliceModelDimensionY"
QT_MOC_LITERAL(86, 1520, 24), // "setOrientationMarkerType"
QT_MOC_LITERAL(87, 1545, 4), // "type"
QT_MOC_LITERAL(88, 1550, 24), // "setOrientationMarkerSize"
QT_MOC_LITERAL(89, 1575, 4), // "size"
QT_MOC_LITERAL(90, 1580, 12), // "setRulerType"
QT_MOC_LITERAL(91, 1593, 13), // "setRulerColor"
QT_MOC_LITERAL(92, 1607, 5), // "color"
QT_MOC_LITERAL(93, 1613, 25), // "setSlabReconstructionType"
QT_MOC_LITERAL(94, 1639, 30), // "setSlabReconstructionThickness"
QT_MOC_LITERAL(95, 1670, 9), // "thickness"
QT_MOC_LITERAL(96, 1680, 11), // "setLightbox"
QT_MOC_LITERAL(97, 1692, 4), // "rows"
QT_MOC_LITERAL(98, 1697, 7), // "columns"
QT_MOC_LITERAL(99, 1705, 16), // "setLightboxTo1x1"
QT_MOC_LITERAL(100, 1722, 16), // "setLightboxTo1x2"
QT_MOC_LITERAL(101, 1739, 16), // "setLightboxTo1x3"
QT_MOC_LITERAL(102, 1756, 16), // "setLightboxTo1x4"
QT_MOC_LITERAL(103, 1773, 16), // "setLightboxTo1x6"
QT_MOC_LITERAL(104, 1790, 16), // "setLightboxTo1x8"
QT_MOC_LITERAL(105, 1807, 16), // "setLightboxTo2x2"
QT_MOC_LITERAL(106, 1824, 16), // "setLightboxTo3x3"
QT_MOC_LITERAL(107, 1841, 16), // "setLightboxTo6x6"
QT_MOC_LITERAL(108, 1858, 26), // "setForegroundInterpolation"
QT_MOC_LITERAL(109, 1885, 15), // "nearestNeighbor"
QT_MOC_LITERAL(110, 1901, 26), // "setBackgroundInterpolation"
QT_MOC_LITERAL(111, 1928, 24), // "updateWidgetFromMRMLView"
QT_MOC_LITERAL(112, 1953, 13), // "mrmlSliceNode"
QT_MOC_LITERAL(113, 1967, 22), // "mrmlSliceCompositeNode"
QT_MOC_LITERAL(114, 1990, 26), // "vtkMRMLSliceCompositeNode*"
QT_MOC_LITERAL(115, 2017, 19), // "setSliceOffsetRange"
QT_MOC_LITERAL(116, 2037, 3), // "min"
QT_MOC_LITERAL(117, 2041, 3), // "max"
QT_MOC_LITERAL(118, 2045, 10), // "sliceLogic"
QT_MOC_LITERAL(119, 2056, 18), // "vtkMRMLSliceLogic*"
QT_MOC_LITERAL(120, 2075, 13), // "setSliceLogic"
QT_MOC_LITERAL(121, 2089, 13), // "newSliceLogic"
QT_MOC_LITERAL(122, 2103, 24), // "setControllerButtonGroup"
QT_MOC_LITERAL(123, 2128, 13), // "QButtonGroup*"
QT_MOC_LITERAL(124, 2142, 5), // "group"
QT_MOC_LITERAL(125, 2148, 14), // "setSliceLogics"
QT_MOC_LITERAL(126, 2163, 14), // "vtkCollection*"
QT_MOC_LITERAL(127, 2178, 6), // "logics"
QT_MOC_LITERAL(128, 2185, 17), // "sliceOffsetSlider"
QT_MOC_LITERAL(129, 2203, 18), // "qMRMLSliderWidget*"
QT_MOC_LITERAL(130, 2222, 21), // "fitToWindowToolButton"
QT_MOC_LITERAL(131, 2244, 12), // "QToolButton*"
QT_MOC_LITERAL(132, 2257, 13), // "sliceViewName"
QT_MOC_LITERAL(133, 2271, 14), // "sliceViewLabel"
QT_MOC_LITERAL(134, 2286, 14), // "sliceViewColor"
QT_MOC_LITERAL(135, 2301, 21), // "sliceOffsetResolution"
QT_MOC_LITERAL(136, 2323, 20), // "moreButtonVisibility"
QT_MOC_LITERAL(137, 2344, 16), // "sliceOrientation"
QT_MOC_LITERAL(138, 2361, 21) // "showSliceOffsetSlider"

    },
    "qMRMLSliceControllerWidget\0"
    "imageDataConnectionChanged\0\0"
    "vtkAlgorithmOutput*\0imageDataConnection\0"
    "renderRequested\0nodeAboutToBeEdited\0"
    "vtkMRMLNode*\0node\0setMRMLScene\0"
    "vtkMRMLScene*\0newScene\0setMRMLSliceNode\0"
    "vtkMRMLSliceNode*\0newSliceNode\0"
    "setImageDataConnection\0newImageDataConnection\0"
    "setSliceViewSize\0newSize\0fitSliceToBackground\0"
    "setSliceOrientation\0orientation\0"
    "setShowSliceOffsetSlider\0show\0"
    "setSliceOffsetValue\0offset\0"
    "trackSliceOffsetValue\0setSliceVisible\0"
    "visible\0setSliceLink\0linked\0setHotLinked\0"
    "hot\0setMoreButtonVisible\0isMoreButtonVisible\0"
    "moveBackgroundComboBox\0move\0"
    "updateSegmentationControlsVisibility\0"
    "rotateSliceToLowestVolumeAxes\0"
    "setSegmentationHidden\0hide\0setLabelMapHidden\0"
    "setForegroundHidden\0setBackgroundHidden\0"
    "setSegmentationOpacity\0opacity\0"
    "setLabelMapOpacity\0setForegroundOpacity\0"
    "setBackgroundOpacity\0toggleSegmentationOutlineFill\0"
    "showLabelOutline\0showReformatWidget\0"
    "lockReformatWidgetToCamera\0lock\0"
    "showSlabReconstructionWidget\0"
    "toggleSlabReconstructionInteractive\0"
    "interactive\0setCompositing\0mode\0"
    "setCompositingToAlphaBlend\0"
    "setCompositingToReverseAlphaBlend\0"
    "setCompositingToAdd\0setCompositingToSubtract\0"
    "setSliceSpacingMode\0automatic\0"
    "setSliceSpacing\0spacing\0setSliceFOV\0"
    "fov\0setSliceModelMode\0setSliceModelModeVolumes\0"
    "setSliceModelMode2D\0setSliceModelMode2D_Volumes\0"
    "setSliceModelModeVolumes_2D\0"
    "setSliceModelModeCustom\0setSliceModelFOV\0"
    "index\0setSliceModelFOVX\0setSliceModelFOVY\0"
    "setSliceModelOrigin\0setSliceModelOriginX\0"
    "setSliceModelOriginY\0setSliceModelDimension\0"
    "dim\0setSliceModelDimensionX\0"
    "setSliceModelDimensionY\0"
    "setOrientationMarkerType\0type\0"
    "setOrientationMarkerSize\0size\0"
    "setRulerType\0setRulerColor\0color\0"
    "setSlabReconstructionType\0"
    "setSlabReconstructionThickness\0thickness\0"
    "setLightbox\0rows\0columns\0setLightboxTo1x1\0"
    "setLightboxTo1x2\0setLightboxTo1x3\0"
    "setLightboxTo1x4\0setLightboxTo1x6\0"
    "setLightboxTo1x8\0setLightboxTo2x2\0"
    "setLightboxTo3x3\0setLightboxTo6x6\0"
    "setForegroundInterpolation\0nearestNeighbor\0"
    "setBackgroundInterpolation\0"
    "updateWidgetFromMRMLView\0mrmlSliceNode\0"
    "mrmlSliceCompositeNode\0"
    "vtkMRMLSliceCompositeNode*\0"
    "setSliceOffsetRange\0min\0max\0sliceLogic\0"
    "vtkMRMLSliceLogic*\0setSliceLogic\0"
    "newSliceLogic\0setControllerButtonGroup\0"
    "QButtonGroup*\0group\0setSliceLogics\0"
    "vtkCollection*\0logics\0sliceOffsetSlider\0"
    "qMRMLSliderWidget*\0fitToWindowToolButton\0"
    "QToolButton*\0sliceViewName\0sliceViewLabel\0"
    "sliceViewColor\0sliceOffsetResolution\0"
    "moreButtonVisibility\0sliceOrientation\0"
    "showSliceOffsetSlider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSliceControllerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      86,   14, // methods
       7,  650, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  444,    2, 0x06 /* Public */,
       5,    0,  447,    2, 0x06 /* Public */,
       6,    1,  448,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  451,    2, 0x0a /* Public */,
      12,    1,  454,    2, 0x0a /* Public */,
      15,    1,  457,    2, 0x0a /* Public */,
      17,    1,  460,    2, 0x0a /* Public */,
      19,    0,  463,    2, 0x0a /* Public */,
      20,    1,  464,    2, 0x0a /* Public */,
      22,    1,  467,    2, 0x0a /* Public */,
      24,    1,  470,    2, 0x0a /* Public */,
      26,    1,  473,    2, 0x0a /* Public */,
      27,    1,  476,    2, 0x0a /* Public */,
      29,    1,  479,    2, 0x0a /* Public */,
      31,    1,  482,    2, 0x0a /* Public */,
      33,    1,  485,    2, 0x0a /* Public */,
      34,    0,  488,    2, 0x0a /* Public */,
      35,    1,  489,    2, 0x0a /* Public */,
      37,    0,  492,    2, 0x0a /* Public */,
      38,    0,  493,    2, 0x0a /* Public */,
      39,    1,  494,    2, 0x0a /* Public */,
      41,    1,  497,    2, 0x0a /* Public */,
      42,    1,  500,    2, 0x0a /* Public */,
      43,    1,  503,    2, 0x0a /* Public */,
      44,    1,  506,    2, 0x0a /* Public */,
      46,    1,  509,    2, 0x0a /* Public */,
      47,    1,  512,    2, 0x0a /* Public */,
      48,    1,  515,    2, 0x0a /* Public */,
      49,    0,  518,    2, 0x0a /* Public */,
      50,    1,  519,    2, 0x0a /* Public */,
      51,    1,  522,    2, 0x0a /* Public */,
      52,    1,  525,    2, 0x0a /* Public */,
      54,    1,  528,    2, 0x0a /* Public */,
      55,    1,  531,    2, 0x0a /* Public */,
      57,    1,  534,    2, 0x0a /* Public */,
      59,    0,  537,    2, 0x0a /* Public */,
      60,    0,  538,    2, 0x0a /* Public */,
      61,    0,  539,    2, 0x0a /* Public */,
      62,    0,  540,    2, 0x0a /* Public */,
      63,    1,  541,    2, 0x0a /* Public */,
      65,    1,  544,    2, 0x0a /* Public */,
      67,    1,  547,    2, 0x0a /* Public */,
      69,    1,  550,    2, 0x0a /* Public */,
      70,    0,  553,    2, 0x0a /* Public */,
      71,    0,  554,    2, 0x0a /* Public */,
      72,    0,  555,    2, 0x0a /* Public */,
      73,    0,  556,    2, 0x0a /* Public */,
      74,    0,  557,    2, 0x0a /* Public */,
      75,    2,  558,    2, 0x0a /* Public */,
      77,    1,  563,    2, 0x0a /* Public */,
      78,    1,  566,    2, 0x0a /* Public */,
      79,    2,  569,    2, 0x0a /* Public */,
      80,    1,  574,    2, 0x0a /* Public */,
      81,    1,  577,    2, 0x0a /* Public */,
      82,    2,  580,    2, 0x0a /* Public */,
      84,    1,  585,    2, 0x0a /* Public */,
      85,    1,  588,    2, 0x0a /* Public */,
      86,    1,  591,    2, 0x0a /* Public */,
      88,    1,  594,    2, 0x0a /* Public */,
      90,    1,  597,    2, 0x0a /* Public */,
      91,    1,  600,    2, 0x0a /* Public */,
      93,    1,  603,    2, 0x0a /* Public */,
      94,    1,  606,    2, 0x0a /* Public */,
      96,    2,  609,    2, 0x0a /* Public */,
      99,    0,  614,    2, 0x0a /* Public */,
     100,    0,  615,    2, 0x0a /* Public */,
     101,    0,  616,    2, 0x0a /* Public */,
     102,    0,  617,    2, 0x0a /* Public */,
     103,    0,  618,    2, 0x0a /* Public */,
     104,    0,  619,    2, 0x0a /* Public */,
     105,    0,  620,    2, 0x0a /* Public */,
     106,    0,  621,    2, 0x0a /* Public */,
     107,    0,  622,    2, 0x0a /* Public */,
     108,    1,  623,    2, 0x0a /* Public */,
     110,    1,  626,    2, 0x0a /* Public */,
     111,    0,  629,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,  630,    2, 0x02 /* Public */,
     112,    0,  631,    2, 0x02 /* Public */,
     113,    0,  632,    2, 0x02 /* Public */,
     115,    2,  633,    2, 0x02 /* Public */,
     118,    0,  638,    2, 0x02 /* Public */,
     120,    1,  639,    2, 0x02 /* Public */,
     122,    1,  642,    2, 0x02 /* Public */,
     125,    1,  645,    2, 0x02 /* Public */,
     128,    0,  648,    2, 0x02 /* Public */,
     130,    0,  649,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 3,   16,
    QMetaType::Void, QMetaType::QSize,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Double,   25,
    QMetaType::Void, QMetaType::Double,   25,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Double,   45,
    QMetaType::Void, QMetaType::Double,   45,
    QMetaType::Void, QMetaType::Double,   45,
    QMetaType::Void, QMetaType::Double,   45,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   56,
    QMetaType::Void, QMetaType::Int,   58,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Void, QMetaType::Double,   66,
    QMetaType::Void, QMetaType::Double,   68,
    QMetaType::Void, QMetaType::Int,   58,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,   76,   68,
    QMetaType::Void, QMetaType::Double,   68,
    QMetaType::Void, QMetaType::Double,   68,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,   76,   68,
    QMetaType::Void, QMetaType::Double,   68,
    QMetaType::Void, QMetaType::Double,   68,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   76,   83,
    QMetaType::Void, QMetaType::Int,   83,
    QMetaType::Void, QMetaType::Int,   83,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, QMetaType::Int,   89,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, QMetaType::Int,   92,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, QMetaType::Double,   95,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   97,   98,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  109,
    QMetaType::Void, QMetaType::Bool,  109,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 3,
    0x80000000 | 13,
    0x80000000 | 114,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,  116,  117,
    0x80000000 | 119,
    QMetaType::Void, 0x80000000 | 119,  121,
    QMetaType::Void, 0x80000000 | 123,  124,
    QMetaType::Void, 0x80000000 | 126,  127,
    0x80000000 | 129,
    0x80000000 | 131,

 // properties: name, type, flags
     132, QMetaType::QString, 0x00095103,
     133, QMetaType::QString, 0x00095103,
     134, QMetaType::QColor, 0x00095103,
     135, QMetaType::Double, 0x00095103,
     136, QMetaType::Bool, 0x00095003,
     137, QMetaType::QString, 0x00095103,
     138, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qMRMLSliceControllerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSliceControllerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->imageDataConnectionChanged((*reinterpret_cast< vtkAlgorithmOutput*(*)>(_a[1]))); break;
        case 1: _t->renderRequested(); break;
        case 2: _t->nodeAboutToBeEdited((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 4: _t->setMRMLSliceNode((*reinterpret_cast< vtkMRMLSliceNode*(*)>(_a[1]))); break;
        case 5: _t->setImageDataConnection((*reinterpret_cast< vtkAlgorithmOutput*(*)>(_a[1]))); break;
        case 6: _t->setSliceViewSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 7: _t->fitSliceToBackground(); break;
        case 8: _t->setSliceOrientation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setShowSliceOffsetSlider((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setSliceOffsetValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->trackSliceOffsetValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->setSliceVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setSliceLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setHotLinked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setMoreButtonVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: { bool _r = _t->isMoreButtonVisible();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->moveBackgroundComboBox((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->updateSegmentationControlsVisibility(); break;
        case 19: _t->rotateSliceToLowestVolumeAxes(); break;
        case 20: _t->setSegmentationHidden((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->setLabelMapHidden((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->setForegroundHidden((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->setBackgroundHidden((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->setSegmentationOpacity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 25: _t->setLabelMapOpacity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 26: _t->setForegroundOpacity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 27: _t->setBackgroundOpacity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 28: _t->toggleSegmentationOutlineFill(); break;
        case 29: _t->showLabelOutline((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->showReformatWidget((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->lockReformatWidgetToCamera((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->showSlabReconstructionWidget((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->toggleSlabReconstructionInteractive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->setCompositing((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->setCompositingToAlphaBlend(); break;
        case 36: _t->setCompositingToReverseAlphaBlend(); break;
        case 37: _t->setCompositingToAdd(); break;
        case 38: _t->setCompositingToSubtract(); break;
        case 39: _t->setSliceSpacingMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->setSliceSpacing((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 41: _t->setSliceFOV((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 42: _t->setSliceModelMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->setSliceModelModeVolumes(); break;
        case 44: _t->setSliceModelMode2D(); break;
        case 45: _t->setSliceModelMode2D_Volumes(); break;
        case 46: _t->setSliceModelModeVolumes_2D(); break;
        case 47: _t->setSliceModelModeCustom(); break;
        case 48: _t->setSliceModelFOV((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 49: _t->setSliceModelFOVX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 50: _t->setSliceModelFOVY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 51: _t->setSliceModelOrigin((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 52: _t->setSliceModelOriginX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 53: _t->setSliceModelOriginY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 54: _t->setSliceModelDimension((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 55: _t->setSliceModelDimensionX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->setSliceModelDimensionY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->setOrientationMarkerType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 58: _t->setOrientationMarkerSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 59: _t->setRulerType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: _t->setRulerColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->setSlabReconstructionType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 62: _t->setSlabReconstructionThickness((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 63: _t->setLightbox((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 64: _t->setLightboxTo1x1(); break;
        case 65: _t->setLightboxTo1x2(); break;
        case 66: _t->setLightboxTo1x3(); break;
        case 67: _t->setLightboxTo1x4(); break;
        case 68: _t->setLightboxTo1x6(); break;
        case 69: _t->setLightboxTo1x8(); break;
        case 70: _t->setLightboxTo2x2(); break;
        case 71: _t->setLightboxTo3x3(); break;
        case 72: _t->setLightboxTo6x6(); break;
        case 73: _t->setForegroundInterpolation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 74: _t->setBackgroundInterpolation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 75: _t->updateWidgetFromMRMLView(); break;
        case 76: { vtkAlgorithmOutput* _r = _t->imageDataConnection();
            if (_a[0]) *reinterpret_cast< vtkAlgorithmOutput**>(_a[0]) = std::move(_r); }  break;
        case 77: { vtkMRMLSliceNode* _r = _t->mrmlSliceNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLSliceNode**>(_a[0]) = std::move(_r); }  break;
        case 78: { vtkMRMLSliceCompositeNode* _r = _t->mrmlSliceCompositeNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLSliceCompositeNode**>(_a[0]) = std::move(_r); }  break;
        case 79: _t->setSliceOffsetRange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 80: { vtkMRMLSliceLogic* _r = _t->sliceLogic();
            if (_a[0]) *reinterpret_cast< vtkMRMLSliceLogic**>(_a[0]) = std::move(_r); }  break;
        case 81: _t->setSliceLogic((*reinterpret_cast< vtkMRMLSliceLogic*(*)>(_a[1]))); break;
        case 82: _t->setControllerButtonGroup((*reinterpret_cast< QButtonGroup*(*)>(_a[1]))); break;
        case 83: _t->setSliceLogics((*reinterpret_cast< vtkCollection*(*)>(_a[1]))); break;
        case 84: { qMRMLSliderWidget* _r = _t->sliceOffsetSlider();
            if (_a[0]) *reinterpret_cast< qMRMLSliderWidget**>(_a[0]) = std::move(_r); }  break;
        case 85: { QToolButton* _r = _t->fitToWindowToolButton();
            if (_a[0]) *reinterpret_cast< QToolButton**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLSliceControllerWidget::*)(vtkAlgorithmOutput * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSliceControllerWidget::imageDataConnectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLSliceControllerWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSliceControllerWidget::renderRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qMRMLSliceControllerWidget::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSliceControllerWidget::nodeAboutToBeEdited)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSliceControllerWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->sliceViewName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->sliceViewLabel(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->sliceViewColor(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->sliceOffsetResolution(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isMoreButtonVisible(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->sliceOrientation(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->showSliceOffsetSlider(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSliceControllerWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSliceViewName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSliceViewLabel(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setSliceViewColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setSliceOffsetResolution(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setMoreButtonVisible(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setSliceOrientation(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setShowSliceOffsetSlider(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSliceControllerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLViewControllerBar::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSliceControllerWidget.data,
    qt_meta_data_qMRMLSliceControllerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSliceControllerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSliceControllerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSliceControllerWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLViewControllerBar::qt_metacast(_clname);
}

int qMRMLSliceControllerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLViewControllerBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 86)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 86;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 86)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 86;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qMRMLSliceControllerWidget::imageDataConnectionChanged(vtkAlgorithmOutput * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLSliceControllerWidget::renderRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void qMRMLSliceControllerWidget::nodeAboutToBeEdited(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
