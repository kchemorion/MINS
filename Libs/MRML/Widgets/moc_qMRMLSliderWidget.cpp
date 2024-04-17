/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSliderWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLSliderWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSliderWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSliderWidget_t {
    QByteArrayData data[26];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSliderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSliderWidget_t qt_meta_stringdata_qMRMLSliderWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "qMRMLSliderWidget"
QT_MOC_LITERAL(1, 18, 11), // "setQuantity"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "baseName"
QT_MOC_LITERAL(4, 40, 12), // "setMRMLScene"
QT_MOC_LITERAL(5, 53, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(6, 67, 5), // "scene"
QT_MOC_LITERAL(7, 73, 22), // "setUnitAwareProperties"
QT_MOC_LITERAL(8, 96, 19), // "UnitAwareProperties"
QT_MOC_LITERAL(9, 116, 5), // "flags"
QT_MOC_LITERAL(10, 122, 14), // "setOrientation"
QT_MOC_LITERAL(11, 137, 15), // "Qt::Orientation"
QT_MOC_LITERAL(12, 153, 11), // "orientation"
QT_MOC_LITERAL(13, 165, 24), // "updateWidgetFromUnitNode"
QT_MOC_LITERAL(14, 190, 9), // "mrmlScene"
QT_MOC_LITERAL(15, 200, 8), // "quantity"
QT_MOC_LITERAL(16, 209, 19), // "unitAwareProperties"
QT_MOC_LITERAL(17, 229, 17), // "UnitAwareProperty"
QT_MOC_LITERAL(18, 247, 4), // "None"
QT_MOC_LITERAL(19, 252, 6), // "Prefix"
QT_MOC_LITERAL(20, 259, 6), // "Suffix"
QT_MOC_LITERAL(21, 266, 9), // "Precision"
QT_MOC_LITERAL(22, 276, 12), // "MinimumValue"
QT_MOC_LITERAL(23, 289, 12), // "MaximumValue"
QT_MOC_LITERAL(24, 302, 7), // "Scaling"
QT_MOC_LITERAL(25, 310, 3) // "All"

    },
    "qMRMLSliderWidget\0setQuantity\0\0baseName\0"
    "setMRMLScene\0vtkMRMLScene*\0scene\0"
    "setUnitAwareProperties\0UnitAwareProperties\0"
    "flags\0setOrientation\0Qt::Orientation\0"
    "orientation\0updateWidgetFromUnitNode\0"
    "mrmlScene\0quantity\0unitAwareProperties\0"
    "UnitAwareProperty\0None\0Prefix\0Suffix\0"
    "Precision\0MinimumValue\0MaximumValue\0"
    "Scaling\0All"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSliderWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   58, // properties
       2,   67, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
      10,    1,   53,    2, 0x0a /* Public */,
      13,    0,   56,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      14,    0,   57,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 5,

 // properties: name, type, flags
      15, QMetaType::QString, 0x00095103,
      16, 0x80000000 | 8, 0x0009510b,
      12, 0x80000000 | 11, 0x0009510b,

 // enums: name, alias, flags, count, data
      17,   17, 0x1,    8,   77,
       8,   17, 0x1,    8,   93,

 // enum data: key, value
      18, uint(qMRMLSliderWidget::None),
      19, uint(qMRMLSliderWidget::Prefix),
      20, uint(qMRMLSliderWidget::Suffix),
      21, uint(qMRMLSliderWidget::Precision),
      22, uint(qMRMLSliderWidget::MinimumValue),
      23, uint(qMRMLSliderWidget::MaximumValue),
      24, uint(qMRMLSliderWidget::Scaling),
      25, uint(qMRMLSliderWidget::All),
      18, uint(qMRMLSliderWidget::None),
      19, uint(qMRMLSliderWidget::Prefix),
      20, uint(qMRMLSliderWidget::Suffix),
      21, uint(qMRMLSliderWidget::Precision),
      22, uint(qMRMLSliderWidget::MinimumValue),
      23, uint(qMRMLSliderWidget::MaximumValue),
      24, uint(qMRMLSliderWidget::Scaling),
      25, uint(qMRMLSliderWidget::All),

       0        // eod
};

void qMRMLSliderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSliderWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setQuantity((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 2: _t->setUnitAwareProperties((*reinterpret_cast< UnitAwareProperties(*)>(_a[1]))); break;
        case 3: _t->setOrientation((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 4: _t->updateWidgetFromUnitNode(); break;
        case 5: { vtkMRMLScene* _r = _t->mrmlScene();
            if (_a[0]) *reinterpret_cast< vtkMRMLScene**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSliderWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->quantity(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(_t->unitAwareProperties()); break;
        case 2: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSliderWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setQuantity(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUnitAwareProperties(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 2: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSliderWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkSliderWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSliderWidget.data,
    qt_meta_data_qMRMLSliderWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSliderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSliderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSliderWidget.stringdata0))
        return static_cast<void*>(this);
    return ctkSliderWidget::qt_metacast(_clname);
}

int qMRMLSliderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkSliderWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
