/****************************************************************************
** Meta object code from reading C++ file 'qMRMLLayoutManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLLayoutManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLLayoutManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLLayoutManager_t {
    QByteArrayData data[86];
    char stringdata0[1436];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLLayoutManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLLayoutManager_t qt_meta_stringdata_qMRMLLayoutManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "qMRMLLayoutManager"
QT_MOC_LITERAL(1, 19, 31), // "activeMRMLThreeDViewNodeChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 16), // "vtkMRMLViewNode*"
QT_MOC_LITERAL(4, 69, 27), // "newActiveMRMLThreeDViewNode"
QT_MOC_LITERAL(5, 97, 30), // "activeMRMLTableViewNodeChanged"
QT_MOC_LITERAL(6, 128, 21), // "vtkMRMLTableViewNode*"
QT_MOC_LITERAL(7, 150, 26), // "newActiveMRMLTableViewNode"
QT_MOC_LITERAL(8, 177, 29), // "activeMRMLPlotViewNodeChanged"
QT_MOC_LITERAL(9, 207, 20), // "vtkMRMLPlotViewNode*"
QT_MOC_LITERAL(10, 228, 25), // "newActiveMRMLPlotViewNode"
QT_MOC_LITERAL(11, 254, 27), // "activeThreeDRendererChanged"
QT_MOC_LITERAL(12, 282, 12), // "vtkRenderer*"
QT_MOC_LITERAL(13, 295, 11), // "newRenderer"
QT_MOC_LITERAL(14, 307, 26), // "activeTableRendererChanged"
QT_MOC_LITERAL(15, 334, 25), // "activePlotRendererChanged"
QT_MOC_LITERAL(16, 360, 13), // "layoutChanged"
QT_MOC_LITERAL(17, 374, 19), // "nodeAboutToBeEdited"
QT_MOC_LITERAL(18, 394, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(19, 407, 4), // "node"
QT_MOC_LITERAL(20, 412, 10), // "setEnabled"
QT_MOC_LITERAL(21, 423, 6), // "enable"
QT_MOC_LITERAL(22, 430, 12), // "setMRMLScene"
QT_MOC_LITERAL(23, 443, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(24, 457, 5), // "scene"
QT_MOC_LITERAL(25, 463, 9), // "setLayout"
QT_MOC_LITERAL(26, 473, 9), // "newLayout"
QT_MOC_LITERAL(27, 483, 20), // "addMaximizedViewNode"
QT_MOC_LITERAL(28, 504, 24), // "vtkMRMLAbstractViewNode*"
QT_MOC_LITERAL(29, 529, 8), // "viewNode"
QT_MOC_LITERAL(30, 538, 23), // "removeMaximizedViewNode"
QT_MOC_LITERAL(31, 562, 27), // "removeAllMaximizedViewNodes"
QT_MOC_LITERAL(32, 590, 32), // "setLayoutNumberOfCompareViewRows"
QT_MOC_LITERAL(33, 623, 3), // "num"
QT_MOC_LITERAL(34, 627, 35), // "setLayoutNumberOfCompareViewC..."
QT_MOC_LITERAL(35, 663, 16), // "resetThreeDViews"
QT_MOC_LITERAL(36, 680, 15), // "resetSliceViews"
QT_MOC_LITERAL(37, 696, 15), // "setRenderPaused"
QT_MOC_LITERAL(38, 712, 5), // "pause"
QT_MOC_LITERAL(39, 718, 11), // "pauseRender"
QT_MOC_LITERAL(40, 730, 12), // "resumeRender"
QT_MOC_LITERAL(41, 743, 19), // "registerViewFactory"
QT_MOC_LITERAL(42, 763, 21), // "ctkLayoutViewFactory*"
QT_MOC_LITERAL(43, 785, 11), // "viewFactory"
QT_MOC_LITERAL(44, 797, 17), // "mrmlViewFactories"
QT_MOC_LITERAL(45, 815, 30), // "QList<qMRMLLayoutViewFactory*>"
QT_MOC_LITERAL(46, 846, 15), // "mrmlViewFactory"
QT_MOC_LITERAL(47, 862, 23), // "qMRMLLayoutViewFactory*"
QT_MOC_LITERAL(48, 886, 13), // "viewClassName"
QT_MOC_LITERAL(49, 900, 9), // "mrmlScene"
QT_MOC_LITERAL(50, 910, 10), // "viewWidget"
QT_MOC_LITERAL(51, 921, 8), // "QWidget*"
QT_MOC_LITERAL(52, 930, 1), // "n"
QT_MOC_LITERAL(53, 932, 11), // "viewWidgets"
QT_MOC_LITERAL(54, 944, 15), // "QList<QWidget*>"
QT_MOC_LITERAL(55, 960, 11), // "sliceWidget"
QT_MOC_LITERAL(56, 972, 17), // "qMRMLSliceWidget*"
QT_MOC_LITERAL(57, 990, 4), // "name"
QT_MOC_LITERAL(58, 995, 12), // "threeDWidget"
QT_MOC_LITERAL(59, 1008, 18), // "qMRMLThreeDWidget*"
QT_MOC_LITERAL(60, 1027, 14), // "sliceViewNames"
QT_MOC_LITERAL(61, 1042, 2), // "id"
QT_MOC_LITERAL(62, 1045, 11), // "tableWidget"
QT_MOC_LITERAL(63, 1057, 17), // "qMRMLTableWidget*"
QT_MOC_LITERAL(64, 1075, 10), // "plotWidget"
QT_MOC_LITERAL(65, 1086, 16), // "qMRMLPlotWidget*"
QT_MOC_LITERAL(66, 1103, 15), // "mrmlSliceLogics"
QT_MOC_LITERAL(67, 1119, 14), // "vtkCollection*"
QT_MOC_LITERAL(68, 1134, 14), // "mrmlViewLogics"
QT_MOC_LITERAL(69, 1149, 17), // "setMRMLColorLogic"
QT_MOC_LITERAL(70, 1167, 18), // "vtkMRMLColorLogic*"
QT_MOC_LITERAL(71, 1186, 10), // "colorLogic"
QT_MOC_LITERAL(72, 1197, 14), // "mrmlColorLogic"
QT_MOC_LITERAL(73, 1212, 11), // "layoutLogic"
QT_MOC_LITERAL(74, 1224, 19), // "vtkMRMLLayoutLogic*"
QT_MOC_LITERAL(75, 1244, 24), // "activeMRMLThreeDViewNode"
QT_MOC_LITERAL(76, 1269, 20), // "activeThreeDRenderer"
QT_MOC_LITERAL(77, 1290, 23), // "activeMRMLTableViewNode"
QT_MOC_LITERAL(78, 1314, 19), // "activeTableRenderer"
QT_MOC_LITERAL(79, 1334, 22), // "activeMRMLPlotViewNode"
QT_MOC_LITERAL(80, 1357, 18), // "activePlotRenderer"
QT_MOC_LITERAL(81, 1376, 7), // "enabled"
QT_MOC_LITERAL(82, 1384, 6), // "layout"
QT_MOC_LITERAL(83, 1391, 15), // "threeDViewCount"
QT_MOC_LITERAL(84, 1407, 14), // "tableViewCount"
QT_MOC_LITERAL(85, 1422, 13) // "plotViewCount"

    },
    "qMRMLLayoutManager\0activeMRMLThreeDViewNodeChanged\0"
    "\0vtkMRMLViewNode*\0newActiveMRMLThreeDViewNode\0"
    "activeMRMLTableViewNodeChanged\0"
    "vtkMRMLTableViewNode*\0newActiveMRMLTableViewNode\0"
    "activeMRMLPlotViewNodeChanged\0"
    "vtkMRMLPlotViewNode*\0newActiveMRMLPlotViewNode\0"
    "activeThreeDRendererChanged\0vtkRenderer*\0"
    "newRenderer\0activeTableRendererChanged\0"
    "activePlotRendererChanged\0layoutChanged\0"
    "nodeAboutToBeEdited\0vtkMRMLNode*\0node\0"
    "setEnabled\0enable\0setMRMLScene\0"
    "vtkMRMLScene*\0scene\0setLayout\0newLayout\0"
    "addMaximizedViewNode\0vtkMRMLAbstractViewNode*\0"
    "viewNode\0removeMaximizedViewNode\0"
    "removeAllMaximizedViewNodes\0"
    "setLayoutNumberOfCompareViewRows\0num\0"
    "setLayoutNumberOfCompareViewColumns\0"
    "resetThreeDViews\0resetSliceViews\0"
    "setRenderPaused\0pause\0pauseRender\0"
    "resumeRender\0registerViewFactory\0"
    "ctkLayoutViewFactory*\0viewFactory\0"
    "mrmlViewFactories\0QList<qMRMLLayoutViewFactory*>\0"
    "mrmlViewFactory\0qMRMLLayoutViewFactory*\0"
    "viewClassName\0mrmlScene\0viewWidget\0"
    "QWidget*\0n\0viewWidgets\0QList<QWidget*>\0"
    "sliceWidget\0qMRMLSliceWidget*\0name\0"
    "threeDWidget\0qMRMLThreeDWidget*\0"
    "sliceViewNames\0id\0tableWidget\0"
    "qMRMLTableWidget*\0plotWidget\0"
    "qMRMLPlotWidget*\0mrmlSliceLogics\0"
    "vtkCollection*\0mrmlViewLogics\0"
    "setMRMLColorLogic\0vtkMRMLColorLogic*\0"
    "colorLogic\0mrmlColorLogic\0layoutLogic\0"
    "vtkMRMLLayoutLogic*\0activeMRMLThreeDViewNode\0"
    "activeThreeDRenderer\0activeMRMLTableViewNode\0"
    "activeTableRenderer\0activeMRMLPlotViewNode\0"
    "activePlotRenderer\0enabled\0layout\0"
    "threeDViewCount\0tableViewCount\0"
    "plotViewCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLLayoutManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       5,  328, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  234,    2, 0x06 /* Public */,
       5,    1,  237,    2, 0x06 /* Public */,
       8,    1,  240,    2, 0x06 /* Public */,
      11,    1,  243,    2, 0x06 /* Public */,
      14,    1,  246,    2, 0x06 /* Public */,
      15,    1,  249,    2, 0x06 /* Public */,
      16,    1,  252,    2, 0x06 /* Public */,
      17,    1,  255,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    1,  258,    2, 0x0a /* Public */,
      22,    1,  261,    2, 0x0a /* Public */,
      25,    1,  264,    2, 0x0a /* Public */,
      27,    1,  267,    2, 0x0a /* Public */,
      30,    1,  270,    2, 0x0a /* Public */,
      31,    0,  273,    2, 0x0a /* Public */,
      32,    1,  274,    2, 0x0a /* Public */,
      34,    1,  277,    2, 0x0a /* Public */,
      35,    0,  280,    2, 0x0a /* Public */,
      36,    0,  281,    2, 0x0a /* Public */,
      37,    1,  282,    2, 0x0a /* Public */,
      39,    0,  285,    2, 0x0a /* Public */,
      40,    0,  286,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      41,    1,  287,    2, 0x02 /* Public */,
      44,    0,  290,    2, 0x02 /* Public */,
      46,    1,  291,    2, 0x02 /* Public */,
      49,    0,  294,    2, 0x02 /* Public */,
      50,    1,  295,    2, 0x02 /* Public */,
      53,    0,  298,    2, 0x02 /* Public */,
      55,    1,  299,    2, 0x02 /* Public */,
      58,    1,  302,    2, 0x02 /* Public */,
      60,    0,  305,    2, 0x02 /* Public */,
      58,    1,  306,    2, 0x02 /* Public */,
      62,    1,  309,    2, 0x02 /* Public */,
      64,    1,  312,    2, 0x02 /* Public */,
      66,    0,  315,    2, 0x02 /* Public */,
      68,    0,  316,    2, 0x02 /* Public */,
      69,    1,  317,    2, 0x02 /* Public */,
      72,    0,  320,    2, 0x02 /* Public */,
      73,    0,  321,    2, 0x02 /* Public */,
      75,    0,  322,    2, 0x02 /* Public */,
      76,    0,  323,    2, 0x02 /* Public */,
      77,    0,  324,    2, 0x02 /* Public */,
      78,    0,  325,    2, 0x02 /* Public */,
      79,    0,  326,    2, 0x02 /* Public */,
      80,    0,  327,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 18,   19,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 42,   43,
    0x80000000 | 45,
    0x80000000 | 47, QMetaType::QString,   48,
    0x80000000 | 23,
    0x80000000 | 51, 0x80000000 | 18,   52,
    0x80000000 | 54,
    0x80000000 | 56, QMetaType::QString,   57,
    0x80000000 | 59, QMetaType::QString,   57,
    QMetaType::QStringList,
    0x80000000 | 59, QMetaType::Int,   61,
    0x80000000 | 63, QMetaType::Int,   61,
    0x80000000 | 65, QMetaType::Int,   61,
    0x80000000 | 67,
    0x80000000 | 67,
    QMetaType::Void, 0x80000000 | 70,   71,
    0x80000000 | 70,
    0x80000000 | 74,
    0x80000000 | 3,
    0x80000000 | 12,
    0x80000000 | 6,
    0x80000000 | 12,
    0x80000000 | 9,
    0x80000000 | 12,

 // properties: name, type, flags
      81, QMetaType::Bool, 0x00095103,
      82, QMetaType::Int, 0x00494103,
      83, QMetaType::Int, 0x00094001,
      84, QMetaType::Int, 0x00094001,
      85, QMetaType::Int, 0x00094001,

 // properties: notify_signal_id
       0,
       6,
       0,
       0,
       0,

       0        // eod
};

void qMRMLLayoutManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLLayoutManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activeMRMLThreeDViewNodeChanged((*reinterpret_cast< vtkMRMLViewNode*(*)>(_a[1]))); break;
        case 1: _t->activeMRMLTableViewNodeChanged((*reinterpret_cast< vtkMRMLTableViewNode*(*)>(_a[1]))); break;
        case 2: _t->activeMRMLPlotViewNodeChanged((*reinterpret_cast< vtkMRMLPlotViewNode*(*)>(_a[1]))); break;
        case 3: _t->activeThreeDRendererChanged((*reinterpret_cast< vtkRenderer*(*)>(_a[1]))); break;
        case 4: _t->activeTableRendererChanged((*reinterpret_cast< vtkRenderer*(*)>(_a[1]))); break;
        case 5: _t->activePlotRendererChanged((*reinterpret_cast< vtkRenderer*(*)>(_a[1]))); break;
        case 6: _t->layoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->nodeAboutToBeEdited((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 8: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 10: _t->setLayout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->addMaximizedViewNode((*reinterpret_cast< vtkMRMLAbstractViewNode*(*)>(_a[1]))); break;
        case 12: _t->removeMaximizedViewNode((*reinterpret_cast< vtkMRMLAbstractViewNode*(*)>(_a[1]))); break;
        case 13: _t->removeAllMaximizedViewNodes(); break;
        case 14: _t->setLayoutNumberOfCompareViewRows((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setLayoutNumberOfCompareViewColumns((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->resetThreeDViews(); break;
        case 17: _t->resetSliceViews(); break;
        case 18: _t->setRenderPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->pauseRender(); break;
        case 20: _t->resumeRender(); break;
        case 21: _t->registerViewFactory((*reinterpret_cast< ctkLayoutViewFactory*(*)>(_a[1]))); break;
        case 22: { QList<qMRMLLayoutViewFactory*> _r = _t->mrmlViewFactories();
            if (_a[0]) *reinterpret_cast< QList<qMRMLLayoutViewFactory*>*>(_a[0]) = std::move(_r); }  break;
        case 23: { qMRMLLayoutViewFactory* _r = _t->mrmlViewFactory((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLLayoutViewFactory**>(_a[0]) = std::move(_r); }  break;
        case 24: { vtkMRMLScene* _r = _t->mrmlScene();
            if (_a[0]) *reinterpret_cast< vtkMRMLScene**>(_a[0]) = std::move(_r); }  break;
        case 25: { QWidget* _r = _t->viewWidget((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        case 26: { QList<QWidget*> _r = _t->viewWidgets();
            if (_a[0]) *reinterpret_cast< QList<QWidget*>*>(_a[0]) = std::move(_r); }  break;
        case 27: { qMRMLSliceWidget* _r = _t->sliceWidget((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSliceWidget**>(_a[0]) = std::move(_r); }  break;
        case 28: { qMRMLThreeDWidget* _r = _t->threeDWidget((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLThreeDWidget**>(_a[0]) = std::move(_r); }  break;
        case 29: { QStringList _r = _t->sliceViewNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 30: { qMRMLThreeDWidget* _r = _t->threeDWidget((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLThreeDWidget**>(_a[0]) = std::move(_r); }  break;
        case 31: { qMRMLTableWidget* _r = _t->tableWidget((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLTableWidget**>(_a[0]) = std::move(_r); }  break;
        case 32: { qMRMLPlotWidget* _r = _t->plotWidget((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLPlotWidget**>(_a[0]) = std::move(_r); }  break;
        case 33: { vtkCollection* _r = _t->mrmlSliceLogics();
            if (_a[0]) *reinterpret_cast< vtkCollection**>(_a[0]) = std::move(_r); }  break;
        case 34: { vtkCollection* _r = _t->mrmlViewLogics();
            if (_a[0]) *reinterpret_cast< vtkCollection**>(_a[0]) = std::move(_r); }  break;
        case 35: _t->setMRMLColorLogic((*reinterpret_cast< vtkMRMLColorLogic*(*)>(_a[1]))); break;
        case 36: { vtkMRMLColorLogic* _r = _t->mrmlColorLogic();
            if (_a[0]) *reinterpret_cast< vtkMRMLColorLogic**>(_a[0]) = std::move(_r); }  break;
        case 37: { vtkMRMLLayoutLogic* _r = _t->layoutLogic();
            if (_a[0]) *reinterpret_cast< vtkMRMLLayoutLogic**>(_a[0]) = std::move(_r); }  break;
        case 38: { vtkMRMLViewNode* _r = _t->activeMRMLThreeDViewNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLViewNode**>(_a[0]) = std::move(_r); }  break;
        case 39: { vtkRenderer* _r = _t->activeThreeDRenderer();
            if (_a[0]) *reinterpret_cast< vtkRenderer**>(_a[0]) = std::move(_r); }  break;
        case 40: { vtkMRMLTableViewNode* _r = _t->activeMRMLTableViewNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLTableViewNode**>(_a[0]) = std::move(_r); }  break;
        case 41: { vtkRenderer* _r = _t->activeTableRenderer();
            if (_a[0]) *reinterpret_cast< vtkRenderer**>(_a[0]) = std::move(_r); }  break;
        case 42: { vtkMRMLPlotViewNode* _r = _t->activeMRMLPlotViewNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLPlotViewNode**>(_a[0]) = std::move(_r); }  break;
        case 43: { vtkRenderer* _r = _t->activePlotRenderer();
            if (_a[0]) *reinterpret_cast< vtkRenderer**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLLayoutManager::*)(vtkMRMLViewNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLLayoutManager::activeMRMLThreeDViewNodeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLLayoutManager::*)(vtkMRMLTableViewNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLLayoutManager::activeMRMLTableViewNodeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qMRMLLayoutManager::*)(vtkMRMLPlotViewNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLLayoutManager::activeMRMLPlotViewNodeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (qMRMLLayoutManager::*)(vtkRenderer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLLayoutManager::activeThreeDRendererChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (qMRMLLayoutManager::*)(vtkRenderer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLLayoutManager::activeTableRendererChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (qMRMLLayoutManager::*)(vtkRenderer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLLayoutManager::activePlotRendererChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (qMRMLLayoutManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLLayoutManager::layoutChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (qMRMLLayoutManager::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLLayoutManager::nodeAboutToBeEdited)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLLayoutManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->layout(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->threeDViewCount(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->tableViewCount(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->plotViewCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLLayoutManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setLayout(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLLayoutManager::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkLayoutFactory::staticMetaObject>(),
    qt_meta_stringdata_qMRMLLayoutManager.data,
    qt_meta_data_qMRMLLayoutManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLLayoutManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLLayoutManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLLayoutManager.stringdata0))
        return static_cast<void*>(this);
    return ctkLayoutFactory::qt_metacast(_clname);
}

int qMRMLLayoutManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkLayoutFactory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 44;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qMRMLLayoutManager::activeMRMLThreeDViewNodeChanged(vtkMRMLViewNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLLayoutManager::activeMRMLTableViewNodeChanged(vtkMRMLTableViewNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qMRMLLayoutManager::activeMRMLPlotViewNodeChanged(vtkMRMLPlotViewNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qMRMLLayoutManager::activeThreeDRendererChanged(vtkRenderer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void qMRMLLayoutManager::activeTableRendererChanged(vtkRenderer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void qMRMLLayoutManager::activePlotRendererChanged(vtkRenderer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void qMRMLLayoutManager::layoutChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void qMRMLLayoutManager::nodeAboutToBeEdited(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
