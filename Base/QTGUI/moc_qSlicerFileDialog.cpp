/****************************************************************************
** Meta object code from reading C++ file 'qSlicerFileDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerFileDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerFileDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerFileDialog_t {
    QByteArrayData data[19];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerFileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerFileDialog_t qt_meta_stringdata_qSlicerFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "qSlicerFileDialog"
QT_MOC_LITERAL(1, 18, 4), // "exec"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 23), // "qSlicerIO::IOProperties"
QT_MOC_LITERAL(4, 48, 12), // "ioProperties"
QT_MOC_LITERAL(5, 61, 11), // "nameFilters"
QT_MOC_LITERAL(6, 73, 21), // "qSlicerIO::IOFileType"
QT_MOC_LITERAL(7, 95, 8), // "fileType"
QT_MOC_LITERAL(8, 104, 18), // "isMimeDataAccepted"
QT_MOC_LITERAL(9, 123, 16), // "const QMimeData*"
QT_MOC_LITERAL(10, 140, 8), // "mimeData"
QT_MOC_LITERAL(11, 149, 9), // "dropEvent"
QT_MOC_LITERAL(12, 159, 11), // "QDropEvent*"
QT_MOC_LITERAL(13, 171, 5), // "event"
QT_MOC_LITERAL(14, 177, 11), // "description"
QT_MOC_LITERAL(15, 189, 11), // "loadedNodes"
QT_MOC_LITERAL(16, 201, 8), // "IOAction"
QT_MOC_LITERAL(17, 210, 4), // "Read"
QT_MOC_LITERAL(18, 215, 5) // "Write"

    },
    "qSlicerFileDialog\0exec\0\0qSlicerIO::IOProperties\0"
    "ioProperties\0nameFilters\0qSlicerIO::IOFileType\0"
    "fileType\0isMimeDataAccepted\0"
    "const QMimeData*\0mimeData\0dropEvent\0"
    "QDropEvent*\0event\0description\0loadedNodes\0"
    "IOAction\0Read\0Write"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerFileDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   58, // properties
       1,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x02 /* Public */,
       1,    0,   47,    2, 0x22 /* Public | MethodCloned */,
       5,    1,   48,    2, 0x02 /* Public */,
       5,    0,   51,    2, 0x22 /* Public | MethodCloned */,
       8,    1,   52,    2, 0x02 /* Public */,
      11,    1,   55,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Bool,
    QMetaType::QStringList, 0x80000000 | 6,    7,
    QMetaType::QStringList,
    QMetaType::Bool, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

 // properties: name, type, flags
      14, QMetaType::QString, 0x00095001,
      15, QMetaType::QStringList, 0x00095001,

 // enums: name, alias, flags, count, data
      16,   16, 0x0,    2,   69,

 // enum data: key, value
      17, uint(qSlicerFileDialog::Read),
      18, uint(qSlicerFileDialog::Write),

       0        // eod
};

void qSlicerFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerFileDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->exec((*reinterpret_cast< const qSlicerIO::IOProperties(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->exec();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { QStringList _r = _t->nameFilters((*reinterpret_cast< qSlicerIO::IOFileType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 3: { QStringList _r = _t->nameFilters();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->isMimeDataAccepted((*reinterpret_cast< const QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->dropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
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
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOFileType >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerFileDialog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->loadedNodes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerFileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerFileDialog.data,
    qt_meta_data_qSlicerFileDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerFileDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
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
struct qt_meta_stringdata_qSlicerStandardFileDialog_t {
    QByteArrayData data[11];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerStandardFileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerStandardFileDialog_t qt_meta_stringdata_qSlicerStandardFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "qSlicerStandardFileDialog"
QT_MOC_LITERAL(1, 26, 15), // "getOpenFileName"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 23), // "qSlicerIO::IOProperties"
QT_MOC_LITERAL(4, 67, 12), // "ioProperties"
QT_MOC_LITERAL(5, 80, 20), // "getExistingDirectory"
QT_MOC_LITERAL(6, 101, 8), // "fileType"
QT_MOC_LITERAL(7, 110, 21), // "qSlicerIO::IOFileType"
QT_MOC_LITERAL(8, 132, 11), // "description"
QT_MOC_LITERAL(9, 144, 6), // "action"
QT_MOC_LITERAL(10, 151, 8) // "IOAction"

    },
    "qSlicerStandardFileDialog\0getOpenFileName\0"
    "\0qSlicerIO::IOProperties\0ioProperties\0"
    "getExistingDirectory\0fileType\0"
    "qSlicerIO::IOFileType\0description\0"
    "action\0IOAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerStandardFileDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x02 /* Public */,
       1,    0,   37,    2, 0x22 /* Public | MethodCloned */,
       5,    1,   38,    2, 0x02 /* Public */,
       5,    0,   41,    2, 0x22 /* Public | MethodCloned */,

 // methods: parameters
    QMetaType::QStringList, 0x80000000 | 3,    4,
    QMetaType::QStringList,
    QMetaType::QString, 0x80000000 | 3,    4,
    QMetaType::QString,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x0009510b,
       8, QMetaType::QString, 0x00095103,
       9, 0x80000000 | 10, 0x0009510b,

       0        // eod
};

void qSlicerStandardFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerStandardFileDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QStringList _r = _t->getOpenFileName((*reinterpret_cast< qSlicerIO::IOProperties(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 1: { QStringList _r = _t->getOpenFileName();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->getExistingDirectory((*reinterpret_cast< qSlicerIO::IOProperties(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->getExistingDirectory();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
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
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOProperties >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOFileType >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerStandardFileDialog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qSlicerIO::IOFileType*>(_v) = _t->fileType(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 2: *reinterpret_cast< IOAction*>(_v) = _t->action(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerStandardFileDialog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileType(*reinterpret_cast< qSlicerIO::IOFileType*>(_v)); break;
        case 1: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setAction(*reinterpret_cast< IOAction*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_qSlicerStandardFileDialog[] = {
    QMetaObject::SuperData::link<qSlicerIO::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject qSlicerStandardFileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerFileDialog::staticMetaObject>(),
    qt_meta_stringdata_qSlicerStandardFileDialog.data,
    qt_meta_data_qSlicerStandardFileDialog,
    qt_static_metacall,
    qt_meta_extradata_qSlicerStandardFileDialog,
    nullptr
} };


const QMetaObject *qSlicerStandardFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerStandardFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerStandardFileDialog.stringdata0))
        return static_cast<void*>(this);
    return qSlicerFileDialog::qt_metacast(_clname);
}

int qSlicerStandardFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerFileDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
