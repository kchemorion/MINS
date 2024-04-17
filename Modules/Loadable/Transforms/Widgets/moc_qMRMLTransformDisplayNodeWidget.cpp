/****************************************************************************
** Meta object code from reading C++ file 'qMRMLTransformDisplayNodeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Transforms/Widgets/qMRMLTransformDisplayNodeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLTransformDisplayNodeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLTransformDisplayNodeWidget_t {
    QByteArrayData data[58];
    char stringdata0[1007];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLTransformDisplayNodeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLTransformDisplayNodeWidget_t qt_meta_stringdata_qMRMLTransformDisplayNodeWidget = {
    {
QT_MOC_LITERAL(0, 0, 31), // "qMRMLTransformDisplayNodeWidget"
QT_MOC_LITERAL(1, 32, 20), // "setMRMLTransformNode"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 21), // "vtkMRMLTransformNode*"
QT_MOC_LITERAL(4, 76, 13), // "transformNode"
QT_MOC_LITERAL(5, 90, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 103, 4), // "node"
QT_MOC_LITERAL(7, 108, 13), // "setVisibility"
QT_MOC_LITERAL(8, 122, 15), // "setVisibility2d"
QT_MOC_LITERAL(9, 138, 15), // "setVisibility3d"
QT_MOC_LITERAL(10, 154, 25), // "setGlyphVisualizationMode"
QT_MOC_LITERAL(11, 180, 24), // "setGridVisualizationMode"
QT_MOC_LITERAL(12, 205, 27), // "setContourVisualizationMode"
QT_MOC_LITERAL(13, 233, 24), // "updateGlyphSourceOptions"
QT_MOC_LITERAL(14, 258, 12), // "sourceOption"
QT_MOC_LITERAL(15, 271, 17), // "regionNodeChanged"
QT_MOC_LITERAL(16, 289, 22), // "glyphPointsNodeChanged"
QT_MOC_LITERAL(17, 312, 17), // "setGlyphSpacingMm"
QT_MOC_LITERAL(18, 330, 7), // "spacing"
QT_MOC_LITERAL(19, 338, 20), // "setGlyphScalePercent"
QT_MOC_LITERAL(20, 359, 5), // "scale"
QT_MOC_LITERAL(21, 365, 22), // "setGlyphDisplayRangeMm"
QT_MOC_LITERAL(22, 388, 3), // "min"
QT_MOC_LITERAL(23, 392, 3), // "max"
QT_MOC_LITERAL(24, 396, 12), // "setGlyphType"
QT_MOC_LITERAL(25, 409, 9), // "glyphType"
QT_MOC_LITERAL(26, 419, 24), // "setGlyphTipLengthPercent"
QT_MOC_LITERAL(27, 444, 6), // "length"
QT_MOC_LITERAL(28, 451, 18), // "setGlyphDiameterMm"
QT_MOC_LITERAL(29, 470, 10), // "diameterMm"
QT_MOC_LITERAL(30, 481, 28), // "setGlyphShaftDiameterPercent"
QT_MOC_LITERAL(31, 510, 15), // "diameterPercent"
QT_MOC_LITERAL(32, 526, 18), // "setGlyphResolution"
QT_MOC_LITERAL(33, 545, 10), // "resolution"
QT_MOC_LITERAL(34, 556, 19), // "setGridScalePercent"
QT_MOC_LITERAL(35, 576, 16), // "setGridSpacingMm"
QT_MOC_LITERAL(36, 593, 21), // "setGridLineDiameterMm"
QT_MOC_LITERAL(37, 615, 19), // "setGridResolutionMm"
QT_MOC_LITERAL(38, 635, 12), // "resolutionMm"
QT_MOC_LITERAL(39, 648, 20), // "setGridShowNonWarped"
QT_MOC_LITERAL(40, 669, 4), // "show"
QT_MOC_LITERAL(41, 674, 18), // "setContourLevelsMm"
QT_MOC_LITERAL(42, 693, 10), // "values_str"
QT_MOC_LITERAL(43, 704, 22), // "setContourResolutionMm"
QT_MOC_LITERAL(44, 727, 24), // "setContourOpacityPercent"
QT_MOC_LITERAL(45, 752, 7), // "opacity"
QT_MOC_LITERAL(46, 760, 19), // "setEditorVisibility"
QT_MOC_LITERAL(47, 780, 7), // "enabled"
QT_MOC_LITERAL(48, 788, 27), // "setEditorTranslationEnabled"
QT_MOC_LITERAL(49, 816, 24), // "setEditorRotationEnabled"
QT_MOC_LITERAL(50, 841, 23), // "setEditorScalingEnabled"
QT_MOC_LITERAL(51, 865, 18), // "updateEditorBounds"
QT_MOC_LITERAL(52, 884, 17), // "setColorTableNode"
QT_MOC_LITERAL(53, 902, 14), // "colorTableNode"
QT_MOC_LITERAL(54, 917, 16), // "colorUpdateRange"
QT_MOC_LITERAL(55, 934, 23), // "onColorInteractionEvent"
QT_MOC_LITERAL(56, 958, 20), // "onColorModifiedEvent"
QT_MOC_LITERAL(57, 979, 27) // "updateWidgetFromDisplayNode"

    },
    "qMRMLTransformDisplayNodeWidget\0"
    "setMRMLTransformNode\0\0vtkMRMLTransformNode*\0"
    "transformNode\0vtkMRMLNode*\0node\0"
    "setVisibility\0setVisibility2d\0"
    "setVisibility3d\0setGlyphVisualizationMode\0"
    "setGridVisualizationMode\0"
    "setContourVisualizationMode\0"
    "updateGlyphSourceOptions\0sourceOption\0"
    "regionNodeChanged\0glyphPointsNodeChanged\0"
    "setGlyphSpacingMm\0spacing\0"
    "setGlyphScalePercent\0scale\0"
    "setGlyphDisplayRangeMm\0min\0max\0"
    "setGlyphType\0glyphType\0setGlyphTipLengthPercent\0"
    "length\0setGlyphDiameterMm\0diameterMm\0"
    "setGlyphShaftDiameterPercent\0"
    "diameterPercent\0setGlyphResolution\0"
    "resolution\0setGridScalePercent\0"
    "setGridSpacingMm\0setGridLineDiameterMm\0"
    "setGridResolutionMm\0resolutionMm\0"
    "setGridShowNonWarped\0show\0setContourLevelsMm\0"
    "values_str\0setContourResolutionMm\0"
    "setContourOpacityPercent\0opacity\0"
    "setEditorVisibility\0enabled\0"
    "setEditorTranslationEnabled\0"
    "setEditorRotationEnabled\0"
    "setEditorScalingEnabled\0updateEditorBounds\0"
    "setColorTableNode\0colorTableNode\0"
    "colorUpdateRange\0onColorInteractionEvent\0"
    "onColorModifiedEvent\0updateWidgetFromDisplayNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLTransformDisplayNodeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  199,    2, 0x0a /* Public */,
       1,    1,  202,    2, 0x0a /* Public */,
       7,    1,  205,    2, 0x0a /* Public */,
       8,    1,  208,    2, 0x0a /* Public */,
       9,    1,  211,    2, 0x0a /* Public */,
      10,    1,  214,    2, 0x0a /* Public */,
      11,    1,  217,    2, 0x0a /* Public */,
      12,    1,  220,    2, 0x0a /* Public */,
      13,    1,  223,    2, 0x0a /* Public */,
      15,    1,  226,    2, 0x0a /* Public */,
      16,    1,  229,    2, 0x0a /* Public */,
      17,    1,  232,    2, 0x0a /* Public */,
      19,    1,  235,    2, 0x0a /* Public */,
      21,    2,  238,    2, 0x0a /* Public */,
      24,    1,  243,    2, 0x0a /* Public */,
      26,    1,  246,    2, 0x0a /* Public */,
      28,    1,  249,    2, 0x0a /* Public */,
      30,    1,  252,    2, 0x0a /* Public */,
      32,    1,  255,    2, 0x0a /* Public */,
      34,    1,  258,    2, 0x0a /* Public */,
      35,    1,  261,    2, 0x0a /* Public */,
      36,    1,  264,    2, 0x0a /* Public */,
      37,    1,  267,    2, 0x0a /* Public */,
      39,    1,  270,    2, 0x0a /* Public */,
      41,    1,  273,    2, 0x0a /* Public */,
      43,    1,  276,    2, 0x0a /* Public */,
      44,    1,  279,    2, 0x0a /* Public */,
      46,    1,  282,    2, 0x0a /* Public */,
      48,    1,  285,    2, 0x0a /* Public */,
      49,    1,  288,    2, 0x0a /* Public */,
      50,    1,  291,    2, 0x0a /* Public */,
      51,    0,  294,    2, 0x0a /* Public */,
      52,    1,  295,    2, 0x0a /* Public */,
      54,    0,  298,    2, 0x0a /* Public */,
      55,    0,  299,    2, 0x0a /* Public */,
      56,    0,  300,    2, 0x0a /* Public */,
      57,    0,  301,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   22,   23,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Double,   27,
    QMetaType::Void, QMetaType::Double,   29,
    QMetaType::Void, QMetaType::Double,   31,
    QMetaType::Void, QMetaType::Double,   33,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, QMetaType::Double,   29,
    QMetaType::Void, QMetaType::Double,   38,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::Double,   38,
    QMetaType::Void, QMetaType::Double,   45,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qMRMLTransformDisplayNodeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLTransformDisplayNodeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLTransformNode((*reinterpret_cast< vtkMRMLTransformNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLTransformNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->setVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setVisibility2d((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setVisibility3d((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setGlyphVisualizationMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setGridVisualizationMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setContourVisualizationMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->updateGlyphSourceOptions((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->regionNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 10: _t->glyphPointsNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 11: _t->setGlyphSpacingMm((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->setGlyphScalePercent((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->setGlyphDisplayRangeMm((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 14: _t->setGlyphType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setGlyphTipLengthPercent((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->setGlyphDiameterMm((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->setGlyphShaftDiameterPercent((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->setGlyphResolution((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->setGridScalePercent((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->setGridSpacingMm((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 21: _t->setGridLineDiameterMm((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 22: _t->setGridResolutionMm((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 23: _t->setGridShowNonWarped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->setContourLevelsMm((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->setContourResolutionMm((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 26: _t->setContourOpacityPercent((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 27: _t->setEditorVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->setEditorTranslationEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->setEditorRotationEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->setEditorScalingEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->updateEditorBounds(); break;
        case 32: _t->setColorTableNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 33: _t->colorUpdateRange(); break;
        case 34: _t->onColorInteractionEvent(); break;
        case 35: _t->onColorModifiedEvent(); break;
        case 36: _t->updateWidgetFromDisplayNode(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLTransformDisplayNodeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLTransformDisplayNodeWidget.data,
    qt_meta_data_qMRMLTransformDisplayNodeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLTransformDisplayNodeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLTransformDisplayNodeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLTransformDisplayNodeWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLTransformDisplayNodeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 37;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
