/****************************************************************************
** Meta object code from reading C++ file 'qMRMLPlotViewControllerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLPlotViewControllerWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLPlotViewControllerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLPlotViewControllerWidget_t {
    QByteArrayData data[16];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLPlotViewControllerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLPlotViewControllerWidget_t qt_meta_stringdata_qMRMLPlotViewControllerWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "qMRMLPlotViewControllerWidget"
QT_MOC_LITERAL(1, 30, 12), // "setMRMLScene"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(4, 58, 8), // "newScene"
QT_MOC_LITERAL(5, 67, 11), // "setPlotView"
QT_MOC_LITERAL(6, 79, 14), // "qMRMLPlotView*"
QT_MOC_LITERAL(7, 94, 8), // "PlotView"
QT_MOC_LITERAL(8, 103, 19), // "setMRMLPlotViewNode"
QT_MOC_LITERAL(9, 123, 20), // "vtkMRMLPlotViewNode*"
QT_MOC_LITERAL(10, 144, 12), // "PlotViewNode"
QT_MOC_LITERAL(11, 157, 13), // "fitPlotToAxes"
QT_MOC_LITERAL(12, 171, 14), // "onExportButton"
QT_MOC_LITERAL(13, 186, 24), // "updateWidgetFromMRMLView"
QT_MOC_LITERAL(14, 211, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(15, 232, 16) // "mrmlPlotViewNode"

    },
    "qMRMLPlotViewControllerWidget\0"
    "setMRMLScene\0\0vtkMRMLScene*\0newScene\0"
    "setPlotView\0qMRMLPlotView*\0PlotView\0"
    "setMRMLPlotViewNode\0vtkMRMLPlotViewNode*\0"
    "PlotViewNode\0fitPlotToAxes\0onExportButton\0"
    "updateWidgetFromMRMLView\0updateWidgetFromMRML\0"
    "mrmlPlotViewNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLPlotViewControllerWidget[] = {

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
       8,    1,   60,    2, 0x0a /* Public */,
      11,    0,   63,    2, 0x0a /* Public */,
      12,    0,   64,    2, 0x0a /* Public */,
      13,    0,   65,    2, 0x09 /* Protected */,
      14,    0,   66,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      15,    0,   67,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 9,

       0        // eod
};

void qMRMLPlotViewControllerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLPlotViewControllerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 1: _t->setPlotView((*reinterpret_cast< qMRMLPlotView*(*)>(_a[1]))); break;
        case 2: _t->setMRMLPlotViewNode((*reinterpret_cast< vtkMRMLPlotViewNode*(*)>(_a[1]))); break;
        case 3: _t->fitPlotToAxes(); break;
        case 4: _t->onExportButton(); break;
        case 5: _t->updateWidgetFromMRMLView(); break;
        case 6: _t->updateWidgetFromMRML(); break;
        case 7: { vtkMRMLPlotViewNode* _r = _t->mrmlPlotViewNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLPlotViewNode**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLPlotViewControllerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLViewControllerBar::staticMetaObject>(),
    qt_meta_stringdata_qMRMLPlotViewControllerWidget.data,
    qt_meta_data_qMRMLPlotViewControllerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLPlotViewControllerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLPlotViewControllerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLPlotViewControllerWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLViewControllerBar::qt_metacast(_clname);
}

int qMRMLPlotViewControllerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLViewControllerBar::qt_metacall(_c, _id, _a);
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
