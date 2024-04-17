/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSegmentationsNodeWriterOptionsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/Segmentations/qSlicerSegmentationsNodeWriterOptionsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSegmentationsNodeWriterOptionsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSegmentationsNodeWriterOptionsWidget_t {
    QByteArrayData data[7];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSegmentationsNodeWriterOptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSegmentationsNodeWriterOptionsWidget_t qt_meta_stringdata_qSlicerSegmentationsNodeWriterOptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 43), // "qSlicerSegmentationsNodeWrite..."
QT_MOC_LITERAL(1, 44, 9), // "setObject"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 10), // "vtkObject*"
QT_MOC_LITERAL(4, 66, 6), // "object"
QT_MOC_LITERAL(5, 73, 22), // "setCropToMinimumExtent"
QT_MOC_LITERAL(6, 96, 4) // "crop"

    },
    "qSlicerSegmentationsNodeWriterOptionsWidget\0"
    "setObject\0\0vtkObject*\0object\0"
    "setCropToMinimumExtent\0crop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSegmentationsNodeWriterOptionsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       5,    1,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void qSlicerSegmentationsNodeWriterOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSegmentationsNodeWriterOptionsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setObject((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 1: _t->setCropToMinimumExtent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSegmentationsNodeWriterOptionsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerNodeWriterOptionsWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSegmentationsNodeWriterOptionsWidget.data,
    qt_meta_data_qSlicerSegmentationsNodeWriterOptionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSegmentationsNodeWriterOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSegmentationsNodeWriterOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSegmentationsNodeWriterOptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerNodeWriterOptionsWidget::qt_metacast(_clname);
}

int qSlicerSegmentationsNodeWriterOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerNodeWriterOptionsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
