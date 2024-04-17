/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSegmentsModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Segmentations/Widgets/qMRMLSegmentsModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSegmentsModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSegmentsModel_t {
    QByteArrayData data[20];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSegmentsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSegmentsModel_t qt_meta_stringdata_qMRMLSegmentsModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "qMRMLSegmentsModel"
QT_MOC_LITERAL(1, 19, 24), // "segmentAboutToBeModified"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 9), // "segmentID"
QT_MOC_LITERAL(4, 55, 18), // "requestSelectItems"
QT_MOC_LITERAL(5, 74, 16), // "QList<vtkIdType>"
QT_MOC_LITERAL(6, 91, 7), // "itemIDs"
QT_MOC_LITERAL(7, 99, 13), // "onItemChanged"
QT_MOC_LITERAL(8, 113, 14), // "QStandardItem*"
QT_MOC_LITERAL(9, 128, 4), // "item"
QT_MOC_LITERAL(10, 133, 17), // "updateColumnCount"
QT_MOC_LITERAL(11, 151, 28), // "terminologyTooltipForSegment"
QT_MOC_LITERAL(12, 180, 11), // "vtkSegment*"
QT_MOC_LITERAL(13, 192, 7), // "segment"
QT_MOC_LITERAL(14, 200, 10), // "nameColumn"
QT_MOC_LITERAL(15, 211, 16), // "visibilityColumn"
QT_MOC_LITERAL(16, 228, 11), // "colorColumn"
QT_MOC_LITERAL(17, 240, 13), // "opacityColumn"
QT_MOC_LITERAL(18, 254, 12), // "statusColumn"
QT_MOC_LITERAL(19, 267, 11) // "layerColumn"

    },
    "qMRMLSegmentsModel\0segmentAboutToBeModified\0"
    "\0segmentID\0requestSelectItems\0"
    "QList<vtkIdType>\0itemIDs\0onItemChanged\0"
    "QStandardItem*\0item\0updateColumnCount\0"
    "terminologyTooltipForSegment\0vtkSegment*\0"
    "segment\0nameColumn\0visibilityColumn\0"
    "colorColumn\0opacityColumn\0statusColumn\0"
    "layerColumn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSegmentsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   45,    2, 0x09 /* Protected */,
      10,    0,   48,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      11,    1,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString, 0x80000000 | 12,   13,

 // properties: name, type, flags
      14, QMetaType::Int, 0x00095103,
      15, QMetaType::Int, 0x00095103,
      16, QMetaType::Int, 0x00095103,
      17, QMetaType::Int, 0x00095103,
      18, QMetaType::Int, 0x00095103,
      19, QMetaType::Int, 0x00095103,

       0        // eod
};

void qMRMLSegmentsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSegmentsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->segmentAboutToBeModified((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSelectItems((*reinterpret_cast< QList<vtkIdType>(*)>(_a[1]))); break;
        case 2: _t->onItemChanged((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 3: _t->updateColumnCount(); break;
        case 4: { QString _r = _t->terminologyTooltipForSegment((*reinterpret_cast< vtkSegment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLSegmentsModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSegmentsModel::segmentAboutToBeModified)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLSegmentsModel::*)(QList<vtkIdType> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSegmentsModel::requestSelectItems)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSegmentsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->nameColumn(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->visibilityColumn(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->colorColumn(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->opacityColumn(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->statusColumn(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->layerColumn(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSegmentsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNameColumn(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setVisibilityColumn(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setColorColumn(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setOpacityColumn(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setStatusColumn(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setLayerColumn(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSegmentsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QStandardItemModel::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSegmentsModel.data,
    qt_meta_data_qMRMLSegmentsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSegmentsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSegmentsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSegmentsModel.stringdata0))
        return static_cast<void*>(this);
    return QStandardItemModel::qt_metacast(_clname);
}

int qMRMLSegmentsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
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
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qMRMLSegmentsModel::segmentAboutToBeModified(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLSegmentsModel::requestSelectItems(QList<vtkIdType> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
