/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSubjectHierarchyModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/SubjectHierarchy/Widgets/qMRMLSubjectHierarchyModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSubjectHierarchyModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSubjectHierarchyModel_t {
    QByteArrayData data[56];
    char stringdata0[964];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSubjectHierarchyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSubjectHierarchyModel_t qt_meta_stringdata_qMRMLSubjectHierarchyModel = {
    {
QT_MOC_LITERAL(0, 0, 26), // "qMRMLSubjectHierarchyModel"
QT_MOC_LITERAL(1, 27, 28), // "aboutToReparentByDragAndDrop"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 9), // "vtkIdType"
QT_MOC_LITERAL(4, 67, 6), // "itemID"
QT_MOC_LITERAL(5, 74, 11), // "newParentID"
QT_MOC_LITERAL(6, 86, 23), // "reparentedByDragAndDrop"
QT_MOC_LITERAL(7, 110, 32), // "subjectHierarchyAboutToBeUpdated"
QT_MOC_LITERAL(8, 143, 23), // "subjectHierarchyUpdated"
QT_MOC_LITERAL(9, 167, 17), // "requestExpandItem"
QT_MOC_LITERAL(10, 185, 19), // "requestCollapseItem"
QT_MOC_LITERAL(11, 205, 18), // "requestSelectItems"
QT_MOC_LITERAL(12, 224, 16), // "QList<vtkIdType>"
QT_MOC_LITERAL(13, 241, 7), // "itemIDs"
QT_MOC_LITERAL(14, 249, 16), // "invalidateFilter"
QT_MOC_LITERAL(15, 266, 41), // "onRemoveTransformsFromBranchO..."
QT_MOC_LITERAL(16, 308, 38), // "onHardenTransformOnBranchOfCu..."
QT_MOC_LITERAL(17, 347, 27), // "onSubjectHierarchyItemAdded"
QT_MOC_LITERAL(18, 375, 38), // "onSubjectHierarchyItemAboutTo..."
QT_MOC_LITERAL(19, 414, 29), // "onSubjectHierarchyItemRemoved"
QT_MOC_LITERAL(20, 444, 30), // "onSubjectHierarchyItemModified"
QT_MOC_LITERAL(21, 475, 19), // "onMRMLSceneImported"
QT_MOC_LITERAL(22, 495, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(23, 509, 5), // "scene"
QT_MOC_LITERAL(24, 515, 17), // "onMRMLSceneClosed"
QT_MOC_LITERAL(25, 533, 28), // "onMRMLSceneStartBatchProcess"
QT_MOC_LITERAL(26, 562, 26), // "onMRMLSceneEndBatchProcess"
QT_MOC_LITERAL(27, 589, 17), // "onMRMLNodeRemoved"
QT_MOC_LITERAL(28, 607, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(29, 620, 4), // "node"
QT_MOC_LITERAL(30, 625, 13), // "onItemChanged"
QT_MOC_LITERAL(31, 639, 14), // "QStandardItem*"
QT_MOC_LITERAL(32, 654, 4), // "item"
QT_MOC_LITERAL(33, 659, 18), // "delayedItemChanged"
QT_MOC_LITERAL(34, 678, 17), // "updateColumnCount"
QT_MOC_LITERAL(35, 696, 12), // "setMRMLScene"
QT_MOC_LITERAL(36, 709, 9), // "mrmlScene"
QT_MOC_LITERAL(37, 719, 26), // "parentSubjectHierarchyItem"
QT_MOC_LITERAL(38, 746, 25), // "subjectHierarchyItemIndex"
QT_MOC_LITERAL(39, 772, 8), // "reparent"
QT_MOC_LITERAL(40, 781, 9), // "moveToRow"
QT_MOC_LITERAL(41, 791, 6), // "newRow"
QT_MOC_LITERAL(42, 798, 14), // "isAncestorItem"
QT_MOC_LITERAL(43, 813, 5), // "child"
QT_MOC_LITERAL(44, 819, 8), // "ancestor"
QT_MOC_LITERAL(45, 828, 16), // "isAffiliatedItem"
QT_MOC_LITERAL(46, 845, 5), // "itemA"
QT_MOC_LITERAL(47, 851, 5), // "itemB"
QT_MOC_LITERAL(48, 857, 10), // "nameColumn"
QT_MOC_LITERAL(49, 868, 16), // "visibilityColumn"
QT_MOC_LITERAL(50, 885, 11), // "colorColumn"
QT_MOC_LITERAL(51, 897, 15), // "transformColumn"
QT_MOC_LITERAL(52, 913, 17), // "descriptionColumn"
QT_MOC_LITERAL(53, 931, 8), // "idColumn"
QT_MOC_LITERAL(54, 940, 11), // "noneEnabled"
QT_MOC_LITERAL(55, 952, 11) // "noneDisplay"

    },
    "qMRMLSubjectHierarchyModel\0"
    "aboutToReparentByDragAndDrop\0\0vtkIdType\0"
    "itemID\0newParentID\0reparentedByDragAndDrop\0"
    "subjectHierarchyAboutToBeUpdated\0"
    "subjectHierarchyUpdated\0requestExpandItem\0"
    "requestCollapseItem\0requestSelectItems\0"
    "QList<vtkIdType>\0itemIDs\0invalidateFilter\0"
    "onRemoveTransformsFromBranchOfCurrentItem\0"
    "onHardenTransformOnBranchOfCurrentItem\0"
    "onSubjectHierarchyItemAdded\0"
    "onSubjectHierarchyItemAboutToBeRemoved\0"
    "onSubjectHierarchyItemRemoved\0"
    "onSubjectHierarchyItemModified\0"
    "onMRMLSceneImported\0vtkMRMLScene*\0"
    "scene\0onMRMLSceneClosed\0"
    "onMRMLSceneStartBatchProcess\0"
    "onMRMLSceneEndBatchProcess\0onMRMLNodeRemoved\0"
    "vtkMRMLNode*\0node\0onItemChanged\0"
    "QStandardItem*\0item\0delayedItemChanged\0"
    "updateColumnCount\0setMRMLScene\0mrmlScene\0"
    "parentSubjectHierarchyItem\0"
    "subjectHierarchyItemIndex\0reparent\0"
    "moveToRow\0newRow\0isAncestorItem\0child\0"
    "ancestor\0isAffiliatedItem\0itemA\0itemB\0"
    "nameColumn\0visibilityColumn\0colorColumn\0"
    "transformColumn\0descriptionColumn\0"
    "idColumn\0noneEnabled\0noneDisplay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSubjectHierarchyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       8,  250, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  164,    2, 0x06 /* Public */,
       6,    2,  169,    2, 0x06 /* Public */,
       7,    0,  174,    2, 0x06 /* Public */,
       8,    0,  175,    2, 0x06 /* Public */,
       9,    1,  176,    2, 0x06 /* Public */,
      10,    1,  179,    2, 0x06 /* Public */,
      11,    1,  182,    2, 0x06 /* Public */,
      14,    0,  185,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  186,    2, 0x0a /* Public */,
      16,    0,  187,    2, 0x0a /* Public */,
      17,    1,  188,    2, 0x09 /* Protected */,
      18,    1,  191,    2, 0x09 /* Protected */,
      19,    1,  194,    2, 0x09 /* Protected */,
      20,    1,  197,    2, 0x09 /* Protected */,
      21,    1,  200,    2, 0x09 /* Protected */,
      24,    1,  203,    2, 0x09 /* Protected */,
      25,    1,  206,    2, 0x09 /* Protected */,
      26,    1,  209,    2, 0x09 /* Protected */,
      27,    1,  212,    2, 0x09 /* Protected */,
      30,    1,  215,    2, 0x09 /* Protected */,
      33,    0,  218,    2, 0x09 /* Protected */,
      34,    0,  219,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      35,    1,  220,    2, 0x02 /* Public */,
      36,    0,  223,    2, 0x02 /* Public */,
      37,    1,  224,    2, 0x02 /* Public */,
      38,    1,  227,    2, 0x02 /* Public */,
      39,    2,  230,    2, 0x02 /* Public */,
      40,    2,  235,    2, 0x02 /* Public */,
      42,    2,  240,    2, 0x02 /* Public */,
      45,    2,  245,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 22,   23,
    0x80000000 | 22,
    0x80000000 | 3, 0x80000000 | 3,    4,
    QMetaType::Int, 0x80000000 | 3,    4,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::Int,    4,   41,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 3,   43,   44,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 3,   46,   47,

 // properties: name, type, flags
      48, QMetaType::Int, 0x00095103,
      49, QMetaType::Int, 0x00095103,
      50, QMetaType::Int, 0x00095103,
      51, QMetaType::Int, 0x00095103,
      52, QMetaType::Int, 0x00095103,
      53, QMetaType::Int, 0x00095003,
      54, QMetaType::Bool, 0x00095103,
      55, QMetaType::QString, 0x00095103,

       0        // eod
};

void qMRMLSubjectHierarchyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSubjectHierarchyModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->aboutToReparentByDragAndDrop((*reinterpret_cast< vtkIdType(*)>(_a[1])),(*reinterpret_cast< vtkIdType(*)>(_a[2]))); break;
        case 1: _t->reparentedByDragAndDrop((*reinterpret_cast< vtkIdType(*)>(_a[1])),(*reinterpret_cast< vtkIdType(*)>(_a[2]))); break;
        case 2: _t->subjectHierarchyAboutToBeUpdated(); break;
        case 3: _t->subjectHierarchyUpdated(); break;
        case 4: _t->requestExpandItem((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 5: _t->requestCollapseItem((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 6: _t->requestSelectItems((*reinterpret_cast< QList<vtkIdType>(*)>(_a[1]))); break;
        case 7: _t->invalidateFilter(); break;
        case 8: _t->onRemoveTransformsFromBranchOfCurrentItem(); break;
        case 9: _t->onHardenTransformOnBranchOfCurrentItem(); break;
        case 10: _t->onSubjectHierarchyItemAdded((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 11: _t->onSubjectHierarchyItemAboutToBeRemoved((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 12: _t->onSubjectHierarchyItemRemoved((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 13: _t->onSubjectHierarchyItemModified((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 14: _t->onMRMLSceneImported((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 15: _t->onMRMLSceneClosed((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 16: _t->onMRMLSceneStartBatchProcess((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 17: _t->onMRMLSceneEndBatchProcess((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 18: _t->onMRMLNodeRemoved((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 19: _t->onItemChanged((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 20: _t->delayedItemChanged(); break;
        case 21: _t->updateColumnCount(); break;
        case 22: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 23: { vtkMRMLScene* _r = _t->mrmlScene();
            if (_a[0]) *reinterpret_cast< vtkMRMLScene**>(_a[0]) = std::move(_r); }  break;
        case 24: { vtkIdType _r = _t->parentSubjectHierarchyItem((*reinterpret_cast< vtkIdType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< vtkIdType*>(_a[0]) = std::move(_r); }  break;
        case 25: { int _r = _t->subjectHierarchyItemIndex((*reinterpret_cast< vtkIdType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->reparent((*reinterpret_cast< vtkIdType(*)>(_a[1])),(*reinterpret_cast< vtkIdType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->moveToRow((*reinterpret_cast< vtkIdType(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->isAncestorItem((*reinterpret_cast< vtkIdType(*)>(_a[1])),(*reinterpret_cast< vtkIdType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->isAffiliatedItem((*reinterpret_cast< vtkIdType(*)>(_a[1])),(*reinterpret_cast< vtkIdType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLSubjectHierarchyModel::*)(vtkIdType , vtkIdType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSubjectHierarchyModel::aboutToReparentByDragAndDrop)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLSubjectHierarchyModel::*)(vtkIdType , vtkIdType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSubjectHierarchyModel::reparentedByDragAndDrop)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qMRMLSubjectHierarchyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSubjectHierarchyModel::subjectHierarchyAboutToBeUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (qMRMLSubjectHierarchyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSubjectHierarchyModel::subjectHierarchyUpdated)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (qMRMLSubjectHierarchyModel::*)(vtkIdType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSubjectHierarchyModel::requestExpandItem)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (qMRMLSubjectHierarchyModel::*)(vtkIdType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSubjectHierarchyModel::requestCollapseItem)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (qMRMLSubjectHierarchyModel::*)(QList<vtkIdType> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSubjectHierarchyModel::requestSelectItems)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (qMRMLSubjectHierarchyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSubjectHierarchyModel::invalidateFilter)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSubjectHierarchyModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->nameColumn(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->visibilityColumn(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->colorColumn(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->transformColumn(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->descriptionColumn(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->idColumn(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->noneEnabled(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->noneDisplay(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSubjectHierarchyModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNameColumn(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setVisibilityColumn(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setColorColumn(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setTransformColumn(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setDescriptionColumn(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setIDColumn(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setNoneEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setNoneDisplay(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSubjectHierarchyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QStandardItemModel::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSubjectHierarchyModel.data,
    qt_meta_data_qMRMLSubjectHierarchyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSubjectHierarchyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSubjectHierarchyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSubjectHierarchyModel.stringdata0))
        return static_cast<void*>(this);
    return QStandardItemModel::qt_metacast(_clname);
}

int qMRMLSubjectHierarchyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
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
void qMRMLSubjectHierarchyModel::aboutToReparentByDragAndDrop(vtkIdType _t1, vtkIdType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLSubjectHierarchyModel::reparentedByDragAndDrop(vtkIdType _t1, vtkIdType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qMRMLSubjectHierarchyModel::subjectHierarchyAboutToBeUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void qMRMLSubjectHierarchyModel::subjectHierarchyUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void qMRMLSubjectHierarchyModel::requestExpandItem(vtkIdType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void qMRMLSubjectHierarchyModel::requestCollapseItem(vtkIdType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void qMRMLSubjectHierarchyModel::requestSelectItems(QList<vtkIdType> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void qMRMLSubjectHierarchyModel::invalidateFilter()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
