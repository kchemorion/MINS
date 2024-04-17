/****************************************************************************
** Meta object code from reading C++ file 'qMRMLLinearTransformSlider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLLinearTransformSlider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLLinearTransformSlider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLLinearTransformSlider_t {
    QByteArrayData data[22];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLLinearTransformSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLLinearTransformSlider_t qt_meta_stringdata_qMRMLLinearTransformSlider = {
    {
QT_MOC_LITERAL(0, 0, 26), // "qMRMLLinearTransformSlider"
QT_MOC_LITERAL(1, 27, 20), // "setMRMLTransformNode"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 21), // "vtkMRMLTransformNode*"
QT_MOC_LITERAL(4, 71, 13), // "transformNode"
QT_MOC_LITERAL(5, 85, 19), // "applyTransformation"
QT_MOC_LITERAL(6, 105, 14), // "sliderPosition"
QT_MOC_LITERAL(7, 120, 27), // "onMRMLTransformNodeModified"
QT_MOC_LITERAL(8, 148, 10), // "vtkObject*"
QT_MOC_LITERAL(9, 159, 6), // "caller"
QT_MOC_LITERAL(10, 166, 15), // "TypeOfTransform"
QT_MOC_LITERAL(11, 182, 13), // "TransformType"
QT_MOC_LITERAL(12, 196, 19), // "CoordinateReference"
QT_MOC_LITERAL(13, 216, 23), // "CoordinateReferenceType"
QT_MOC_LITERAL(14, 240, 14), // "TRANSLATION_LR"
QT_MOC_LITERAL(15, 255, 14), // "TRANSLATION_PA"
QT_MOC_LITERAL(16, 270, 14), // "TRANSLATION_IS"
QT_MOC_LITERAL(17, 285, 11), // "ROTATION_LR"
QT_MOC_LITERAL(18, 297, 11), // "ROTATION_PA"
QT_MOC_LITERAL(19, 309, 11), // "ROTATION_IS"
QT_MOC_LITERAL(20, 321, 6), // "GLOBAL"
QT_MOC_LITERAL(21, 328, 5) // "LOCAL"

    },
    "qMRMLLinearTransformSlider\0"
    "setMRMLTransformNode\0\0vtkMRMLTransformNode*\0"
    "transformNode\0applyTransformation\0"
    "sliderPosition\0onMRMLTransformNodeModified\0"
    "vtkObject*\0caller\0TypeOfTransform\0"
    "TransformType\0CoordinateReference\0"
    "CoordinateReferenceType\0TRANSLATION_LR\0"
    "TRANSLATION_PA\0TRANSLATION_IS\0ROTATION_LR\0"
    "ROTATION_PA\0ROTATION_IS\0GLOBAL\0LOCAL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLLinearTransformSlider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   38, // properties
       2,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    1,   32,    2, 0x0a /* Public */,
       7,    1,   35,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x0009510b,
      12, 0x80000000 | 13, 0x0009510b,

 // enums: name, alias, flags, count, data
      11,   11, 0x0,    6,   54,
      13,   13, 0x0,    2,   66,

 // enum data: key, value
      14, uint(qMRMLLinearTransformSlider::TRANSLATION_LR),
      15, uint(qMRMLLinearTransformSlider::TRANSLATION_PA),
      16, uint(qMRMLLinearTransformSlider::TRANSLATION_IS),
      17, uint(qMRMLLinearTransformSlider::ROTATION_LR),
      18, uint(qMRMLLinearTransformSlider::ROTATION_PA),
      19, uint(qMRMLLinearTransformSlider::ROTATION_IS),
      20, uint(qMRMLLinearTransformSlider::GLOBAL),
      21, uint(qMRMLLinearTransformSlider::LOCAL),

       0        // eod
};

void qMRMLLinearTransformSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLLinearTransformSlider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLTransformNode((*reinterpret_cast< vtkMRMLTransformNode*(*)>(_a[1]))); break;
        case 1: _t->applyTransformation((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->onMRMLTransformNodeModified((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLLinearTransformSlider *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TransformType*>(_v) = _t->typeOfTransform(); break;
        case 1: *reinterpret_cast< CoordinateReferenceType*>(_v) = _t->coordinateReference(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLLinearTransformSlider *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTypeOfTransform(*reinterpret_cast< TransformType*>(_v)); break;
        case 1: _t->setCoordinateReference(*reinterpret_cast< CoordinateReferenceType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLLinearTransformSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLSliderWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLLinearTransformSlider.data,
    qt_meta_data_qMRMLLinearTransformSlider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLLinearTransformSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLLinearTransformSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLLinearTransformSlider.stringdata0))
        return static_cast<void*>(this);
    return qMRMLSliderWidget::qt_metacast(_clname);
}

int qMRMLLinearTransformSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLSliderWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
