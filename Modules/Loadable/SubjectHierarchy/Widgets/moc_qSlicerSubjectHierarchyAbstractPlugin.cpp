/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSubjectHierarchyAbstractPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/SubjectHierarchy/Widgets/qSlicerSubjectHierarchyAbstractPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSubjectHierarchyAbstractPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSubjectHierarchyAbstractPlugin_t {
    QByteArrayData data[64];
    char stringdata0[1107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSubjectHierarchyAbstractPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSubjectHierarchyAbstractPlugin_t qt_meta_stringdata_qSlicerSubjectHierarchyAbstractPlugin = {
    {
QT_MOC_LITERAL(0, 0, 37), // "qSlicerSubjectHierarchyAbstra..."
QT_MOC_LITERAL(1, 38, 17), // "requestExpandItem"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 9), // "vtkIdType"
QT_MOC_LITERAL(4, 67, 6), // "itemID"
QT_MOC_LITERAL(5, 74, 23), // "requestInvalidateFilter"
QT_MOC_LITERAL(6, 98, 26), // "canOwnSubjectHierarchyItem"
QT_MOC_LITERAL(7, 125, 13), // "roleForPlugin"
QT_MOC_LITERAL(8, 139, 4), // "icon"
QT_MOC_LITERAL(9, 144, 14), // "visibilityIcon"
QT_MOC_LITERAL(10, 159, 7), // "visible"
QT_MOC_LITERAL(11, 167, 17), // "canEditProperties"
QT_MOC_LITERAL(12, 185, 14), // "editProperties"
QT_MOC_LITERAL(13, 200, 17), // "displayedItemName"
QT_MOC_LITERAL(14, 218, 7), // "tooltip"
QT_MOC_LITERAL(15, 226, 20), // "setDisplayVisibility"
QT_MOC_LITERAL(16, 247, 20), // "getDisplayVisibility"
QT_MOC_LITERAL(17, 268, 15), // "setDisplayColor"
QT_MOC_LITERAL(18, 284, 5), // "color"
QT_MOC_LITERAL(19, 290, 18), // "QMap<int,QVariant>"
QT_MOC_LITERAL(20, 309, 19), // "terminologyMetaData"
QT_MOC_LITERAL(21, 329, 15), // "getDisplayColor"
QT_MOC_LITERAL(22, 345, 19), // "QMap<int,QVariant>&"
QT_MOC_LITERAL(23, 365, 22), // "itemContextMenuActions"
QT_MOC_LITERAL(24, 388, 15), // "QList<QAction*>"
QT_MOC_LITERAL(25, 404, 23), // "sceneContextMenuActions"
QT_MOC_LITERAL(26, 428, 29), // "showContextMenuActionsForItem"
QT_MOC_LITERAL(27, 458, 28), // "visibilityContextMenuActions"
QT_MOC_LITERAL(28, 487, 39), // "showVisibilityContextMenuActi..."
QT_MOC_LITERAL(29, 527, 22), // "viewContextMenuActions"
QT_MOC_LITERAL(30, 550, 33), // "showViewContextMenuActionsFor..."
QT_MOC_LITERAL(31, 584, 9), // "eventData"
QT_MOC_LITERAL(32, 594, 28), // "canAddNodeToSubjectHierarchy"
QT_MOC_LITERAL(33, 623, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(34, 636, 4), // "node"
QT_MOC_LITERAL(35, 641, 12), // "parentItemID"
QT_MOC_LITERAL(36, 654, 25), // "addNodeToSubjectHierarchy"
QT_MOC_LITERAL(37, 680, 37), // "canReparentItemInsideSubjectH..."
QT_MOC_LITERAL(38, 718, 34), // "reparentItemInsideSubjectHier..."
QT_MOC_LITERAL(39, 753, 14), // "showItemInView"
QT_MOC_LITERAL(40, 768, 24), // "vtkMRMLAbstractViewNode*"
QT_MOC_LITERAL(41, 793, 8), // "viewNode"
QT_MOC_LITERAL(42, 802, 10), // "vtkIdList*"
QT_MOC_LITERAL(43, 813, 14), // "allItemsToShow"
QT_MOC_LITERAL(44, 828, 23), // "isThisPluginOwnerOfItem"
QT_MOC_LITERAL(45, 852, 14), // "switchToModule"
QT_MOC_LITERAL(46, 867, 28), // "qSlicerAbstractModuleWidget*"
QT_MOC_LITERAL(47, 896, 10), // "moduleName"
QT_MOC_LITERAL(48, 907, 17), // "setActionPosition"
QT_MOC_LITERAL(49, 925, 8), // "QAction*"
QT_MOC_LITERAL(50, 934, 6), // "action"
QT_MOC_LITERAL(51, 941, 7), // "section"
QT_MOC_LITERAL(52, 949, 6), // "weight"
QT_MOC_LITERAL(53, 956, 16), // "weightAdjustment"
QT_MOC_LITERAL(54, 973, 4), // "name"
QT_MOC_LITERAL(55, 978, 8), // "helpText"
QT_MOC_LITERAL(56, 987, 17), // "ActionSectionType"
QT_MOC_LITERAL(57, 1005, 10), // "SectionTop"
QT_MOC_LITERAL(58, 1016, 18), // "SectionInteraction"
QT_MOC_LITERAL(59, 1035, 16), // "SectionComponent"
QT_MOC_LITERAL(60, 1052, 11), // "SectionNode"
QT_MOC_LITERAL(61, 1064, 14), // "SectionDefault"
QT_MOC_LITERAL(62, 1079, 13), // "SectionFolder"
QT_MOC_LITERAL(63, 1093, 13) // "SectionBottom"

    },
    "qSlicerSubjectHierarchyAbstractPlugin\0"
    "requestExpandItem\0\0vtkIdType\0itemID\0"
    "requestInvalidateFilter\0"
    "canOwnSubjectHierarchyItem\0roleForPlugin\0"
    "icon\0visibilityIcon\0visible\0"
    "canEditProperties\0editProperties\0"
    "displayedItemName\0tooltip\0"
    "setDisplayVisibility\0getDisplayVisibility\0"
    "setDisplayColor\0color\0QMap<int,QVariant>\0"
    "terminologyMetaData\0getDisplayColor\0"
    "QMap<int,QVariant>&\0itemContextMenuActions\0"
    "QList<QAction*>\0sceneContextMenuActions\0"
    "showContextMenuActionsForItem\0"
    "visibilityContextMenuActions\0"
    "showVisibilityContextMenuActionsForItem\0"
    "viewContextMenuActions\0"
    "showViewContextMenuActionsForItem\0"
    "eventData\0canAddNodeToSubjectHierarchy\0"
    "vtkMRMLNode*\0node\0parentItemID\0"
    "addNodeToSubjectHierarchy\0"
    "canReparentItemInsideSubjectHierarchy\0"
    "reparentItemInsideSubjectHierarchy\0"
    "showItemInView\0vtkMRMLAbstractViewNode*\0"
    "viewNode\0vtkIdList*\0allItemsToShow\0"
    "isThisPluginOwnerOfItem\0switchToModule\0"
    "qSlicerAbstractModuleWidget*\0moduleName\0"
    "setActionPosition\0QAction*\0action\0"
    "section\0weight\0weightAdjustment\0name\0"
    "helpText\0ActionSectionType\0SectionTop\0"
    "SectionInteraction\0SectionComponent\0"
    "SectionNode\0SectionDefault\0SectionFolder\0"
    "SectionBottom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSubjectHierarchyAbstractPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       2,  292, // properties
       1,  298, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  174,    2, 0x06 /* Public */,
       5,    0,  177,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,  178,    2, 0x02 /* Public */,
       7,    0,  181,    2, 0x02 /* Public */,
       8,    1,  182,    2, 0x02 /* Public */,
       9,    1,  185,    2, 0x02 /* Public */,
      11,    1,  188,    2, 0x02 /* Public */,
      12,    1,  191,    2, 0x02 /* Public */,
      13,    1,  194,    2, 0x02 /* Public */,
      14,    1,  197,    2, 0x02 /* Public */,
      15,    2,  200,    2, 0x02 /* Public */,
      16,    1,  205,    2, 0x02 /* Public */,
      17,    3,  208,    2, 0x02 /* Public */,
      21,    2,  215,    2, 0x02 /* Public */,
      23,    0,  220,    2, 0x02 /* Public */,
      25,    0,  221,    2, 0x02 /* Public */,
      26,    1,  222,    2, 0x02 /* Public */,
      27,    0,  225,    2, 0x02 /* Public */,
      28,    1,  226,    2, 0x02 /* Public */,
      29,    0,  229,    2, 0x02 /* Public */,
      30,    2,  230,    2, 0x02 /* Public */,
      32,    2,  235,    2, 0x02 /* Public */,
      32,    1,  240,    2, 0x22 /* Public | MethodCloned */,
      36,    2,  243,    2, 0x02 /* Public */,
      37,    2,  248,    2, 0x02 /* Public */,
      38,    2,  253,    2, 0x02 /* Public */,
      39,    3,  258,    2, 0x02 /* Public */,
      44,    1,  265,    2, 0x02 /* Public */,
      45,    1,  268,    2, 0x02 /* Public */,
      48,    4,  271,    2, 0x02 /* Public */,
      48,    3,  280,    2, 0x22 /* Public | MethodCloned */,
      48,    2,  287,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Double, 0x80000000 | 3,    4,
    QMetaType::QString,
    QMetaType::QIcon, 0x80000000 | 3,    4,
    QMetaType::QIcon, QMetaType::Int,   10,
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::QString, 0x80000000 | 3,    4,
    QMetaType::QString, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,   10,
    QMetaType::Int, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QColor, 0x80000000 | 19,    4,   18,   20,
    QMetaType::QColor, 0x80000000 | 3, 0x80000000 | 22,    4,   20,
    0x80000000 | 24,
    0x80000000 | 24,
    QMetaType::Void, 0x80000000 | 3,    4,
    0x80000000 | 24,
    QMetaType::Void, 0x80000000 | 3,    4,
    0x80000000 | 24,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariantMap,    4,   31,
    QMetaType::Double, 0x80000000 | 33, 0x80000000 | 3,   34,   35,
    QMetaType::Double, 0x80000000 | 33,   34,
    QMetaType::Bool, 0x80000000 | 33, 0x80000000 | 3,   34,   35,
    QMetaType::Double, 0x80000000 | 3, 0x80000000 | 3,    4,   35,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 3,    4,   35,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 40, 0x80000000 | 42,    4,   41,   43,
    QMetaType::Bool, 0x80000000 | 3,    4,
    0x80000000 | 46, QMetaType::QString,   47,
    QMetaType::Void, 0x80000000 | 49, QMetaType::Int, QMetaType::Int, QMetaType::Double,   50,   51,   52,   53,
    QMetaType::Void, 0x80000000 | 49, QMetaType::Int, QMetaType::Int,   50,   51,   52,
    QMetaType::Void, 0x80000000 | 49, QMetaType::Int,   50,   51,

 // properties: name, type, flags
      54, QMetaType::QString, 0x00095103,
      55, QMetaType::QString, 0x00095001,

 // enums: name, alias, flags, count, data
      56,   56, 0x0,    7,  303,

 // enum data: key, value
      57, uint(qSlicerSubjectHierarchyAbstractPlugin::SectionTop),
      58, uint(qSlicerSubjectHierarchyAbstractPlugin::SectionInteraction),
      59, uint(qSlicerSubjectHierarchyAbstractPlugin::SectionComponent),
      60, uint(qSlicerSubjectHierarchyAbstractPlugin::SectionNode),
      61, uint(qSlicerSubjectHierarchyAbstractPlugin::SectionDefault),
      62, uint(qSlicerSubjectHierarchyAbstractPlugin::SectionFolder),
      63, uint(qSlicerSubjectHierarchyAbstractPlugin::SectionBottom),

       0        // eod
};

void qSlicerSubjectHierarchyAbstractPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSubjectHierarchyAbstractPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestExpandItem((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 1: _t->requestInvalidateFilter(); break;
        case 2: { double _r = _t->canOwnSubjectHierarchyItem((*reinterpret_cast< vtkIdType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->roleForPlugin();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QIcon _r = _t->icon((*reinterpret_cast< vtkIdType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = std::move(_r); }  break;
        case 5: { QIcon _r = _t->visibilityIcon((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->canEditProperties((*reinterpret_cast< vtkIdType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->editProperties((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 8: { QString _r = _t->displayedItemName((*reinterpret_cast< vtkIdType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->tooltip((*reinterpret_cast< vtkIdType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->setDisplayVisibility((*reinterpret_cast< vtkIdType(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: { int _r = _t->getDisplayVisibility((*reinterpret_cast< vtkIdType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->setDisplayColor((*reinterpret_cast< vtkIdType(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< QMap<int,QVariant>(*)>(_a[3]))); break;
        case 13: { QColor _r = _t->getDisplayColor((*reinterpret_cast< vtkIdType(*)>(_a[1])),(*reinterpret_cast< QMap<int,QVariant>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 14: { QList<QAction*> _r = _t->itemContextMenuActions();
            if (_a[0]) *reinterpret_cast< QList<QAction*>*>(_a[0]) = std::move(_r); }  break;
        case 15: { QList<QAction*> _r = _t->sceneContextMenuActions();
            if (_a[0]) *reinterpret_cast< QList<QAction*>*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->showContextMenuActionsForItem((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 17: { QList<QAction*> _r = _t->visibilityContextMenuActions();
            if (_a[0]) *reinterpret_cast< QList<QAction*>*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->showVisibilityContextMenuActionsForItem((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 19: { QList<QAction*> _r = _t->viewContextMenuActions();
            if (_a[0]) *reinterpret_cast< QList<QAction*>*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->showViewContextMenuActionsForItem((*reinterpret_cast< vtkIdType(*)>(_a[1])),(*reinterpret_cast< QVariantMap(*)>(_a[2]))); break;
        case 21: { double _r = _t->canAddNodeToSubjectHierarchy((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1])),(*reinterpret_cast< vtkIdType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 22: { double _r = _t->canAddNodeToSubjectHierarchy((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 23: { bool _r = _t->addNodeToSubjectHierarchy((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1])),(*reinterpret_cast< vtkIdType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: { double _r = _t->canReparentItemInsideSubjectHierarchy((*reinterpret_cast< vtkIdType(*)>(_a[1])),(*reinterpret_cast< vtkIdType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->reparentItemInsideSubjectHierarchy((*reinterpret_cast< vtkIdType(*)>(_a[1])),(*reinterpret_cast< vtkIdType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->showItemInView((*reinterpret_cast< vtkIdType(*)>(_a[1])),(*reinterpret_cast< vtkMRMLAbstractViewNode*(*)>(_a[2])),(*reinterpret_cast< vtkIdList*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->isThisPluginOwnerOfItem((*reinterpret_cast< vtkIdType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { qSlicerAbstractModuleWidget* _r = _t->switchToModule((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerAbstractModuleWidget**>(_a[0]) = std::move(_r); }  break;
        case 29: _t->setActionPosition((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 30: _t->setActionPosition((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 31: _t->setActionPosition((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qSlicerSubjectHierarchyAbstractPlugin::*)(vtkIdType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerSubjectHierarchyAbstractPlugin::requestExpandItem)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qSlicerSubjectHierarchyAbstractPlugin::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerSubjectHierarchyAbstractPlugin::requestInvalidateFilter)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerSubjectHierarchyAbstractPlugin *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->helpText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerSubjectHierarchyAbstractPlugin *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSubjectHierarchyAbstractPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSubjectHierarchyAbstractPlugin.data,
    qt_meta_data_qSlicerSubjectHierarchyAbstractPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSubjectHierarchyAbstractPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSubjectHierarchyAbstractPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSubjectHierarchyAbstractPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerSubjectHierarchyAbstractPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 32;
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

// SIGNAL 0
void qSlicerSubjectHierarchyAbstractPlugin::requestExpandItem(vtkIdType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qSlicerSubjectHierarchyAbstractPlugin::requestInvalidateFilter()const
{
    QMetaObject::activate(const_cast< qSlicerSubjectHierarchyAbstractPlugin *>(this), &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
