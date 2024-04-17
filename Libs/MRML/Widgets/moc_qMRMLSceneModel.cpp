/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSceneModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLSceneModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSceneModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSceneModel_t {
    QByteArrayData data[45];
    char stringdata0[747];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSceneModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSceneModel_t qt_meta_stringdata_qMRMLSceneModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "qMRMLSceneModel"
QT_MOC_LITERAL(1, 16, 28), // "aboutToReparentByDragAndDrop"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 59, 4), // "node"
QT_MOC_LITERAL(5, 64, 9), // "newParent"
QT_MOC_LITERAL(6, 74, 23), // "reparentedByDragAndDrop"
QT_MOC_LITERAL(7, 98, 21), // "sceneAboutToBeUpdated"
QT_MOC_LITERAL(8, 120, 12), // "sceneUpdated"
QT_MOC_LITERAL(9, 133, 29), // "onMRMLSceneNodeAboutToBeAdded"
QT_MOC_LITERAL(10, 163, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(11, 177, 5), // "scene"
QT_MOC_LITERAL(12, 183, 31), // "onMRMLSceneNodeAboutToBeRemoved"
QT_MOC_LITERAL(13, 215, 20), // "onMRMLSceneNodeAdded"
QT_MOC_LITERAL(14, 236, 22), // "onMRMLSceneNodeRemoved"
QT_MOC_LITERAL(15, 259, 28), // "onMRMLSceneAboutToBeImported"
QT_MOC_LITERAL(16, 288, 19), // "onMRMLSceneImported"
QT_MOC_LITERAL(17, 308, 26), // "onMRMLSceneAboutToBeClosed"
QT_MOC_LITERAL(18, 335, 17), // "onMRMLSceneClosed"
QT_MOC_LITERAL(19, 353, 28), // "onMRMLSceneStartBatchProcess"
QT_MOC_LITERAL(20, 382, 26), // "onMRMLSceneEndBatchProcess"
QT_MOC_LITERAL(21, 409, 18), // "onMRMLSceneDeleted"
QT_MOC_LITERAL(22, 428, 18), // "onMRMLNodeModified"
QT_MOC_LITERAL(23, 447, 10), // "vtkObject*"
QT_MOC_LITERAL(24, 458, 19), // "onMRMLNodeIDChanged"
QT_MOC_LITERAL(25, 478, 8), // "callData"
QT_MOC_LITERAL(26, 487, 13), // "onItemChanged"
QT_MOC_LITERAL(27, 501, 14), // "QStandardItem*"
QT_MOC_LITERAL(28, 516, 4), // "item"
QT_MOC_LITERAL(29, 521, 18), // "delayedItemChanged"
QT_MOC_LITERAL(30, 540, 17), // "updateColumnCount"
QT_MOC_LITERAL(31, 558, 12), // "setMRMLScene"
QT_MOC_LITERAL(32, 571, 9), // "mrmlScene"
QT_MOC_LITERAL(33, 581, 23), // "listenNodeModifiedEvent"
QT_MOC_LITERAL(34, 605, 9), // "NodeTypes"
QT_MOC_LITERAL(35, 615, 10), // "lazyUpdate"
QT_MOC_LITERAL(36, 626, 10), // "nameColumn"
QT_MOC_LITERAL(37, 637, 8), // "idColumn"
QT_MOC_LITERAL(38, 646, 15), // "checkableColumn"
QT_MOC_LITERAL(39, 662, 16), // "visibilityColumn"
QT_MOC_LITERAL(40, 679, 17), // "toolTipNameColumn"
QT_MOC_LITERAL(41, 697, 15), // "extraItemColumn"
QT_MOC_LITERAL(42, 713, 7), // "NoNodes"
QT_MOC_LITERAL(43, 721, 8), // "AllNodes"
QT_MOC_LITERAL(44, 730, 16) // "OnlyVisibleNodes"

    },
    "qMRMLSceneModel\0aboutToReparentByDragAndDrop\0"
    "\0vtkMRMLNode*\0node\0newParent\0"
    "reparentedByDragAndDrop\0sceneAboutToBeUpdated\0"
    "sceneUpdated\0onMRMLSceneNodeAboutToBeAdded\0"
    "vtkMRMLScene*\0scene\0onMRMLSceneNodeAboutToBeRemoved\0"
    "onMRMLSceneNodeAdded\0onMRMLSceneNodeRemoved\0"
    "onMRMLSceneAboutToBeImported\0"
    "onMRMLSceneImported\0onMRMLSceneAboutToBeClosed\0"
    "onMRMLSceneClosed\0onMRMLSceneStartBatchProcess\0"
    "onMRMLSceneEndBatchProcess\0"
    "onMRMLSceneDeleted\0onMRMLNodeModified\0"
    "vtkObject*\0onMRMLNodeIDChanged\0callData\0"
    "onItemChanged\0QStandardItem*\0item\0"
    "delayedItemChanged\0updateColumnCount\0"
    "setMRMLScene\0mrmlScene\0listenNodeModifiedEvent\0"
    "NodeTypes\0lazyUpdate\0nameColumn\0"
    "idColumn\0checkableColumn\0visibilityColumn\0"
    "toolTipNameColumn\0extraItemColumn\0"
    "NoNodes\0AllNodes\0OnlyVisibleNodes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSceneModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       8,  194, // properties
       1,  218, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  124,    2, 0x06 /* Public */,
       6,    2,  129,    2, 0x06 /* Public */,
       7,    0,  134,    2, 0x06 /* Public */,
       8,    0,  135,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,  136,    2, 0x09 /* Protected */,
      12,    2,  141,    2, 0x09 /* Protected */,
      13,    2,  146,    2, 0x09 /* Protected */,
      14,    2,  151,    2, 0x09 /* Protected */,
      15,    1,  156,    2, 0x09 /* Protected */,
      16,    1,  159,    2, 0x09 /* Protected */,
      17,    1,  162,    2, 0x09 /* Protected */,
      18,    1,  165,    2, 0x09 /* Protected */,
      19,    1,  168,    2, 0x09 /* Protected */,
      20,    1,  171,    2, 0x09 /* Protected */,
      21,    1,  174,    2, 0x09 /* Protected */,
      22,    1,  177,    2, 0x09 /* Protected */,
      24,    2,  180,    2, 0x09 /* Protected */,
      26,    1,  185,    2, 0x09 /* Protected */,
      29,    0,  188,    2, 0x09 /* Protected */,
      30,    0,  189,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      31,    1,  190,    2, 0x02 /* Public */,
      32,    0,  193,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 3,   11,    4,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 3,   11,    4,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 3,   11,    4,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 3,   11,    4,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 23,    4,
    QMetaType::Void, 0x80000000 | 23, QMetaType::VoidStar,    4,   25,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    0x80000000 | 10,

 // properties: name, type, flags
      33, 0x80000000 | 34, 0x0009510b,
      35, QMetaType::Bool, 0x00095103,
      36, QMetaType::Int, 0x00095103,
      37, QMetaType::Int, 0x00095003,
      38, QMetaType::Int, 0x00095103,
      39, QMetaType::Int, 0x00095103,
      40, QMetaType::Int, 0x00095103,
      41, QMetaType::Int, 0x00095103,

 // enums: name, alias, flags, count, data
      34,   34, 0x0,    3,  223,

 // enum data: key, value
      42, uint(qMRMLSceneModel::NoNodes),
      43, uint(qMRMLSceneModel::AllNodes),
      44, uint(qMRMLSceneModel::OnlyVisibleNodes),

       0        // eod
};

void qMRMLSceneModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSceneModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->aboutToReparentByDragAndDrop((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1])),(*reinterpret_cast< vtkMRMLNode*(*)>(_a[2]))); break;
        case 1: _t->reparentedByDragAndDrop((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1])),(*reinterpret_cast< vtkMRMLNode*(*)>(_a[2]))); break;
        case 2: _t->sceneAboutToBeUpdated(); break;
        case 3: _t->sceneUpdated(); break;
        case 4: _t->onMRMLSceneNodeAboutToBeAdded((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1])),(*reinterpret_cast< vtkMRMLNode*(*)>(_a[2]))); break;
        case 5: _t->onMRMLSceneNodeAboutToBeRemoved((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1])),(*reinterpret_cast< vtkMRMLNode*(*)>(_a[2]))); break;
        case 6: _t->onMRMLSceneNodeAdded((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1])),(*reinterpret_cast< vtkMRMLNode*(*)>(_a[2]))); break;
        case 7: _t->onMRMLSceneNodeRemoved((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1])),(*reinterpret_cast< vtkMRMLNode*(*)>(_a[2]))); break;
        case 8: _t->onMRMLSceneAboutToBeImported((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 9: _t->onMRMLSceneImported((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 10: _t->onMRMLSceneAboutToBeClosed((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 11: _t->onMRMLSceneClosed((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 12: _t->onMRMLSceneStartBatchProcess((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 13: _t->onMRMLSceneEndBatchProcess((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 14: _t->onMRMLSceneDeleted((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 15: _t->onMRMLNodeModified((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 16: _t->onMRMLNodeIDChanged((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 17: _t->onItemChanged((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 18: _t->delayedItemChanged(); break;
        case 19: _t->updateColumnCount(); break;
        case 20: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 21: { vtkMRMLScene* _r = _t->mrmlScene();
            if (_a[0]) *reinterpret_cast< vtkMRMLScene**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLSceneModel::*)(vtkMRMLNode * , vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSceneModel::aboutToReparentByDragAndDrop)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLSceneModel::*)(vtkMRMLNode * , vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSceneModel::reparentedByDragAndDrop)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qMRMLSceneModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSceneModel::sceneAboutToBeUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (qMRMLSceneModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSceneModel::sceneUpdated)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSceneModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< NodeTypes*>(_v) = _t->listenNodeModifiedEvent(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->lazyUpdate(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->nameColumn(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->idColumn(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->checkableColumn(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->visibilityColumn(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->toolTipNameColumn(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->extraItemColumn(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSceneModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setListenNodeModifiedEvent(*reinterpret_cast< NodeTypes*>(_v)); break;
        case 1: _t->setLazyUpdate(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setNameColumn(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setIDColumn(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setCheckableColumn(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setVisibilityColumn(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setToolTipNameColumn(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setExtraItemColumn(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSceneModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QStandardItemModel::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSceneModel.data,
    qt_meta_data_qMRMLSceneModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSceneModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSceneModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSceneModel.stringdata0))
        return static_cast<void*>(this);
    return QStandardItemModel::qt_metacast(_clname);
}

int qMRMLSceneModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qMRMLSceneModel::aboutToReparentByDragAndDrop(vtkMRMLNode * _t1, vtkMRMLNode * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLSceneModel::reparentedByDragAndDrop(vtkMRMLNode * _t1, vtkMRMLNode * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qMRMLSceneModel::sceneAboutToBeUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void qMRMLSceneModel::sceneUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
