/****************************************************************************
** Meta object code from reading C++ file 'qSlicerEventBrokerModuleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Core/EventBroker/qSlicerEventBrokerModuleWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerEventBrokerModuleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerEventBrokerModuleWidget_t {
    QByteArrayData data[4];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerEventBrokerModuleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerEventBrokerModuleWidget_t qt_meta_stringdata_qSlicerEventBrokerModuleWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "qSlicerEventBrokerModuleWidget"
QT_MOC_LITERAL(1, 31, 22), // "onCurrentObjectChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 10) // "vtkObject*"

    },
    "qSlicerEventBrokerModuleWidget\0"
    "onCurrentObjectChanged\0\0vtkObject*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerEventBrokerModuleWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void qSlicerEventBrokerModuleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerEventBrokerModuleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCurrentObjectChanged((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerEventBrokerModuleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerAbstractModuleWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerEventBrokerModuleWidget.data,
    qt_meta_data_qSlicerEventBrokerModuleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerEventBrokerModuleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerEventBrokerModuleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerEventBrokerModuleWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerAbstractModuleWidget::qt_metacast(_clname);
}

int qSlicerEventBrokerModuleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerAbstractModuleWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
