/****************************************************************************
** Meta object code from reading C++ file 'osm_qSlicerPlotsModuleWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "osm_qSlicerPlotsModuleWidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osm_qSlicerPlotsModuleWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythonQtWrapper_qMRMLPlotSeriesPropertiesWidget_t {
    QByteArrayData data[8];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLPlotSeriesPropertiesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLPlotSeriesPropertiesWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLPlotSeriesPropertiesWidget = {
    {
QT_MOC_LITERAL(0, 0, 47), // "PythonQtWrapper_qMRMLPlotSeri..."
QT_MOC_LITERAL(1, 48, 35), // "new_qMRMLPlotSeriesProperties..."
QT_MOC_LITERAL(2, 84, 32), // "qMRMLPlotSeriesPropertiesWidget*"
QT_MOC_LITERAL(3, 117, 0), // ""
QT_MOC_LITERAL(4, 118, 8), // "QWidget*"
QT_MOC_LITERAL(5, 127, 6), // "parent"
QT_MOC_LITERAL(6, 134, 38), // "delete_qMRMLPlotSeriesPropert..."
QT_MOC_LITERAL(7, 173, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLPlotSeriesPropertiesWidget\0"
    "new_qMRMLPlotSeriesPropertiesWidget\0"
    "qMRMLPlotSeriesPropertiesWidget*\0\0"
    "QWidget*\0parent\0delete_qMRMLPlotSeriesPropertiesWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLPlotSeriesPropertiesWidget[] = {

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
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qMRMLPlotSeriesPropertiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLPlotSeriesPropertiesWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLPlotSeriesPropertiesWidget* _r = _t->new_qMRMLPlotSeriesPropertiesWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLPlotSeriesPropertiesWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLPlotSeriesPropertiesWidget* _r = _t->new_qMRMLPlotSeriesPropertiesWidget();
            if (_a[0]) *reinterpret_cast< qMRMLPlotSeriesPropertiesWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLPlotSeriesPropertiesWidget((*reinterpret_cast< qMRMLPlotSeriesPropertiesWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLPlotSeriesPropertiesWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLPlotSeriesPropertiesWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLPlotSeriesPropertiesWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLPlotSeriesPropertiesWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLPlotSeriesPropertiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLPlotSeriesPropertiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLPlotSeriesPropertiesWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLPlotSeriesPropertiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qMRMLPlotChartPropertiesWidget_t {
    QByteArrayData data[8];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLPlotChartPropertiesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLPlotChartPropertiesWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLPlotChartPropertiesWidget = {
    {
QT_MOC_LITERAL(0, 0, 46), // "PythonQtWrapper_qMRMLPlotChar..."
QT_MOC_LITERAL(1, 47, 34), // "new_qMRMLPlotChartPropertiesW..."
QT_MOC_LITERAL(2, 82, 31), // "qMRMLPlotChartPropertiesWidget*"
QT_MOC_LITERAL(3, 114, 0), // ""
QT_MOC_LITERAL(4, 115, 8), // "QWidget*"
QT_MOC_LITERAL(5, 124, 6), // "parent"
QT_MOC_LITERAL(6, 131, 37), // "delete_qMRMLPlotChartProperti..."
QT_MOC_LITERAL(7, 169, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLPlotChartPropertiesWidget\0"
    "new_qMRMLPlotChartPropertiesWidget\0"
    "qMRMLPlotChartPropertiesWidget*\0\0"
    "QWidget*\0parent\0delete_qMRMLPlotChartPropertiesWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLPlotChartPropertiesWidget[] = {

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
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qMRMLPlotChartPropertiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLPlotChartPropertiesWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLPlotChartPropertiesWidget* _r = _t->new_qMRMLPlotChartPropertiesWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLPlotChartPropertiesWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLPlotChartPropertiesWidget* _r = _t->new_qMRMLPlotChartPropertiesWidget();
            if (_a[0]) *reinterpret_cast< qMRMLPlotChartPropertiesWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLPlotChartPropertiesWidget((*reinterpret_cast< qMRMLPlotChartPropertiesWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLPlotChartPropertiesWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLPlotChartPropertiesWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLPlotChartPropertiesWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLPlotChartPropertiesWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLPlotChartPropertiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLPlotChartPropertiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLPlotChartPropertiesWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLPlotChartPropertiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
