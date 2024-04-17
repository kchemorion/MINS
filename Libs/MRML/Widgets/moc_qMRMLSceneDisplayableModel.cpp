/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSceneDisplayableModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLSceneDisplayableModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSceneDisplayableModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSceneDisplayableModel_t {
    QByteArrayData data[3];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSceneDisplayableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSceneDisplayableModel_t qt_meta_stringdata_qMRMLSceneDisplayableModel = {
    {
QT_MOC_LITERAL(0, 0, 26), // "qMRMLSceneDisplayableModel"
QT_MOC_LITERAL(1, 27, 11), // "colorColumn"
QT_MOC_LITERAL(2, 39, 13) // "opacityColumn"

    },
    "qMRMLSceneDisplayableModel\0colorColumn\0"
    "opacityColumn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSceneDisplayableModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095103,
       2, QMetaType::Int, 0x00095103,

       0        // eod
};

void qMRMLSceneDisplayableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSceneDisplayableModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->colorColumn(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->opacityColumn(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSceneDisplayableModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColorColumn(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setOpacityColumn(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSceneDisplayableModel::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLSceneHierarchyModel::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSceneDisplayableModel.data,
    qt_meta_data_qMRMLSceneDisplayableModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSceneDisplayableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSceneDisplayableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSceneDisplayableModel.stringdata0))
        return static_cast<void*>(this);
    return qMRMLSceneHierarchyModel::qt_metacast(_clname);
}

int qMRMLSceneDisplayableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLSceneHierarchyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
