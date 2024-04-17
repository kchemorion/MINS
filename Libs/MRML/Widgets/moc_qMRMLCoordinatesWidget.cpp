/****************************************************************************
** Meta object code from reading C++ file 'qMRMLCoordinatesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLCoordinatesWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLCoordinatesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLCoordinatesWidget_t {
    QByteArrayData data[25];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLCoordinatesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLCoordinatesWidget_t qt_meta_stringdata_qMRMLCoordinatesWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "qMRMLCoordinatesWidget"
QT_MOC_LITERAL(1, 23, 16), // "mrmlSceneChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(4, 55, 15), // "quantityChanged"
QT_MOC_LITERAL(5, 71, 11), // "setQuantity"
QT_MOC_LITERAL(6, 83, 8), // "baseName"
QT_MOC_LITERAL(7, 92, 12), // "setMRMLScene"
QT_MOC_LITERAL(8, 105, 5), // "scene"
QT_MOC_LITERAL(9, 111, 22), // "setUnitAwareProperties"
QT_MOC_LITERAL(10, 134, 19), // "UnitAwareProperties"
QT_MOC_LITERAL(11, 154, 5), // "flags"
QT_MOC_LITERAL(12, 160, 24), // "updateWidgetFromUnitNode"
QT_MOC_LITERAL(13, 185, 9), // "mrmlScene"
QT_MOC_LITERAL(14, 195, 8), // "quantity"
QT_MOC_LITERAL(15, 204, 19), // "unitAwareProperties"
QT_MOC_LITERAL(16, 224, 17), // "UnitAwareProperty"
QT_MOC_LITERAL(17, 242, 4), // "None"
QT_MOC_LITERAL(18, 247, 6), // "Prefix"
QT_MOC_LITERAL(19, 254, 6), // "Suffix"
QT_MOC_LITERAL(20, 261, 9), // "Precision"
QT_MOC_LITERAL(21, 271, 12), // "MinimumValue"
QT_MOC_LITERAL(22, 284, 12), // "MaximumValue"
QT_MOC_LITERAL(23, 297, 7), // "Scaling"
QT_MOC_LITERAL(24, 305, 3) // "All"

    },
    "qMRMLCoordinatesWidget\0mrmlSceneChanged\0"
    "\0vtkMRMLScene*\0quantityChanged\0"
    "setQuantity\0baseName\0setMRMLScene\0"
    "scene\0setUnitAwareProperties\0"
    "UnitAwareProperties\0flags\0"
    "updateWidgetFromUnitNode\0mrmlScene\0"
    "quantity\0unitAwareProperties\0"
    "UnitAwareProperty\0None\0Prefix\0Suffix\0"
    "Precision\0MinimumValue\0MaximumValue\0"
    "Scaling\0All"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLCoordinatesWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   66, // properties
       2,   74, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   55,    2, 0x0a /* Public */,
       7,    1,   58,    2, 0x0a /* Public */,
       9,    1,   61,    2, 0x0a /* Public */,
      12,    0,   64,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      13,    0,   65,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 3,

 // properties: name, type, flags
      14, QMetaType::QString, 0x00495103,
      15, 0x80000000 | 10, 0x0009510b,

 // properties: notify_signal_id
       1,
       0,

 // enums: name, alias, flags, count, data
      16,   16, 0x1,    8,   84,
      10,   16, 0x1,    8,  100,

 // enum data: key, value
      17, uint(qMRMLCoordinatesWidget::None),
      18, uint(qMRMLCoordinatesWidget::Prefix),
      19, uint(qMRMLCoordinatesWidget::Suffix),
      20, uint(qMRMLCoordinatesWidget::Precision),
      21, uint(qMRMLCoordinatesWidget::MinimumValue),
      22, uint(qMRMLCoordinatesWidget::MaximumValue),
      23, uint(qMRMLCoordinatesWidget::Scaling),
      24, uint(qMRMLCoordinatesWidget::All),
      17, uint(qMRMLCoordinatesWidget::None),
      18, uint(qMRMLCoordinatesWidget::Prefix),
      19, uint(qMRMLCoordinatesWidget::Suffix),
      20, uint(qMRMLCoordinatesWidget::Precision),
      21, uint(qMRMLCoordinatesWidget::MinimumValue),
      22, uint(qMRMLCoordinatesWidget::MaximumValue),
      23, uint(qMRMLCoordinatesWidget::Scaling),
      24, uint(qMRMLCoordinatesWidget::All),

       0        // eod
};

void qMRMLCoordinatesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLCoordinatesWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mrmlSceneChanged((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 1: _t->quantityChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setQuantity((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 4: _t->setUnitAwareProperties((*reinterpret_cast< UnitAwareProperties(*)>(_a[1]))); break;
        case 5: _t->updateWidgetFromUnitNode(); break;
        case 6: { vtkMRMLScene* _r = _t->mrmlScene();
            if (_a[0]) *reinterpret_cast< vtkMRMLScene**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLCoordinatesWidget::*)(vtkMRMLScene * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLCoordinatesWidget::mrmlSceneChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLCoordinatesWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLCoordinatesWidget::quantityChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLCoordinatesWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->quantity(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(_t->unitAwareProperties()); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLCoordinatesWidget *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject qMRMLCoordinatesWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkCoordinatesWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLCoordinatesWidget.data,
    qt_meta_data_qMRMLCoordinatesWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLCoordinatesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLCoordinatesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLCoordinatesWidget.stringdata0))
        return static_cast<void*>(this);
    return ctkCoordinatesWidget::qt_metacast(_clname);
}

int qMRMLCoordinatesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkCoordinatesWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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

// SIGNAL 0
void qMRMLCoordinatesWidget::mrmlSceneChanged(vtkMRMLScene * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLCoordinatesWidget::quantityChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
