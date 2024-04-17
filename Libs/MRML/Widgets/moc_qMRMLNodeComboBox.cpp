/****************************************************************************
** Meta object code from reading C++ file 'qMRMLNodeComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLNodeComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLNodeComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLNodeComboBox_t {
    QByteArrayData data[72];
    char stringdata0[1023];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLNodeComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLNodeComboBox_t qt_meta_stringdata_qMRMLNodeComboBox = {
    {
QT_MOC_LITERAL(0, 0, 17), // "qMRMLNodeComboBox"
QT_MOC_LITERAL(1, 18, 18), // "currentNodeChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 51, 4), // "node"
QT_MOC_LITERAL(5, 56, 20), // "currentNodeIDChanged"
QT_MOC_LITERAL(6, 77, 2), // "id"
QT_MOC_LITERAL(7, 80, 13), // "nodeActivated"
QT_MOC_LITERAL(8, 94, 9), // "validNode"
QT_MOC_LITERAL(9, 104, 9), // "nodeAdded"
QT_MOC_LITERAL(10, 114, 15), // "nodeAddedByUser"
QT_MOC_LITERAL(11, 130, 20), // "nodeAboutToBeRemoved"
QT_MOC_LITERAL(12, 151, 18), // "currentNodeRenamed"
QT_MOC_LITERAL(13, 170, 7), // "newName"
QT_MOC_LITERAL(14, 178, 19), // "nodeAboutToBeEdited"
QT_MOC_LITERAL(15, 198, 12), // "setMRMLScene"
QT_MOC_LITERAL(16, 211, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(17, 225, 5), // "scene"
QT_MOC_LITERAL(18, 231, 14), // "setCurrentNode"
QT_MOC_LITERAL(19, 246, 6), // "nodeID"
QT_MOC_LITERAL(20, 253, 16), // "setCurrentNodeID"
QT_MOC_LITERAL(21, 270, 19), // "setCurrentNodeIndex"
QT_MOC_LITERAL(22, 290, 5), // "index"
QT_MOC_LITERAL(23, 296, 7), // "addNode"
QT_MOC_LITERAL(24, 304, 8), // "nodeType"
QT_MOC_LITERAL(25, 313, 17), // "removeCurrentNode"
QT_MOC_LITERAL(26, 331, 15), // "editCurrentNode"
QT_MOC_LITERAL(27, 347, 17), // "renameCurrentNode"
QT_MOC_LITERAL(28, 365, 17), // "activateExtraItem"
QT_MOC_LITERAL(29, 383, 11), // "QModelIndex"
QT_MOC_LITERAL(30, 395, 22), // "emitCurrentNodeChanged"
QT_MOC_LITERAL(31, 418, 17), // "emitNodeActivated"
QT_MOC_LITERAL(32, 436, 12), // "currentIndex"
QT_MOC_LITERAL(33, 449, 14), // "emitNodesAdded"
QT_MOC_LITERAL(34, 464, 6), // "parent"
QT_MOC_LITERAL(35, 471, 5), // "start"
QT_MOC_LITERAL(36, 477, 3), // "end"
QT_MOC_LITERAL(37, 481, 25), // "emitNodesAboutToBeRemoved"
QT_MOC_LITERAL(38, 507, 26), // "refreshIfCurrentNodeHidden"
QT_MOC_LITERAL(39, 534, 9), // "mrmlScene"
QT_MOC_LITERAL(40, 544, 12), // "addAttribute"
QT_MOC_LITERAL(41, 557, 13), // "attributeName"
QT_MOC_LITERAL(42, 571, 14), // "attributeValue"
QT_MOC_LITERAL(43, 586, 15), // "removeAttribute"
QT_MOC_LITERAL(44, 602, 16), // "setNodeTypeLabel"
QT_MOC_LITERAL(45, 619, 5), // "label"
QT_MOC_LITERAL(46, 625, 13), // "nodeTypeLabel"
QT_MOC_LITERAL(47, 639, 9), // "nodeCount"
QT_MOC_LITERAL(48, 649, 13), // "nodeFromIndex"
QT_MOC_LITERAL(49, 663, 11), // "currentNode"
QT_MOC_LITERAL(50, 675, 13), // "currentNodeId"
QT_MOC_LITERAL(51, 689, 20), // "sortFilterProxyModel"
QT_MOC_LITERAL(52, 710, 26), // "qMRMLSortFilterProxyModel*"
QT_MOC_LITERAL(53, 737, 13), // "addMenuAction"
QT_MOC_LITERAL(54, 751, 8), // "QAction*"
QT_MOC_LITERAL(55, 760, 9), // "newAction"
QT_MOC_LITERAL(56, 770, 13), // "currentNodeID"
QT_MOC_LITERAL(57, 784, 9), // "nodeTypes"
QT_MOC_LITERAL(58, 794, 10), // "showHidden"
QT_MOC_LITERAL(59, 805, 18), // "showChildNodeTypes"
QT_MOC_LITERAL(60, 824, 18), // "hideChildNodeTypes"
QT_MOC_LITERAL(61, 843, 8), // "baseName"
QT_MOC_LITERAL(62, 852, 11), // "noneEnabled"
QT_MOC_LITERAL(63, 864, 10), // "addEnabled"
QT_MOC_LITERAL(64, 875, 13), // "removeEnabled"
QT_MOC_LITERAL(65, 889, 11), // "editEnabled"
QT_MOC_LITERAL(66, 901, 13), // "renameEnabled"
QT_MOC_LITERAL(67, 915, 27), // "interactionNodeSingletonTag"
QT_MOC_LITERAL(68, 943, 22), // "selectNodeUponCreation"
QT_MOC_LITERAL(69, 966, 11), // "noneDisplay"
QT_MOC_LITERAL(70, 978, 16), // "sizeAdjustPolicy"
QT_MOC_LITERAL(71, 995, 27) // "QComboBox::SizeAdjustPolicy"

    },
    "qMRMLNodeComboBox\0currentNodeChanged\0"
    "\0vtkMRMLNode*\0node\0currentNodeIDChanged\0"
    "id\0nodeActivated\0validNode\0nodeAdded\0"
    "nodeAddedByUser\0nodeAboutToBeRemoved\0"
    "currentNodeRenamed\0newName\0"
    "nodeAboutToBeEdited\0setMRMLScene\0"
    "vtkMRMLScene*\0scene\0setCurrentNode\0"
    "nodeID\0setCurrentNodeID\0setCurrentNodeIndex\0"
    "index\0addNode\0nodeType\0removeCurrentNode\0"
    "editCurrentNode\0renameCurrentNode\0"
    "activateExtraItem\0QModelIndex\0"
    "emitCurrentNodeChanged\0emitNodeActivated\0"
    "currentIndex\0emitNodesAdded\0parent\0"
    "start\0end\0emitNodesAboutToBeRemoved\0"
    "refreshIfCurrentNodeHidden\0mrmlScene\0"
    "addAttribute\0attributeName\0attributeValue\0"
    "removeAttribute\0setNodeTypeLabel\0label\0"
    "nodeTypeLabel\0nodeCount\0nodeFromIndex\0"
    "currentNode\0currentNodeId\0"
    "sortFilterProxyModel\0qMRMLSortFilterProxyModel*\0"
    "addMenuAction\0QAction*\0newAction\0"
    "currentNodeID\0nodeTypes\0showHidden\0"
    "showChildNodeTypes\0hideChildNodeTypes\0"
    "baseName\0noneEnabled\0addEnabled\0"
    "removeEnabled\0editEnabled\0renameEnabled\0"
    "interactionNodeSingletonTag\0"
    "selectNodeUponCreation\0noneDisplay\0"
    "sizeAdjustPolicy\0QComboBox::SizeAdjustPolicy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLNodeComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
      16,  306, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  199,    2, 0x06 /* Public */,
       5,    1,  202,    2, 0x06 /* Public */,
       7,    1,  205,    2, 0x06 /* Public */,
       1,    1,  208,    2, 0x06 /* Public */,
       9,    1,  211,    2, 0x06 /* Public */,
      10,    1,  214,    2, 0x06 /* Public */,
      11,    1,  217,    2, 0x06 /* Public */,
      12,    1,  220,    2, 0x06 /* Public */,
      14,    1,  223,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,  226,    2, 0x0a /* Public */,
      18,    1,  229,    2, 0x0a /* Public */,
      18,    1,  232,    2, 0x0a /* Public */,
      20,    1,  235,    2, 0x0a /* Public */,
      21,    1,  238,    2, 0x0a /* Public */,
      23,    1,  241,    2, 0x0a /* Public */,
      23,    0,  244,    2, 0x0a /* Public */,
      25,    0,  245,    2, 0x0a /* Public */,
      26,    0,  246,    2, 0x0a /* Public */,
      27,    0,  247,    2, 0x0a /* Public */,
      28,    1,  248,    2, 0x09 /* Protected */,
      30,    0,  251,    2, 0x09 /* Protected */,
      31,    1,  252,    2, 0x09 /* Protected */,
      33,    3,  255,    2, 0x09 /* Protected */,
      37,    3,  262,    2, 0x09 /* Protected */,
      38,    0,  269,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      39,    0,  270,    2, 0x02 /* Public */,
      40,    3,  271,    2, 0x02 /* Public */,
      40,    2,  278,    2, 0x22 /* Public | MethodCloned */,
      43,    2,  283,    2, 0x02 /* Public */,
      44,    2,  288,    2, 0x02 /* Public */,
      46,    1,  293,    2, 0x02 /* Public */,
      47,    0,  296,    2, 0x02 /* Public */,
      48,    1,  297,    2, 0x02 /* Public */,
      49,    0,  300,    2, 0x02 /* Public */,
      50,    0,  301,    2, 0x02 /* Public */,
      51,    0,  302,    2, 0x02 /* Public */,
      53,    1,  303,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Int,   22,
    0x80000000 | 3, QMetaType::QString,   24,
    0x80000000 | 3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, 0x80000000 | 29, QMetaType::Int, QMetaType::Int,   34,   35,   36,
    QMetaType::Void, 0x80000000 | 29, QMetaType::Int, QMetaType::Int,   34,   35,   36,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QVariant,   24,   41,   42,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   24,   41,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   24,   41,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   45,   24,
    QMetaType::QString, QMetaType::QString,   24,
    QMetaType::Int,
    0x80000000 | 3, QMetaType::Int,   22,
    0x80000000 | 3,
    QMetaType::QString,
    0x80000000 | 52,
    QMetaType::Void, 0x80000000 | 54,   55,

 // properties: name, type, flags
      56, QMetaType::QString, 0x00494103,
      50, QMetaType::QString, 0x00094003,
      57, QMetaType::QStringList, 0x00095103,
      58, QMetaType::Bool, 0x00095103,
      59, QMetaType::Bool, 0x00095103,
      60, QMetaType::QStringList, 0x00095103,
      61, QMetaType::QString, 0x00095103,
      62, QMetaType::Bool, 0x00095103,
      63, QMetaType::Bool, 0x00095103,
      64, QMetaType::Bool, 0x00095103,
      65, QMetaType::Bool, 0x00095103,
      66, QMetaType::Bool, 0x00095103,
      67, QMetaType::QString, 0x00095103,
      68, QMetaType::Bool, 0x00095103,
      69, QMetaType::QString, 0x00095103,
      70, 0x80000000 | 71, 0x0009510b,

 // properties: notify_signal_id
       1,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void qMRMLNodeComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLNodeComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->currentNodeIDChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->nodeActivated((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->currentNodeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->nodeAdded((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 5: _t->nodeAddedByUser((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 6: _t->nodeAboutToBeRemoved((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 7: _t->currentNodeRenamed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->nodeAboutToBeEdited((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 9: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 10: _t->setCurrentNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 11: _t->setCurrentNode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->setCurrentNodeID((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->setCurrentNodeIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: { vtkMRMLNode* _r = _t->addNode((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< vtkMRMLNode**>(_a[0]) = std::move(_r); }  break;
        case 15: { vtkMRMLNode* _r = _t->addNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLNode**>(_a[0]) = std::move(_r); }  break;
        case 16: _t->removeCurrentNode(); break;
        case 17: _t->editCurrentNode(); break;
        case 18: _t->renameCurrentNode(); break;
        case 19: _t->activateExtraItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 20: _t->emitCurrentNodeChanged(); break;
        case 21: _t->emitNodeActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->emitNodesAdded((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 23: _t->emitNodesAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 24: _t->refreshIfCurrentNodeHidden(); break;
        case 25: { vtkMRMLScene* _r = _t->mrmlScene();
            if (_a[0]) *reinterpret_cast< vtkMRMLScene**>(_a[0]) = std::move(_r); }  break;
        case 26: _t->addAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 27: _t->addAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 28: _t->removeAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 29: _t->setNodeTypeLabel((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: { QString _r = _t->nodeTypeLabel((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 31: { int _r = _t->nodeCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 32: { vtkMRMLNode* _r = _t->nodeFromIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< vtkMRMLNode**>(_a[0]) = std::move(_r); }  break;
        case 33: { vtkMRMLNode* _r = _t->currentNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLNode**>(_a[0]) = std::move(_r); }  break;
        case 34: { QString _r = _t->currentNodeId();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 35: { qMRMLSortFilterProxyModel* _r = _t->sortFilterProxyModel();
            if (_a[0]) *reinterpret_cast< qMRMLSortFilterProxyModel**>(_a[0]) = std::move(_r); }  break;
        case 36: _t->addMenuAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLNodeComboBox::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLNodeComboBox::currentNodeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLNodeComboBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLNodeComboBox::currentNodeIDChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qMRMLNodeComboBox::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLNodeComboBox::nodeActivated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (qMRMLNodeComboBox::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLNodeComboBox::currentNodeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (qMRMLNodeComboBox::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLNodeComboBox::nodeAdded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (qMRMLNodeComboBox::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLNodeComboBox::nodeAddedByUser)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (qMRMLNodeComboBox::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLNodeComboBox::nodeAboutToBeRemoved)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (qMRMLNodeComboBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLNodeComboBox::currentNodeRenamed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (qMRMLNodeComboBox::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLNodeComboBox::nodeAboutToBeEdited)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLNodeComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentNodeID(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->currentNodeId(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->nodeTypes(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->showHidden(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showChildNodeTypes(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->hideChildNodeTypes(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->baseName(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->noneEnabled(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->addEnabled(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->removeEnabled(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->editEnabled(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->renameEnabled(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->interactionNodeSingletonTag(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->selectNodeUponCreation(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->noneDisplay(); break;
        case 15: *reinterpret_cast< QComboBox::SizeAdjustPolicy*>(_v) = _t->sizeAdjustPolicy(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLNodeComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentNodeID(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setCurrentNode(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setNodeTypes(*reinterpret_cast< QStringList*>(_v)); break;
        case 3: _t->setShowHidden(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setShowChildNodeTypes(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setHideChildNodeTypes(*reinterpret_cast< QStringList*>(_v)); break;
        case 6: _t->setBaseName(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setNoneEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setAddEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setRemoveEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setEditEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setRenameEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setInteractionNodeSingletonTag(*reinterpret_cast< QString*>(_v)); break;
        case 13: _t->setSelectNodeUponCreation(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setNoneDisplay(*reinterpret_cast< QString*>(_v)); break;
        case 15: _t->setSizeAdjustPolicy(*reinterpret_cast< QComboBox::SizeAdjustPolicy*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLNodeComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLNodeComboBox.data,
    qt_meta_data_qMRMLNodeComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLNodeComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLNodeComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLNodeComboBox.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qMRMLNodeComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 37;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qMRMLNodeComboBox::currentNodeChanged(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLNodeComboBox::currentNodeIDChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qMRMLNodeComboBox::nodeActivated(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qMRMLNodeComboBox::currentNodeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void qMRMLNodeComboBox::nodeAdded(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void qMRMLNodeComboBox::nodeAddedByUser(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void qMRMLNodeComboBox::nodeAboutToBeRemoved(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void qMRMLNodeComboBox::currentNodeRenamed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void qMRMLNodeComboBox::nodeAboutToBeEdited(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
