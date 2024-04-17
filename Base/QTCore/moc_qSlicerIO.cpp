/****************************************************************************
** Meta object code from reading C++ file 'qSlicerIO.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTCore/qSlicerIO.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerIO.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerIO_t {
    QByteArrayData data[9];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerIO_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerIO_t qt_meta_stringdata_qSlicerIO = {
    {
QT_MOC_LITERAL(0, 0, 9), // "qSlicerIO"
QT_MOC_LITERAL(1, 10, 11), // "description"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "fileType"
QT_MOC_LITERAL(4, 32, 10), // "IOFileType"
QT_MOC_LITERAL(5, 43, 7), // "options"
QT_MOC_LITERAL(6, 51, 17), // "qSlicerIOOptions*"
QT_MOC_LITERAL(7, 69, 12), // "userMessages"
QT_MOC_LITERAL(8, 82, 25) // "vtkMRMLMessageCollection*"

    },
    "qSlicerIO\0description\0\0fileType\0"
    "IOFileType\0options\0qSlicerIOOptions*\0"
    "userMessages\0vtkMRMLMessageCollection*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerIO[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x02 /* Public */,
       3,    0,   35,    2, 0x02 /* Public */,
       5,    0,   36,    2, 0x02 /* Public */,
       7,    0,   37,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,
    0x80000000 | 4,
    0x80000000 | 6,
    0x80000000 | 8,

       0        // eod
};

void qSlicerIO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerIO *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->description();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { IOFileType _r = _t->fileType();
            if (_a[0]) *reinterpret_cast< IOFileType*>(_a[0]) = std::move(_r); }  break;
        case 2: { qSlicerIOOptions* _r = _t->options();
            if (_a[0]) *reinterpret_cast< qSlicerIOOptions**>(_a[0]) = std::move(_r); }  break;
        case 3: { vtkMRMLMessageCollection* _r = _t->userMessages();
            if (_a[0]) *reinterpret_cast< vtkMRMLMessageCollection**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerIO::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerIO.data,
    qt_meta_data_qSlicerIO,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerIO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerIO::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerIO.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "qSlicerObject"))
        return static_cast< qSlicerObject*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerIO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
