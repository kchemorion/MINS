/****************************************************************************
** Meta object code from reading C++ file 'qSlicerGPUMemoryComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/VolumeRendering/Widgets/qSlicerGPUMemoryComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerGPUMemoryComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerGPUMemoryComboBox_t {
    QByteArrayData data[11];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerGPUMemoryComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerGPUMemoryComboBox_t qt_meta_stringdata_qSlicerGPUMemoryComboBox = {
    {
QT_MOC_LITERAL(0, 0, 24), // "qSlicerGPUMemoryComboBox"
QT_MOC_LITERAL(1, 25, 19), // "setCurrentGPUMemory"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 6), // "memory"
QT_MOC_LITERAL(4, 53, 29), // "setCurrentGPUMemoryFromString"
QT_MOC_LITERAL(5, 83, 12), // "memoryString"
QT_MOC_LITERAL(6, 96, 18), // "totalGPUMemoryInMB"
QT_MOC_LITERAL(7, 115, 16), // "currentGPUMemory"
QT_MOC_LITERAL(8, 132, 20), // "currentGPUMemoryInMB"
QT_MOC_LITERAL(9, 153, 24), // "currentGPUMemoryAsString"
QT_MOC_LITERAL(10, 178, 22) // "currentGPUMemoryString"

    },
    "qSlicerGPUMemoryComboBox\0setCurrentGPUMemory\0"
    "\0memory\0setCurrentGPUMemoryFromString\0"
    "memoryString\0totalGPUMemoryInMB\0"
    "currentGPUMemory\0currentGPUMemoryInMB\0"
    "currentGPUMemoryAsString\0"
    "currentGPUMemoryString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerGPUMemoryComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   50,    2, 0x02 /* Public */,
       7,    0,   51,    2, 0x02 /* Public */,
       8,    0,   52,    2, 0x02 /* Public */,
       9,    0,   53,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Double,
    QMetaType::Int,
    QMetaType::QString,

 // properties: name, type, flags
       7, QMetaType::Double, 0x00095103,
      10, QMetaType::QString, 0x00094003,

       0        // eod
};

void qSlicerGPUMemoryComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerGPUMemoryComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setCurrentGPUMemory((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setCurrentGPUMemoryFromString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { int _r = _t->totalGPUMemoryInMB();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { double _r = _t->currentGPUMemory();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->currentGPUMemoryInMB();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->currentGPUMemoryAsString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerGPUMemoryComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->currentGPUMemory(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->currentGPUMemoryAsString(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerGPUMemoryComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentGPUMemory(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setCurrentGPUMemoryFromString(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerGPUMemoryComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_qSlicerGPUMemoryComboBox.data,
    qt_meta_data_qSlicerGPUMemoryComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerGPUMemoryComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerGPUMemoryComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerGPUMemoryComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int qSlicerGPUMemoryComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
