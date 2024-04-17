/****************************************************************************
** Meta object code from reading C++ file 'qSlicerFileWriterOptionsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerFileWriterOptionsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerFileWriterOptionsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerFileWriterOptionsWidget_t {
    QByteArrayData data[5];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerFileWriterOptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerFileWriterOptionsWidget_t qt_meta_stringdata_qSlicerFileWriterOptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "qSlicerFileWriterOptionsWidget"
QT_MOC_LITERAL(1, 31, 9), // "setObject"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 10), // "vtkObject*"
QT_MOC_LITERAL(4, 53, 6) // "object"

    },
    "qSlicerFileWriterOptionsWidget\0setObject\0"
    "\0vtkObject*\0object"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerFileWriterOptionsWidget[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void qSlicerFileWriterOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerFileWriterOptionsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setObject((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerFileWriterOptionsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerIOOptionsWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerFileWriterOptionsWidget.data,
    qt_meta_data_qSlicerFileWriterOptionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerFileWriterOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerFileWriterOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerFileWriterOptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerIOOptionsWidget::qt_metacast(_clname);
}

int qSlicerFileWriterOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerIOOptionsWidget::qt_metacall(_c, _id, _a);
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
