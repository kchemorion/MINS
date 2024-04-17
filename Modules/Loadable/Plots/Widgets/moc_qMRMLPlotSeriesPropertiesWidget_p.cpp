/****************************************************************************
** Meta object code from reading C++ file 'qMRMLPlotSeriesPropertiesWidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Plots/Widgets/qMRMLPlotSeriesPropertiesWidget_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLPlotSeriesPropertiesWidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLPlotSeriesPropertiesWidgetPrivate_t {
    QByteArrayData data[21];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLPlotSeriesPropertiesWidgetPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLPlotSeriesPropertiesWidgetPrivate_t qt_meta_stringdata_qMRMLPlotSeriesPropertiesWidgetPrivate = {
    {
QT_MOC_LITERAL(0, 0, 38), // "qMRMLPlotSeriesPropertiesWidg..."
QT_MOC_LITERAL(1, 39, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 23), // "onPlotSeriesNodeChanged"
QT_MOC_LITERAL(4, 85, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(5, 98, 4), // "node"
QT_MOC_LITERAL(6, 103, 23), // "onInputTableNodeChanged"
QT_MOC_LITERAL(7, 127, 14), // "onXAxisChanged"
QT_MOC_LITERAL(8, 142, 5), // "index"
QT_MOC_LITERAL(9, 148, 15), // "onLabelsChanged"
QT_MOC_LITERAL(10, 164, 14), // "onYAxisChanged"
QT_MOC_LITERAL(11, 179, 17), // "onPlotTypeChanged"
QT_MOC_LITERAL(12, 197, 21), // "onMarkersStyleChanged"
QT_MOC_LITERAL(13, 219, 5), // "style"
QT_MOC_LITERAL(14, 225, 20), // "onMarkersSizeChanged"
QT_MOC_LITERAL(15, 246, 4), // "size"
QT_MOC_LITERAL(16, 251, 18), // "onLineStyleChanged"
QT_MOC_LITERAL(17, 270, 18), // "onLineWidthChanged"
QT_MOC_LITERAL(18, 289, 5), // "width"
QT_MOC_LITERAL(19, 295, 24), // "onPlotSeriesColorChanged"
QT_MOC_LITERAL(20, 320, 5) // "color"

    },
    "qMRMLPlotSeriesPropertiesWidgetPrivate\0"
    "updateWidgetFromMRML\0\0onPlotSeriesNodeChanged\0"
    "vtkMRMLNode*\0node\0onInputTableNodeChanged\0"
    "onXAxisChanged\0index\0onLabelsChanged\0"
    "onYAxisChanged\0onPlotTypeChanged\0"
    "onMarkersStyleChanged\0style\0"
    "onMarkersSizeChanged\0size\0onLineStyleChanged\0"
    "onLineWidthChanged\0width\0"
    "onPlotSeriesColorChanged\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLPlotSeriesPropertiesWidgetPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    1,   75,    2, 0x0a /* Public */,
       6,    1,   78,    2, 0x0a /* Public */,
       7,    1,   81,    2, 0x0a /* Public */,
       9,    1,   84,    2, 0x0a /* Public */,
      10,    1,   87,    2, 0x0a /* Public */,
      11,    1,   90,    2, 0x0a /* Public */,
      12,    1,   93,    2, 0x0a /* Public */,
      14,    1,   96,    2, 0x0a /* Public */,
      16,    1,   99,    2, 0x0a /* Public */,
      17,    1,  102,    2, 0x0a /* Public */,
      19,    1,  105,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, QMetaType::QColor,   20,

       0        // eod
};

void qMRMLPlotSeriesPropertiesWidgetPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLPlotSeriesPropertiesWidgetPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateWidgetFromMRML(); break;
        case 1: _t->onPlotSeriesNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->onInputTableNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->onXAxisChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onLabelsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onYAxisChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onPlotTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onMarkersStyleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->onMarkersSizeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->onLineStyleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->onLineWidthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->onPlotSeriesColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLPlotSeriesPropertiesWidgetPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qMRMLPlotSeriesPropertiesWidgetPrivate.data,
    qt_meta_data_qMRMLPlotSeriesPropertiesWidgetPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLPlotSeriesPropertiesWidgetPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLPlotSeriesPropertiesWidgetPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLPlotSeriesPropertiesWidgetPrivate.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_qMRMLPlotSeriesPropertiesWidget"))
        return static_cast< Ui_qMRMLPlotSeriesPropertiesWidget*>(this);
    return QObject::qt_metacast(_clname);
}

int qMRMLPlotSeriesPropertiesWidgetPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
