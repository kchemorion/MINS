/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSegmentsTableView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Segmentations/Widgets/qMRMLSegmentsTableView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSegmentsTableView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSegmentsTableView_t {
    QByteArrayData data[82];
    char stringdata0[1441];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSegmentsTableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSegmentsTableView_t qt_meta_stringdata_qMRMLSegmentsTableView = {
    {
QT_MOC_LITERAL(0, 0, 22), // "qMRMLSegmentsTableView"
QT_MOC_LITERAL(1, 23, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14), // "QItemSelection"
QT_MOC_LITERAL(4, 56, 8), // "selected"
QT_MOC_LITERAL(5, 65, 10), // "deselected"
QT_MOC_LITERAL(6, 76, 24), // "segmentAboutToBeModified"
QT_MOC_LITERAL(7, 101, 9), // "segmentID"
QT_MOC_LITERAL(8, 111, 19), // "setSegmentationNode"
QT_MOC_LITERAL(9, 131, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(10, 144, 4), // "node"
QT_MOC_LITERAL(11, 149, 12), // "setMRMLScene"
QT_MOC_LITERAL(12, 162, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(13, 176, 8), // "newScene"
QT_MOC_LITERAL(14, 185, 16), // "setSelectionMode"
QT_MOC_LITERAL(15, 202, 4), // "mode"
QT_MOC_LITERAL(16, 207, 16), // "setHeaderVisible"
QT_MOC_LITERAL(17, 224, 7), // "visible"
QT_MOC_LITERAL(18, 232, 26), // "setVisibilityColumnVisible"
QT_MOC_LITERAL(19, 259, 21), // "setColorColumnVisible"
QT_MOC_LITERAL(20, 281, 23), // "setOpacityColumnVisible"
QT_MOC_LITERAL(21, 305, 22), // "setStatusColumnVisible"
QT_MOC_LITERAL(22, 328, 21), // "setLayerColumnVisible"
QT_MOC_LITERAL(23, 350, 11), // "setReadOnly"
QT_MOC_LITERAL(24, 362, 9), // "aReadOnly"
QT_MOC_LITERAL(25, 372, 19), // "setFilterBarVisible"
QT_MOC_LITERAL(26, 392, 24), // "showOnlySelectedSegments"
QT_MOC_LITERAL(27, 417, 10), // "jumpSlices"
QT_MOC_LITERAL(28, 428, 31), // "setJumpToSelectedSegmentEnabled"
QT_MOC_LITERAL(29, 460, 6), // "enable"
QT_MOC_LITERAL(30, 467, 25), // "setSelectedSegmentsStatus"
QT_MOC_LITERAL(31, 493, 6), // "status"
QT_MOC_LITERAL(32, 500, 21), // "clearSelectedSegments"
QT_MOC_LITERAL(33, 522, 22), // "moveSelectedSegmentsUp"
QT_MOC_LITERAL(34, 545, 24), // "moveSelectedSegmentsDown"
QT_MOC_LITERAL(35, 570, 13), // "setTextFilter"
QT_MOC_LITERAL(36, 584, 10), // "textFilter"
QT_MOC_LITERAL(37, 595, 14), // "setStatusShown"
QT_MOC_LITERAL(38, 610, 5), // "shown"
QT_MOC_LITERAL(39, 616, 28), // "jumpToSelectedSegmentEnabled"
QT_MOC_LITERAL(40, 645, 25), // "onSegmentSelectionChanged"
QT_MOC_LITERAL(41, 671, 27), // "onVisibility3DActionToggled"
QT_MOC_LITERAL(42, 699, 31), // "onVisibility2DFillActionToggled"
QT_MOC_LITERAL(43, 731, 34), // "onVisibility2DOutlineActionTo..."
QT_MOC_LITERAL(44, 766, 24), // "onSegmentsFilterModified"
QT_MOC_LITERAL(45, 791, 25), // "onShowStatusButtonClicked"
QT_MOC_LITERAL(46, 817, 22), // "onSegmentsTableClicked"
QT_MOC_LITERAL(47, 840, 11), // "QModelIndex"
QT_MOC_LITERAL(48, 852, 10), // "modelIndex"
QT_MOC_LITERAL(49, 863, 13), // "endProcessing"
QT_MOC_LITERAL(50, 877, 23), // "onSegmentAddedOrRemoved"
QT_MOC_LITERAL(51, 901, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(52, 922, 30), // "updateMRMLFromFilterParameters"
QT_MOC_LITERAL(53, 953, 19), // "modelAboutToBeReset"
QT_MOC_LITERAL(54, 973, 10), // "modelReset"
QT_MOC_LITERAL(55, 984, 16), // "segmentationNode"
QT_MOC_LITERAL(56, 1001, 11), // "tableWidget"
QT_MOC_LITERAL(57, 1013, 11), // "QTableView*"
QT_MOC_LITERAL(58, 1025, 18), // "selectedSegmentIDs"
QT_MOC_LITERAL(59, 1044, 21), // "setSelectedSegmentIDs"
QT_MOC_LITERAL(60, 1066, 10), // "segmentIDs"
QT_MOC_LITERAL(61, 1077, 14), // "clearSelection"
QT_MOC_LITERAL(62, 1092, 28), // "terminologyTooltipForSegment"
QT_MOC_LITERAL(63, 1121, 11), // "vtkSegment*"
QT_MOC_LITERAL(64, 1133, 7), // "segment"
QT_MOC_LITERAL(65, 1141, 15), // "setHideSegments"
QT_MOC_LITERAL(66, 1157, 12), // "hideSegments"
QT_MOC_LITERAL(67, 1170, 19), // "displayedSegmentIDs"
QT_MOC_LITERAL(68, 1190, 20), // "sortFilterProxyModel"
QT_MOC_LITERAL(69, 1211, 34), // "qMRMLSortFilterSegmentsProxyM..."
QT_MOC_LITERAL(70, 1246, 5), // "model"
QT_MOC_LITERAL(71, 1252, 19), // "qMRMLSegmentsModel*"
QT_MOC_LITERAL(72, 1272, 11), // "statusShown"
QT_MOC_LITERAL(73, 1284, 13), // "selectionMode"
QT_MOC_LITERAL(74, 1298, 13), // "headerVisible"
QT_MOC_LITERAL(75, 1312, 23), // "visibilityColumnVisible"
QT_MOC_LITERAL(76, 1336, 18), // "colorColumnVisible"
QT_MOC_LITERAL(77, 1355, 20), // "opacityColumnVisible"
QT_MOC_LITERAL(78, 1376, 19), // "statusColumnVisible"
QT_MOC_LITERAL(79, 1396, 18), // "layerColumnVisible"
QT_MOC_LITERAL(80, 1415, 8), // "readOnly"
QT_MOC_LITERAL(81, 1424, 16) // "filterBarVisible"

    },
    "qMRMLSegmentsTableView\0selectionChanged\0"
    "\0QItemSelection\0selected\0deselected\0"
    "segmentAboutToBeModified\0segmentID\0"
    "setSegmentationNode\0vtkMRMLNode*\0node\0"
    "setMRMLScene\0vtkMRMLScene*\0newScene\0"
    "setSelectionMode\0mode\0setHeaderVisible\0"
    "visible\0setVisibilityColumnVisible\0"
    "setColorColumnVisible\0setOpacityColumnVisible\0"
    "setStatusColumnVisible\0setLayerColumnVisible\0"
    "setReadOnly\0aReadOnly\0setFilterBarVisible\0"
    "showOnlySelectedSegments\0jumpSlices\0"
    "setJumpToSelectedSegmentEnabled\0enable\0"
    "setSelectedSegmentsStatus\0status\0"
    "clearSelectedSegments\0moveSelectedSegmentsUp\0"
    "moveSelectedSegmentsDown\0setTextFilter\0"
    "textFilter\0setStatusShown\0shown\0"
    "jumpToSelectedSegmentEnabled\0"
    "onSegmentSelectionChanged\0"
    "onVisibility3DActionToggled\0"
    "onVisibility2DFillActionToggled\0"
    "onVisibility2DOutlineActionToggled\0"
    "onSegmentsFilterModified\0"
    "onShowStatusButtonClicked\0"
    "onSegmentsTableClicked\0QModelIndex\0"
    "modelIndex\0endProcessing\0"
    "onSegmentAddedOrRemoved\0updateWidgetFromMRML\0"
    "updateMRMLFromFilterParameters\0"
    "modelAboutToBeReset\0modelReset\0"
    "segmentationNode\0tableWidget\0QTableView*\0"
    "selectedSegmentIDs\0setSelectedSegmentIDs\0"
    "segmentIDs\0clearSelection\0"
    "terminologyTooltipForSegment\0vtkSegment*\0"
    "segment\0setHideSegments\0hideSegments\0"
    "displayedSegmentIDs\0sortFilterProxyModel\0"
    "qMRMLSortFilterSegmentsProxyModel*\0"
    "model\0qMRMLSegmentsModel*\0statusShown\0"
    "selectionMode\0headerVisible\0"
    "visibilityColumnVisible\0colorColumnVisible\0"
    "opacityColumnVisible\0statusColumnVisible\0"
    "layerColumnVisible\0readOnly\0"
    "filterBarVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSegmentsTableView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
      11,  366, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  259,    2, 0x06 /* Public */,
       6,    1,  264,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  267,    2, 0x0a /* Public */,
      11,    1,  270,    2, 0x0a /* Public */,
      14,    1,  273,    2, 0x0a /* Public */,
      16,    1,  276,    2, 0x0a /* Public */,
      18,    1,  279,    2, 0x0a /* Public */,
      19,    1,  282,    2, 0x0a /* Public */,
      20,    1,  285,    2, 0x0a /* Public */,
      21,    1,  288,    2, 0x0a /* Public */,
      22,    1,  291,    2, 0x0a /* Public */,
      23,    1,  294,    2, 0x0a /* Public */,
      25,    1,  297,    2, 0x0a /* Public */,
      26,    0,  300,    2, 0x0a /* Public */,
      27,    0,  301,    2, 0x0a /* Public */,
      28,    1,  302,    2, 0x0a /* Public */,
      30,    1,  305,    2, 0x0a /* Public */,
      30,    0,  308,    2, 0x2a /* Public | MethodCloned */,
      32,    0,  309,    2, 0x0a /* Public */,
      33,    0,  310,    2, 0x0a /* Public */,
      34,    0,  311,    2, 0x0a /* Public */,
      35,    1,  312,    2, 0x0a /* Public */,
      37,    2,  315,    2, 0x0a /* Public */,
      39,    0,  320,    2, 0x0a /* Public */,
      40,    2,  321,    2, 0x09 /* Protected */,
      41,    1,  326,    2, 0x09 /* Protected */,
      42,    1,  329,    2, 0x09 /* Protected */,
      43,    1,  332,    2, 0x09 /* Protected */,
      44,    0,  335,    2, 0x09 /* Protected */,
      45,    0,  336,    2, 0x09 /* Protected */,
      46,    1,  337,    2, 0x09 /* Protected */,
      49,    0,  340,    2, 0x09 /* Protected */,
      50,    0,  341,    2, 0x09 /* Protected */,
      51,    0,  342,    2, 0x09 /* Protected */,
      52,    0,  343,    2, 0x09 /* Protected */,
      53,    0,  344,    2, 0x09 /* Protected */,
      54,    0,  345,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      55,    0,  346,    2, 0x02 /* Public */,
      56,    0,  347,    2, 0x02 /* Public */,
      58,    0,  348,    2, 0x02 /* Public */,
      59,    1,  349,    2, 0x02 /* Public */,
      61,    0,  352,    2, 0x02 /* Public */,
      62,    1,  353,    2, 0x02 /* Public */,
      65,    1,  356,    2, 0x02 /* Public */,
      66,    0,  359,    2, 0x02 /* Public */,
      67,    0,  360,    2, 0x02 /* Public */,
      68,    0,  361,    2, 0x02 /* Public */,
      70,    0,  362,    2, 0x02 /* Public */,
      72,    1,  363,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   31,   38,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 9,
    0x80000000 | 57,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QStringList,   60,
    QMetaType::Void,
    QMetaType::QString, 0x80000000 | 63,   64,
    QMetaType::Void, QMetaType::QStringList,   60,
    QMetaType::QStringList,
    QMetaType::QStringList,
    0x80000000 | 69,
    0x80000000 | 71,
    QMetaType::Bool, QMetaType::Int,   31,

 // properties: name, type, flags
      73, QMetaType::Int, 0x00095103,
      74, QMetaType::Bool, 0x00095103,
      75, QMetaType::Bool, 0x00095103,
      76, QMetaType::Bool, 0x00095103,
      77, QMetaType::Bool, 0x00095103,
      78, QMetaType::Bool, 0x00095103,
      79, QMetaType::Bool, 0x00095103,
      80, QMetaType::Bool, 0x00095103,
      81, QMetaType::Bool, 0x00095103,
      36, QMetaType::QString, 0x00095103,
      39, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qMRMLSegmentsTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSegmentsTableView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 1: _t->segmentAboutToBeModified((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setSegmentationNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 4: _t->setSelectionMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setHeaderVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setVisibilityColumnVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setColorColumnVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setOpacityColumnVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setStatusColumnVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setLayerColumnVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setReadOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setFilterBarVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->showOnlySelectedSegments(); break;
        case 14: _t->jumpSlices(); break;
        case 15: _t->setJumpToSelectedSegmentEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->setSelectedSegmentsStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->setSelectedSegmentsStatus(); break;
        case 18: _t->clearSelectedSegments(); break;
        case 19: _t->moveSelectedSegmentsUp(); break;
        case 20: _t->moveSelectedSegmentsDown(); break;
        case 21: _t->setTextFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->setStatusShown((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 23: { bool _r = _t->jumpToSelectedSegmentEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->onSegmentSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 25: _t->onVisibility3DActionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->onVisibility2DFillActionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->onVisibility2DOutlineActionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->onSegmentsFilterModified(); break;
        case 29: _t->onShowStatusButtonClicked(); break;
        case 30: _t->onSegmentsTableClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 31: _t->endProcessing(); break;
        case 32: _t->onSegmentAddedOrRemoved(); break;
        case 33: _t->updateWidgetFromMRML(); break;
        case 34: _t->updateMRMLFromFilterParameters(); break;
        case 35: _t->modelAboutToBeReset(); break;
        case 36: _t->modelReset(); break;
        case 37: { vtkMRMLNode* _r = _t->segmentationNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLNode**>(_a[0]) = std::move(_r); }  break;
        case 38: { QTableView* _r = _t->tableWidget();
            if (_a[0]) *reinterpret_cast< QTableView**>(_a[0]) = std::move(_r); }  break;
        case 39: { QStringList _r = _t->selectedSegmentIDs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->setSelectedSegmentIDs((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 41: _t->clearSelection(); break;
        case 42: { QString _r = _t->terminologyTooltipForSegment((*reinterpret_cast< vtkSegment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 43: _t->setHideSegments((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 44: { QStringList _r = _t->hideSegments();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 45: { QStringList _r = _t->displayedSegmentIDs();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 46: { qMRMLSortFilterSegmentsProxyModel* _r = _t->sortFilterProxyModel();
            if (_a[0]) *reinterpret_cast< qMRMLSortFilterSegmentsProxyModel**>(_a[0]) = std::move(_r); }  break;
        case 47: { qMRMLSegmentsModel* _r = _t->model();
            if (_a[0]) *reinterpret_cast< qMRMLSegmentsModel**>(_a[0]) = std::move(_r); }  break;
        case 48: { bool _r = _t->statusShown((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLSegmentsTableView::*)(const QItemSelection & , const QItemSelection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSegmentsTableView::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLSegmentsTableView::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSegmentsTableView::segmentAboutToBeModified)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSegmentsTableView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->selectionMode(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->headerVisible(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->visibilityColumnVisible(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->colorColumnVisible(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->opacityColumnVisible(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->statusColumnVisible(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->layerColumnVisible(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->readOnly(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->filterBarVisible(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->textFilter(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->jumpToSelectedSegmentEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSegmentsTableView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectionMode(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setHeaderVisible(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setVisibilityColumnVisible(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setColorColumnVisible(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setOpacityColumnVisible(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setStatusColumnVisible(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setLayerColumnVisible(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setFilterBarVisible(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setTextFilter(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setJumpToSelectedSegmentEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSegmentsTableView::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSegmentsTableView.data,
    qt_meta_data_qMRMLSegmentsTableView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSegmentsTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSegmentsTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSegmentsTableView.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLSegmentsTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 49;
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
void qMRMLSegmentsTableView::selectionChanged(const QItemSelection & _t1, const QItemSelection & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLSegmentsTableView::segmentAboutToBeModified(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
