/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSequenceEditWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Sequences/Widgets/qMRMLSequenceEditWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSequenceEditWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSequenceEditWidget_t {
    QByteArrayData data[37];
    char stringdata0[710];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSequenceEditWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSequenceEditWidget_t qt_meta_stringdata_qMRMLSequenceEditWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "qMRMLSequenceEditWidget"
QT_MOC_LITERAL(1, 24, 12), // "setMRMLScene"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(4, 52, 5), // "scene"
QT_MOC_LITERAL(5, 58, 16), // "mrmlSequenceNode"
QT_MOC_LITERAL(6, 75, 20), // "vtkMRMLSequenceNode*"
QT_MOC_LITERAL(7, 96, 19), // "setMRMLSequenceNode"
QT_MOC_LITERAL(8, 116, 12), // "sequenceNode"
QT_MOC_LITERAL(9, 129, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(10, 142, 31), // "setCandidateNodesSectionVisible"
QT_MOC_LITERAL(11, 174, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(12, 195, 34), // "updateCandidateNodesWidgetFro..."
QT_MOC_LITERAL(13, 230, 11), // "forceUpdate"
QT_MOC_LITERAL(14, 242, 24), // "candidateNodeItemClicked"
QT_MOC_LITERAL(15, 267, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(16, 284, 30), // "candidateNodeItemDoubleClicked"
QT_MOC_LITERAL(17, 315, 25), // "onAddCurrentCandidateNode"
QT_MOC_LITERAL(18, 341, 16), // "onDataNodeEdited"
QT_MOC_LITERAL(19, 358, 3), // "row"
QT_MOC_LITERAL(20, 362, 6), // "column"
QT_MOC_LITERAL(21, 369, 17), // "onIndexNameEdited"
QT_MOC_LITERAL(22, 387, 17), // "onIndexUnitEdited"
QT_MOC_LITERAL(23, 405, 17), // "onIndexTypeEdited"
QT_MOC_LITERAL(24, 423, 15), // "indexTypeString"
QT_MOC_LITERAL(25, 439, 22), // "onSequenceNodeModified"
QT_MOC_LITERAL(26, 462, 26), // "onAddDataNodeButtonClicked"
QT_MOC_LITERAL(27, 489, 29), // "onRemoveDataNodeButtonClicked"
QT_MOC_LITERAL(28, 519, 16), // "onNodeAddedEvent"
QT_MOC_LITERAL(29, 536, 10), // "vtkObject*"
QT_MOC_LITERAL(30, 547, 4), // "node"
QT_MOC_LITERAL(31, 552, 18), // "onNodeRemovedEvent"
QT_MOC_LITERAL(32, 571, 25), // "onMRMLSceneEndImportEvent"
QT_MOC_LITERAL(33, 597, 26), // "onMRMLSceneEndRestoreEvent"
QT_MOC_LITERAL(34, 624, 31), // "onMRMLSceneEndBatchProcessEvent"
QT_MOC_LITERAL(35, 656, 24), // "onMRMLSceneEndCloseEvent"
QT_MOC_LITERAL(36, 681, 28) // "candidateNodesSectionVisible"

    },
    "qMRMLSequenceEditWidget\0setMRMLScene\0"
    "\0vtkMRMLScene*\0scene\0mrmlSequenceNode\0"
    "vtkMRMLSequenceNode*\0setMRMLSequenceNode\0"
    "sequenceNode\0vtkMRMLNode*\0"
    "setCandidateNodesSectionVisible\0"
    "updateWidgetFromMRML\0"
    "updateCandidateNodesWidgetFromMRML\0"
    "forceUpdate\0candidateNodeItemClicked\0"
    "QListWidgetItem*\0candidateNodeItemDoubleClicked\0"
    "onAddCurrentCandidateNode\0onDataNodeEdited\0"
    "row\0column\0onIndexNameEdited\0"
    "onIndexUnitEdited\0onIndexTypeEdited\0"
    "indexTypeString\0onSequenceNodeModified\0"
    "onAddDataNodeButtonClicked\0"
    "onRemoveDataNodeButtonClicked\0"
    "onNodeAddedEvent\0vtkObject*\0node\0"
    "onNodeRemovedEvent\0onMRMLSceneEndImportEvent\0"
    "onMRMLSceneEndRestoreEvent\0"
    "onMRMLSceneEndBatchProcessEvent\0"
    "onMRMLSceneEndCloseEvent\0"
    "candidateNodesSectionVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSequenceEditWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       1,  186, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  134,    2, 0x0a /* Public */,
       5,    0,  137,    2, 0x0a /* Public */,
       7,    1,  138,    2, 0x0a /* Public */,
       7,    1,  141,    2, 0x0a /* Public */,
      10,    1,  144,    2, 0x0a /* Public */,
      11,    0,  147,    2, 0x09 /* Protected */,
      12,    1,  148,    2, 0x09 /* Protected */,
      12,    0,  151,    2, 0x29 /* Protected | MethodCloned */,
      14,    1,  152,    2, 0x09 /* Protected */,
      16,    1,  155,    2, 0x09 /* Protected */,
      17,    0,  158,    2, 0x09 /* Protected */,
      18,    2,  159,    2, 0x09 /* Protected */,
      21,    0,  164,    2, 0x09 /* Protected */,
      22,    0,  165,    2, 0x09 /* Protected */,
      23,    1,  166,    2, 0x09 /* Protected */,
      25,    0,  169,    2, 0x09 /* Protected */,
      26,    0,  170,    2, 0x09 /* Protected */,
      27,    0,  171,    2, 0x09 /* Protected */,
      28,    2,  172,    2, 0x09 /* Protected */,
      31,    2,  177,    2, 0x09 /* Protected */,
      32,    0,  182,    2, 0x09 /* Protected */,
      33,    0,  183,    2, 0x09 /* Protected */,
      34,    0,  184,    2, 0x09 /* Protected */,
      35,    0,  185,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    0x80000000 | 6,
    QMetaType::Void, 0x80000000 | 6,    8,
    QMetaType::Void, 0x80000000 | 9,    8,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 29,    4,   30,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 29,    4,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      36, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qMRMLSequenceEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSequenceEditWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 1: { vtkMRMLSequenceNode* _r = _t->mrmlSequenceNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLSequenceNode**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setMRMLSequenceNode((*reinterpret_cast< vtkMRMLSequenceNode*(*)>(_a[1]))); break;
        case 3: _t->setMRMLSequenceNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 4: _t->setCandidateNodesSectionVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->updateWidgetFromMRML(); break;
        case 6: _t->updateCandidateNodesWidgetFromMRML((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->updateCandidateNodesWidgetFromMRML(); break;
        case 8: _t->candidateNodeItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->candidateNodeItemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 10: { QString _r = _t->onAddCurrentCandidateNode();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->onDataNodeEdited((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->onIndexNameEdited(); break;
        case 13: _t->onIndexUnitEdited(); break;
        case 14: _t->onIndexTypeEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->onSequenceNodeModified(); break;
        case 16: _t->onAddDataNodeButtonClicked(); break;
        case 17: _t->onRemoveDataNodeButtonClicked(); break;
        case 18: _t->onNodeAddedEvent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        case 19: _t->onNodeRemovedEvent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        case 20: _t->onMRMLSceneEndImportEvent(); break;
        case 21: _t->onMRMLSceneEndRestoreEvent(); break;
        case 22: _t->onMRMLSceneEndBatchProcessEvent(); break;
        case 23: _t->onMRMLSceneEndCloseEvent(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSequenceEditWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isCandidateNodesSectionVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSequenceEditWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCandidateNodesSectionVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSequenceEditWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSequenceEditWidget.data,
    qt_meta_data_qMRMLSequenceEditWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSequenceEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSequenceEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSequenceEditWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLSequenceEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 24;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
