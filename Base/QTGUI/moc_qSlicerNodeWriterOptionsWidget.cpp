/****************************************************************************
** Meta object code from reading C++ file 'qSlicerNodeWriterOptionsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerNodeWriterOptionsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerNodeWriterOptionsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerNodeWriterOptionsWidget_t {
    QByteArrayData data[11];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerNodeWriterOptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerNodeWriterOptionsWidget_t qt_meta_stringdata_qSlicerNodeWriterOptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "qSlicerNodeWriterOptionsWidget"
QT_MOC_LITERAL(1, 31, 9), // "setObject"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 10), // "vtkObject*"
QT_MOC_LITERAL(4, 53, 6), // "object"
QT_MOC_LITERAL(5, 60, 17), // "setUseCompression"
QT_MOC_LITERAL(6, 78, 3), // "use"
QT_MOC_LITERAL(7, 82, 23), // "setCompressionParameter"
QT_MOC_LITERAL(8, 106, 5), // "index"
QT_MOC_LITERAL(9, 112, 9), // "parameter"
QT_MOC_LITERAL(10, 122, 18) // "showUseCompression"

    },
    "qSlicerNodeWriterOptionsWidget\0setObject\0"
    "\0vtkObject*\0object\0setUseCompression\0"
    "use\0setCompressionParameter\0index\0"
    "parameter\0showUseCompression"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerNodeWriterOptionsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x09 /* Protected */,
       7,    1,   40,    2, 0x09 /* Protected */,
       7,    1,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,    9,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qSlicerNodeWriterOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerNodeWriterOptionsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setObject((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 1: _t->setUseCompression((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setCompressionParameter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setCompressionParameter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerNodeWriterOptionsWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->showUseCompression(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerNodeWriterOptionsWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShowUseCompression(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerNodeWriterOptionsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerFileWriterOptionsWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerNodeWriterOptionsWidget.data,
    qt_meta_data_qSlicerNodeWriterOptionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerNodeWriterOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerNodeWriterOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerNodeWriterOptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerFileWriterOptionsWidget::qt_metacast(_clname);
}

int qSlicerNodeWriterOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerFileWriterOptionsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
