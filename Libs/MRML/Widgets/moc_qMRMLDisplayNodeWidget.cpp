/****************************************************************************
** Meta object code from reading C++ file 'qMRMLDisplayNodeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLDisplayNodeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLDisplayNodeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLDisplayNodeWidget_t {
    QByteArrayData data[24];
    char stringdata0[495];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLDisplayNodeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLDisplayNodeWidget_t qt_meta_stringdata_qMRMLDisplayNodeWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "qMRMLDisplayNodeWidget"
QT_MOC_LITERAL(1, 23, 18), // "setMRMLDisplayNode"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 19), // "vtkMRMLDisplayNode*"
QT_MOC_LITERAL(4, 63, 4), // "node"
QT_MOC_LITERAL(5, 68, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 81, 22), // "setMRMLDisplayableNode"
QT_MOC_LITERAL(7, 104, 15), // "displayableNode"
QT_MOC_LITERAL(8, 120, 13), // "setVisibility"
QT_MOC_LITERAL(9, 134, 11), // "setSelected"
QT_MOC_LITERAL(10, 146, 11), // "setClipping"
QT_MOC_LITERAL(11, 158, 16), // "setThreeDVisible"
QT_MOC_LITERAL(12, 175, 27), // "setSliceIntersectionVisible"
QT_MOC_LITERAL(13, 203, 29), // "setSliceIntersectionThickness"
QT_MOC_LITERAL(14, 233, 27), // "setSliceIntersectionOpacity"
QT_MOC_LITERAL(15, 261, 20), // "setVisibilityVisible"
QT_MOC_LITERAL(16, 282, 18), // "setSelectedVisible"
QT_MOC_LITERAL(17, 301, 18), // "setClippingVisible"
QT_MOC_LITERAL(18, 320, 23), // "setThreeDVisibleVisible"
QT_MOC_LITERAL(19, 344, 34), // "setSliceIntersectionVisibleVi..."
QT_MOC_LITERAL(20, 379, 36), // "setSliceIntersectionThickness..."
QT_MOC_LITERAL(21, 416, 34), // "setSliceIntersectionOpacityVi..."
QT_MOC_LITERAL(22, 451, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(23, 472, 22) // "updateNodeFromProperty"

    },
    "qMRMLDisplayNodeWidget\0setMRMLDisplayNode\0"
    "\0vtkMRMLDisplayNode*\0node\0vtkMRMLNode*\0"
    "setMRMLDisplayableNode\0displayableNode\0"
    "setVisibility\0setSelected\0setClipping\0"
    "setThreeDVisible\0setSliceIntersectionVisible\0"
    "setSliceIntersectionThickness\0"
    "setSliceIntersectionOpacity\0"
    "setVisibilityVisible\0setSelectedVisible\0"
    "setClippingVisible\0setThreeDVisibleVisible\0"
    "setSliceIntersectionVisibleVisible\0"
    "setSliceIntersectionThicknessVisible\0"
    "setSliceIntersectionOpacityVisible\0"
    "updateWidgetFromMRML\0updateNodeFromProperty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLDisplayNodeWidget[] = {

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
       1,    1,  112,    2, 0x0a /* Public */,
       6,    1,  115,    2, 0x0a /* Public */,
       8,    1,  118,    2, 0x0a /* Public */,
       9,    1,  121,    2, 0x0a /* Public */,
      10,    1,  124,    2, 0x0a /* Public */,
      11,    1,  127,    2, 0x0a /* Public */,
      12,    1,  130,    2, 0x0a /* Public */,
      13,    1,  133,    2, 0x0a /* Public */,
      14,    1,  136,    2, 0x0a /* Public */,
      15,    1,  139,    2, 0x0a /* Public */,
      16,    1,  142,    2, 0x0a /* Public */,
      17,    1,  145,    2, 0x0a /* Public */,
      18,    1,  148,    2, 0x0a /* Public */,
      19,    1,  151,    2, 0x0a /* Public */,
      20,    1,  154,    2, 0x0a /* Public */,
      21,    1,  157,    2, 0x0a /* Public */,
      22,    0,  160,    2, 0x09 /* Protected */,
      23,    0,  161,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    4,
    QMetaType::Void, 0x80000000 | 5,    7,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qMRMLDisplayNodeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLDisplayNodeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLDisplayNode((*reinterpret_cast< vtkMRMLDisplayNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLDisplayNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->setMRMLDisplayableNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->setVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setClipping((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setThreeDVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setSliceIntersectionVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setSliceIntersectionThickness((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setSliceIntersectionOpacity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->setVisibilityVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setSelectedVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setClippingVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setThreeDVisibleVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setSliceIntersectionVisibleVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setSliceIntersectionThicknessVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->setSliceIntersectionOpacityVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->updateWidgetFromMRML(); break;
        case 18: _t->updateNodeFromProperty(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLDisplayNodeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLDisplayNodeWidget.data,
    qt_meta_data_qMRMLDisplayNodeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLDisplayNodeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLDisplayNodeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLDisplayNodeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qMRMLDisplayNodeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
