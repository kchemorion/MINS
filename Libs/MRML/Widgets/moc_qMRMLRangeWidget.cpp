/****************************************************************************
** Meta object code from reading C++ file 'qMRMLRangeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLRangeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLRangeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLRangeWidget_t {
    QByteArrayData data[20];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLRangeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLRangeWidget_t qt_meta_stringdata_qMRMLRangeWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "qMRMLRangeWidget"
QT_MOC_LITERAL(1, 17, 23), // "setMinimumHandlePalette"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 7), // "palette"
QT_MOC_LITERAL(4, 50, 23), // "setMaximumHandlePalette"
QT_MOC_LITERAL(5, 74, 11), // "setQuantity"
QT_MOC_LITERAL(6, 86, 8), // "baseName"
QT_MOC_LITERAL(7, 95, 12), // "setMRMLScene"
QT_MOC_LITERAL(8, 108, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(9, 122, 5), // "scene"
QT_MOC_LITERAL(10, 128, 18), // "updateSpinBoxRange"
QT_MOC_LITERAL(11, 147, 3), // "min"
QT_MOC_LITERAL(12, 151, 3), // "max"
QT_MOC_LITERAL(13, 155, 11), // "updateRange"
QT_MOC_LITERAL(14, 167, 20), // "updateSymmetricMoves"
QT_MOC_LITERAL(15, 188, 9), // "symmetric"
QT_MOC_LITERAL(16, 198, 20), // "minimumHandlePalette"
QT_MOC_LITERAL(17, 219, 20), // "maximumHandlePalette"
QT_MOC_LITERAL(18, 240, 9), // "mrmlScene"
QT_MOC_LITERAL(19, 250, 8) // "quantity"

    },
    "qMRMLRangeWidget\0setMinimumHandlePalette\0"
    "\0palette\0setMaximumHandlePalette\0"
    "setQuantity\0baseName\0setMRMLScene\0"
    "vtkMRMLScene*\0scene\0updateSpinBoxRange\0"
    "min\0max\0updateRange\0updateSymmetricMoves\0"
    "symmetric\0minimumHandlePalette\0"
    "maximumHandlePalette\0mrmlScene\0quantity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLRangeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       5,    1,   55,    2, 0x0a /* Public */,
       7,    1,   58,    2, 0x0a /* Public */,
      10,    2,   61,    2, 0x09 /* Protected */,
      13,    0,   66,    2, 0x09 /* Protected */,
      14,    1,   67,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPalette,    3,
    QMetaType::Void, QMetaType::QPalette,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,

 // properties: name, type, flags
      16, QMetaType::QPalette, 0x00095103,
      17, QMetaType::QPalette, 0x00095103,
      18, 0x80000000 | 8, 0x0009500b,
      19, QMetaType::QString, 0x00095103,

       0        // eod
};

void qMRMLRangeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLRangeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMinimumHandlePalette((*reinterpret_cast< const QPalette(*)>(_a[1]))); break;
        case 1: _t->setMaximumHandlePalette((*reinterpret_cast< const QPalette(*)>(_a[1]))); break;
        case 2: _t->setQuantity((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 4: _t->updateSpinBoxRange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->updateRange(); break;
        case 6: _t->updateSymmetricMoves((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLRangeWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPalette*>(_v) = _t->minimumHandlePalette(); break;
        case 1: *reinterpret_cast< QPalette*>(_v) = _t->maximumHandlePalette(); break;
        case 2: *reinterpret_cast< vtkMRMLScene**>(_v) = _t->mrmlScene(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->quantity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLRangeWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinimumHandlePalette(*reinterpret_cast< QPalette*>(_v)); break;
        case 1: _t->setMaximumHandlePalette(*reinterpret_cast< QPalette*>(_v)); break;
        case 2: _t->setMRMLScene(*reinterpret_cast< vtkMRMLScene**>(_v)); break;
        case 3: _t->setQuantity(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLRangeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkRangeWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLRangeWidget.data,
    qt_meta_data_qMRMLRangeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLRangeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLRangeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLRangeWidget.stringdata0))
        return static_cast<void*>(this);
    return ctkRangeWidget::qt_metacast(_clname);
}

int qMRMLRangeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkRangeWidget::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_qMRMLDoubleRangeSlider_t {
    QByteArrayData data[5];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLDoubleRangeSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLDoubleRangeSlider_t qt_meta_stringdata_qMRMLDoubleRangeSlider = {
    {
QT_MOC_LITERAL(0, 0, 22), // "qMRMLDoubleRangeSlider"
QT_MOC_LITERAL(1, 23, 23), // "setMinimumHandlePalette"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 7), // "palette"
QT_MOC_LITERAL(4, 56, 23) // "setMaximumHandlePalette"

    },
    "qMRMLDoubleRangeSlider\0setMinimumHandlePalette\0"
    "\0palette\0setMaximumHandlePalette"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLDoubleRangeSlider[] = {

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
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPalette,    3,
    QMetaType::Void, QMetaType::QPalette,    3,

       0        // eod
};

void qMRMLDoubleRangeSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLDoubleRangeSlider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMinimumHandlePalette((*reinterpret_cast< const QPalette(*)>(_a[1]))); break;
        case 1: _t->setMaximumHandlePalette((*reinterpret_cast< const QPalette(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLDoubleRangeSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkDoubleRangeSlider::staticMetaObject>(),
    qt_meta_stringdata_qMRMLDoubleRangeSlider.data,
    qt_meta_data_qMRMLDoubleRangeSlider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLDoubleRangeSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLDoubleRangeSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLDoubleRangeSlider.stringdata0))
        return static_cast<void*>(this);
    return ctkDoubleRangeSlider::qt_metacast(_clname);
}

int qMRMLDoubleRangeSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkDoubleRangeSlider::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_qMRMLRangeSlider_t {
    QByteArrayData data[5];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLRangeSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLRangeSlider_t qt_meta_stringdata_qMRMLRangeSlider = {
    {
QT_MOC_LITERAL(0, 0, 16), // "qMRMLRangeSlider"
QT_MOC_LITERAL(1, 17, 23), // "setMinimumHandlePalette"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 7), // "palette"
QT_MOC_LITERAL(4, 50, 23) // "setMaximumHandlePalette"

    },
    "qMRMLRangeSlider\0setMinimumHandlePalette\0"
    "\0palette\0setMaximumHandlePalette"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLRangeSlider[] = {

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
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPalette,    3,
    QMetaType::Void, QMetaType::QPalette,    3,

       0        // eod
};

void qMRMLRangeSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLRangeSlider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMinimumHandlePalette((*reinterpret_cast< const QPalette(*)>(_a[1]))); break;
        case 1: _t->setMaximumHandlePalette((*reinterpret_cast< const QPalette(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLRangeSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkRangeSlider::staticMetaObject>(),
    qt_meta_stringdata_qMRMLRangeSlider.data,
    qt_meta_data_qMRMLRangeSlider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLRangeSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLRangeSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLRangeSlider.stringdata0))
        return static_cast<void*>(this);
    return ctkRangeSlider::qt_metacast(_clname);
}

int qMRMLRangeSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkRangeSlider::qt_metacall(_c, _id, _a);
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
