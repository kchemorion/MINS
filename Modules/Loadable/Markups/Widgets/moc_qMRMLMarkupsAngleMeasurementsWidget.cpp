/****************************************************************************
** Meta object code from reading C++ file 'qMRMLMarkupsAngleMeasurementsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Markups/Widgets/qMRMLMarkupsAngleMeasurementsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLMarkupsAngleMeasurementsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLMarkupsAngleMeasurementsWidget_t {
    QByteArrayData data[5];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLMarkupsAngleMeasurementsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLMarkupsAngleMeasurementsWidget_t qt_meta_stringdata_qMRMLMarkupsAngleMeasurementsWidget = {
    {
QT_MOC_LITERAL(0, 0, 35), // "qMRMLMarkupsAngleMeasurements..."
QT_MOC_LITERAL(1, 36, 29), // "onAngleMeasurementModeChanged"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 21), // "onRotationAxisChanged"
QT_MOC_LITERAL(4, 89, 20) // "updateWidgetFromMRML"

    },
    "qMRMLMarkupsAngleMeasurementsWidget\0"
    "onAngleMeasurementModeChanged\0\0"
    "onRotationAxisChanged\0updateWidgetFromMRML"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLMarkupsAngleMeasurementsWidget[] = {

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
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qMRMLMarkupsAngleMeasurementsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLMarkupsAngleMeasurementsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAngleMeasurementModeChanged(); break;
        case 1: _t->onRotationAxisChanged(); break;
        case 2: _t->updateWidgetFromMRML(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject qMRMLMarkupsAngleMeasurementsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLMarkupsAbstractOptionsWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLMarkupsAngleMeasurementsWidget.data,
    qt_meta_data_qMRMLMarkupsAngleMeasurementsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLMarkupsAngleMeasurementsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLMarkupsAngleMeasurementsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLMarkupsAngleMeasurementsWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLMarkupsAbstractOptionsWidget::qt_metacast(_clname);
}

int qMRMLMarkupsAngleMeasurementsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLMarkupsAbstractOptionsWidget::qt_metacall(_c, _id, _a);
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