/****************************************************************************
** Meta object code from reading C++ file 'qSlicerCoreApplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTCore/qSlicerCoreApplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerCoreApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerCoreApplication_t {
    QByteArrayData data[130];
    char stringdata0[2218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerCoreApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerCoreApplication_t qt_meta_stringdata_qSlicerCoreApplication = {
    {
QT_MOC_LITERAL(0, 0, 22), // "qSlicerCoreApplication"
QT_MOC_LITERAL(1, 23, 16), // "mrmlSceneChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(4, 55, 9), // "mrmlScene"
QT_MOC_LITERAL(5, 65, 11), // "urlReceived"
QT_MOC_LITERAL(6, 77, 3), // "url"
QT_MOC_LITERAL(7, 81, 20), // "invokeEventRequested"
QT_MOC_LITERAL(8, 102, 5), // "delay"
QT_MOC_LITERAL(9, 108, 6), // "caller"
QT_MOC_LITERAL(10, 115, 5), // "event"
QT_MOC_LITERAL(11, 121, 8), // "callData"
QT_MOC_LITERAL(12, 130, 7), // "restart"
QT_MOC_LITERAL(13, 138, 18), // "unregisterResource"
QT_MOC_LITERAL(14, 157, 6), // "handle"
QT_MOC_LITERAL(15, 164, 15), // "setRenderPaused"
QT_MOC_LITERAL(16, 180, 5), // "pause"
QT_MOC_LITERAL(17, 186, 11), // "pauseRender"
QT_MOC_LITERAL(18, 198, 12), // "resumeRender"
QT_MOC_LITERAL(19, 211, 9), // "loadFiles"
QT_MOC_LITERAL(20, 221, 9), // "filePaths"
QT_MOC_LITERAL(21, 231, 25), // "vtkMRMLMessageCollection*"
QT_MOC_LITERAL(22, 257, 12), // "userMessages"
QT_MOC_LITERAL(23, 270, 7), // "openUrl"
QT_MOC_LITERAL(24, 278, 26), // "handleCommandLineArguments"
QT_MOC_LITERAL(25, 305, 32), // "onSlicerApplicationLogicModified"
QT_MOC_LITERAL(26, 338, 25), // "onUserInformationModified"
QT_MOC_LITERAL(27, 364, 31), // "onSlicerApplicationLogicRequest"
QT_MOC_LITERAL(28, 396, 10), // "vtkObject*"
QT_MOC_LITERAL(29, 407, 23), // "processAppLogicModified"
QT_MOC_LITERAL(30, 431, 23), // "processAppLogicReadData"
QT_MOC_LITERAL(31, 455, 24), // "processAppLogicWriteData"
QT_MOC_LITERAL(32, 480, 8), // "editNode"
QT_MOC_LITERAL(33, 489, 9), // "terminate"
QT_MOC_LITERAL(34, 499, 8), // "exitCode"
QT_MOC_LITERAL(35, 508, 13), // "onAboutToQuit"
QT_MOC_LITERAL(36, 522, 18), // "requestInvokeEvent"
QT_MOC_LITERAL(37, 541, 19), // "scheduleInvokeEvent"
QT_MOC_LITERAL(38, 561, 11), // "invokeEvent"
QT_MOC_LITERAL(39, 573, 18), // "startupEnvironment"
QT_MOC_LITERAL(40, 592, 19), // "QProcessEnvironment"
QT_MOC_LITERAL(41, 612, 11), // "environment"
QT_MOC_LITERAL(42, 624, 22), // "setEnvironmentVariable"
QT_MOC_LITERAL(43, 647, 3), // "key"
QT_MOC_LITERAL(44, 651, 5), // "value"
QT_MOC_LITERAL(45, 657, 29), // "isEnvironmentVariableValueSet"
QT_MOC_LITERAL(46, 687, 26), // "prependEnvironmentVariable"
QT_MOC_LITERAL(47, 714, 9), // "separator"
QT_MOC_LITERAL(48, 724, 25), // "appendEnvironmentVariable"
QT_MOC_LITERAL(49, 750, 16), // "applicationLogic"
QT_MOC_LITERAL(50, 767, 26), // "vtkSlicerApplicationLogic*"
QT_MOC_LITERAL(51, 794, 11), // "moduleLogic"
QT_MOC_LITERAL(52, 806, 21), // "vtkMRMLAbstractLogic*"
QT_MOC_LITERAL(53, 828, 10), // "moduleName"
QT_MOC_LITERAL(54, 839, 27), // "addModuleAssociatedNodeType"
QT_MOC_LITERAL(55, 867, 13), // "nodeClassName"
QT_MOC_LITERAL(56, 881, 30), // "removeModuleAssociatedNodeType"
QT_MOC_LITERAL(57, 912, 29), // "modulesAssociatedWithNodeType"
QT_MOC_LITERAL(58, 942, 28), // "allModuleAssociatedNodeTypes"
QT_MOC_LITERAL(59, 971, 13), // "errorLogModel"
QT_MOC_LITERAL(60, 985, 25), // "ctkErrorLogAbstractModel*"
QT_MOC_LITERAL(61, 1011, 13), // "moduleManager"
QT_MOC_LITERAL(62, 1025, 21), // "qSlicerModuleManager*"
QT_MOC_LITERAL(63, 1047, 13), // "coreIOManager"
QT_MOC_LITERAL(64, 1061, 21), // "qSlicerCoreIOManager*"
QT_MOC_LITERAL(65, 1083, 15), // "defaultSettings"
QT_MOC_LITERAL(66, 1099, 10), // "QSettings*"
QT_MOC_LITERAL(67, 1110, 12), // "userSettings"
QT_MOC_LITERAL(68, 1123, 8), // "settings"
QT_MOC_LITERAL(69, 1132, 20), // "revisionUserSettings"
QT_MOC_LITERAL(70, 1153, 22), // "moduleDocumentationUrl"
QT_MOC_LITERAL(71, 1176, 13), // "dicomDatabase"
QT_MOC_LITERAL(72, 1190, 17), // "ctkDICOMDatabase*"
QT_MOC_LITERAL(73, 1208, 18), // "translationFolders"
QT_MOC_LITERAL(74, 1227, 16), // "loadTranslations"
QT_MOC_LITERAL(75, 1244, 3), // "dir"
QT_MOC_LITERAL(76, 1248, 12), // "loadLanguage"
QT_MOC_LITERAL(77, 1261, 18), // "loadCaCertificates"
QT_MOC_LITERAL(78, 1280, 10), // "slicerHome"
QT_MOC_LITERAL(79, 1291, 18), // "caCertificatesPath"
QT_MOC_LITERAL(80, 1310, 16), // "registerResource"
QT_MOC_LITERAL(81, 1327, 4), // "data"
QT_MOC_LITERAL(82, 1332, 18), // "showConsoleMessage"
QT_MOC_LITERAL(83, 1351, 7), // "message"
QT_MOC_LITERAL(84, 1359, 5), // "error"
QT_MOC_LITERAL(85, 1365, 24), // "toSlicerHomeAbsolutePath"
QT_MOC_LITERAL(86, 1390, 4), // "path"
QT_MOC_LITERAL(87, 1395, 24), // "toSlicerHomeRelativePath"
QT_MOC_LITERAL(88, 1420, 25), // "toSlicerHomeAbsolutePaths"
QT_MOC_LITERAL(89, 1446, 25), // "toSlicerHomeRelativePaths"
QT_MOC_LITERAL(90, 1472, 16), // "defaultScenePath"
QT_MOC_LITERAL(91, 1489, 15), // "slicerSharePath"
QT_MOC_LITERAL(92, 1505, 13), // "temporaryPath"
QT_MOC_LITERAL(93, 1519, 9), // "cachePath"
QT_MOC_LITERAL(94, 1529, 18), // "startupWorkingPath"
QT_MOC_LITERAL(95, 1548, 26), // "launcherExecutableFilePath"
QT_MOC_LITERAL(96, 1575, 24), // "launcherSettingsFilePath"
QT_MOC_LITERAL(97, 1600, 29), // "slicerDefaultSettingsFilePath"
QT_MOC_LITERAL(98, 1630, 26), // "slicerUserSettingsFilePath"
QT_MOC_LITERAL(99, 1657, 34), // "slicerRevisionUserSettingsFil..."
QT_MOC_LITERAL(100, 1692, 21), // "extensionsInstallPath"
QT_MOC_LITERAL(101, 1714, 6), // "intDir"
QT_MOC_LITERAL(102, 1721, 11), // "isInstalled"
QT_MOC_LITERAL(103, 1733, 11), // "releaseType"
QT_MOC_LITERAL(104, 1745, 13), // "repositoryUrl"
QT_MOC_LITERAL(105, 1759, 16), // "repositoryBranch"
QT_MOC_LITERAL(106, 1776, 18), // "repositoryRevision"
QT_MOC_LITERAL(107, 1795, 8), // "revision"
QT_MOC_LITERAL(108, 1804, 12), // "majorVersion"
QT_MOC_LITERAL(109, 1817, 12), // "minorVersion"
QT_MOC_LITERAL(110, 1830, 17), // "applicationLocale"
QT_MOC_LITERAL(111, 1848, 21), // "applicationLocaleName"
QT_MOC_LITERAL(112, 1870, 20), // "documentationBaseUrl"
QT_MOC_LITERAL(113, 1891, 20), // "documentationVersion"
QT_MOC_LITERAL(114, 1912, 21), // "documentationLanguage"
QT_MOC_LITERAL(115, 1934, 8), // "platform"
QT_MOC_LITERAL(116, 1943, 4), // "arch"
QT_MOC_LITERAL(117, 1948, 2), // "os"
QT_MOC_LITERAL(118, 1951, 23), // "isCustomMainApplication"
QT_MOC_LITERAL(119, 1975, 19), // "mainApplicationName"
QT_MOC_LITERAL(120, 1995, 28), // "mainApplicationRepositoryUrl"
QT_MOC_LITERAL(121, 2024, 33), // "mainApplicationRepositoryRevi..."
QT_MOC_LITERAL(122, 2058, 23), // "mainApplicationRevision"
QT_MOC_LITERAL(123, 2082, 27), // "mainApplicationMajorVersion"
QT_MOC_LITERAL(124, 2110, 27), // "mainApplicationMinorVersion"
QT_MOC_LITERAL(125, 2138, 27), // "mainApplicationPatchVersion"
QT_MOC_LITERAL(126, 2166, 10), // "ReturnCode"
QT_MOC_LITERAL(127, 2177, 16), // "ExitNotRequested"
QT_MOC_LITERAL(128, 2194, 11), // "ExitSuccess"
QT_MOC_LITERAL(129, 2206, 11) // "ExitFailure"

    },
    "qSlicerCoreApplication\0mrmlSceneChanged\0"
    "\0vtkMRMLScene*\0mrmlScene\0urlReceived\0"
    "url\0invokeEventRequested\0delay\0caller\0"
    "event\0callData\0restart\0unregisterResource\0"
    "handle\0setRenderPaused\0pause\0pauseRender\0"
    "resumeRender\0loadFiles\0filePaths\0"
    "vtkMRMLMessageCollection*\0userMessages\0"
    "openUrl\0handleCommandLineArguments\0"
    "onSlicerApplicationLogicModified\0"
    "onUserInformationModified\0"
    "onSlicerApplicationLogicRequest\0"
    "vtkObject*\0processAppLogicModified\0"
    "processAppLogicReadData\0"
    "processAppLogicWriteData\0editNode\0"
    "terminate\0exitCode\0onAboutToQuit\0"
    "requestInvokeEvent\0scheduleInvokeEvent\0"
    "invokeEvent\0startupEnvironment\0"
    "QProcessEnvironment\0environment\0"
    "setEnvironmentVariable\0key\0value\0"
    "isEnvironmentVariableValueSet\0"
    "prependEnvironmentVariable\0separator\0"
    "appendEnvironmentVariable\0applicationLogic\0"
    "vtkSlicerApplicationLogic*\0moduleLogic\0"
    "vtkMRMLAbstractLogic*\0moduleName\0"
    "addModuleAssociatedNodeType\0nodeClassName\0"
    "removeModuleAssociatedNodeType\0"
    "modulesAssociatedWithNodeType\0"
    "allModuleAssociatedNodeTypes\0errorLogModel\0"
    "ctkErrorLogAbstractModel*\0moduleManager\0"
    "qSlicerModuleManager*\0coreIOManager\0"
    "qSlicerCoreIOManager*\0defaultSettings\0"
    "QSettings*\0userSettings\0settings\0"
    "revisionUserSettings\0moduleDocumentationUrl\0"
    "dicomDatabase\0ctkDICOMDatabase*\0"
    "translationFolders\0loadTranslations\0"
    "dir\0loadLanguage\0loadCaCertificates\0"
    "slicerHome\0caCertificatesPath\0"
    "registerResource\0data\0showConsoleMessage\0"
    "message\0error\0toSlicerHomeAbsolutePath\0"
    "path\0toSlicerHomeRelativePath\0"
    "toSlicerHomeAbsolutePaths\0"
    "toSlicerHomeRelativePaths\0defaultScenePath\0"
    "slicerSharePath\0temporaryPath\0cachePath\0"
    "startupWorkingPath\0launcherExecutableFilePath\0"
    "launcherSettingsFilePath\0"
    "slicerDefaultSettingsFilePath\0"
    "slicerUserSettingsFilePath\0"
    "slicerRevisionUserSettingsFilePath\0"
    "extensionsInstallPath\0intDir\0isInstalled\0"
    "releaseType\0repositoryUrl\0repositoryBranch\0"
    "repositoryRevision\0revision\0majorVersion\0"
    "minorVersion\0applicationLocale\0"
    "applicationLocaleName\0documentationBaseUrl\0"
    "documentationVersion\0documentationLanguage\0"
    "platform\0arch\0os\0isCustomMainApplication\0"
    "mainApplicationName\0mainApplicationRepositoryUrl\0"
    "mainApplicationRepositoryRevision\0"
    "mainApplicationRevision\0"
    "mainApplicationMajorVersion\0"
    "mainApplicationMinorVersion\0"
    "mainApplicationPatchVersion\0ReturnCode\0"
    "ExitNotRequested\0ExitSuccess\0ExitFailure"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerCoreApplication[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
      37,  494, // properties
       1,  605, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  319,    2, 0x06 /* Public */,
       5,    1,  322,    2, 0x06 /* Public */,
       7,    4,  325,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  334,    2, 0x0a /* Public */,
      13,    1,  335,    2, 0x0a /* Public */,
      15,    1,  338,    2, 0x0a /* Public */,
      17,    0,  341,    2, 0x0a /* Public */,
      18,    0,  342,    2, 0x0a /* Public */,
      19,    2,  343,    2, 0x0a /* Public */,
      19,    1,  348,    2, 0x2a /* Public | MethodCloned */,
      23,    1,  351,    2, 0x0a /* Public */,
      24,    0,  354,    2, 0x09 /* Protected */,
      25,    0,  355,    2, 0x09 /* Protected */,
      26,    0,  356,    2, 0x09 /* Protected */,
      27,    3,  357,    2, 0x09 /* Protected */,
      29,    0,  364,    2, 0x09 /* Protected */,
      30,    0,  365,    2, 0x09 /* Protected */,
      31,    0,  366,    2, 0x09 /* Protected */,
      32,    3,  367,    2, 0x09 /* Protected */,
      33,    1,  374,    2, 0x09 /* Protected */,
      33,    0,  377,    2, 0x29 /* Protected | MethodCloned */,
      35,    0,  378,    2, 0x09 /* Protected */,
      36,    2,  379,    2, 0x09 /* Protected */,
      37,    4,  384,    2, 0x09 /* Protected */,
      38,    0,  393,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      39,    0,  394,    2, 0x02 /* Public */,
      41,    0,  395,    2, 0x02 /* Public */,
      42,    2,  396,    2, 0x02 /* Public */,
      45,    2,  401,    2, 0x02 /* Public */,
      46,    3,  406,    2, 0x02 /* Public */,
      46,    2,  413,    2, 0x22 /* Public | MethodCloned */,
      48,    3,  418,    2, 0x02 /* Public */,
      48,    2,  425,    2, 0x22 /* Public | MethodCloned */,
       4,    0,  430,    2, 0x02 /* Public */,
      49,    0,  431,    2, 0x02 /* Public */,
      51,    1,  432,    2, 0x02 /* Public */,
      54,    2,  435,    2, 0x02 /* Public */,
      56,    2,  440,    2, 0x02 /* Public */,
      57,    1,  445,    2, 0x02 /* Public */,
      58,    0,  448,    2, 0x02 /* Public */,
      59,    0,  449,    2, 0x02 /* Public */,
      61,    0,  450,    2, 0x02 /* Public */,
      63,    0,  451,    2, 0x02 /* Public */,
      65,    0,  452,    2, 0x02 /* Public */,
      67,    0,  453,    2, 0x02 /* Public */,
      68,    0,  454,    2, 0x02 /* Public */,
      69,    0,  455,    2, 0x02 /* Public */,
      70,    1,  456,    2, 0x02 /* Public */,
      71,    0,  459,    2, 0x02 /* Public */,
      73,    0,  460,    2, 0x02 /* Public */,
      74,    1,  461,    2, 0x02 /* Public */,
      76,    0,  464,    2, 0x02 /* Public */,
      77,    1,  465,    2, 0x02 /* Public */,
      79,    1,  468,    2, 0x02 /* Public */,
      80,    1,  471,    2, 0x02 /* Public */,
      82,    2,  474,    2, 0x02 /* Public */,
      82,    1,  479,    2, 0x22 /* Public | MethodCloned */,
      85,    1,  482,    2, 0x02 /* Public */,
      87,    1,  485,    2, 0x02 /* Public */,
      88,    1,  488,    2, 0x02 /* Public */,
      89,    1,  491,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::UInt, QMetaType::VoidStar, QMetaType::ULong, QMetaType::VoidStar,    8,    9,   10,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QStringList, 0x80000000 | 21,   20,   22,
    QMetaType::Bool, QMetaType::QStringList,   20,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28, QMetaType::VoidStar, QMetaType::ULong,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28, QMetaType::VoidStar, QMetaType::ULong,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28, QMetaType::VoidStar,    9,   11,
    QMetaType::Void, QMetaType::UInt, QMetaType::VoidStar, QMetaType::ULong, QMetaType::VoidStar,    8,    9,   10,   11,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 40,
    0x80000000 | 40,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   43,   44,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   43,   44,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QChar,   43,   44,   47,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   43,   44,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QChar,   43,   44,   47,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   43,   44,
    0x80000000 | 3,
    0x80000000 | 50,
    0x80000000 | 52, QMetaType::QString,   53,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   55,   53,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   55,   53,
    QMetaType::QStringList, QMetaType::QString,   55,
    QMetaType::QStringList,
    0x80000000 | 60,
    0x80000000 | 62,
    0x80000000 | 64,
    0x80000000 | 66,
    0x80000000 | 66,
    0x80000000 | 66,
    0x80000000 | 66,
    QMetaType::QString, QMetaType::QString,   53,
    0x80000000 | 72,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QString,   75,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   78,
    QMetaType::QString, QMetaType::QString,   78,
    QMetaType::Int, QMetaType::QByteArray,   81,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   83,   84,
    QMetaType::Void, QMetaType::QString,   83,
    QMetaType::QString, QMetaType::QString,   86,
    QMetaType::QString, QMetaType::QString,   86,
    QMetaType::QStringList, QMetaType::QStringList,   86,
    QMetaType::QStringList, QMetaType::QStringList,   86,

 // properties: name, type, flags
      78, QMetaType::QString, 0x00095401,
      90, QMetaType::QString, 0x00095103,
      91, QMetaType::QString, 0x00095401,
      92, QMetaType::QString, 0x00095103,
      93, QMetaType::QString, 0x00095103,
      94, QMetaType::QString, 0x00095401,
      95, QMetaType::QString, 0x00095401,
      96, QMetaType::QString, 0x00095401,
      97, QMetaType::QString, 0x00095401,
      98, QMetaType::QString, 0x00095401,
      99, QMetaType::QString, 0x00095401,
     100, QMetaType::QString, 0x00095103,
     101, QMetaType::QString, 0x00095401,
     102, QMetaType::Bool, 0x00095401,
     103, QMetaType::QString, 0x00095401,
     104, QMetaType::QString, 0x00095401,
     105, QMetaType::QString, 0x00095401,
     106, QMetaType::QString, 0x00095401,
     107, QMetaType::QString, 0x00095401,
     108, QMetaType::Int, 0x00095401,
     109, QMetaType::Int, 0x00095401,
     110, QMetaType::QLocale, 0x00095401,
     111, QMetaType::QString, 0x00095401,
     112, QMetaType::QString, 0x00095001,
     113, QMetaType::QString, 0x00095401,
     114, QMetaType::QString, 0x00095401,
     115, QMetaType::QString, 0x00095401,
     116, QMetaType::QString, 0x00095401,
     117, QMetaType::QString, 0x00095401,
     118, QMetaType::Bool, 0x00095401,
     119, QMetaType::QString, 0x00095401,
     120, QMetaType::QString, 0x00095401,
     121, QMetaType::QString, 0x00095401,
     122, QMetaType::QString, 0x00095401,
     123, QMetaType::Int, 0x00095401,
     124, QMetaType::Int, 0x00095401,
     125, QMetaType::Int, 0x00095401,

 // enums: name, alias, flags, count, data
     126,  126, 0x0,    3,  610,

 // enum data: key, value
     127, uint(qSlicerCoreApplication::ExitNotRequested),
     128, uint(qSlicerCoreApplication::ExitSuccess),
     129, uint(qSlicerCoreApplication::ExitFailure),

       0        // eod
};

void qSlicerCoreApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerCoreApplication *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mrmlSceneChanged((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 1: _t->urlReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->invokeEventRequested((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])),(*reinterpret_cast< ulong(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 3: _t->restart(); break;
        case 4: { bool _r = _t->unregisterResource((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setRenderPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->pauseRender(); break;
        case 7: _t->resumeRender(); break;
        case 8: { bool _r = _t->loadFiles((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< vtkMRMLMessageCollection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->loadFiles((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->openUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->handleCommandLineArguments(); break;
        case 12: _t->onSlicerApplicationLogicModified(); break;
        case 13: _t->onUserInformationModified(); break;
        case 14: _t->onSlicerApplicationLogicRequest((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])),(*reinterpret_cast< ulong(*)>(_a[3]))); break;
        case 15: _t->processAppLogicModified(); break;
        case 16: _t->processAppLogicReadData(); break;
        case 17: _t->processAppLogicWriteData(); break;
        case 18: _t->editNode((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])),(*reinterpret_cast< ulong(*)>(_a[3]))); break;
        case 19: _t->terminate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->terminate(); break;
        case 21: _t->onAboutToQuit(); break;
        case 22: _t->requestInvokeEvent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 23: _t->scheduleInvokeEvent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])),(*reinterpret_cast< ulong(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 24: _t->invokeEvent(); break;
        case 25: { QProcessEnvironment _r = _t->startupEnvironment();
            if (_a[0]) *reinterpret_cast< QProcessEnvironment*>(_a[0]) = std::move(_r); }  break;
        case 26: { QProcessEnvironment _r = _t->environment();
            if (_a[0]) *reinterpret_cast< QProcessEnvironment*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->setEnvironmentVariable((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 28: { bool _r = _t->isEnvironmentVariableValueSet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->prependEnvironmentVariable((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QChar(*)>(_a[3]))); break;
        case 30: _t->prependEnvironmentVariable((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 31: _t->appendEnvironmentVariable((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QChar(*)>(_a[3]))); break;
        case 32: _t->appendEnvironmentVariable((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 33: { vtkMRMLScene* _r = _t->mrmlScene();
            if (_a[0]) *reinterpret_cast< vtkMRMLScene**>(_a[0]) = std::move(_r); }  break;
        case 34: { vtkSlicerApplicationLogic* _r = _t->applicationLogic();
            if (_a[0]) *reinterpret_cast< vtkSlicerApplicationLogic**>(_a[0]) = std::move(_r); }  break;
        case 35: { vtkMRMLAbstractLogic* _r = _t->moduleLogic((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< vtkMRMLAbstractLogic**>(_a[0]) = std::move(_r); }  break;
        case 36: _t->addModuleAssociatedNodeType((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 37: _t->removeModuleAssociatedNodeType((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 38: { QStringList _r = _t->modulesAssociatedWithNodeType((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 39: { QStringList _r = _t->allModuleAssociatedNodeTypes();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 40: { ctkErrorLogAbstractModel* _r = _t->errorLogModel();
            if (_a[0]) *reinterpret_cast< ctkErrorLogAbstractModel**>(_a[0]) = std::move(_r); }  break;
        case 41: { qSlicerModuleManager* _r = _t->moduleManager();
            if (_a[0]) *reinterpret_cast< qSlicerModuleManager**>(_a[0]) = std::move(_r); }  break;
        case 42: { qSlicerCoreIOManager* _r = _t->coreIOManager();
            if (_a[0]) *reinterpret_cast< qSlicerCoreIOManager**>(_a[0]) = std::move(_r); }  break;
        case 43: { QSettings* _r = _t->defaultSettings();
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = std::move(_r); }  break;
        case 44: { QSettings* _r = _t->userSettings();
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = std::move(_r); }  break;
        case 45: { QSettings* _r = _t->settings();
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = std::move(_r); }  break;
        case 46: { QSettings* _r = _t->revisionUserSettings();
            if (_a[0]) *reinterpret_cast< QSettings**>(_a[0]) = std::move(_r); }  break;
        case 47: { QString _r = _t->moduleDocumentationUrl((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 48: { ctkDICOMDatabase* _r = _t->dicomDatabase();
            if (_a[0]) *reinterpret_cast< ctkDICOMDatabase**>(_a[0]) = std::move(_r); }  break;
        case 49: { QStringList _r = _t->translationFolders();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 50: _t->loadTranslations((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 51: _t->loadLanguage(); break;
        case 52: { bool _r = _t->loadCaCertificates((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 53: { QString _r = _t->caCertificatesPath((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 54: { int _r = _t->registerResource((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 55: _t->showConsoleMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 56: _t->showConsoleMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 57: { QString _r = _t->toSlicerHomeAbsolutePath((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 58: { QString _r = _t->toSlicerHomeRelativePath((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 59: { QStringList _r = _t->toSlicerHomeAbsolutePaths((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 60: { QStringList _r = _t->toSlicerHomeRelativePaths((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qSlicerCoreApplication::*)(vtkMRMLScene * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerCoreApplication::mrmlSceneChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qSlicerCoreApplication::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerCoreApplication::urlReceived)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qSlicerCoreApplication::*)(unsigned int , void * , unsigned long , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerCoreApplication::invokeEventRequested)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerCoreApplication *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->slicerHome(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->defaultScenePath(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->slicerSharePath(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->temporaryPath(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->cachePath(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->startupWorkingPath(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->launcherExecutableFilePath(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->launcherSettingsFilePath(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->slicerDefaultSettingsFilePath(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->slicerUserSettingsFilePath(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->slicerRevisionUserSettingsFilePath(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->extensionsInstallPath(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->intDir(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->isInstalled(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->releaseType(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->repositoryUrl(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->repositoryBranch(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->repositoryRevision(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->revision(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->majorVersion(); break;
        case 20: *reinterpret_cast< int*>(_v) = _t->minorVersion(); break;
        case 21: *reinterpret_cast< QLocale*>(_v) = _t->applicationLocale(); break;
        case 22: *reinterpret_cast< QString*>(_v) = _t->applicationLocaleName(); break;
        case 23: *reinterpret_cast< QString*>(_v) = _t->documentationBaseUrl(); break;
        case 24: *reinterpret_cast< QString*>(_v) = _t->documentationVersion(); break;
        case 25: *reinterpret_cast< QString*>(_v) = _t->documentationLanguage(); break;
        case 26: *reinterpret_cast< QString*>(_v) = _t->platform(); break;
        case 27: *reinterpret_cast< QString*>(_v) = _t->arch(); break;
        case 28: *reinterpret_cast< QString*>(_v) = _t->os(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->isCustomMainApplication(); break;
        case 30: *reinterpret_cast< QString*>(_v) = _t->mainApplicationName(); break;
        case 31: *reinterpret_cast< QString*>(_v) = _t->mainApplicationRepositoryUrl(); break;
        case 32: *reinterpret_cast< QString*>(_v) = _t->mainApplicationRepositoryRevision(); break;
        case 33: *reinterpret_cast< QString*>(_v) = _t->mainApplicationRevision(); break;
        case 34: *reinterpret_cast< int*>(_v) = _t->mainApplicationMajorVersion(); break;
        case 35: *reinterpret_cast< int*>(_v) = _t->mainApplicationMinorVersion(); break;
        case 36: *reinterpret_cast< int*>(_v) = _t->mainApplicationPatchVersion(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerCoreApplication *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setDefaultScenePath(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setTemporaryPath(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setCachePath(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setExtensionsInstallPath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerCoreApplication::staticMetaObject = { {
    QMetaObject::SuperData::link<QApplication::staticMetaObject>(),
    qt_meta_stringdata_qSlicerCoreApplication.data,
    qt_meta_data_qSlicerCoreApplication,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerCoreApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerCoreApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerCoreApplication.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int qSlicerCoreApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 61)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 61;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 37;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 37;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 37;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 37;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 37;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qSlicerCoreApplication::mrmlSceneChanged(vtkMRMLScene * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qSlicerCoreApplication::urlReceived(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qSlicerCoreApplication::invokeEventRequested(unsigned int _t1, void * _t2, unsigned long _t3, void * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
