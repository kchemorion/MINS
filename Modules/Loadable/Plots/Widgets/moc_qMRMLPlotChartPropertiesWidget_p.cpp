/****************************************************************************
** Meta object code from reading C++ file 'qMRMLPlotChartPropertiesWidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Plots/Widgets/qMRMLPlotChartPropertiesWidget_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLPlotChartPropertiesWidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLPlotChartPropertiesWidgetPrivate_t {
    QByteArrayData data[7];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLPlotChartPropertiesWidgetPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLPlotChartPropertiesWidgetPrivate_t qt_meta_stringdata_qMRMLPlotChartPropertiesWidgetPrivate = {
    {
QT_MOC_LITERAL(0, 0, 37), // "qMRMLPlotChartPropertiesWidge..."
QT_MOC_LITERAL(1, 38, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 25), // "onPlotSeriesNodesSelected"
QT_MOC_LITERAL(4, 86, 21), // "onPlotSeriesNodeAdded"
QT_MOC_LITERAL(5, 108, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 121, 4) // "node"

    },
    "qMRMLPlotChartPropertiesWidgetPrivate\0"
    "updateWidgetFromMRML\0\0onPlotSeriesNodesSelected\0"
    "onPlotSeriesNodeAdded\0vtkMRMLNode*\0"
    "node"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLPlotChartPropertiesWidgetPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    1,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void qMRMLPlotChartPropertiesWidgetPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLPlotChartPropertiesWidgetPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateWidgetFromMRML(); break;
        case 1: _t->onPlotSeriesNodesSelected(); break;
        case 2: _t->onPlotSeriesNodeAdded((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLPlotChartPropertiesWidgetPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qMRMLPlotChartPropertiesWidgetPrivate.data,
    qt_meta_data_qMRMLPlotChartPropertiesWidgetPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLPlotChartPropertiesWidgetPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLPlotChartPropertiesWidgetPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLPlotChartPropertiesWidgetPrivate.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_qMRMLPlotChartPropertiesWidget"))
        return static_cast< Ui_qMRMLPlotChartPropertiesWidget*>(this);
    return QObject::qt_metacast(_clname);
}

int qMRMLPlotChartPropertiesWidgetPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
