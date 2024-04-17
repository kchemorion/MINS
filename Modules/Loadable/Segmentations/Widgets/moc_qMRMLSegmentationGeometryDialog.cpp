/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSegmentationGeometryDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Segmentations/Widgets/qMRMLSegmentationGeometryDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSegmentationGeometryDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSegmentationGeometryDialog_t {
    QByteArrayData data[9];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSegmentationGeometryDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSegmentationGeometryDialog_t qt_meta_stringdata_qMRMLSegmentationGeometryDialog = {
    {
QT_MOC_LITERAL(0, 0, 31), // "qMRMLSegmentationGeometryDialog"
QT_MOC_LITERAL(1, 32, 14), // "setEditEnabled"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 12), // "aEditEnabled"
QT_MOC_LITERAL(4, 61, 20), // "setResampleLabelmaps"
QT_MOC_LITERAL(5, 82, 18), // "aResampleLabelmaps"
QT_MOC_LITERAL(6, 101, 10), // "execDialog"
QT_MOC_LITERAL(7, 112, 11), // "editEnabled"
QT_MOC_LITERAL(8, 124, 17) // "resampleLabelmaps"

    },
    "qMRMLSegmentationGeometryDialog\0"
    "setEditEnabled\0\0aEditEnabled\0"
    "setResampleLabelmaps\0aResampleLabelmaps\0"
    "execDialog\0editEnabled\0resampleLabelmaps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSegmentationGeometryDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   35,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // methods: parameters
    QMetaType::Bool,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qMRMLSegmentationGeometryDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSegmentationGeometryDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setEditEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setResampleLabelmaps((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->execDialog();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSegmentationGeometryDialog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->editEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->resampleLabelmaps(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSegmentationGeometryDialog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEditEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setResampleLabelmaps(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSegmentationGeometryDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSegmentationGeometryDialog.data,
    qt_meta_data_qMRMLSegmentationGeometryDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSegmentationGeometryDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSegmentationGeometryDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSegmentationGeometryDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qMRMLSegmentationGeometryDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
