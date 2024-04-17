/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSubjectHierarchyTreeView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/SubjectHierarchy/Widgets/qMRMLSubjectHierarchyTreeView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSubjectHierarchyTreeView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSubjectHierarchyTreeView_t {
    QByteArrayData data[134];
    char stringdata0[2436];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSubjectHierarchyTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSubjectHierarchyTreeView_t qt_meta_stringdata_qMRMLSubjectHierarchyTreeView = {
    {
QT_MOC_LITERAL(0, 0, 29), // "qMRMLSubjectHierarchyTreeView"
QT_MOC_LITERAL(1, 30, 18), // "currentItemChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 9), // "vtkIdType"
QT_MOC_LITERAL(4, 60, 19), // "currentItemsChanged"
QT_MOC_LITERAL(5, 80, 16), // "QList<vtkIdType>"
QT_MOC_LITERAL(6, 97, 19), // "currentItemModified"
QT_MOC_LITERAL(7, 117, 12), // "setMRMLScene"
QT_MOC_LITERAL(8, 130, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(9, 144, 5), // "scene"
QT_MOC_LITERAL(10, 150, 14), // "setCurrentItem"
QT_MOC_LITERAL(11, 165, 6), // "itemID"
QT_MOC_LITERAL(12, 172, 15), // "setCurrentItems"
QT_MOC_LITERAL(13, 188, 5), // "items"
QT_MOC_LITERAL(14, 194, 10), // "vtkIdList*"
QT_MOC_LITERAL(15, 205, 14), // "setCurrentNode"
QT_MOC_LITERAL(16, 220, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(17, 233, 4), // "node"
QT_MOC_LITERAL(18, 238, 11), // "setRootItem"
QT_MOC_LITERAL(19, 250, 15), // "setShowRootItem"
QT_MOC_LITERAL(20, 266, 4), // "show"
QT_MOC_LITERAL(21, 271, 17), // "renameCurrentItem"
QT_MOC_LITERAL(22, 289, 19), // "deleteSelectedItems"
QT_MOC_LITERAL(23, 309, 17), // "hideSelectedItems"
QT_MOC_LITERAL(24, 327, 17), // "showSelectedItems"
QT_MOC_LITERAL(25, 345, 31), // "toggleVisibilityOfSelectedItems"
QT_MOC_LITERAL(26, 377, 15), // "editCurrentItem"
QT_MOC_LITERAL(27, 393, 10), // "expandItem"
QT_MOC_LITERAL(28, 404, 12), // "collapseItem"
QT_MOC_LITERAL(29, 417, 26), // "selectPluginForCurrentItem"
QT_MOC_LITERAL(30, 444, 25), // "updateSelectPluginActions"
QT_MOC_LITERAL(31, 470, 17), // "setMultiSelection"
QT_MOC_LITERAL(32, 488, 16), // "multiSelectionOn"
QT_MOC_LITERAL(33, 505, 18), // "setPluginAllowlist"
QT_MOC_LITERAL(34, 524, 9), // "allowlist"
QT_MOC_LITERAL(35, 534, 18), // "setPluginBlocklist"
QT_MOC_LITERAL(36, 553, 9), // "blocklist"
QT_MOC_LITERAL(37, 563, 13), // "disablePlugin"
QT_MOC_LITERAL(38, 577, 6), // "plugin"
QT_MOC_LITERAL(39, 584, 18), // "setPluginWhitelist"
QT_MOC_LITERAL(40, 603, 18), // "setPluginBlacklist"
QT_MOC_LITERAL(41, 622, 19), // "showContextMenuHint"
QT_MOC_LITERAL(42, 642, 10), // "visibility"
QT_MOC_LITERAL(43, 653, 27), // "setHighlightReferencedItems"
QT_MOC_LITERAL(44, 681, 11), // "highlightOn"
QT_MOC_LITERAL(45, 693, 21), // "setContextMenuEnabled"
QT_MOC_LITERAL(46, 715, 7), // "enabled"
QT_MOC_LITERAL(47, 723, 24), // "setEditMenuActionVisible"
QT_MOC_LITERAL(48, 748, 7), // "visible"
QT_MOC_LITERAL(49, 756, 27), // "setSelectRoleSubMenuVisible"
QT_MOC_LITERAL(50, 784, 14), // "setNoneEnabled"
QT_MOC_LITERAL(51, 799, 6), // "enable"
QT_MOC_LITERAL(52, 806, 14), // "setNoneDisplay"
QT_MOC_LITERAL(53, 821, 11), // "displayName"
QT_MOC_LITERAL(54, 833, 25), // "resetColumnSizesToDefault"
QT_MOC_LITERAL(55, 859, 34), // "setIncludeItemAttributeNamesF..."
QT_MOC_LITERAL(56, 894, 6), // "filter"
QT_MOC_LITERAL(57, 901, 34), // "setIncludeNodeAttributeNamesF..."
QT_MOC_LITERAL(58, 936, 34), // "setExcludeItemAttributeNamesF..."
QT_MOC_LITERAL(59, 971, 34), // "setExcludeNodeAttributeNamesF..."
QT_MOC_LITERAL(60, 1006, 22), // "setAttributeNameFilter"
QT_MOC_LITERAL(61, 1029, 8), // "QString&"
QT_MOC_LITERAL(62, 1038, 23), // "setAttributeValueFilter"
QT_MOC_LITERAL(63, 1062, 18), // "onSelectionChanged"
QT_MOC_LITERAL(64, 1081, 14), // "QItemSelection"
QT_MOC_LITERAL(65, 1096, 8), // "selected"
QT_MOC_LITERAL(66, 1105, 10), // "deselected"
QT_MOC_LITERAL(67, 1116, 14), // "onItemExpanded"
QT_MOC_LITERAL(68, 1131, 11), // "QModelIndex"
QT_MOC_LITERAL(69, 1143, 17), // "expandedItemIndex"
QT_MOC_LITERAL(70, 1161, 15), // "onItemCollapsed"
QT_MOC_LITERAL(71, 1177, 18), // "collapsedItemIndex"
QT_MOC_LITERAL(72, 1196, 14), // "updateRootItem"
QT_MOC_LITERAL(73, 1211, 30), // "onSubjectHierarchyItemModified"
QT_MOC_LITERAL(74, 1242, 10), // "vtkObject*"
QT_MOC_LITERAL(75, 1253, 6), // "caller"
QT_MOC_LITERAL(76, 1260, 8), // "callData"
QT_MOC_LITERAL(77, 1269, 39), // "onSubjectHierarchyItemTransfo..."
QT_MOC_LITERAL(78, 1309, 21), // "onMRMLSceneStartClose"
QT_MOC_LITERAL(79, 1331, 11), // "sceneObject"
QT_MOC_LITERAL(80, 1343, 19), // "onMRMLSceneEndClose"
QT_MOC_LITERAL(81, 1363, 28), // "onMRMLSceneStartBatchProcess"
QT_MOC_LITERAL(82, 1392, 26), // "onMRMLSceneEndBatchProcess"
QT_MOC_LITERAL(83, 1419, 19), // "onCustomContextMenu"
QT_MOC_LITERAL(84, 1439, 5), // "point"
QT_MOC_LITERAL(85, 1445, 25), // "onTransformActionSelected"
QT_MOC_LITERAL(86, 1471, 35), // "onTransformInteractionInViewT..."
QT_MOC_LITERAL(87, 1507, 25), // "onTransformEditProperties"
QT_MOC_LITERAL(88, 1533, 20), // "onCreateNewTransform"
QT_MOC_LITERAL(89, 1554, 9), // "mrmlScene"
QT_MOC_LITERAL(90, 1564, 20), // "subjectHierarchyNode"
QT_MOC_LITERAL(91, 1585, 28), // "vtkMRMLSubjectHierarchyNode*"
QT_MOC_LITERAL(92, 1614, 11), // "currentItem"
QT_MOC_LITERAL(93, 1626, 12), // "currentItems"
QT_MOC_LITERAL(94, 1639, 13), // "selectedItems"
QT_MOC_LITERAL(95, 1653, 8), // "rootItem"
QT_MOC_LITERAL(96, 1662, 18), // "setAttributeFilter"
QT_MOC_LITERAL(97, 1681, 13), // "attributeName"
QT_MOC_LITERAL(98, 1695, 14), // "attributeValue"
QT_MOC_LITERAL(99, 1710, 21), // "removeAttributeFilter"
QT_MOC_LITERAL(100, 1732, 22), // "addItemAttributeFilter"
QT_MOC_LITERAL(101, 1755, 7), // "include"
QT_MOC_LITERAL(102, 1763, 25), // "removeItemAttributeFilter"
QT_MOC_LITERAL(103, 1789, 22), // "addNodeAttributeFilter"
QT_MOC_LITERAL(104, 1812, 9), // "className"
QT_MOC_LITERAL(105, 1822, 25), // "removeNodeAttributeFilter"
QT_MOC_LITERAL(106, 1848, 20), // "sortFilterProxyModel"
QT_MOC_LITERAL(107, 1869, 42), // "qMRMLSortFilterSubjectHierarc..."
QT_MOC_LITERAL(108, 1912, 5), // "model"
QT_MOC_LITERAL(109, 1918, 27), // "qMRMLSubjectHierarchyModel*"
QT_MOC_LITERAL(110, 1946, 18), // "displayedItemCount"
QT_MOC_LITERAL(111, 1965, 12), // "showRootItem"
QT_MOC_LITERAL(112, 1978, 24), // "highlightReferencedItems"
QT_MOC_LITERAL(113, 2003, 18), // "contextMenuEnabled"
QT_MOC_LITERAL(114, 2022, 21), // "editMenuActionVisible"
QT_MOC_LITERAL(115, 2044, 24), // "selectRoleSubMenuVisible"
QT_MOC_LITERAL(116, 2069, 14), // "multiSelection"
QT_MOC_LITERAL(117, 2084, 11), // "levelFilter"
QT_MOC_LITERAL(118, 2096, 10), // "nameFilter"
QT_MOC_LITERAL(119, 2107, 9), // "nodeTypes"
QT_MOC_LITERAL(120, 2117, 18), // "hideChildNodeTypes"
QT_MOC_LITERAL(121, 2136, 23), // "visibilityColumnVisible"
QT_MOC_LITERAL(122, 2160, 15), // "idColumnVisible"
QT_MOC_LITERAL(123, 2176, 18), // "colorColumnVisible"
QT_MOC_LITERAL(124, 2195, 22), // "transformColumnVisible"
QT_MOC_LITERAL(125, 2218, 24), // "descriptionColumnVisible"
QT_MOC_LITERAL(126, 2243, 11), // "noneEnabled"
QT_MOC_LITERAL(127, 2255, 11), // "noneDisplay"
QT_MOC_LITERAL(128, 2267, 31), // "includeItemAttributeNamesFilter"
QT_MOC_LITERAL(129, 2299, 31), // "includeNodeAttributeNamesFilter"
QT_MOC_LITERAL(130, 2331, 31), // "excludeItemAttributeNamesFilter"
QT_MOC_LITERAL(131, 2363, 31), // "excludeNodeAttributeNamesFilter"
QT_MOC_LITERAL(132, 2395, 19), // "attributeNameFilter"
QT_MOC_LITERAL(133, 2415, 20) // "attributeValueFilter"

    },
    "qMRMLSubjectHierarchyTreeView\0"
    "currentItemChanged\0\0vtkIdType\0"
    "currentItemsChanged\0QList<vtkIdType>\0"
    "currentItemModified\0setMRMLScene\0"
    "vtkMRMLScene*\0scene\0setCurrentItem\0"
    "itemID\0setCurrentItems\0items\0vtkIdList*\0"
    "setCurrentNode\0vtkMRMLNode*\0node\0"
    "setRootItem\0setShowRootItem\0show\0"
    "renameCurrentItem\0deleteSelectedItems\0"
    "hideSelectedItems\0showSelectedItems\0"
    "toggleVisibilityOfSelectedItems\0"
    "editCurrentItem\0expandItem\0collapseItem\0"
    "selectPluginForCurrentItem\0"
    "updateSelectPluginActions\0setMultiSelection\0"
    "multiSelectionOn\0setPluginAllowlist\0"
    "allowlist\0setPluginBlocklist\0blocklist\0"
    "disablePlugin\0plugin\0setPluginWhitelist\0"
    "setPluginBlacklist\0showContextMenuHint\0"
    "visibility\0setHighlightReferencedItems\0"
    "highlightOn\0setContextMenuEnabled\0"
    "enabled\0setEditMenuActionVisible\0"
    "visible\0setSelectRoleSubMenuVisible\0"
    "setNoneEnabled\0enable\0setNoneDisplay\0"
    "displayName\0resetColumnSizesToDefault\0"
    "setIncludeItemAttributeNamesFilter\0"
    "filter\0setIncludeNodeAttributeNamesFilter\0"
    "setExcludeItemAttributeNamesFilter\0"
    "setExcludeNodeAttributeNamesFilter\0"
    "setAttributeNameFilter\0QString&\0"
    "setAttributeValueFilter\0onSelectionChanged\0"
    "QItemSelection\0selected\0deselected\0"
    "onItemExpanded\0QModelIndex\0expandedItemIndex\0"
    "onItemCollapsed\0collapsedItemIndex\0"
    "updateRootItem\0onSubjectHierarchyItemModified\0"
    "vtkObject*\0caller\0callData\0"
    "onSubjectHierarchyItemTransformModified\0"
    "onMRMLSceneStartClose\0sceneObject\0"
    "onMRMLSceneEndClose\0onMRMLSceneStartBatchProcess\0"
    "onMRMLSceneEndBatchProcess\0"
    "onCustomContextMenu\0point\0"
    "onTransformActionSelected\0"
    "onTransformInteractionInViewToggled\0"
    "onTransformEditProperties\0"
    "onCreateNewTransform\0mrmlScene\0"
    "subjectHierarchyNode\0vtkMRMLSubjectHierarchyNode*\0"
    "currentItem\0currentItems\0selectedItems\0"
    "rootItem\0setAttributeFilter\0attributeName\0"
    "attributeValue\0removeAttributeFilter\0"
    "addItemAttributeFilter\0include\0"
    "removeItemAttributeFilter\0"
    "addNodeAttributeFilter\0className\0"
    "removeNodeAttributeFilter\0"
    "sortFilterProxyModel\0"
    "qMRMLSortFilterSubjectHierarchyProxyModel*\0"
    "model\0qMRMLSubjectHierarchyModel*\0"
    "displayedItemCount\0showRootItem\0"
    "highlightReferencedItems\0contextMenuEnabled\0"
    "editMenuActionVisible\0selectRoleSubMenuVisible\0"
    "multiSelection\0levelFilter\0nameFilter\0"
    "nodeTypes\0hideChildNodeTypes\0"
    "visibilityColumnVisible\0idColumnVisible\0"
    "colorColumnVisible\0transformColumnVisible\0"
    "descriptionColumnVisible\0noneEnabled\0"
    "noneDisplay\0includeItemAttributeNamesFilter\0"
    "includeNodeAttributeNamesFilter\0"
    "excludeItemAttributeNamesFilter\0"
    "excludeNodeAttributeNamesFilter\0"
    "attributeNameFilter\0attributeValueFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSubjectHierarchyTreeView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      78,   14, // methods
      23,  634, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  404,    2, 0x06 /* Public */,
       4,    1,  407,    2, 0x06 /* Public */,
       6,    1,  410,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  413,    2, 0x0a /* Public */,
      10,    1,  416,    2, 0x0a /* Public */,
      12,    1,  419,    2, 0x0a /* Public */,
      12,    1,  422,    2, 0x0a /* Public */,
      15,    1,  425,    2, 0x0a /* Public */,
      18,    1,  428,    2, 0x0a /* Public */,
      19,    1,  431,    2, 0x0a /* Public */,
      21,    0,  434,    2, 0x0a /* Public */,
      22,    0,  435,    2, 0x0a /* Public */,
      23,    0,  436,    2, 0x0a /* Public */,
      24,    0,  437,    2, 0x0a /* Public */,
      25,    0,  438,    2, 0x0a /* Public */,
      26,    0,  439,    2, 0x0a /* Public */,
      27,    1,  440,    2, 0x0a /* Public */,
      28,    1,  443,    2, 0x0a /* Public */,
      29,    0,  446,    2, 0x0a /* Public */,
      30,    0,  447,    2, 0x0a /* Public */,
      31,    1,  448,    2, 0x0a /* Public */,
      33,    1,  451,    2, 0x0a /* Public */,
      35,    1,  454,    2, 0x0a /* Public */,
      37,    1,  457,    2, 0x0a /* Public */,
      39,    1,  460,    2, 0x0a /* Public */,
      40,    1,  463,    2, 0x0a /* Public */,
      41,    1,  466,    2, 0x0a /* Public */,
      41,    0,  469,    2, 0x2a /* Public | MethodCloned */,
      43,    1,  470,    2, 0x0a /* Public */,
      45,    1,  473,    2, 0x0a /* Public */,
      47,    1,  476,    2, 0x0a /* Public */,
      49,    1,  479,    2, 0x0a /* Public */,
      50,    1,  482,    2, 0x0a /* Public */,
      52,    1,  485,    2, 0x0a /* Public */,
      54,    0,  488,    2, 0x0a /* Public */,
      55,    1,  489,    2, 0x0a /* Public */,
      57,    1,  492,    2, 0x0a /* Public */,
      58,    1,  495,    2, 0x0a /* Public */,
      59,    1,  498,    2, 0x0a /* Public */,
      60,    1,  501,    2, 0x0a /* Public */,
      62,    1,  504,    2, 0x0a /* Public */,
      63,    2,  507,    2, 0x09 /* Protected */,
      67,    1,  512,    2, 0x09 /* Protected */,
      70,    1,  515,    2, 0x09 /* Protected */,
      72,    0,  518,    2, 0x09 /* Protected */,
      73,    2,  519,    2, 0x09 /* Protected */,
      77,    2,  524,    2, 0x09 /* Protected */,
      78,    1,  529,    2, 0x09 /* Protected */,
      80,    1,  532,    2, 0x09 /* Protected */,
      81,    1,  535,    2, 0x09 /* Protected */,
      82,    1,  538,    2, 0x09 /* Protected */,
      83,    1,  541,    2, 0x09 /* Protected */,
      85,    0,  544,    2, 0x09 /* Protected */,
      86,    1,  545,    2, 0x09 /* Protected */,
      87,    0,  548,    2, 0x09 /* Protected */,
      88,    0,  549,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      89,    0,  550,    2, 0x02 /* Public */,
      90,    0,  551,    2, 0x02 /* Public */,
      92,    0,  552,    2, 0x02 /* Public */,
      93,    1,  553,    2, 0x02 /* Public */,
      95,    0,  556,    2, 0x02 /* Public */,
      96,    2,  557,    2, 0x02 /* Public */,
      96,    1,  562,    2, 0x22 /* Public | MethodCloned */,
      99,    0,  565,    2, 0x02 /* Public */,
     100,    3,  566,    2, 0x02 /* Public */,
     100,    2,  573,    2, 0x22 /* Public | MethodCloned */,
     100,    1,  578,    2, 0x22 /* Public | MethodCloned */,
     102,    3,  581,    2, 0x02 /* Public */,
     102,    2,  588,    2, 0x02 /* Public */,
     103,    4,  593,    2, 0x02 /* Public */,
     103,    3,  602,    2, 0x22 /* Public | MethodCloned */,
     103,    2,  609,    2, 0x22 /* Public | MethodCloned */,
     103,    1,  614,    2, 0x22 /* Public | MethodCloned */,
     105,    4,  617,    2, 0x02 /* Public */,
     105,    2,  626,    2, 0x02 /* Public */,
     106,    0,  631,    2, 0x02 /* Public */,
     108,    0,  632,    2, 0x02 /* Public */,
     110,    0,  633,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, 0x80000000 | 5,   13,
    QMetaType::Void, 0x80000000 | 14,   13,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::QStringList,   34,
    QMetaType::Void, QMetaType::QStringList,   36,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, QMetaType::QStringList,   34,
    QMetaType::Void, QMetaType::QStringList,   36,
    QMetaType::Bool, QMetaType::Bool,   42,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::QString,   53,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   56,
    QMetaType::Void, QMetaType::QStringList,   56,
    QMetaType::Void, QMetaType::QStringList,   56,
    QMetaType::Void, QMetaType::QStringList,   56,
    QMetaType::Void, 0x80000000 | 61,   56,
    QMetaType::Void, 0x80000000 | 61,   56,
    QMetaType::Void, 0x80000000 | 64, 0x80000000 | 64,   65,   66,
    QMetaType::Void, 0x80000000 | 68,   69,
    QMetaType::Void, 0x80000000 | 68,   71,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 74, QMetaType::VoidStar,   75,   76,
    QMetaType::Void, 0x80000000 | 74, QMetaType::VoidStar,   75,   76,
    QMetaType::Void, 0x80000000 | 74,   79,
    QMetaType::Void, 0x80000000 | 74,   79,
    QMetaType::Void, 0x80000000 | 74,   79,
    QMetaType::Void, 0x80000000 | 74,   79,
    QMetaType::Void, QMetaType::QPoint,   84,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 8,
    0x80000000 | 91,
    0x80000000 | 3,
    QMetaType::Void, 0x80000000 | 14,   94,
    0x80000000 | 3,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   97,   98,
    QMetaType::Void, QMetaType::QString,   97,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant, QMetaType::Bool,   97,   98,  101,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   97,   98,
    QMetaType::Void, QMetaType::QString,   97,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant, QMetaType::Bool,   97,   98,  101,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   97,  101,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant, QMetaType::Bool, QMetaType::QString,   97,   98,  101,  104,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant, QMetaType::Bool,   97,   98,  101,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   97,   98,
    QMetaType::Void, QMetaType::QString,   97,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant, QMetaType::Bool, QMetaType::QString,   97,   98,  101,  104,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   97,  101,
    0x80000000 | 107,
    0x80000000 | 109,
    QMetaType::Int,

 // properties: name, type, flags
     111, QMetaType::Bool, 0x00095103,
     112, QMetaType::Bool, 0x00095103,
     113, QMetaType::Bool, 0x00095103,
     114, QMetaType::Bool, 0x00095103,
     115, QMetaType::Bool, 0x00095103,
     116, QMetaType::Bool, 0x00095103,
     117, QMetaType::QStringList, 0x00095103,
     118, QMetaType::QString, 0x00095103,
     119, QMetaType::QStringList, 0x00095103,
     120, QMetaType::QStringList, 0x00095103,
     121, QMetaType::Bool, 0x00095103,
     122, QMetaType::Bool, 0x00095103,
     123, QMetaType::Bool, 0x00095103,
     124, QMetaType::Bool, 0x00095103,
     125, QMetaType::Bool, 0x00095103,
     126, QMetaType::Bool, 0x00095103,
     127, QMetaType::QString, 0x00095103,
     128, QMetaType::QStringList, 0x00095103,
     129, QMetaType::QStringList, 0x00095103,
     130, QMetaType::QStringList, 0x00095103,
     131, QMetaType::QStringList, 0x00095103,
     132, QMetaType::QString, 0x00095103,
     133, QMetaType::QString, 0x00095103,

       0        // eod
};

void qMRMLSubjectHierarchyTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSubjectHierarchyTreeView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentItemChanged((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 1: _t->currentItemsChanged((*reinterpret_cast< QList<vtkIdType>(*)>(_a[1]))); break;
        case 2: _t->currentItemModified((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 3: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 4: _t->setCurrentItem((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 5: _t->setCurrentItems((*reinterpret_cast< QList<vtkIdType>(*)>(_a[1]))); break;
        case 6: _t->setCurrentItems((*reinterpret_cast< vtkIdList*(*)>(_a[1]))); break;
        case 7: _t->setCurrentNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 8: _t->setRootItem((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 9: _t->setShowRootItem((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->renameCurrentItem(); break;
        case 11: _t->deleteSelectedItems(); break;
        case 12: _t->hideSelectedItems(); break;
        case 13: _t->showSelectedItems(); break;
        case 14: _t->toggleVisibilityOfSelectedItems(); break;
        case 15: _t->editCurrentItem(); break;
        case 16: _t->expandItem((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 17: _t->collapseItem((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 18: _t->selectPluginForCurrentItem(); break;
        case 19: _t->updateSelectPluginActions(); break;
        case 20: _t->setMultiSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->setPluginAllowlist((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 22: _t->setPluginBlocklist((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 23: _t->disablePlugin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->setPluginWhitelist((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 25: _t->setPluginBlacklist((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 26: { bool _r = _t->showContextMenuHint((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->showContextMenuHint();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: _t->setHighlightReferencedItems((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->setContextMenuEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->setEditMenuActionVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->setSelectRoleSubMenuVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->setNoneEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->setNoneDisplay((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->resetColumnSizesToDefault(); break;
        case 35: _t->setIncludeItemAttributeNamesFilter((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 36: _t->setIncludeNodeAttributeNamesFilter((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 37: _t->setExcludeItemAttributeNamesFilter((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 38: _t->setExcludeNodeAttributeNamesFilter((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 39: _t->setAttributeNameFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 40: _t->setAttributeValueFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 41: _t->onSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 42: _t->onItemExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 43: _t->onItemCollapsed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 44: _t->updateRootItem(); break;
        case 45: _t->onSubjectHierarchyItemModified((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 46: _t->onSubjectHierarchyItemTransformModified((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 47: _t->onMRMLSceneStartClose((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 48: _t->onMRMLSceneEndClose((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 49: _t->onMRMLSceneStartBatchProcess((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 50: _t->onMRMLSceneEndBatchProcess((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 51: _t->onCustomContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 52: _t->onTransformActionSelected(); break;
        case 53: _t->onTransformInteractionInViewToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->onTransformEditProperties(); break;
        case 55: _t->onCreateNewTransform(); break;
        case 56: { vtkMRMLScene* _r = _t->mrmlScene();
            if (_a[0]) *reinterpret_cast< vtkMRMLScene**>(_a[0]) = std::move(_r); }  break;
        case 57: { vtkMRMLSubjectHierarchyNode* _r = _t->subjectHierarchyNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLSubjectHierarchyNode**>(_a[0]) = std::move(_r); }  break;
        case 58: { vtkIdType _r = _t->currentItem();
            if (_a[0]) *reinterpret_cast< vtkIdType*>(_a[0]) = std::move(_r); }  break;
        case 59: _t->currentItems((*reinterpret_cast< vtkIdList*(*)>(_a[1]))); break;
        case 60: { vtkIdType _r = _t->rootItem();
            if (_a[0]) *reinterpret_cast< vtkIdType*>(_a[0]) = std::move(_r); }  break;
        case 61: _t->setAttributeFilter((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 62: _t->setAttributeFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 63: _t->removeAttributeFilter(); break;
        case 64: _t->addItemAttributeFilter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 65: _t->addItemAttributeFilter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 66: _t->addItemAttributeFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 67: _t->removeItemAttributeFilter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 68: _t->removeItemAttributeFilter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 69: _t->addNodeAttributeFilter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 70: _t->addNodeAttributeFilter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 71: _t->addNodeAttributeFilter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 72: _t->addNodeAttributeFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 73: _t->removeNodeAttributeFilter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 74: _t->removeNodeAttributeFilter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 75: { qMRMLSortFilterSubjectHierarchyProxyModel* _r = _t->sortFilterProxyModel();
            if (_a[0]) *reinterpret_cast< qMRMLSortFilterSubjectHierarchyProxyModel**>(_a[0]) = std::move(_r); }  break;
        case 76: { qMRMLSubjectHierarchyModel* _r = _t->model();
            if (_a[0]) *reinterpret_cast< qMRMLSubjectHierarchyModel**>(_a[0]) = std::move(_r); }  break;
        case 77: { int _r = _t->displayedItemCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLSubjectHierarchyTreeView::*)(vtkIdType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSubjectHierarchyTreeView::currentItemChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLSubjectHierarchyTreeView::*)(QList<vtkIdType> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSubjectHierarchyTreeView::currentItemsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qMRMLSubjectHierarchyTreeView::*)(vtkIdType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSubjectHierarchyTreeView::currentItemModified)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSubjectHierarchyTreeView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->showRootItem(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->highlightReferencedItems(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->contextMenuEnabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->editMenuActionVisible(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->selectRoleSubMenuVisible(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->multiSelection(); break;
        case 6: *reinterpret_cast< QStringList*>(_v) = _t->levelFilter(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->nameFilter(); break;
        case 8: *reinterpret_cast< QStringList*>(_v) = _t->nodeTypes(); break;
        case 9: *reinterpret_cast< QStringList*>(_v) = _t->hideChildNodeTypes(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->visibilityColumnVisible(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->idColumnVisible(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->colorColumnVisible(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->transformColumnVisible(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->descriptionColumnVisible(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->noneEnabled(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->noneDisplay(); break;
        case 17: *reinterpret_cast< QStringList*>(_v) = _t->includeItemAttributeNamesFilter(); break;
        case 18: *reinterpret_cast< QStringList*>(_v) = _t->includeNodeAttributeNamesFilter(); break;
        case 19: *reinterpret_cast< QStringList*>(_v) = _t->excludeItemAttributeNamesFilter(); break;
        case 20: *reinterpret_cast< QStringList*>(_v) = _t->excludeNodeAttributeNamesFilter(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->attributeNameFilter(); break;
        case 22: *reinterpret_cast< QString*>(_v) = _t->attributeValueFilter(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSubjectHierarchyTreeView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShowRootItem(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setHighlightReferencedItems(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setContextMenuEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setEditMenuActionVisible(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setSelectRoleSubMenuVisible(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setMultiSelection(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setLevelFilter(*reinterpret_cast< QStringList*>(_v)); break;
        case 7: _t->setNameFilter(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setNodeTypes(*reinterpret_cast< QStringList*>(_v)); break;
        case 9: _t->setHideChildNodeTypes(*reinterpret_cast< QStringList*>(_v)); break;
        case 10: _t->setVisibilityColumnVisible(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setIdColumnVisible(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setColorColumnVisible(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setTransformColumnVisible(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setDescriptionColumnVisible(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setNoneEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 16: _t->setNoneDisplay(*reinterpret_cast< QString*>(_v)); break;
        case 17: _t->setIncludeItemAttributeNamesFilter(*reinterpret_cast< QStringList*>(_v)); break;
        case 18: _t->setIncludeNodeAttributeNamesFilter(*reinterpret_cast< QStringList*>(_v)); break;
        case 19: _t->setExcludeItemAttributeNamesFilter(*reinterpret_cast< QStringList*>(_v)); break;
        case 20: _t->setExcludeNodeAttributeNamesFilter(*reinterpret_cast< QStringList*>(_v)); break;
        case 21: _t->setAttributeNameFilter(*reinterpret_cast< QString*>(_v)); break;
        case 22: _t->setAttributeValueFilter(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSubjectHierarchyTreeView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSubjectHierarchyTreeView.data,
    qt_meta_data_qMRMLSubjectHierarchyTreeView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSubjectHierarchyTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSubjectHierarchyTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSubjectHierarchyTreeView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int qMRMLSubjectHierarchyTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 78)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 78;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 78)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 78;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 23;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qMRMLSubjectHierarchyTreeView::currentItemChanged(vtkIdType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLSubjectHierarchyTreeView::currentItemsChanged(QList<vtkIdType> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qMRMLSubjectHierarchyTreeView::currentItemModified(vtkIdType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
