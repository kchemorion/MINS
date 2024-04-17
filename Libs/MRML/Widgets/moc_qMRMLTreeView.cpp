/****************************************************************************
** Meta object code from reading C++ file 'qMRMLTreeView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLTreeView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLTreeView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLTreeView_t {
    QByteArrayData data[57];
    char stringdata0[853];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLTreeView_t qt_meta_stringdata_qMRMLTreeView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "qMRMLTreeView"
QT_MOC_LITERAL(1, 14, 18), // "currentNodeChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 47, 4), // "node"
QT_MOC_LITERAL(5, 52, 18), // "currentNodeDeleted"
QT_MOC_LITERAL(6, 71, 11), // "QModelIndex"
QT_MOC_LITERAL(7, 83, 5), // "index"
QT_MOC_LITERAL(8, 89, 18), // "currentNodeRenamed"
QT_MOC_LITERAL(9, 108, 7), // "newName"
QT_MOC_LITERAL(10, 116, 17), // "editNodeRequested"
QT_MOC_LITERAL(11, 134, 17), // "decorationClicked"
QT_MOC_LITERAL(12, 152, 12), // "setMRMLScene"
QT_MOC_LITERAL(13, 165, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(14, 179, 5), // "scene"
QT_MOC_LITERAL(15, 185, 17), // "setSceneModelType"
QT_MOC_LITERAL(16, 203, 9), // "modelType"
QT_MOC_LITERAL(17, 213, 11), // "setRootNode"
QT_MOC_LITERAL(18, 225, 4), // "root"
QT_MOC_LITERAL(19, 230, 14), // "setCurrentNode"
QT_MOC_LITERAL(20, 245, 17), // "deleteCurrentNode"
QT_MOC_LITERAL(21, 263, 15), // "editCurrentNode"
QT_MOC_LITERAL(22, 279, 17), // "renameCurrentNode"
QT_MOC_LITERAL(23, 297, 10), // "setShowAll"
QT_MOC_LITERAL(24, 308, 10), // "setHideAll"
QT_MOC_LITERAL(25, 319, 14), // "setDontHideAll"
QT_MOC_LITERAL(26, 334, 8), // "scrollTo"
QT_MOC_LITERAL(27, 343, 11), // "displayName"
QT_MOC_LITERAL(28, 355, 12), // "scrollToNext"
QT_MOC_LITERAL(29, 368, 18), // "onSelectionChanged"
QT_MOC_LITERAL(30, 387, 14), // "QItemSelection"
QT_MOC_LITERAL(31, 402, 8), // "selected"
QT_MOC_LITERAL(32, 411, 10), // "deselected"
QT_MOC_LITERAL(33, 422, 29), // "onNumberOfVisibleIndexChanged"
QT_MOC_LITERAL(34, 452, 14), // "updateRootNode"
QT_MOC_LITERAL(35, 467, 10), // "vtkObject*"
QT_MOC_LITERAL(36, 478, 16), // "modifiedRootNode"
QT_MOC_LITERAL(37, 495, 19), // "saveTreeExpandState"
QT_MOC_LITERAL(38, 515, 19), // "loadTreeExpandState"
QT_MOC_LITERAL(39, 535, 19), // "onCustomContextMenu"
QT_MOC_LITERAL(40, 555, 5), // "point"
QT_MOC_LITERAL(41, 561, 20), // "sortFilterProxyModel"
QT_MOC_LITERAL(42, 582, 26), // "qMRMLSortFilterProxyModel*"
QT_MOC_LITERAL(43, 609, 10), // "sceneModel"
QT_MOC_LITERAL(44, 620, 16), // "qMRMLSceneModel*"
QT_MOC_LITERAL(45, 637, 14), // "sceneModelType"
QT_MOC_LITERAL(46, 652, 23), // "listenNodeModifiedEvent"
QT_MOC_LITERAL(47, 676, 26), // "qMRMLSceneModel::NodeTypes"
QT_MOC_LITERAL(48, 703, 9), // "nodeTypes"
QT_MOC_LITERAL(49, 713, 23), // "fitSizeToVisibleIndexes"
QT_MOC_LITERAL(50, 737, 11), // "minSizeHint"
QT_MOC_LITERAL(51, 749, 23), // "renameMenuActionVisible"
QT_MOC_LITERAL(52, 773, 23), // "deleteMenuActionVisible"
QT_MOC_LITERAL(53, 797, 21), // "editMenuActionVisible"
QT_MOC_LITERAL(54, 819, 10), // "showHidden"
QT_MOC_LITERAL(55, 830, 9), // "showScene"
QT_MOC_LITERAL(56, 840, 12) // "showRootNode"

    },
    "qMRMLTreeView\0currentNodeChanged\0\0"
    "vtkMRMLNode*\0node\0currentNodeDeleted\0"
    "QModelIndex\0index\0currentNodeRenamed\0"
    "newName\0editNodeRequested\0decorationClicked\0"
    "setMRMLScene\0vtkMRMLScene*\0scene\0"
    "setSceneModelType\0modelType\0setRootNode\0"
    "root\0setCurrentNode\0deleteCurrentNode\0"
    "editCurrentNode\0renameCurrentNode\0"
    "setShowAll\0setHideAll\0setDontHideAll\0"
    "scrollTo\0displayName\0scrollToNext\0"
    "onSelectionChanged\0QItemSelection\0"
    "selected\0deselected\0onNumberOfVisibleIndexChanged\0"
    "updateRootNode\0vtkObject*\0modifiedRootNode\0"
    "saveTreeExpandState\0loadTreeExpandState\0"
    "onCustomContextMenu\0point\0"
    "sortFilterProxyModel\0qMRMLSortFilterProxyModel*\0"
    "sceneModel\0qMRMLSceneModel*\0sceneModelType\0"
    "listenNodeModifiedEvent\0"
    "qMRMLSceneModel::NodeTypes\0nodeTypes\0"
    "fitSizeToVisibleIndexes\0minSizeHint\0"
    "renameMenuActionVisible\0deleteMenuActionVisible\0"
    "editMenuActionVisible\0showHidden\0"
    "showScene\0showRootNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLTreeView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
      11,  198, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  139,    2, 0x06 /* Public */,
       5,    1,  142,    2, 0x06 /* Public */,
       8,    1,  145,    2, 0x06 /* Public */,
      10,    1,  148,    2, 0x06 /* Public */,
      11,    1,  151,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  154,    2, 0x0a /* Public */,
      15,    1,  157,    2, 0x0a /* Public */,
      17,    1,  160,    2, 0x0a /* Public */,
      19,    1,  163,    2, 0x0a /* Public */,
      20,    0,  166,    2, 0x0a /* Public */,
      21,    0,  167,    2, 0x0a /* Public */,
      22,    0,  168,    2, 0x0a /* Public */,
      23,    1,  169,    2, 0x0a /* Public */,
      24,    1,  172,    2, 0x0a /* Public */,
      25,    1,  175,    2, 0x0a /* Public */,
      26,    1,  178,    2, 0x0a /* Public */,
      28,    0,  181,    2, 0x0a /* Public */,
      29,    2,  182,    2, 0x09 /* Protected */,
      33,    0,  187,    2, 0x09 /* Protected */,
      34,    1,  188,    2, 0x09 /* Protected */,
      37,    0,  191,    2, 0x09 /* Protected */,
      38,    0,  192,    2, 0x09 /* Protected */,
      39,    1,  193,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      41,    0,  196,    2, 0x02 /* Public */,
      43,    0,  197,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, 0x80000000 | 3,   18,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 30,   31,   32,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   40,

 // methods: parameters
    0x80000000 | 42,
    0x80000000 | 44,

 // properties: name, type, flags
      45, QMetaType::QString, 0x00095103,
      46, 0x80000000 | 47, 0x0009510b,
      48, QMetaType::QStringList, 0x00095103,
      49, QMetaType::Bool, 0x00095103,
      50, QMetaType::QSize, 0x00095103,
      51, QMetaType::Bool, 0x00095103,
      52, QMetaType::Bool, 0x00095103,
      53, QMetaType::Bool, 0x00095103,
      54, QMetaType::Bool, 0x00095103,
      55, QMetaType::Bool, 0x00095103,
      56, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qMRMLTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLTreeView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->currentNodeDeleted((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->currentNodeRenamed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->editNodeRequested((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 4: _t->decorationClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 6: _t->setSceneModelType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setRootNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 8: _t->setCurrentNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 9: _t->deleteCurrentNode(); break;
        case 10: _t->editCurrentNode(); break;
        case 11: _t->renameCurrentNode(); break;
        case 12: _t->setShowAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setHideAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setDontHideAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->scrollTo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->scrollToNext(); break;
        case 17: _t->onSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 18: _t->onNumberOfVisibleIndexChanged(); break;
        case 19: _t->updateRootNode((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 20: _t->saveTreeExpandState(); break;
        case 21: _t->loadTreeExpandState(); break;
        case 22: _t->onCustomContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 23: { qMRMLSortFilterProxyModel* _r = _t->sortFilterProxyModel();
            if (_a[0]) *reinterpret_cast< qMRMLSortFilterProxyModel**>(_a[0]) = std::move(_r); }  break;
        case 24: { qMRMLSceneModel* _r = _t->sceneModel();
            if (_a[0]) *reinterpret_cast< qMRMLSceneModel**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLTreeView::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLTreeView::currentNodeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLTreeView::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLTreeView::currentNodeDeleted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qMRMLTreeView::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLTreeView::currentNodeRenamed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (qMRMLTreeView::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLTreeView::editNodeRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (qMRMLTreeView::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLTreeView::decorationClicked)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSceneModel::NodeTypes >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLTreeView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->sceneModelType(); break;
        case 1: *reinterpret_cast< qMRMLSceneModel::NodeTypes*>(_v) = _t->listenNodeModifiedEvent(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->nodeTypes(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->fitSizeToVisibleIndexes(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = _t->minSizeHint(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isRenameMenuActionVisible(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isDeleteMenuActionVisible(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isEditMenuActionVisible(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->showHidden(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->showScene(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->showRootNode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLTreeView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSceneModelType(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setListenNodeModifiedEvent(*reinterpret_cast< qMRMLSceneModel::NodeTypes*>(_v)); break;
        case 2: _t->setNodeTypes(*reinterpret_cast< QStringList*>(_v)); break;
        case 3: _t->setFitSizeToVisibleIndexes(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setMinSizeHint(*reinterpret_cast< QSize*>(_v)); break;
        case 5: _t->setRenameMenuActionVisible(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setDeleteMenuActionVisible(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setEditMenuActionVisible(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setShowHidden(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setShowScene(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setShowRootNode(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_qMRMLTreeView[] = {
    QMetaObject::SuperData::link<qMRMLSceneModel::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject qMRMLTreeView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_qMRMLTreeView.data,
    qt_meta_data_qMRMLTreeView,
    qt_static_metacall,
    qt_meta_extradata_qMRMLTreeView,
    nullptr
} };


const QMetaObject *qMRMLTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLTreeView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int qMRMLTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 25;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qMRMLTreeView::currentNodeChanged(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLTreeView::currentNodeDeleted(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qMRMLTreeView::currentNodeRenamed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qMRMLTreeView::editNodeRequested(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void qMRMLTreeView::decorationClicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
