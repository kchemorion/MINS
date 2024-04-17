/****************************************************************************
** Meta object code from reading C++ file 'qSlicerDICOMLoadable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Scripted/DICOMLib/Widgets/qSlicerDICOMLoadable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerDICOMLoadable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerDICOMLoadable_t {
    QByteArrayData data[13];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerDICOMLoadable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerDICOMLoadable_t qt_meta_stringdata_qSlicerDICOMLoadable = {
    {
QT_MOC_LITERAL(0, 0, 20), // "qSlicerDICOMLoadable"
QT_MOC_LITERAL(1, 21, 17), // "copyToVtkLoadable"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 23), // "vtkSlicerDICOMLoadable*"
QT_MOC_LITERAL(4, 64, 11), // "vtkLoadable"
QT_MOC_LITERAL(5, 76, 19), // "copyFromVtkLoadable"
QT_MOC_LITERAL(6, 96, 4), // "name"
QT_MOC_LITERAL(7, 101, 7), // "tooltip"
QT_MOC_LITERAL(8, 109, 7), // "warning"
QT_MOC_LITERAL(9, 117, 5), // "files"
QT_MOC_LITERAL(10, 123, 8), // "selected"
QT_MOC_LITERAL(11, 132, 10), // "confidence"
QT_MOC_LITERAL(12, 143, 22) // "referencedInstanceUIDs"

    },
    "qSlicerDICOMLoadable\0copyToVtkLoadable\0"
    "\0vtkSlicerDICOMLoadable*\0vtkLoadable\0"
    "copyFromVtkLoadable\0name\0tooltip\0"
    "warning\0files\0selected\0confidence\0"
    "referencedInstanceUIDs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerDICOMLoadable[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       7,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x02 /* Public */,
       5,    1,   27,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QStringList, 0x00095103,
      10, QMetaType::Bool, 0x00095103,
      11, QMetaType::Double, 0x00095103,
      12, QMetaType::QStringList, 0x00095103,

       0        // eod
};

void qSlicerDICOMLoadable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerDICOMLoadable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->copyToVtkLoadable((*reinterpret_cast< vtkSlicerDICOMLoadable*(*)>(_a[1]))); break;
        case 1: _t->copyFromVtkLoadable((*reinterpret_cast< vtkSlicerDICOMLoadable*(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerDICOMLoadable *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->tooltip(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->warning(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->files(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->confidence(); break;
        case 6: *reinterpret_cast< QStringList*>(_v) = _t->referencedInstanceUIDs(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerDICOMLoadable *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setTooltip(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setWarning(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setFiles(*reinterpret_cast< QStringList*>(_v)); break;
        case 4: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setConfidence(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setReferencedInstanceUIDs(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerDICOMLoadable::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerDICOMLoadable.data,
    qt_meta_data_qSlicerDICOMLoadable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerDICOMLoadable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerDICOMLoadable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerDICOMLoadable.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerDICOMLoadable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
