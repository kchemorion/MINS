/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSegmentSelectorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLSegmentSelectorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSegmentSelectorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSegmentSelectorWidget_t {
    QByteArrayData data[32];
    char stringdata0[536];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSegmentSelectorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSegmentSelectorWidget_t qt_meta_stringdata_qMRMLSegmentSelectorWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "qMRMLSegmentSelectorWidget"
QT_MOC_LITERAL(1, 27, 18), // "currentNodeChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 60, 21), // "currentSegmentChanged"
QT_MOC_LITERAL(5, 82, 23), // "segmentSelectionChanged"
QT_MOC_LITERAL(6, 106, 19), // "nodeAboutToBeEdited"
QT_MOC_LITERAL(7, 126, 4), // "node"
QT_MOC_LITERAL(8, 131, 9), // "validNode"
QT_MOC_LITERAL(9, 141, 14), // "setCurrentNode"
QT_MOC_LITERAL(10, 156, 16), // "setCurrentNodeID"
QT_MOC_LITERAL(11, 173, 6), // "nodeID"
QT_MOC_LITERAL(12, 180, 19), // "setCurrentSegmentID"
QT_MOC_LITERAL(13, 200, 9), // "segmentID"
QT_MOC_LITERAL(14, 210, 21), // "setSelectedSegmentIDs"
QT_MOC_LITERAL(15, 232, 13), // "segmentIDList"
QT_MOC_LITERAL(16, 246, 20), // "onCurrentNodeChanged"
QT_MOC_LITERAL(17, 267, 23), // "onCurrentSegmentChanged"
QT_MOC_LITERAL(18, 291, 5), // "index"
QT_MOC_LITERAL(19, 297, 30), // "onSegmentMultiSelectionChanged"
QT_MOC_LITERAL(20, 328, 23), // "populateSegmentCombobox"
QT_MOC_LITERAL(21, 352, 11), // "currentNode"
QT_MOC_LITERAL(22, 364, 13), // "currentNodeID"
QT_MOC_LITERAL(23, 378, 16), // "currentSegmentID"
QT_MOC_LITERAL(24, 395, 18), // "selectedSegmentIDs"
QT_MOC_LITERAL(25, 414, 10), // "segmentIDs"
QT_MOC_LITERAL(26, 425, 11), // "noneEnabled"
QT_MOC_LITERAL(27, 437, 11), // "editEnabled"
QT_MOC_LITERAL(28, 449, 31), // "segmentationNodeSelectorVisible"
QT_MOC_LITERAL(29, 481, 14), // "multiSelection"
QT_MOC_LITERAL(30, 496, 16), // "horizontalLayout"
QT_MOC_LITERAL(31, 513, 22) // "selectNodeUponCreation"

    },
    "qMRMLSegmentSelectorWidget\0"
    "currentNodeChanged\0\0vtkMRMLNode*\0"
    "currentSegmentChanged\0segmentSelectionChanged\0"
    "nodeAboutToBeEdited\0node\0validNode\0"
    "setCurrentNode\0setCurrentNodeID\0nodeID\0"
    "setCurrentSegmentID\0segmentID\0"
    "setSelectedSegmentIDs\0segmentIDList\0"
    "onCurrentNodeChanged\0onCurrentSegmentChanged\0"
    "index\0onSegmentMultiSelectionChanged\0"
    "populateSegmentCombobox\0currentNode\0"
    "currentNodeID\0currentSegmentID\0"
    "selectedSegmentIDs\0segmentIDs\0noneEnabled\0"
    "editEnabled\0segmentationNodeSelectorVisible\0"
    "multiSelection\0horizontalLayout\0"
    "selectNodeUponCreation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSegmentSelectorWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       6,  144, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    1,  107,    2, 0x06 /* Public */,
       5,    1,  110,    2, 0x06 /* Public */,
       6,    1,  113,    2, 0x06 /* Public */,
       1,    1,  116,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  119,    2, 0x0a /* Public */,
      10,    1,  122,    2, 0x0a /* Public */,
      12,    1,  125,    2, 0x0a /* Public */,
      14,    1,  128,    2, 0x0a /* Public */,
      16,    1,  131,    2, 0x09 /* Protected */,
      17,    1,  134,    2, 0x09 /* Protected */,
      19,    0,  137,    2, 0x09 /* Protected */,
      20,    0,  138,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      21,    0,  139,    2, 0x02 /* Public */,
      22,    0,  140,    2, 0x02 /* Public */,
      23,    0,  141,    2, 0x02 /* Public */,
      24,    0,  142,    2, 0x02 /* Public */,
      25,    0,  143,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, QMetaType::Bool,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QStringList,   15,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 3,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QStringList,
    QMetaType::QStringList,

 // properties: name, type, flags
      26, QMetaType::Bool, 0x00095103,
      27, QMetaType::Bool, 0x00095103,
      28, QMetaType::Bool, 0x00095103,
      29, QMetaType::Bool, 0x00095103,
      30, QMetaType::Bool, 0x00095103,
      31, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qMRMLSegmentSelectorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSegmentSelectorWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->currentSegmentChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->segmentSelectionChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->nodeAboutToBeEdited((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 4: _t->currentNodeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setCurrentNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 6: _t->setCurrentNodeID((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setCurrentSegmentID((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setSelectedSegmentIDs((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 9: _t->onCurrentNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 10: _t->onCurrentSegmentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->onSegmentMultiSelectionChanged(); break;
        case 12: _t->populateSegmentCombobox(); break;
        case 13: { vtkMRMLNode* _r = _t->currentNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLNode**>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->currentNodeID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->currentSegmentID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { QStringList _r = _t->selectedSegmentIDs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 17: { QStringList _r = _t->segmentIDs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLSegmentSelectorWidget::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSegmentSelectorWidget::currentNodeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLSegmentSelectorWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSegmentSelectorWidget::currentSegmentChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qMRMLSegmentSelectorWidget::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSegmentSelectorWidget::segmentSelectionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (qMRMLSegmentSelectorWidget::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSegmentSelectorWidget::nodeAboutToBeEdited)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (qMRMLSegmentSelectorWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSegmentSelectorWidget::currentNodeChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSegmentSelectorWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->noneEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->editEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->segmentationNodeSelectorVisible(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->multiSelection(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->horizontalLayout(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->selectNodeUponCreation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSegmentSelectorWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNoneEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setEditEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setSegmentationNodeSelectorVisible(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setMultiSelection(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setHorizontalLayout(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setSelectNodeUponCreation(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSegmentSelectorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSegmentSelectorWidget.data,
    qt_meta_data_qMRMLSegmentSelectorWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSegmentSelectorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSegmentSelectorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSegmentSelectorWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLSegmentSelectorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
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
void qMRMLSegmentSelectorWidget::currentNodeChanged(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLSegmentSelectorWidget::currentSegmentChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qMRMLSegmentSelectorWidget::segmentSelectionChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qMRMLSegmentSelectorWidget::nodeAboutToBeEdited(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void qMRMLSegmentSelectorWidget::currentNodeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
