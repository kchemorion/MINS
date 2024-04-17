/****************************************************************************
** Meta object code from reading C++ file 'qMRMLPlotWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLPlotWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLPlotWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLPlotWidget_t {
    QByteArrayData data[18];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLPlotWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLPlotWidget_t qt_meta_stringdata_qMRMLPlotWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "qMRMLPlotWidget"
QT_MOC_LITERAL(1, 16, 19), // "setMRMLPlotViewNode"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 20), // "vtkMRMLPlotViewNode*"
QT_MOC_LITERAL(4, 58, 15), // "newPlotViewNode"
QT_MOC_LITERAL(5, 74, 23), // "setMRMLAbstractViewNode"
QT_MOC_LITERAL(6, 98, 24), // "vtkMRMLAbstractViewNode*"
QT_MOC_LITERAL(7, 123, 11), // "newViewNode"
QT_MOC_LITERAL(8, 135, 16), // "mrmlPlotViewNode"
QT_MOC_LITERAL(9, 152, 20), // "mrmlAbstractViewNode"
QT_MOC_LITERAL(10, 173, 8), // "plotView"
QT_MOC_LITERAL(11, 182, 14), // "qMRMLPlotView*"
QT_MOC_LITERAL(12, 197, 10), // "viewWidget"
QT_MOC_LITERAL(13, 208, 8), // "QWidget*"
QT_MOC_LITERAL(14, 217, 14), // "plotController"
QT_MOC_LITERAL(15, 232, 30), // "qMRMLPlotViewControllerWidget*"
QT_MOC_LITERAL(16, 263, 16), // "controllerWidget"
QT_MOC_LITERAL(17, 280, 23) // "qMRMLViewControllerBar*"

    },
    "qMRMLPlotWidget\0setMRMLPlotViewNode\0"
    "\0vtkMRMLPlotViewNode*\0newPlotViewNode\0"
    "setMRMLAbstractViewNode\0"
    "vtkMRMLAbstractViewNode*\0newViewNode\0"
    "mrmlPlotViewNode\0mrmlAbstractViewNode\0"
    "plotView\0qMRMLPlotView*\0viewWidget\0"
    "QWidget*\0plotController\0"
    "qMRMLPlotViewControllerWidget*\0"
    "controllerWidget\0qMRMLViewControllerBar*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLPlotWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   60,    2, 0x02 /* Public */,
       9,    0,   61,    2, 0x02 /* Public */,
      10,    0,   62,    2, 0x02 /* Public */,
      12,    0,   63,    2, 0x02 /* Public */,
      14,    0,   64,    2, 0x02 /* Public */,
      16,    0,   65,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // methods: parameters
    0x80000000 | 3,
    0x80000000 | 6,
    0x80000000 | 11,
    0x80000000 | 13,
    0x80000000 | 15,
    0x80000000 | 17,

       0        // eod
};

void qMRMLPlotWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLPlotWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLPlotViewNode((*reinterpret_cast< vtkMRMLPlotViewNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLAbstractViewNode((*reinterpret_cast< vtkMRMLAbstractViewNode*(*)>(_a[1]))); break;
        case 2: { vtkMRMLPlotViewNode* _r = _t->mrmlPlotViewNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLPlotViewNode**>(_a[0]) = std::move(_r); }  break;
        case 3: { vtkMRMLAbstractViewNode* _r = _t->mrmlAbstractViewNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLAbstractViewNode**>(_a[0]) = std::move(_r); }  break;
        case 4: { qMRMLPlotView* _r = _t->plotView();
            if (_a[0]) *reinterpret_cast< qMRMLPlotView**>(_a[0]) = std::move(_r); }  break;
        case 5: { QWidget* _r = _t->viewWidget();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        case 6: { qMRMLPlotViewControllerWidget* _r = _t->plotController();
            if (_a[0]) *reinterpret_cast< qMRMLPlotViewControllerWidget**>(_a[0]) = std::move(_r); }  break;
        case 7: { qMRMLViewControllerBar* _r = _t->controllerWidget();
            if (_a[0]) *reinterpret_cast< qMRMLViewControllerBar**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLPlotWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLAbstractViewWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLPlotWidget.data,
    qt_meta_data_qMRMLPlotWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLPlotWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLPlotWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLPlotWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLAbstractViewWidget::qt_metacast(_clname);
}

int qMRMLPlotWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLAbstractViewWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
