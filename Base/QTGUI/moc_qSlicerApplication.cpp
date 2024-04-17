/****************************************************************************
** Meta object code from reading C++ file 'qSlicerApplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerApplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerApplication_t {
    QByteArrayData data[56];
    char stringdata0[852];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerApplication_t qt_meta_stringdata_qSlicerApplication = {
    {
QT_MOC_LITERAL(0, 0, 18), // "qSlicerApplication"
QT_MOC_LITERAL(1, 19, 16), // "startupCompleted"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 12), // "renderPaused"
QT_MOC_LITERAL(4, 50, 14), // "openNodeModule"
QT_MOC_LITERAL(5, 65, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 78, 4), // "node"
QT_MOC_LITERAL(7, 83, 4), // "role"
QT_MOC_LITERAL(8, 88, 7), // "context"
QT_MOC_LITERAL(9, 96, 14), // "confirmRestart"
QT_MOC_LITERAL(10, 111, 6), // "reason"
QT_MOC_LITERAL(11, 118, 14), // "launchDesigner"
QT_MOC_LITERAL(12, 133, 4), // "args"
QT_MOC_LITERAL(13, 138, 28), // "numberOfRecentLogFilesToKeep"
QT_MOC_LITERAL(14, 167, 14), // "recentLogFiles"
QT_MOC_LITERAL(15, 182, 14), // "currentLogFile"
QT_MOC_LITERAL(16, 197, 24), // "setHasBorderInFullScreen"
QT_MOC_LITERAL(17, 222, 15), // "setRenderPaused"
QT_MOC_LITERAL(18, 238, 5), // "pause"
QT_MOC_LITERAL(19, 244, 11), // "pauseRender"
QT_MOC_LITERAL(20, 256, 12), // "resumeRender"
QT_MOC_LITERAL(21, 269, 9), // "loadFiles"
QT_MOC_LITERAL(22, 279, 9), // "filePaths"
QT_MOC_LITERAL(23, 289, 25), // "vtkMRMLMessageCollection*"
QT_MOC_LITERAL(24, 315, 12), // "userMessages"
QT_MOC_LITERAL(25, 328, 24), // "setPythonConsoleLogLevel"
QT_MOC_LITERAL(26, 353, 26), // "ctkErrorLogLevel::LogLevel"
QT_MOC_LITERAL(27, 380, 8), // "logLevel"
QT_MOC_LITERAL(28, 389, 8), // "editNode"
QT_MOC_LITERAL(29, 398, 10), // "vtkObject*"
QT_MOC_LITERAL(30, 409, 18), // "logToPythonConsole"
QT_MOC_LITERAL(31, 428, 15), // "currentDateTime"
QT_MOC_LITERAL(32, 444, 8), // "threadId"
QT_MOC_LITERAL(33, 453, 6), // "origin"
QT_MOC_LITERAL(34, 460, 18), // "ctkErrorLogContext"
QT_MOC_LITERAL(35, 479, 4), // "text"
QT_MOC_LITERAL(36, 484, 14), // "commandOptions"
QT_MOC_LITERAL(37, 499, 22), // "qSlicerCommandOptions*"
QT_MOC_LITERAL(38, 522, 9), // "ioManager"
QT_MOC_LITERAL(39, 532, 17), // "qSlicerIOManager*"
QT_MOC_LITERAL(40, 550, 13), // "pythonManager"
QT_MOC_LITERAL(41, 564, 21), // "qSlicerPythonManager*"
QT_MOC_LITERAL(42, 586, 13), // "pythonConsole"
QT_MOC_LITERAL(43, 600, 17), // "ctkPythonConsole*"
QT_MOC_LITERAL(44, 618, 21), // "pythonConsoleLogLevel"
QT_MOC_LITERAL(45, 640, 13), // "layoutManager"
QT_MOC_LITERAL(46, 654, 21), // "qSlicerLayoutManager*"
QT_MOC_LITERAL(47, 676, 16), // "setLayoutManager"
QT_MOC_LITERAL(48, 693, 14), // "settingsDialog"
QT_MOC_LITERAL(49, 708, 18), // "ctkSettingsDialog*"
QT_MOC_LITERAL(50, 727, 18), // "openSettingsDialog"
QT_MOC_LITERAL(51, 746, 13), // "settingsPanel"
QT_MOC_LITERAL(52, 760, 25), // "logApplicationInformation"
QT_MOC_LITERAL(53, 786, 33), // "createDICOMBrowserForMainData..."
QT_MOC_LITERAL(54, 820, 16), // "ctkDICOMBrowser*"
QT_MOC_LITERAL(55, 837, 14) // "isCodePageUtf8"

    },
    "qSlicerApplication\0startupCompleted\0"
    "\0renderPaused\0openNodeModule\0vtkMRMLNode*\0"
    "node\0role\0context\0confirmRestart\0"
    "reason\0launchDesigner\0args\0"
    "numberOfRecentLogFilesToKeep\0"
    "recentLogFiles\0currentLogFile\0"
    "setHasBorderInFullScreen\0setRenderPaused\0"
    "pause\0pauseRender\0resumeRender\0loadFiles\0"
    "filePaths\0vtkMRMLMessageCollection*\0"
    "userMessages\0setPythonConsoleLogLevel\0"
    "ctkErrorLogLevel::LogLevel\0logLevel\0"
    "editNode\0vtkObject*\0logToPythonConsole\0"
    "currentDateTime\0threadId\0origin\0"
    "ctkErrorLogContext\0text\0commandOptions\0"
    "qSlicerCommandOptions*\0ioManager\0"
    "qSlicerIOManager*\0pythonManager\0"
    "qSlicerPythonManager*\0pythonConsole\0"
    "ctkPythonConsole*\0pythonConsoleLogLevel\0"
    "layoutManager\0qSlicerLayoutManager*\0"
    "setLayoutManager\0settingsDialog\0"
    "ctkSettingsDialog*\0openSettingsDialog\0"
    "settingsPanel\0logApplicationInformation\0"
    "createDICOMBrowserForMainDatabase\0"
    "ctkDICOMBrowser*\0isCodePageUtf8"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerApplication[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  184,    2, 0x06 /* Public */,
       3,    1,  185,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,  188,    2, 0x0a /* Public */,
       4,    2,  195,    2, 0x2a /* Public | MethodCloned */,
       4,    1,  200,    2, 0x2a /* Public | MethodCloned */,
       9,    1,  203,    2, 0x0a /* Public */,
       9,    0,  206,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  207,    2, 0x0a /* Public */,
      11,    0,  210,    2, 0x2a /* Public | MethodCloned */,
      13,    0,  211,    2, 0x0a /* Public */,
      14,    0,  212,    2, 0x0a /* Public */,
      15,    0,  213,    2, 0x0a /* Public */,
      16,    1,  214,    2, 0x0a /* Public */,
      17,    1,  217,    2, 0x0a /* Public */,
      19,    0,  220,    2, 0x0a /* Public */,
      20,    0,  221,    2, 0x0a /* Public */,
      21,    2,  222,    2, 0x0a /* Public */,
      21,    1,  227,    2, 0x2a /* Public | MethodCloned */,
      25,    1,  230,    2, 0x0a /* Public */,
      28,    3,  233,    2, 0x09 /* Protected */,
      30,    6,  240,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      36,    0,  253,    2, 0x02 /* Public */,
      38,    0,  254,    2, 0x02 /* Public */,
      40,    0,  255,    2, 0x02 /* Public */,
      42,    0,  256,    2, 0x02 /* Public */,
      44,    0,  257,    2, 0x02 /* Public */,
      45,    0,  258,    2, 0x02 /* Public */,
      47,    1,  259,    2, 0x02 /* Public */,
      48,    0,  262,    2, 0x02 /* Public */,
      50,    1,  263,    2, 0x02 /* Public */,
      50,    0,  266,    2, 0x22 /* Public | MethodCloned */,
      52,    0,  267,    2, 0x02 /* Public */,
      53,    0,  268,    2, 0x02 /* Public */,
      55,    0,  269,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QStringList,   12,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::QStringList,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QStringList, 0x80000000 | 23,   22,   24,
    QMetaType::Bool, QMetaType::QStringList,   22,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 29, QMetaType::VoidStar, QMetaType::ULong,    2,    2,    2,
    QMetaType::Void, QMetaType::QDateTime, QMetaType::QString, 0x80000000 | 26, QMetaType::QString, 0x80000000 | 34, QMetaType::QString,   31,   32,   27,   33,    8,   35,

 // methods: parameters
    0x80000000 | 37,
    0x80000000 | 39,
    0x80000000 | 41,
    0x80000000 | 43,
    0x80000000 | 26,
    0x80000000 | 46,
    QMetaType::Void, 0x80000000 | 46,   45,
    0x80000000 | 49,
    QMetaType::Void, QMetaType::QString,   51,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 54,
    QMetaType::Bool,

       0        // eod
};

void qSlicerApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerApplication *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startupCompleted(); break;
        case 1: _t->renderPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->openNodeModule((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->openNodeModule((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->openNodeModule((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 5: _t->confirmRestart((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->confirmRestart(); break;
        case 7: { bool _r = _t->launchDesigner((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->launchDesigner();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { int _r = _t->numberOfRecentLogFilesToKeep();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: { QStringList _r = _t->recentLogFiles();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->currentLogFile();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->setHasBorderInFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setRenderPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->pauseRender(); break;
        case 15: _t->resumeRender(); break;
        case 16: { bool _r = _t->loadFiles((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< vtkMRMLMessageCollection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->loadFiles((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->setPythonConsoleLogLevel((*reinterpret_cast< ctkErrorLogLevel::LogLevel(*)>(_a[1]))); break;
        case 19: _t->editNode((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])),(*reinterpret_cast< ulong(*)>(_a[3]))); break;
        case 20: _t->logToPythonConsole((*reinterpret_cast< const QDateTime(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< ctkErrorLogLevel::LogLevel(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const ctkErrorLogContext(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 21: { qSlicerCommandOptions* _r = _t->commandOptions();
            if (_a[0]) *reinterpret_cast< qSlicerCommandOptions**>(_a[0]) = std::move(_r); }  break;
        case 22: { qSlicerIOManager* _r = _t->ioManager();
            if (_a[0]) *reinterpret_cast< qSlicerIOManager**>(_a[0]) = std::move(_r); }  break;
        case 23: { qSlicerPythonManager* _r = _t->pythonManager();
            if (_a[0]) *reinterpret_cast< qSlicerPythonManager**>(_a[0]) = std::move(_r); }  break;
        case 24: { ctkPythonConsole* _r = _t->pythonConsole();
            if (_a[0]) *reinterpret_cast< ctkPythonConsole**>(_a[0]) = std::move(_r); }  break;
        case 25: { ctkErrorLogLevel::LogLevel _r = _t->pythonConsoleLogLevel();
            if (_a[0]) *reinterpret_cast< ctkErrorLogLevel::LogLevel*>(_a[0]) = std::move(_r); }  break;
        case 26: { qSlicerLayoutManager* _r = _t->layoutManager();
            if (_a[0]) *reinterpret_cast< qSlicerLayoutManager**>(_a[0]) = std::move(_r); }  break;
        case 27: _t->setLayoutManager((*reinterpret_cast< qSlicerLayoutManager*(*)>(_a[1]))); break;
        case 28: { ctkSettingsDialog* _r = _t->settingsDialog();
            if (_a[0]) *reinterpret_cast< ctkSettingsDialog**>(_a[0]) = std::move(_r); }  break;
        case 29: _t->openSettingsDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->openSettingsDialog(); break;
        case 31: _t->logApplicationInformation(); break;
        case 32: { ctkDICOMBrowser* _r = _t->createDICOMBrowserForMainDatabase();
            if (_a[0]) *reinterpret_cast< ctkDICOMBrowser**>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->isCodePageUtf8();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qSlicerApplication::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerApplication::startupCompleted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qSlicerApplication::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerApplication::renderPaused)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerApplication::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerCoreApplication::staticMetaObject>(),
    qt_meta_stringdata_qSlicerApplication.data,
    qt_meta_data_qSlicerApplication,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerApplication.stringdata0))
        return static_cast<void*>(this);
    return qSlicerCoreApplication::qt_metacast(_clname);
}

int qSlicerApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerCoreApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void qSlicerApplication::startupCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void qSlicerApplication::renderPaused(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
