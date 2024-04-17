/****************************************************************************
** Meta object code from reading C++ file 'qSlicerCoreIOManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTCore/qSlicerCoreIOManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerCoreIOManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerCoreIOManager_t {
    QByteArrayData data[71];
    char stringdata0[1169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerCoreIOManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerCoreIOManager_t qt_meta_stringdata_qSlicerCoreIOManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "qSlicerCoreIOManager"
QT_MOC_LITERAL(1, 21, 13), // "newFileLoaded"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 23), // "qSlicerIO::IOProperties"
QT_MOC_LITERAL(4, 60, 20), // "loadedFileParameters"
QT_MOC_LITERAL(5, 81, 9), // "fileSaved"
QT_MOC_LITERAL(6, 91, 19), // "savedFileParameters"
QT_MOC_LITERAL(7, 111, 23), // "setDefaultSceneFileType"
QT_MOC_LITERAL(8, 135, 8), // "fileType"
QT_MOC_LITERAL(9, 144, 21), // "qSlicerIO::IOFileType"
QT_MOC_LITERAL(10, 166, 4), // "file"
QT_MOC_LITERAL(11, 171, 9), // "fileTypes"
QT_MOC_LITERAL(12, 181, 28), // "QList<qSlicerIO::IOFileType>"
QT_MOC_LITERAL(13, 210, 23), // "fileTypeFromDescription"
QT_MOC_LITERAL(14, 234, 15), // "fileDescription"
QT_MOC_LITERAL(15, 250, 16), // "fileDescriptions"
QT_MOC_LITERAL(16, 267, 18), // "fileWriterFileType"
QT_MOC_LITERAL(17, 286, 10), // "vtkObject*"
QT_MOC_LITERAL(18, 297, 6), // "object"
QT_MOC_LITERAL(19, 304, 9), // "extension"
QT_MOC_LITERAL(20, 314, 22), // "fileWriterDescriptions"
QT_MOC_LITERAL(21, 337, 20), // "fileWriterExtensions"
QT_MOC_LITERAL(22, 358, 25), // "allWritableFileExtensions"
QT_MOC_LITERAL(23, 384, 25), // "allReadableFileExtensions"
QT_MOC_LITERAL(24, 410, 36), // "completeSlicerWritableFileNam..."
QT_MOC_LITERAL(25, 447, 20), // "vtkMRMLStorableNode*"
QT_MOC_LITERAL(26, 468, 4), // "node"
QT_MOC_LITERAL(27, 473, 14), // "fileNameRegExp"
QT_MOC_LITERAL(28, 488, 28), // "forceFileNameValidCharacters"
QT_MOC_LITERAL(29, 517, 8), // "filename"
QT_MOC_LITERAL(30, 526, 21), // "extractKnownExtension"
QT_MOC_LITERAL(31, 548, 8), // "fileName"
QT_MOC_LITERAL(32, 557, 19), // "stripKnownExtension"
QT_MOC_LITERAL(33, 577, 9), // "loadNodes"
QT_MOC_LITERAL(34, 587, 10), // "parameters"
QT_MOC_LITERAL(35, 598, 14), // "vtkCollection*"
QT_MOC_LITERAL(36, 613, 11), // "loadedNodes"
QT_MOC_LITERAL(37, 625, 25), // "vtkMRMLMessageCollection*"
QT_MOC_LITERAL(38, 651, 12), // "userMessages"
QT_MOC_LITERAL(39, 664, 9), // "loadScene"
QT_MOC_LITERAL(40, 674, 5), // "clear"
QT_MOC_LITERAL(41, 680, 8), // "loadFile"
QT_MOC_LITERAL(42, 689, 9), // "saveNodes"
QT_MOC_LITERAL(43, 699, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(44, 713, 5), // "scene"
QT_MOC_LITERAL(45, 719, 11), // "exportNodes"
QT_MOC_LITERAL(46, 731, 30), // "QList<qSlicerIO::IOProperties>"
QT_MOC_LITERAL(47, 762, 13), // "parameterMaps"
QT_MOC_LITERAL(48, 776, 16), // "hardenTransforms"
QT_MOC_LITERAL(49, 793, 7), // "nodeIDs"
QT_MOC_LITERAL(50, 801, 9), // "fileNames"
QT_MOC_LITERAL(51, 811, 18), // "commonParameterMap"
QT_MOC_LITERAL(52, 830, 9), // "saveScene"
QT_MOC_LITERAL(53, 840, 10), // "screenShot"
QT_MOC_LITERAL(54, 851, 22), // "addDefaultStorageNodes"
QT_MOC_LITERAL(55, 874, 25), // "registeredFileReaderCount"
QT_MOC_LITERAL(56, 900, 25), // "registeredFileWriterCount"
QT_MOC_LITERAL(57, 926, 30), // "createAndAddDefaultStorageNode"
QT_MOC_LITERAL(58, 957, 19), // "vtkMRMLStorageNode*"
QT_MOC_LITERAL(59, 977, 17), // "emitNewFileLoaded"
QT_MOC_LITERAL(60, 995, 13), // "emitFileSaved"
QT_MOC_LITERAL(61, 1009, 20), // "defaultSceneFileType"
QT_MOC_LITERAL(62, 1030, 19), // "examineFileInfoList"
QT_MOC_LITERAL(63, 1050, 14), // "QFileInfoList&"
QT_MOC_LITERAL(64, 1065, 12), // "fileInfoList"
QT_MOC_LITERAL(65, 1078, 10), // "QFileInfo&"
QT_MOC_LITERAL(66, 1089, 14), // "archetypeEntry"
QT_MOC_LITERAL(67, 1104, 8), // "QString&"
QT_MOC_LITERAL(68, 1113, 17), // "readerDescription"
QT_MOC_LITERAL(69, 1131, 24), // "qSlicerIO::IOProperties&"
QT_MOC_LITERAL(70, 1156, 12) // "ioProperties"

    },
    "qSlicerCoreIOManager\0newFileLoaded\0\0"
    "qSlicerIO::IOProperties\0loadedFileParameters\0"
    "fileSaved\0savedFileParameters\0"
    "setDefaultSceneFileType\0fileType\0"
    "qSlicerIO::IOFileType\0file\0fileTypes\0"
    "QList<qSlicerIO::IOFileType>\0"
    "fileTypeFromDescription\0fileDescription\0"
    "fileDescriptions\0fileWriterFileType\0"
    "vtkObject*\0object\0extension\0"
    "fileWriterDescriptions\0fileWriterExtensions\0"
    "allWritableFileExtensions\0"
    "allReadableFileExtensions\0"
    "completeSlicerWritableFileNameSuffix\0"
    "vtkMRMLStorableNode*\0node\0fileNameRegExp\0"
    "forceFileNameValidCharacters\0filename\0"
    "extractKnownExtension\0fileName\0"
    "stripKnownExtension\0loadNodes\0parameters\0"
    "vtkCollection*\0loadedNodes\0"
    "vtkMRMLMessageCollection*\0userMessages\0"
    "loadScene\0clear\0loadFile\0saveNodes\0"
    "vtkMRMLScene*\0scene\0exportNodes\0"
    "QList<qSlicerIO::IOProperties>\0"
    "parameterMaps\0hardenTransforms\0nodeIDs\0"
    "fileNames\0commonParameterMap\0saveScene\0"
    "screenShot\0addDefaultStorageNodes\0"
    "registeredFileReaderCount\0"
    "registeredFileWriterCount\0"
    "createAndAddDefaultStorageNode\0"
    "vtkMRMLStorageNode*\0emitNewFileLoaded\0"
    "emitFileSaved\0defaultSceneFileType\0"
    "examineFileInfoList\0QFileInfoList&\0"
    "fileInfoList\0QFileInfo&\0archetypeEntry\0"
    "QString&\0readerDescription\0"
    "qSlicerIO::IOProperties&\0ioProperties"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerCoreIOManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       1,  426, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  234,    2, 0x06 /* Public */,
       5,    1,  237,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  240,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    1,  243,    2, 0x02 /* Public */,
      11,    1,  246,    2, 0x02 /* Public */,
      13,    1,  249,    2, 0x02 /* Public */,
      15,    1,  252,    2, 0x02 /* Public */,
      16,    2,  255,    2, 0x02 /* Public */,
      16,    1,  260,    2, 0x22 /* Public | MethodCloned */,
      20,    1,  263,    2, 0x02 /* Public */,
      21,    1,  266,    2, 0x02 /* Public */,
      22,    0,  269,    2, 0x02 /* Public */,
      23,    0,  270,    2, 0x02 /* Public */,
      24,    1,  271,    2, 0x02 /* Public */,
      27,    1,  274,    2, 0x02 /* Public */,
      27,    0,  277,    2, 0x22 /* Public | MethodCloned */,
      28,    1,  278,    2, 0x02 /* Public */,
      30,    2,  281,    2, 0x02 /* Public */,
      32,    2,  286,    2, 0x02 /* Public */,
      33,    4,  291,    2, 0x02 /* Public */,
      33,    3,  300,    2, 0x22 /* Public | MethodCloned */,
      33,    2,  307,    2, 0x22 /* Public | MethodCloned */,
      39,    3,  312,    2, 0x02 /* Public */,
      39,    2,  319,    2, 0x22 /* Public | MethodCloned */,
      39,    1,  324,    2, 0x22 /* Public | MethodCloned */,
      41,    2,  327,    2, 0x02 /* Public */,
      41,    1,  332,    2, 0x22 /* Public | MethodCloned */,
      42,    4,  335,    2, 0x02 /* Public */,
      42,    3,  344,    2, 0x22 /* Public | MethodCloned */,
      42,    2,  351,    2, 0x22 /* Public | MethodCloned */,
      45,    3,  356,    2, 0x02 /* Public */,
      45,    2,  363,    2, 0x22 /* Public | MethodCloned */,
      45,    5,  368,    2, 0x02 /* Public */,
      45,    4,  379,    2, 0x22 /* Public | MethodCloned */,
      52,    3,  388,    2, 0x02 /* Public */,
      52,    2,  395,    2, 0x22 /* Public | MethodCloned */,
      54,    0,  400,    2, 0x02 /* Public */,
      55,    1,  401,    2, 0x02 /* Public */,
      56,    1,  404,    2, 0x02 /* Public */,
      57,    1,  407,    2, 0x02 /* Public */,
      59,    1,  410,    2, 0x02 /* Public */,
      60,    1,  413,    2, 0x02 /* Public */,
      61,    0,  416,    2, 0x02 /* Public */,
      62,    4,  417,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // methods: parameters
    0x80000000 | 9, QMetaType::QString,   10,
    0x80000000 | 12, QMetaType::QString,   10,
    0x80000000 | 9, QMetaType::QString,   14,
    QMetaType::QStringList, QMetaType::QString,   10,
    0x80000000 | 9, 0x80000000 | 17, QMetaType::QString,   18,   19,
    0x80000000 | 9, 0x80000000 | 17,   18,
    QMetaType::QStringList, 0x80000000 | 9,    8,
    QMetaType::QStringList, 0x80000000 | 17,   18,
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::QString, 0x80000000 | 25,   26,
    QMetaType::QRegExp, QMetaType::QString,   19,
    QMetaType::QRegExp,
    QMetaType::QString, QMetaType::QString,   29,
    QMetaType::QString, QMetaType::QString, 0x80000000 | 17,   31,   18,
    QMetaType::QString, QMetaType::QString, 0x80000000 | 17,   31,   18,
    QMetaType::Bool, 0x80000000 | 9, 0x80000000 | 3, 0x80000000 | 35, 0x80000000 | 37,    8,   34,   36,   38,
    QMetaType::Bool, 0x80000000 | 9, 0x80000000 | 3, 0x80000000 | 35,    8,   34,   36,
    QMetaType::Bool, 0x80000000 | 9, 0x80000000 | 3,    8,   34,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool, 0x80000000 | 37,   31,   40,   38,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   31,   40,
    QMetaType::Bool, QMetaType::QString,   31,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 37,   31,   38,
    QMetaType::Bool, QMetaType::QString,   31,
    QMetaType::Bool, 0x80000000 | 9, 0x80000000 | 3, 0x80000000 | 37, 0x80000000 | 43,    8,   34,   38,   44,
    QMetaType::Bool, 0x80000000 | 9, 0x80000000 | 3, 0x80000000 | 37,    8,   34,   38,
    QMetaType::Bool, 0x80000000 | 9, 0x80000000 | 3,    8,   34,
    QMetaType::Bool, 0x80000000 | 46, QMetaType::Bool, 0x80000000 | 37,   47,   48,   38,
    QMetaType::Bool, 0x80000000 | 46, QMetaType::Bool,   47,   48,
    QMetaType::Bool, QMetaType::QStringList, QMetaType::QStringList, 0x80000000 | 3, QMetaType::Bool, 0x80000000 | 37,   49,   50,   51,   48,   38,
    QMetaType::Bool, QMetaType::QStringList, QMetaType::QStringList, 0x80000000 | 3, QMetaType::Bool,   49,   50,   51,   48,
    QMetaType::Bool, QMetaType::QString, QMetaType::QImage, 0x80000000 | 37,   31,   53,   38,
    QMetaType::Bool, QMetaType::QString, QMetaType::QImage,   31,   53,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 9,    8,
    QMetaType::Int, 0x80000000 | 9,    8,
    0x80000000 | 58, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::QVariantMap,    4,
    QMetaType::Void, QMetaType::QVariantMap,    6,
    QMetaType::QString,
    QMetaType::Bool, 0x80000000 | 63, 0x80000000 | 65, 0x80000000 | 67, 0x80000000 | 69,   64,   66,   68,   70,

 // properties: name, type, flags
      61, QMetaType::QString, 0x00095103,

       0        // eod
};

void qSlicerCoreIOManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerCoreIOManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newFileLoaded((*reinterpret_cast< const qSlicerIO::IOProperties(*)>(_a[1]))); break;
        case 1: _t->fileSaved((*reinterpret_cast< const qSlicerIO::IOProperties(*)>(_a[1]))); break;
        case 2: _t->setDefaultSceneFileType((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { qSlicerIO::IOFileType _r = _t->fileType((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerIO::IOFileType*>(_a[0]) = std::move(_r); }  break;
        case 4: { QList<qSlicerIO::IOFileType> _r = _t->fileTypes((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<qSlicerIO::IOFileType>*>(_a[0]) = std::move(_r); }  break;
        case 5: { qSlicerIO::IOFileType _r = _t->fileTypeFromDescription((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerIO::IOFileType*>(_a[0]) = std::move(_r); }  break;
        case 6: { QStringList _r = _t->fileDescriptions((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 7: { qSlicerIO::IOFileType _r = _t->fileWriterFileType((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qSlicerIO::IOFileType*>(_a[0]) = std::move(_r); }  break;
        case 8: { qSlicerIO::IOFileType _r = _t->fileWriterFileType((*reinterpret_cast< vtkObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerIO::IOFileType*>(_a[0]) = std::move(_r); }  break;
        case 9: { QStringList _r = _t->fileWriterDescriptions((*reinterpret_cast< const qSlicerIO::IOFileType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 10: { QStringList _r = _t->fileWriterExtensions((*reinterpret_cast< vtkObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 11: { QStringList _r = _t->allWritableFileExtensions();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 12: { QStringList _r = _t->allReadableFileExtensions();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->completeSlicerWritableFileNameSuffix((*reinterpret_cast< vtkMRMLStorableNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: { QRegExp _r = _t->fileNameRegExp((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRegExp*>(_a[0]) = std::move(_r); }  break;
        case 15: { QRegExp _r = _t->fileNameRegExp();
            if (_a[0]) *reinterpret_cast< QRegExp*>(_a[0]) = std::move(_r); }  break;
        case 16: { QString _r = _t->forceFileNameValidCharacters((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 17: { QString _r = _t->extractKnownExtension((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 18: { QString _r = _t->stripKnownExtension((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->loadNodes((*reinterpret_cast< const qSlicerIO::IOFileType(*)>(_a[1])),(*reinterpret_cast< const qSlicerIO::IOProperties(*)>(_a[2])),(*reinterpret_cast< vtkCollection*(*)>(_a[3])),(*reinterpret_cast< vtkMRMLMessageCollection*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->loadNodes((*reinterpret_cast< const qSlicerIO::IOFileType(*)>(_a[1])),(*reinterpret_cast< const qSlicerIO::IOProperties(*)>(_a[2])),(*reinterpret_cast< vtkCollection*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->loadNodes((*reinterpret_cast< const qSlicerIO::IOFileType(*)>(_a[1])),(*reinterpret_cast< const qSlicerIO::IOProperties(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: { bool _r = _t->loadScene((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< vtkMRMLMessageCollection*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: { bool _r = _t->loadScene((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: { bool _r = _t->loadScene((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->loadFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< vtkMRMLMessageCollection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->loadFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->saveNodes((*reinterpret_cast< qSlicerIO::IOFileType(*)>(_a[1])),(*reinterpret_cast< const qSlicerIO::IOProperties(*)>(_a[2])),(*reinterpret_cast< vtkMRMLMessageCollection*(*)>(_a[3])),(*reinterpret_cast< vtkMRMLScene*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->saveNodes((*reinterpret_cast< qSlicerIO::IOFileType(*)>(_a[1])),(*reinterpret_cast< const qSlicerIO::IOProperties(*)>(_a[2])),(*reinterpret_cast< vtkMRMLMessageCollection*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->saveNodes((*reinterpret_cast< qSlicerIO::IOFileType(*)>(_a[1])),(*reinterpret_cast< const qSlicerIO::IOProperties(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: { bool _r = _t->exportNodes((*reinterpret_cast< const QList<qSlicerIO::IOProperties>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< vtkMRMLMessageCollection*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 31: { bool _r = _t->exportNodes((*reinterpret_cast< const QList<qSlicerIO::IOProperties>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->exportNodes((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const qSlicerIO::IOProperties(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< vtkMRMLMessageCollection*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->exportNodes((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const qSlicerIO::IOProperties(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: { bool _r = _t->saveScene((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2])),(*reinterpret_cast< vtkMRMLMessageCollection*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: { bool _r = _t->saveScene((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 36: _t->addDefaultStorageNodes(); break;
        case 37: { int _r = _t->registeredFileReaderCount((*reinterpret_cast< const qSlicerIO::IOFileType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 38: { int _r = _t->registeredFileWriterCount((*reinterpret_cast< const qSlicerIO::IOFileType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 39: { vtkMRMLStorageNode* _r = _t->createAndAddDefaultStorageNode((*reinterpret_cast< vtkMRMLStorableNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< vtkMRMLStorageNode**>(_a[0]) = std::move(_r); }  break;
        case 40: _t->emitNewFileLoaded((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 41: _t->emitFileSaved((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 42: { QString _r = _t->defaultSceneFileType();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 43: { bool _r = _t->examineFileInfoList((*reinterpret_cast< QFileInfoList(*)>(_a[1])),(*reinterpret_cast< QFileInfo(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< qSlicerIO::IOProperties(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOProperties >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOProperties >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOFileType >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOFileType >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOProperties >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOFileType >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOProperties >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOFileType >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOProperties >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOFileType >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOProperties >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOFileType >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOProperties >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOFileType >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOProperties >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qSlicerIO::IOProperties> >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qSlicerIO::IOProperties> >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOProperties >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOProperties >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOFileType >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOFileType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qSlicerCoreIOManager::*)(const qSlicerIO::IOProperties & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerCoreIOManager::newFileLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qSlicerCoreIOManager::*)(const qSlicerIO::IOProperties & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerCoreIOManager::fileSaved)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerCoreIOManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->defaultSceneFileType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerCoreIOManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDefaultSceneFileType(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerCoreIOManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerCoreIOManager.data,
    qt_meta_data_qSlicerCoreIOManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerCoreIOManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerCoreIOManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerCoreIOManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerCoreIOManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
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

// SIGNAL 0
void qSlicerCoreIOManager::newFileLoaded(const qSlicerIO::IOProperties & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qSlicerCoreIOManager::fileSaved(const qSlicerIO::IOProperties & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
