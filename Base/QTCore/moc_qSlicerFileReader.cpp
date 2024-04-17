/****************************************************************************
** Meta object code from reading C++ file 'qSlicerFileReader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTCore/qSlicerFileReader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerFileReader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerFileReader_t {
    QByteArrayData data[21];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerFileReader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerFileReader_t qt_meta_stringdata_qSlicerFileReader = {
    {
QT_MOC_LITERAL(0, 0, 17), // "qSlicerFileReader"
QT_MOC_LITERAL(1, 18, 10), // "extensions"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "canLoadFile"
QT_MOC_LITERAL(4, 42, 4), // "file"
QT_MOC_LITERAL(5, 47, 21), // "canLoadFileConfidence"
QT_MOC_LITERAL(6, 69, 20), // "supportedNameFilters"
QT_MOC_LITERAL(7, 90, 8), // "fileName"
QT_MOC_LITERAL(8, 99, 4), // "int*"
QT_MOC_LITERAL(9, 104, 24), // "longestExtensionMatchPtr"
QT_MOC_LITERAL(10, 129, 4), // "load"
QT_MOC_LITERAL(11, 134, 12), // "IOProperties"
QT_MOC_LITERAL(12, 147, 10), // "properties"
QT_MOC_LITERAL(13, 158, 11), // "loadedNodes"
QT_MOC_LITERAL(14, 170, 19), // "examineFileInfoList"
QT_MOC_LITERAL(15, 190, 14), // "QFileInfoList&"
QT_MOC_LITERAL(16, 205, 12), // "fileInfoList"
QT_MOC_LITERAL(17, 218, 10), // "QFileInfo&"
QT_MOC_LITERAL(18, 229, 17), // "archetypeFileInfo"
QT_MOC_LITERAL(19, 247, 24), // "qSlicerIO::IOProperties&"
QT_MOC_LITERAL(20, 272, 12) // "ioProperties"

    },
    "qSlicerFileReader\0extensions\0\0canLoadFile\0"
    "file\0canLoadFileConfidence\0"
    "supportedNameFilters\0fileName\0int*\0"
    "longestExtensionMatchPtr\0load\0"
    "IOProperties\0properties\0loadedNodes\0"
    "examineFileInfoList\0QFileInfoList&\0"
    "fileInfoList\0QFileInfo&\0archetypeFileInfo\0"
    "qSlicerIO::IOProperties&\0ioProperties"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerFileReader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x02 /* Public */,
       3,    1,   55,    2, 0x02 /* Public */,
       5,    1,   58,    2, 0x02 /* Public */,
       6,    2,   61,    2, 0x02 /* Public */,
       6,    1,   66,    2, 0x22 /* Public | MethodCloned */,
      10,    1,   69,    2, 0x02 /* Public */,
      13,    0,   72,    2, 0x02 /* Public */,
      14,    3,   73,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QStringList,
    QMetaType::Bool, QMetaType::QString,    4,
    QMetaType::Double, QMetaType::QString,    4,
    QMetaType::QStringList, QMetaType::QString, 0x80000000 | 8,    7,    9,
    QMetaType::QStringList, QMetaType::QString,    7,
    QMetaType::Bool, 0x80000000 | 11,   12,
    QMetaType::QStringList,
    QMetaType::Bool, 0x80000000 | 15, 0x80000000 | 17, 0x80000000 | 19,   16,   18,   20,

       0        // eod
};

void qSlicerFileReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerFileReader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QStringList _r = _t->extensions();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->canLoadFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { double _r = _t->canLoadFileConfidence((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 3: { QStringList _r = _t->supportedNameFilters((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 4: { QStringList _r = _t->supportedNameFilters((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->load((*reinterpret_cast< const IOProperties(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { QStringList _r = _t->loadedNodes();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->examineFileInfoList((*reinterpret_cast< QFileInfoList(*)>(_a[1])),(*reinterpret_cast< QFileInfo(*)>(_a[2])),(*reinterpret_cast< qSlicerIO::IOProperties(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerFileReader::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerIO::staticMetaObject>(),
    qt_meta_stringdata_qSlicerFileReader.data,
    qt_meta_data_qSlicerFileReader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerFileReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerFileReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerFileReader.stringdata0))
        return static_cast<void*>(this);
    return qSlicerIO::qt_metacast(_clname);
}

int qSlicerFileReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerIO::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
