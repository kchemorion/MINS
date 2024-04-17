/****************************************************************************
** Meta object code from reading C++ file 'qSlicerReformatModuleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/Reformat/qSlicerReformatModuleWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerReformatModuleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerReformatModuleWidget_t {
    QByteArrayData data[40];
    char stringdata0[675];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerReformatModuleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerReformatModuleWidget_t qt_meta_stringdata_qSlicerReformatModuleWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "qSlicerReformatModuleWidget"
QT_MOC_LITERAL(1, 28, 16), // "setWorldPosition"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 7), // "double*"
QT_MOC_LITERAL(4, 54, 16), // "newWorldPosition"
QT_MOC_LITERAL(5, 71, 19), // "setSliceOffsetValue"
QT_MOC_LITERAL(6, 91, 6), // "offset"
QT_MOC_LITERAL(7, 98, 15), // "centerSliceNode"
QT_MOC_LITERAL(8, 114, 14), // "setSliceNormal"
QT_MOC_LITERAL(9, 129, 6), // "normal"
QT_MOC_LITERAL(10, 136, 17), // "setNormalToCamera"
QT_MOC_LITERAL(11, 154, 17), // "setNormalToAxisLR"
QT_MOC_LITERAL(12, 172, 17), // "setNormalToAxisPA"
QT_MOC_LITERAL(13, 190, 17), // "setNormalToAxisIS"
QT_MOC_LITERAL(14, 208, 19), // "rotateToVolumePlane"
QT_MOC_LITERAL(15, 228, 14), // "flipHorizontal"
QT_MOC_LITERAL(16, 243, 12), // "flipVertical"
QT_MOC_LITERAL(17, 256, 15), // "rotateClockwise"
QT_MOC_LITERAL(18, 272, 22), // "rotateCounterClockwise"
QT_MOC_LITERAL(19, 295, 23), // "onMRMLSliceNodeModified"
QT_MOC_LITERAL(20, 319, 10), // "vtkObject*"
QT_MOC_LITERAL(21, 330, 6), // "caller"
QT_MOC_LITERAL(22, 337, 30), // "onTrackSliceOffsetValueChanged"
QT_MOC_LITERAL(23, 368, 14), // "onNodeSelected"
QT_MOC_LITERAL(24, 383, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(25, 396, 4), // "node"
QT_MOC_LITERAL(26, 401, 24), // "onSliceVisibilityChanged"
QT_MOC_LITERAL(27, 426, 7), // "visible"
QT_MOC_LITERAL(28, 434, 33), // "onReformatWidgetVisibilityCha..."
QT_MOC_LITERAL(29, 468, 28), // "onLockReformatWidgetToCamera"
QT_MOC_LITERAL(30, 497, 4), // "lock"
QT_MOC_LITERAL(31, 502, 40), // "onOriginCoordinateReferenceBu..."
QT_MOC_LITERAL(32, 543, 9), // "reference"
QT_MOC_LITERAL(33, 553, 26), // "onSliceNormalToAxisChanged"
QT_MOC_LITERAL(34, 580, 17), // "AxesReferenceType"
QT_MOC_LITERAL(35, 598, 4), // "axis"
QT_MOC_LITERAL(36, 603, 25), // "onSliceOrientationChanged"
QT_MOC_LITERAL(37, 629, 11), // "orientation"
QT_MOC_LITERAL(38, 641, 23), // "onSliderRotationChanged"
QT_MOC_LITERAL(39, 665, 9) // "rotationX"

    },
    "qSlicerReformatModuleWidget\0"
    "setWorldPosition\0\0double*\0newWorldPosition\0"
    "setSliceOffsetValue\0offset\0centerSliceNode\0"
    "setSliceNormal\0normal\0setNormalToCamera\0"
    "setNormalToAxisLR\0setNormalToAxisPA\0"
    "setNormalToAxisIS\0rotateToVolumePlane\0"
    "flipHorizontal\0flipVertical\0rotateClockwise\0"
    "rotateCounterClockwise\0onMRMLSliceNodeModified\0"
    "vtkObject*\0caller\0onTrackSliceOffsetValueChanged\0"
    "onNodeSelected\0vtkMRMLNode*\0node\0"
    "onSliceVisibilityChanged\0visible\0"
    "onReformatWidgetVisibilityChanged\0"
    "onLockReformatWidgetToCamera\0lock\0"
    "onOriginCoordinateReferenceButtonPressed\0"
    "reference\0onSliceNormalToAxisChanged\0"
    "AxesReferenceType\0axis\0onSliceOrientationChanged\0"
    "orientation\0onSliderRotationChanged\0"
    "rotationX"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerReformatModuleWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x0a /* Public */,
       5,    1,  132,    2, 0x0a /* Public */,
       7,    0,  135,    2, 0x0a /* Public */,
       8,    1,  136,    2, 0x0a /* Public */,
      10,    0,  139,    2, 0x0a /* Public */,
      11,    0,  140,    2, 0x0a /* Public */,
      12,    0,  141,    2, 0x0a /* Public */,
      13,    0,  142,    2, 0x0a /* Public */,
      14,    0,  143,    2, 0x0a /* Public */,
      15,    0,  144,    2, 0x0a /* Public */,
      16,    0,  145,    2, 0x0a /* Public */,
      17,    0,  146,    2, 0x0a /* Public */,
      18,    0,  147,    2, 0x0a /* Public */,
      19,    1,  148,    2, 0x09 /* Protected */,
      22,    1,  151,    2, 0x09 /* Protected */,
      23,    1,  154,    2, 0x09 /* Protected */,
      26,    1,  157,    2, 0x09 /* Protected */,
      28,    1,  160,    2, 0x09 /* Protected */,
      29,    1,  163,    2, 0x09 /* Protected */,
      31,    1,  166,    2, 0x09 /* Protected */,
      33,    1,  169,    2, 0x09 /* Protected */,
      36,    1,  172,    2, 0x09 /* Protected */,
      38,    1,  175,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, QMetaType::Double,   39,

       0        // eod
};

void qSlicerReformatModuleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerReformatModuleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setWorldPosition((*reinterpret_cast< double*(*)>(_a[1]))); break;
        case 1: _t->setSliceOffsetValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->centerSliceNode(); break;
        case 3: _t->setSliceNormal((*reinterpret_cast< double*(*)>(_a[1]))); break;
        case 4: _t->setNormalToCamera(); break;
        case 5: _t->setNormalToAxisLR(); break;
        case 6: _t->setNormalToAxisPA(); break;
        case 7: _t->setNormalToAxisIS(); break;
        case 8: _t->rotateToVolumePlane(); break;
        case 9: _t->flipHorizontal(); break;
        case 10: _t->flipVertical(); break;
        case 11: _t->rotateClockwise(); break;
        case 12: _t->rotateCounterClockwise(); break;
        case 13: _t->onMRMLSliceNodeModified((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 14: _t->onTrackSliceOffsetValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->onNodeSelected((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 16: _t->onSliceVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->onReformatWidgetVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->onLockReformatWidgetToCamera((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->onOriginCoordinateReferenceButtonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->onSliceNormalToAxisChanged((*reinterpret_cast< AxesReferenceType(*)>(_a[1]))); break;
        case 21: _t->onSliceOrientationChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->onSliderRotationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerReformatModuleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerAbstractModuleWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerReformatModuleWidget.data,
    qt_meta_data_qSlicerReformatModuleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerReformatModuleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerReformatModuleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerReformatModuleWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerAbstractModuleWidget::qt_metacast(_clname);
}

int qSlicerReformatModuleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerAbstractModuleWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
