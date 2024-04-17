/****************************************************************************
** Meta object code from reading C++ file 'qMRMLColorModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLColorModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLColorModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLColorModel_t {
    QByteArrayData data[17];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLColorModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLColorModel_t qt_meta_stringdata_qMRMLColorModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "qMRMLColorModel"
QT_MOC_LITERAL(1, 16, 23), // "onMRMLColorNodeModified"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 10), // "vtkObject*"
QT_MOC_LITERAL(4, 52, 4), // "node"
QT_MOC_LITERAL(5, 57, 13), // "onItemChanged"
QT_MOC_LITERAL(6, 71, 14), // "QStandardItem*"
QT_MOC_LITERAL(7, 86, 4), // "item"
QT_MOC_LITERAL(8, 91, 11), // "noneEnabled"
QT_MOC_LITERAL(9, 103, 11), // "colorColumn"
QT_MOC_LITERAL(10, 115, 11), // "labelColumn"
QT_MOC_LITERAL(11, 127, 13), // "opacityColumn"
QT_MOC_LITERAL(12, 141, 15), // "checkableColumn"
QT_MOC_LITERAL(13, 157, 12), // "ItemDataRole"
QT_MOC_LITERAL(14, 170, 14), // "ColorEntryRole"
QT_MOC_LITERAL(15, 185, 11), // "PointerRole"
QT_MOC_LITERAL(16, 197, 9) // "ColorRole"

    },
    "qMRMLColorModel\0onMRMLColorNodeModified\0"
    "\0vtkObject*\0node\0onItemChanged\0"
    "QStandardItem*\0item\0noneEnabled\0"
    "colorColumn\0labelColumn\0opacityColumn\0"
    "checkableColumn\0ItemDataRole\0"
    "ColorEntryRole\0PointerRole\0ColorRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLColorModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       5,   30, // properties
       1,   45, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       5,    1,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // properties: name, type, flags
       8, QMetaType::Bool, 0x00095103,
       9, QMetaType::Int, 0x00095103,
      10, QMetaType::Int, 0x00095103,
      11, QMetaType::Int, 0x00095103,
      12, QMetaType::Int, 0x00095103,

 // enums: name, alias, flags, count, data
      13,   13, 0x0,    3,   50,

 // enum data: key, value
      14, uint(qMRMLColorModel::ColorEntryRole),
      15, uint(qMRMLColorModel::PointerRole),
      16, uint(qMRMLColorModel::ColorRole),

       0        // eod
};

void qMRMLColorModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLColorModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onMRMLColorNodeModified((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 1: _t->onItemChanged((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLColorModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->noneEnabled(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->colorColumn(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->labelColumn(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->opacityColumn(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->checkableColumn(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLColorModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNoneEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setColorColumn(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setLabelColumn(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setOpacityColumn(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setCheckableColumn(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLColorModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QStandardItemModel::staticMetaObject>(),
    qt_meta_stringdata_qMRMLColorModel.data,
    qt_meta_data_qMRMLColorModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLColorModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLColorModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLColorModel.stringdata0))
        return static_cast<void*>(this);
    return QStandardItemModel::qt_metacast(_clname);
}

int qMRMLColorModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
