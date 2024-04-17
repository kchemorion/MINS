/****************************************************************************
** Meta object code from reading C++ file 'qSlicerMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTApp/qSlicerMainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerMainWindow_t {
    QByteArrayData data[75];
    char stringdata0[1824];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerMainWindow_t qt_meta_stringdata_qSlicerMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "qSlicerMainWindow"
QT_MOC_LITERAL(1, 18, 18), // "initialWindowShown"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 20), // "setHomeModuleCurrent"
QT_MOC_LITERAL(4, 59, 15), // "restoreToolbars"
QT_MOC_LITERAL(5, 75, 38), // "on_FileFavoriteModulesAction_..."
QT_MOC_LITERAL(6, 114, 30), // "on_FileAddDataAction_triggered"
QT_MOC_LITERAL(7, 145, 31), // "on_FileLoadDataAction_triggered"
QT_MOC_LITERAL(8, 177, 34), // "on_FileImportSceneAction_trig..."
QT_MOC_LITERAL(9, 212, 32), // "on_FileLoadSceneAction_triggered"
QT_MOC_LITERAL(10, 245, 32), // "on_FileAddVolumeAction_triggered"
QT_MOC_LITERAL(11, 278, 35), // "on_FileAddTransformAction_tri..."
QT_MOC_LITERAL(12, 314, 32), // "on_FileSaveSceneAction_triggered"
QT_MOC_LITERAL(13, 347, 27), // "on_FileExitAction_triggered"
QT_MOC_LITERAL(14, 375, 33), // "onFileRecentLoadedActionTrigg..."
QT_MOC_LITERAL(15, 409, 37), // "on_SDBSaveToDirectoryAction_t..."
QT_MOC_LITERAL(16, 447, 31), // "on_SDBSaveToMRBAction_triggered"
QT_MOC_LITERAL(17, 479, 33), // "on_FileCloseSceneAction_trigg..."
QT_MOC_LITERAL(18, 513, 28), // "on_LoadDICOMAction_triggered"
QT_MOC_LITERAL(19, 542, 34), // "on_EditRecordMacroAction_trig..."
QT_MOC_LITERAL(20, 577, 32), // "on_EditPlayMacroAction_triggered"
QT_MOC_LITERAL(21, 610, 27), // "on_EditUndoAction_triggered"
QT_MOC_LITERAL(22, 638, 27), // "on_EditRedoAction_triggered"
QT_MOC_LITERAL(23, 666, 29), // "on_ModuleHomeAction_triggered"
QT_MOC_LITERAL(24, 696, 23), // "onLayoutActionTriggered"
QT_MOC_LITERAL(25, 720, 8), // "QAction*"
QT_MOC_LITERAL(26, 729, 6), // "action"
QT_MOC_LITERAL(27, 736, 30), // "onLayoutCompareActionTriggered"
QT_MOC_LITERAL(28, 767, 40), // "onLayoutCompareWidescreenActi..."
QT_MOC_LITERAL(29, 808, 34), // "onLayoutCompareGridActionTrig..."
QT_MOC_LITERAL(30, 843, 9), // "setLayout"
QT_MOC_LITERAL(31, 853, 27), // "removeAllMaximizedViewNodes"
QT_MOC_LITERAL(32, 881, 32), // "setLayoutNumberOfCompareViewRows"
QT_MOC_LITERAL(33, 914, 35), // "setLayoutNumberOfCompareViewC..."
QT_MOC_LITERAL(34, 950, 22), // "onPythonConsoleToggled"
QT_MOC_LITERAL(35, 973, 17), // "onErrorLogToggled"
QT_MOC_LITERAL(36, 991, 47), // "on_WindowToolbarsResetToDefau..."
QT_MOC_LITERAL(37, 1039, 42), // "on_EditApplicationSettingsAct..."
QT_MOC_LITERAL(38, 1082, 22), // "on_CutAction_triggered"
QT_MOC_LITERAL(39, 1105, 23), // "on_CopyAction_triggered"
QT_MOC_LITERAL(40, 1129, 24), // "on_PasteAction_triggered"
QT_MOC_LITERAL(41, 1154, 40), // "on_ViewExtensionsManagerActio..."
QT_MOC_LITERAL(42, 1195, 32), // "on_ShowStatusBarAction_triggered"
QT_MOC_LITERAL(43, 1228, 12), // "saveGUIState"
QT_MOC_LITERAL(44, 1241, 5), // "force"
QT_MOC_LITERAL(45, 1247, 15), // "restoreGUIState"
QT_MOC_LITERAL(46, 1263, 20), // "addFileToRecentFiles"
QT_MOC_LITERAL(47, 1284, 23), // "qSlicerIO::IOProperties"
QT_MOC_LITERAL(48, 1308, 14), // "fileProperties"
QT_MOC_LITERAL(49, 1323, 25), // "on_FavoriteModulesChanged"
QT_MOC_LITERAL(50, 1349, 14), // "onModuleLoaded"
QT_MOC_LITERAL(51, 1364, 10), // "moduleName"
QT_MOC_LITERAL(52, 1375, 25), // "onModuleAboutToBeUnloaded"
QT_MOC_LITERAL(53, 1401, 15), // "onNewFileLoaded"
QT_MOC_LITERAL(54, 1417, 11), // "onFileSaved"
QT_MOC_LITERAL(55, 1429, 19), // "onMRMLSceneModified"
QT_MOC_LITERAL(56, 1449, 10), // "vtkObject*"
QT_MOC_LITERAL(57, 1460, 15), // "onLayoutChanged"
QT_MOC_LITERAL(58, 1476, 26), // "onWarningsOrErrorsOccurred"
QT_MOC_LITERAL(59, 1503, 26), // "ctkErrorLogLevel::LogLevel"
QT_MOC_LITERAL(60, 1530, 8), // "logLevel"
QT_MOC_LITERAL(61, 1539, 28), // "setExtensionUpdatesAvailable"
QT_MOC_LITERAL(62, 1568, 15), // "updateAvailable"
QT_MOC_LITERAL(63, 1584, 24), // "onPythonConsoleUserInput"
QT_MOC_LITERAL(64, 1609, 31), // "onErrorLogDockWidgetAreaChanged"
QT_MOC_LITERAL(65, 1641, 18), // "Qt::DockWidgetArea"
QT_MOC_LITERAL(66, 1660, 20), // "onUserViewedErrorLog"
QT_MOC_LITERAL(67, 1681, 14), // "moduleSelector"
QT_MOC_LITERAL(68, 1696, 29), // "qSlicerModuleSelectorToolBar*"
QT_MOC_LITERAL(69, 1726, 13), // "pythonConsole"
QT_MOC_LITERAL(70, 1740, 17), // "ctkPythonConsole*"
QT_MOC_LITERAL(71, 1758, 14), // "errorLogWidget"
QT_MOC_LITERAL(72, 1773, 18), // "ctkErrorLogWidget*"
QT_MOC_LITERAL(73, 1792, 18), // "errorLogDockWidget"
QT_MOC_LITERAL(74, 1811, 12) // "QDockWidget*"

    },
    "qSlicerMainWindow\0initialWindowShown\0"
    "\0setHomeModuleCurrent\0restoreToolbars\0"
    "on_FileFavoriteModulesAction_triggered\0"
    "on_FileAddDataAction_triggered\0"
    "on_FileLoadDataAction_triggered\0"
    "on_FileImportSceneAction_triggered\0"
    "on_FileLoadSceneAction_triggered\0"
    "on_FileAddVolumeAction_triggered\0"
    "on_FileAddTransformAction_triggered\0"
    "on_FileSaveSceneAction_triggered\0"
    "on_FileExitAction_triggered\0"
    "onFileRecentLoadedActionTriggered\0"
    "on_SDBSaveToDirectoryAction_triggered\0"
    "on_SDBSaveToMRBAction_triggered\0"
    "on_FileCloseSceneAction_triggered\0"
    "on_LoadDICOMAction_triggered\0"
    "on_EditRecordMacroAction_triggered\0"
    "on_EditPlayMacroAction_triggered\0"
    "on_EditUndoAction_triggered\0"
    "on_EditRedoAction_triggered\0"
    "on_ModuleHomeAction_triggered\0"
    "onLayoutActionTriggered\0QAction*\0"
    "action\0onLayoutCompareActionTriggered\0"
    "onLayoutCompareWidescreenActionTriggered\0"
    "onLayoutCompareGridActionTriggered\0"
    "setLayout\0removeAllMaximizedViewNodes\0"
    "setLayoutNumberOfCompareViewRows\0"
    "setLayoutNumberOfCompareViewColumns\0"
    "onPythonConsoleToggled\0onErrorLogToggled\0"
    "on_WindowToolbarsResetToDefaultAction_triggered\0"
    "on_EditApplicationSettingsAction_triggered\0"
    "on_CutAction_triggered\0on_CopyAction_triggered\0"
    "on_PasteAction_triggered\0"
    "on_ViewExtensionsManagerAction_triggered\0"
    "on_ShowStatusBarAction_triggered\0"
    "saveGUIState\0force\0restoreGUIState\0"
    "addFileToRecentFiles\0qSlicerIO::IOProperties\0"
    "fileProperties\0on_FavoriteModulesChanged\0"
    "onModuleLoaded\0moduleName\0"
    "onModuleAboutToBeUnloaded\0onNewFileLoaded\0"
    "onFileSaved\0onMRMLSceneModified\0"
    "vtkObject*\0onLayoutChanged\0"
    "onWarningsOrErrorsOccurred\0"
    "ctkErrorLogLevel::LogLevel\0logLevel\0"
    "setExtensionUpdatesAvailable\0"
    "updateAvailable\0onPythonConsoleUserInput\0"
    "onErrorLogDockWidgetAreaChanged\0"
    "Qt::DockWidgetArea\0onUserViewedErrorLog\0"
    "moduleSelector\0qSlicerModuleSelectorToolBar*\0"
    "pythonConsole\0ctkPythonConsole*\0"
    "errorLogWidget\0ctkErrorLogWidget*\0"
    "errorLogDockWidget\0QDockWidget*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      60,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  314,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  315,    2, 0x0a /* Public */,
       4,    0,  316,    2, 0x0a /* Public */,
       5,    0,  317,    2, 0x0a /* Public */,
       6,    0,  318,    2, 0x0a /* Public */,
       7,    0,  319,    2, 0x0a /* Public */,
       8,    0,  320,    2, 0x0a /* Public */,
       9,    0,  321,    2, 0x0a /* Public */,
      10,    0,  322,    2, 0x0a /* Public */,
      11,    0,  323,    2, 0x0a /* Public */,
      12,    0,  324,    2, 0x0a /* Public */,
      13,    0,  325,    2, 0x0a /* Public */,
      14,    0,  326,    2, 0x0a /* Public */,
      15,    0,  327,    2, 0x0a /* Public */,
      16,    0,  328,    2, 0x0a /* Public */,
      17,    0,  329,    2, 0x0a /* Public */,
      18,    0,  330,    2, 0x0a /* Public */,
      19,    0,  331,    2, 0x0a /* Public */,
      20,    0,  332,    2, 0x0a /* Public */,
      21,    0,  333,    2, 0x0a /* Public */,
      22,    0,  334,    2, 0x0a /* Public */,
      23,    0,  335,    2, 0x0a /* Public */,
      24,    1,  336,    2, 0x0a /* Public */,
      27,    1,  339,    2, 0x0a /* Public */,
      28,    1,  342,    2, 0x0a /* Public */,
      29,    1,  345,    2, 0x0a /* Public */,
      30,    1,  348,    2, 0x0a /* Public */,
      31,    0,  351,    2, 0x0a /* Public */,
      32,    1,  352,    2, 0x0a /* Public */,
      33,    1,  355,    2, 0x0a /* Public */,
      34,    1,  358,    2, 0x0a /* Public */,
      35,    1,  361,    2, 0x0a /* Public */,
      36,    0,  364,    2, 0x0a /* Public */,
      37,    0,  365,    2, 0x0a /* Public */,
      38,    0,  366,    2, 0x0a /* Public */,
      39,    0,  367,    2, 0x0a /* Public */,
      40,    0,  368,    2, 0x0a /* Public */,
      41,    0,  369,    2, 0x0a /* Public */,
      42,    1,  370,    2, 0x0a /* Public */,
      43,    1,  373,    2, 0x0a /* Public */,
      43,    0,  376,    2, 0x2a /* Public | MethodCloned */,
      45,    1,  377,    2, 0x0a /* Public */,
      45,    0,  380,    2, 0x2a /* Public | MethodCloned */,
      46,    1,  381,    2, 0x0a /* Public */,
      49,    0,  384,    2, 0x0a /* Public */,
      50,    1,  385,    2, 0x09 /* Protected */,
      52,    1,  388,    2, 0x09 /* Protected */,
      53,    1,  391,    2, 0x09 /* Protected */,
      54,    1,  394,    2, 0x09 /* Protected */,
      55,    1,  397,    2, 0x09 /* Protected */,
      57,    1,  400,    2, 0x09 /* Protected */,
      58,    1,  403,    2, 0x09 /* Protected */,
      61,    1,  406,    2, 0x09 /* Protected */,
      63,    1,  409,    2, 0x09 /* Protected */,
      64,    1,  412,    2, 0x09 /* Protected */,
      66,    0,  415,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      67,    0,  416,    2, 0x02 /* Public */,
      69,    0,  417,    2, 0x02 /* Public */,
      71,    0,  418,    2, 0x02 /* Public */,
      73,    0,  419,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   51,
    QMetaType::Void, QMetaType::QString,   51,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 56,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 59,   60,
    QMetaType::Void, QMetaType::Bool,   62,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 65,    2,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 68,
    0x80000000 | 70,
    0x80000000 | 72,
    0x80000000 | 74,

       0        // eod
};

void qSlicerMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initialWindowShown(); break;
        case 1: _t->setHomeModuleCurrent(); break;
        case 2: _t->restoreToolbars(); break;
        case 3: _t->on_FileFavoriteModulesAction_triggered(); break;
        case 4: _t->on_FileAddDataAction_triggered(); break;
        case 5: _t->on_FileLoadDataAction_triggered(); break;
        case 6: _t->on_FileImportSceneAction_triggered(); break;
        case 7: _t->on_FileLoadSceneAction_triggered(); break;
        case 8: _t->on_FileAddVolumeAction_triggered(); break;
        case 9: _t->on_FileAddTransformAction_triggered(); break;
        case 10: _t->on_FileSaveSceneAction_triggered(); break;
        case 11: _t->on_FileExitAction_triggered(); break;
        case 12: _t->onFileRecentLoadedActionTriggered(); break;
        case 13: _t->on_SDBSaveToDirectoryAction_triggered(); break;
        case 14: _t->on_SDBSaveToMRBAction_triggered(); break;
        case 15: _t->on_FileCloseSceneAction_triggered(); break;
        case 16: _t->on_LoadDICOMAction_triggered(); break;
        case 17: _t->on_EditRecordMacroAction_triggered(); break;
        case 18: _t->on_EditPlayMacroAction_triggered(); break;
        case 19: _t->on_EditUndoAction_triggered(); break;
        case 20: _t->on_EditRedoAction_triggered(); break;
        case 21: _t->on_ModuleHomeAction_triggered(); break;
        case 22: _t->onLayoutActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 23: _t->onLayoutCompareActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 24: _t->onLayoutCompareWidescreenActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 25: _t->onLayoutCompareGridActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 26: _t->setLayout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->removeAllMaximizedViewNodes(); break;
        case 28: _t->setLayoutNumberOfCompareViewRows((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->setLayoutNumberOfCompareViewColumns((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->onPythonConsoleToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->onErrorLogToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->on_WindowToolbarsResetToDefaultAction_triggered(); break;
        case 33: _t->on_EditApplicationSettingsAction_triggered(); break;
        case 34: _t->on_CutAction_triggered(); break;
        case 35: _t->on_CopyAction_triggered(); break;
        case 36: _t->on_PasteAction_triggered(); break;
        case 37: _t->on_ViewExtensionsManagerAction_triggered(); break;
        case 38: _t->on_ShowStatusBarAction_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->saveGUIState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->saveGUIState(); break;
        case 41: _t->restoreGUIState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->restoreGUIState(); break;
        case 43: _t->addFileToRecentFiles((*reinterpret_cast< const qSlicerIO::IOProperties(*)>(_a[1]))); break;
        case 44: _t->on_FavoriteModulesChanged(); break;
        case 45: _t->onModuleLoaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 46: _t->onModuleAboutToBeUnloaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 47: _t->onNewFileLoaded((*reinterpret_cast< const qSlicerIO::IOProperties(*)>(_a[1]))); break;
        case 48: _t->onFileSaved((*reinterpret_cast< const qSlicerIO::IOProperties(*)>(_a[1]))); break;
        case 49: _t->onMRMLSceneModified((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 50: _t->onLayoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->onWarningsOrErrorsOccurred((*reinterpret_cast< ctkErrorLogLevel::LogLevel(*)>(_a[1]))); break;
        case 52: _t->setExtensionUpdatesAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->onPythonConsoleUserInput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 54: _t->onErrorLogDockWidgetAreaChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 55: _t->onUserViewedErrorLog(); break;
        case 56: { qSlicerModuleSelectorToolBar* _r = _t->moduleSelector();
            if (_a[0]) *reinterpret_cast< qSlicerModuleSelectorToolBar**>(_a[0]) = std::move(_r); }  break;
        case 57: { ctkPythonConsole* _r = _t->pythonConsole();
            if (_a[0]) *reinterpret_cast< ctkPythonConsole**>(_a[0]) = std::move(_r); }  break;
        case 58: { ctkErrorLogWidget* _r = _t->errorLogWidget();
            if (_a[0]) *reinterpret_cast< ctkErrorLogWidget**>(_a[0]) = std::move(_r); }  break;
        case 59: { QDockWidget* _r = _t->errorLogDockWidget();
            if (_a[0]) *reinterpret_cast< QDockWidget**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOProperties >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOProperties >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOProperties >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qSlicerMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerMainWindow::initialWindowShown)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_qSlicerMainWindow.data,
    qt_meta_data_qSlicerMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int qSlicerMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    }
    return _id;
}

// SIGNAL 0
void qSlicerMainWindow::initialWindowShown()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
