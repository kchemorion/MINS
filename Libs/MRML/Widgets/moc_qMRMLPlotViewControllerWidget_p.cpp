/****************************************************************************
** Meta object code from reading C++ file 'qMRMLPlotViewControllerWidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLPlotViewControllerWidget_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLPlotViewControllerWidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLPlotViewControllerWidgetPrivate_t {
    QByteArrayData data[9];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLPlotViewControllerWidgetPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLPlotViewControllerWidgetPrivate_t qt_meta_stringdata_qMRMLPlotViewControllerWidgetPrivate = {
    {
QT_MOC_LITERAL(0, 0, 36), // "qMRMLPlotViewControllerWidget..."
QT_MOC_LITERAL(1, 37, 23), // "onPlotChartNodeSelected"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 75, 4), // "node"
QT_MOC_LITERAL(5, 80, 25), // "onPlotSeriesNodesSelected"
QT_MOC_LITERAL(6, 106, 21), // "onPlotSeriesNodeAdded"
QT_MOC_LITERAL(7, 128, 17), // "onPlotTypeChanged"
QT_MOC_LITERAL(8, 146, 24) // "onInteractionModeChanged"

    },
    "qMRMLPlotViewControllerWidgetPrivate\0"
    "onPlotChartNodeSelected\0\0vtkMRMLNode*\0"
    "node\0onPlotSeriesNodesSelected\0"
    "onPlotSeriesNodeAdded\0onPlotTypeChanged\0"
    "onInteractionModeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLPlotViewControllerWidgetPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,
       7,    1,   46,    2, 0x0a /* Public */,
       8,    1,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void qMRMLPlotViewControllerWidgetPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLPlotViewControllerWidgetPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onPlotChartNodeSelected((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->onPlotSeriesNodesSelected(); break;
        case 2: _t->onPlotSeriesNodeAdded((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->onPlotTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onInteractionModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLPlotViewControllerWidgetPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLViewControllerBarPrivate::staticMetaObject>(),
    qt_meta_stringdata_qMRMLPlotViewControllerWidgetPrivate.data,
    qt_meta_data_qMRMLPlotViewControllerWidgetPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLPlotViewControllerWidgetPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLPlotViewControllerWidgetPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLPlotViewControllerWidgetPrivate.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_qMRMLPlotViewControllerWidget"))
        return static_cast< Ui_qMRMLPlotViewControllerWidget*>(this);
    return qMRMLViewControllerBarPrivate::qt_metacast(_clname);
}

int qMRMLPlotViewControllerWidgetPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLViewControllerBarPrivate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
