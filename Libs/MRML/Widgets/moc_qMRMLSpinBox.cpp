/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSpinBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLSpinBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSpinBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSpinBox_t {
    QByteArrayData data[22];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSpinBox_t qt_meta_stringdata_qMRMLSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 12), // "qMRMLSpinBox"
QT_MOC_LITERAL(1, 13, 11), // "setQuantity"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "baseName"
QT_MOC_LITERAL(4, 35, 12), // "setMRMLScene"
QT_MOC_LITERAL(5, 48, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(6, 62, 5), // "scene"
QT_MOC_LITERAL(7, 68, 22), // "setUnitAwareProperties"
QT_MOC_LITERAL(8, 91, 19), // "UnitAwareProperties"
QT_MOC_LITERAL(9, 111, 5), // "flags"
QT_MOC_LITERAL(10, 117, 24), // "updateWidgetFromUnitNode"
QT_MOC_LITERAL(11, 142, 9), // "mrmlScene"
QT_MOC_LITERAL(12, 152, 8), // "quantity"
QT_MOC_LITERAL(13, 161, 19), // "unitAwareProperties"
QT_MOC_LITERAL(14, 181, 17), // "UnitAwareProperty"
QT_MOC_LITERAL(15, 199, 4), // "None"
QT_MOC_LITERAL(16, 204, 6), // "Prefix"
QT_MOC_LITERAL(17, 211, 6), // "Suffix"
QT_MOC_LITERAL(18, 218, 9), // "Precision"
QT_MOC_LITERAL(19, 228, 12), // "MinimumValue"
QT_MOC_LITERAL(20, 241, 12), // "MaximumValue"
QT_MOC_LITERAL(21, 254, 7) // "Scaling"

    },
    "qMRMLSpinBox\0setQuantity\0\0baseName\0"
    "setMRMLScene\0vtkMRMLScene*\0scene\0"
    "setUnitAwareProperties\0UnitAwareProperties\0"
    "flags\0updateWidgetFromUnitNode\0mrmlScene\0"
    "quantity\0unitAwareProperties\0"
    "UnitAwareProperty\0None\0Prefix\0Suffix\0"
    "Precision\0MinimumValue\0MaximumValue\0"
    "Scaling"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSpinBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   50, // properties
       2,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       7,    1,   45,    2, 0x0a /* Public */,
      10,    0,   48,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      11,    0,   49,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 5,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00095103,
      13, 0x80000000 | 8, 0x0009510b,

 // enums: name, alias, flags, count, data
      14,   14, 0x1,    7,   66,
       8,   14, 0x1,    7,   80,

 // enum data: key, value
      15, uint(qMRMLSpinBox::None),
      16, uint(qMRMLSpinBox::Prefix),
      17, uint(qMRMLSpinBox::Suffix),
      18, uint(qMRMLSpinBox::Precision),
      19, uint(qMRMLSpinBox::MinimumValue),
      20, uint(qMRMLSpinBox::MaximumValue),
      21, uint(qMRMLSpinBox::Scaling),
      15, uint(qMRMLSpinBox::None),
      16, uint(qMRMLSpinBox::Prefix),
      17, uint(qMRMLSpinBox::Suffix),
      18, uint(qMRMLSpinBox::Precision),
      19, uint(qMRMLSpinBox::MinimumValue),
      20, uint(qMRMLSpinBox::MaximumValue),
      21, uint(qMRMLSpinBox::Scaling),

       0        // eod
};

void qMRMLSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSpinBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setQuantity((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 2: _t->setUnitAwareProperties((*reinterpret_cast< UnitAwareProperties(*)>(_a[1]))); break;
        case 3: _t->updateWidgetFromUnitNode(); break;
        case 4: { vtkMRMLScene* _r = _t->mrmlScene();
            if (_a[0]) *reinterpret_cast< vtkMRMLScene**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->quantity(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(_t->unitAwareProperties()); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setQuantity(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUnitAwareProperties(QFlag(*reinterpret_cast<int*>(_v))); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkDoubleSpinBox::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSpinBox.data,
    qt_meta_data_qMRMLSpinBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSpinBox.stringdata0))
        return static_cast<void*>(this);
    return ctkDoubleSpinBox::qt_metacast(_clname);
}

int qMRMLSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkDoubleSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
