/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSegmentationDisplayNodeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Segmentations/Widgets/qMRMLSegmentationDisplayNodeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSegmentationDisplayNodeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSegmentationDisplayNodeWidget_t {
    QByteArrayData data[36];
    char stringdata0[873];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSegmentationDisplayNodeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSegmentationDisplayNodeWidget_t qt_meta_stringdata_qMRMLSegmentationDisplayNodeWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qMRMLSegmentationDisplayNodeW..."
QT_MOC_LITERAL(1, 35, 26), // "setSegmentationDisplayNode"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 31), // "vtkMRMLSegmentationDisplayNode*"
QT_MOC_LITERAL(4, 95, 4), // "node"
QT_MOC_LITERAL(5, 100, 19), // "setSegmentationNode"
QT_MOC_LITERAL(6, 120, 24), // "vtkMRMLSegmentationNode*"
QT_MOC_LITERAL(7, 145, 19), // "setCurrentSegmentID"
QT_MOC_LITERAL(8, 165, 9), // "segmentID"
QT_MOC_LITERAL(9, 175, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(10, 196, 33), // "populate3DRepresentationsComb..."
QT_MOC_LITERAL(11, 230, 33), // "populate2DRepresentationsComb..."
QT_MOC_LITERAL(12, 264, 19), // "onVisibilityChanged"
QT_MOC_LITERAL(13, 284, 16), // "onOpacityChanged"
QT_MOC_LITERAL(14, 301, 28), // "onVisibilitySliceFillChanged"
QT_MOC_LITERAL(15, 330, 31), // "onVisibilitySliceOutlineChanged"
QT_MOC_LITERAL(16, 362, 21), // "onVisibility3DChanged"
QT_MOC_LITERAL(17, 384, 25), // "onOpacitySliceFillChanged"
QT_MOC_LITERAL(18, 410, 28), // "onOpacitySliceOutlineChanged"
QT_MOC_LITERAL(19, 439, 18), // "onOpacity3DChanged"
QT_MOC_LITERAL(20, 458, 35), // "onSliceIntersectionThicknessC..."
QT_MOC_LITERAL(21, 494, 25), // "onRepresentation3DChanged"
QT_MOC_LITERAL(22, 520, 25), // "onRepresentation2DChanged"
QT_MOC_LITERAL(23, 546, 35), // "onSegmentVisibilitySliceFillC..."
QT_MOC_LITERAL(24, 582, 38), // "onSegmentVisibilitySliceOutli..."
QT_MOC_LITERAL(25, 621, 28), // "onSegmentVisibility3DChanged"
QT_MOC_LITERAL(26, 650, 32), // "onSegmentOpacitySliceFillChanged"
QT_MOC_LITERAL(27, 683, 35), // "onSegmentOpacitySliceOutlineC..."
QT_MOC_LITERAL(28, 719, 25), // "onSegmentOpacity3DChanged"
QT_MOC_LITERAL(29, 745, 25), // "onSegmentSelectionChanged"
QT_MOC_LITERAL(30, 771, 14), // "QItemSelection"
QT_MOC_LITERAL(31, 786, 8), // "selected"
QT_MOC_LITERAL(32, 795, 10), // "deselected"
QT_MOC_LITERAL(33, 806, 23), // "segmentationDisplayNode"
QT_MOC_LITERAL(34, 830, 25), // "segmentationDisplayNodeID"
QT_MOC_LITERAL(35, 856, 16) // "currentSegmentID"

    },
    "qMRMLSegmentationDisplayNodeWidget\0"
    "setSegmentationDisplayNode\0\0"
    "vtkMRMLSegmentationDisplayNode*\0node\0"
    "setSegmentationNode\0vtkMRMLSegmentationNode*\0"
    "setCurrentSegmentID\0segmentID\0"
    "updateWidgetFromMRML\0"
    "populate3DRepresentationsCombobox\0"
    "populate2DRepresentationsCombobox\0"
    "onVisibilityChanged\0onOpacityChanged\0"
    "onVisibilitySliceFillChanged\0"
    "onVisibilitySliceOutlineChanged\0"
    "onVisibility3DChanged\0onOpacitySliceFillChanged\0"
    "onOpacitySliceOutlineChanged\0"
    "onOpacity3DChanged\0"
    "onSliceIntersectionThicknessChanged\0"
    "onRepresentation3DChanged\0"
    "onRepresentation2DChanged\0"
    "onSegmentVisibilitySliceFillChanged\0"
    "onSegmentVisibilitySliceOutlineChanged\0"
    "onSegmentVisibility3DChanged\0"
    "onSegmentOpacitySliceFillChanged\0"
    "onSegmentOpacitySliceOutlineChanged\0"
    "onSegmentOpacity3DChanged\0"
    "onSegmentSelectionChanged\0QItemSelection\0"
    "selected\0deselected\0segmentationDisplayNode\0"
    "segmentationDisplayNodeID\0currentSegmentID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSegmentationDisplayNodeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  149,    2, 0x0a /* Public */,
       5,    1,  152,    2, 0x0a /* Public */,
       7,    1,  155,    2, 0x0a /* Public */,
       9,    0,  158,    2, 0x0a /* Public */,
      10,    0,  159,    2, 0x0a /* Public */,
      11,    0,  160,    2, 0x0a /* Public */,
      12,    1,  161,    2, 0x0a /* Public */,
      13,    1,  164,    2, 0x0a /* Public */,
      14,    1,  167,    2, 0x0a /* Public */,
      15,    1,  170,    2, 0x0a /* Public */,
      16,    1,  173,    2, 0x0a /* Public */,
      17,    1,  176,    2, 0x0a /* Public */,
      18,    1,  179,    2, 0x0a /* Public */,
      19,    1,  182,    2, 0x0a /* Public */,
      20,    1,  185,    2, 0x0a /* Public */,
      21,    1,  188,    2, 0x0a /* Public */,
      22,    1,  191,    2, 0x0a /* Public */,
      23,    1,  194,    2, 0x0a /* Public */,
      24,    1,  197,    2, 0x0a /* Public */,
      25,    1,  200,    2, 0x0a /* Public */,
      26,    1,  203,    2, 0x0a /* Public */,
      27,    1,  206,    2, 0x0a /* Public */,
      28,    1,  209,    2, 0x0a /* Public */,
      29,    2,  212,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      33,    0,  217,    2, 0x02 /* Public */,
      34,    0,  218,    2, 0x02 /* Public */,
      35,    0,  219,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 30,   31,   32,

 // methods: parameters
    0x80000000 | 3,
    QMetaType::QString,
    QMetaType::QString,

       0        // eod
};

void qMRMLSegmentationDisplayNodeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSegmentationDisplayNodeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setSegmentationDisplayNode((*reinterpret_cast< vtkMRMLSegmentationDisplayNode*(*)>(_a[1]))); break;
        case 1: _t->setSegmentationNode((*reinterpret_cast< vtkMRMLSegmentationNode*(*)>(_a[1]))); break;
        case 2: _t->setCurrentSegmentID((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->updateWidgetFromMRML(); break;
        case 4: _t->populate3DRepresentationsCombobox(); break;
        case 5: _t->populate2DRepresentationsCombobox(); break;
        case 6: _t->onVisibilityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onOpacityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->onVisibilitySliceFillChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onVisibilitySliceOutlineChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->onVisibility3DChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->onOpacitySliceFillChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->onOpacitySliceOutlineChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->onOpacity3DChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->onSliceIntersectionThicknessChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->onRepresentation3DChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->onRepresentation2DChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->onSegmentVisibilitySliceFillChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->onSegmentVisibilitySliceOutlineChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->onSegmentVisibility3DChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->onSegmentOpacitySliceFillChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 21: _t->onSegmentOpacitySliceOutlineChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 22: _t->onSegmentOpacity3DChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 23: _t->onSegmentSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 24: { vtkMRMLSegmentationDisplayNode* _r = _t->segmentationDisplayNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLSegmentationDisplayNode**>(_a[0]) = std::move(_r); }  break;
        case 25: { QString _r = _t->segmentationDisplayNodeID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 26: { QString _r = _t->currentSegmentID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSegmentationDisplayNodeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSegmentationDisplayNodeWidget.data,
    qt_meta_data_qMRMLSegmentationDisplayNodeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSegmentationDisplayNodeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSegmentationDisplayNodeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSegmentationDisplayNodeWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLSegmentationDisplayNodeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 27;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
