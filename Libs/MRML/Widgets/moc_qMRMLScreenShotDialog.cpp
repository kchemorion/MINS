/****************************************************************************
** Meta object code from reading C++ file 'qMRMLScreenShotDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLScreenShotDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLScreenShotDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLScreenShotDialog_t {
    QByteArrayData data[22];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLScreenShotDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLScreenShotDialog_t qt_meta_stringdata_qMRMLScreenShotDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "qMRMLScreenShotDialog"
QT_MOC_LITERAL(1, 22, 14), // "grabScreenShot"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "screenshotWindow"
QT_MOC_LITERAL(4, 55, 17), // "setLastWidgetType"
QT_MOC_LITERAL(5, 73, 2), // "id"
QT_MOC_LITERAL(6, 76, 11), // "resetDialog"
QT_MOC_LITERAL(7, 88, 6), // "saveAs"
QT_MOC_LITERAL(8, 95, 16), // "setLayoutManager"
QT_MOC_LITERAL(9, 112, 19), // "qMRMLLayoutManager*"
QT_MOC_LITERAL(10, 132, 16), // "newlayoutManager"
QT_MOC_LITERAL(11, 149, 13), // "layoutManager"
QT_MOC_LITERAL(12, 163, 10), // "widgetType"
QT_MOC_LITERAL(13, 174, 10), // "WidgetType"
QT_MOC_LITERAL(14, 185, 8), // "nameEdit"
QT_MOC_LITERAL(15, 194, 11), // "scaleFactor"
QT_MOC_LITERAL(16, 206, 22), // "showScaleFactorSpinBox"
QT_MOC_LITERAL(17, 229, 6), // "ThreeD"
QT_MOC_LITERAL(18, 236, 3), // "Red"
QT_MOC_LITERAL(19, 240, 6), // "Yellow"
QT_MOC_LITERAL(20, 247, 5), // "Green"
QT_MOC_LITERAL(21, 253, 10) // "FullLayout"

    },
    "qMRMLScreenShotDialog\0grabScreenShot\0"
    "\0screenshotWindow\0setLastWidgetType\0"
    "id\0resetDialog\0saveAs\0setLayoutManager\0"
    "qMRMLLayoutManager*\0newlayoutManager\0"
    "layoutManager\0widgetType\0WidgetType\0"
    "nameEdit\0scaleFactor\0showScaleFactorSpinBox\0"
    "ThreeD\0Red\0Yellow\0Green\0FullLayout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLScreenShotDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   62, // properties
       1,   74, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x09 /* Protected */,
       1,    0,   52,    2, 0x09 /* Protected */,
       4,    1,   53,    2, 0x09 /* Protected */,
       6,    0,   56,    2, 0x09 /* Protected */,
       7,    0,   57,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       8,    1,   58,    2, 0x02 /* Public */,
      11,    0,   61,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    0x80000000 | 9,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x0009510b,
      14, QMetaType::QString, 0x00095103,
      15, QMetaType::Double, 0x00095103,
      16, QMetaType::Bool, 0x00095103,

 // enums: name, alias, flags, count, data
      13,   13, 0x0,    5,   79,

 // enum data: key, value
      17, uint(qMRMLScreenShotDialog::ThreeD),
      18, uint(qMRMLScreenShotDialog::Red),
      19, uint(qMRMLScreenShotDialog::Yellow),
      20, uint(qMRMLScreenShotDialog::Green),
      21, uint(qMRMLScreenShotDialog::FullLayout),

       0        // eod
};

void qMRMLScreenShotDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLScreenShotDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->grabScreenShot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->grabScreenShot(); break;
        case 2: _t->setLastWidgetType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->resetDialog(); break;
        case 4: _t->saveAs(); break;
        case 5: _t->setLayoutManager((*reinterpret_cast< qMRMLLayoutManager*(*)>(_a[1]))); break;
        case 6: { qMRMLLayoutManager* _r = _t->layoutManager();
            if (_a[0]) *reinterpret_cast< qMRMLLayoutManager**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLLayoutManager* >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLScreenShotDialog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< WidgetType*>(_v) = _t->widgetType(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->nameEdit(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->scaleFactor(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->showScaleFactorSpinBox(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLScreenShotDialog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWidgetType(*reinterpret_cast< WidgetType*>(_v)); break;
        case 1: _t->setNameEdit(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setScaleFactor(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setShowScaleFactorSpinBox(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLScreenShotDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qMRMLScreenShotDialog.data,
    qt_meta_data_qMRMLScreenShotDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLScreenShotDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLScreenShotDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLScreenShotDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qMRMLScreenShotDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
