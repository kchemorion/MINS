/****************************************************************************
** Meta object code from reading C++ file 'qMRMLMatrixWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLMatrixWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLMatrixWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLMatrixWidget_t {
    QByteArrayData data[13];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLMatrixWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLMatrixWidget_t qt_meta_stringdata_qMRMLMatrixWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "qMRMLMatrixWidget"
QT_MOC_LITERAL(1, 18, 20), // "setMRMLTransformNode"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 21), // "vtkMRMLTransformNode*"
QT_MOC_LITERAL(4, 62, 13), // "transformNode"
QT_MOC_LITERAL(5, 76, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 89, 4), // "node"
QT_MOC_LITERAL(7, 94, 12), // "updateMatrix"
QT_MOC_LITERAL(8, 107, 19), // "updateTransformNode"
QT_MOC_LITERAL(9, 127, 19), // "coordinateReference"
QT_MOC_LITERAL(10, 147, 23), // "CoordinateReferenceType"
QT_MOC_LITERAL(11, 171, 6), // "GLOBAL"
QT_MOC_LITERAL(12, 178, 5) // "LOCAL"

    },
    "qMRMLMatrixWidget\0setMRMLTransformNode\0"
    "\0vtkMRMLTransformNode*\0transformNode\0"
    "vtkMRMLNode*\0node\0updateMatrix\0"
    "updateTransformNode\0coordinateReference\0"
    "CoordinateReferenceType\0GLOBAL\0LOCAL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLMatrixWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   42, // properties
       1,   45, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       1,    1,   37,    2, 0x0a /* Public */,
       7,    0,   40,    2, 0x09 /* Protected */,
       8,    0,   41,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x0009510b,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    2,   50,

 // enum data: key, value
      11, uint(qMRMLMatrixWidget::GLOBAL),
      12, uint(qMRMLMatrixWidget::LOCAL),

       0        // eod
};

void qMRMLMatrixWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLMatrixWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLTransformNode((*reinterpret_cast< vtkMRMLTransformNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLTransformNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->updateMatrix(); break;
        case 3: _t->updateTransformNode(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLMatrixWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< CoordinateReferenceType*>(_v) = _t->coordinateReference(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLMatrixWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCoordinateReference(*reinterpret_cast< CoordinateReferenceType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLMatrixWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkVTKAbstractMatrixWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLMatrixWidget.data,
    qt_meta_data_qMRMLMatrixWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLMatrixWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLMatrixWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLMatrixWidget.stringdata0))
        return static_cast<void*>(this);
    return ctkVTKAbstractMatrixWidget::qt_metacast(_clname);
}

int qMRMLMatrixWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkVTKAbstractMatrixWidget::qt_metacall(_c, _id, _a);
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
