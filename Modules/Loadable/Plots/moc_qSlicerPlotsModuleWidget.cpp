/****************************************************************************
** Meta object code from reading C++ file 'qSlicerPlotsModuleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/Plots/qSlicerPlotsModuleWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerPlotsModuleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerPlotsModuleWidget_t {
    QByteArrayData data[13];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerPlotsModuleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerPlotsModuleWidget_t qt_meta_stringdata_qSlicerPlotsModuleWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "qSlicerPlotsModuleWidget"
QT_MOC_LITERAL(1, 25, 18), // "setCurrentPlotNode"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 58, 27), // "onMRMLPlotChartNodeModified"
QT_MOC_LITERAL(5, 86, 10), // "vtkObject*"
QT_MOC_LITERAL(6, 97, 6), // "caller"
QT_MOC_LITERAL(7, 104, 14), // "onNodeSelected"
QT_MOC_LITERAL(8, 119, 4), // "node"
QT_MOC_LITERAL(9, 124, 23), // "onLockPlotButtonClicked"
QT_MOC_LITERAL(10, 148, 27), // "onCopyPlotSeriesNodeClicked"
QT_MOC_LITERAL(11, 176, 24), // "onShowChartButtonClicked"
QT_MOC_LITERAL(12, 201, 23) // "onSeriesNodeAddedByUser"

    },
    "qSlicerPlotsModuleWidget\0setCurrentPlotNode\0"
    "\0vtkMRMLNode*\0onMRMLPlotChartNodeModified\0"
    "vtkObject*\0caller\0onNodeSelected\0node\0"
    "onLockPlotButtonClicked\0"
    "onCopyPlotSeriesNodeClicked\0"
    "onShowChartButtonClicked\0"
    "onSeriesNodeAddedByUser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerPlotsModuleWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x09 /* Protected */,
       7,    1,   55,    2, 0x09 /* Protected */,
       9,    0,   58,    2, 0x09 /* Protected */,
      10,    0,   59,    2, 0x09 /* Protected */,
      11,    0,   60,    2, 0x09 /* Protected */,
      12,    1,   61,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void qSlicerPlotsModuleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerPlotsModuleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setCurrentPlotNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->onMRMLPlotChartNodeModified((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 2: _t->onNodeSelected((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->onLockPlotButtonClicked(); break;
        case 4: _t->onCopyPlotSeriesNodeClicked(); break;
        case 5: _t->onShowChartButtonClicked(); break;
        case 6: _t->onSeriesNodeAddedByUser((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerPlotsModuleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerAbstractModuleWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerPlotsModuleWidget.data,
    qt_meta_data_qSlicerPlotsModuleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerPlotsModuleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerPlotsModuleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerPlotsModuleWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerAbstractModuleWidget::qt_metacast(_clname);
}

int qSlicerPlotsModuleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerAbstractModuleWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
