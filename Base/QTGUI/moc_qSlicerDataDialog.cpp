/****************************************************************************
** Meta object code from reading C++ file 'qSlicerDataDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerDataDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerDataDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerDataDialog_t {
    QByteArrayData data[9];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerDataDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerDataDialog_t qt_meta_stringdata_qSlicerDataDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "qSlicerDataDialog"
QT_MOC_LITERAL(1, 18, 7), // "addFile"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "filePath"
QT_MOC_LITERAL(4, 36, 12), // "addDirectory"
QT_MOC_LITERAL(5, 49, 13), // "directoryPath"
QT_MOC_LITERAL(6, 63, 4), // "exec"
QT_MOC_LITERAL(7, 68, 23), // "qSlicerIO::IOProperties"
QT_MOC_LITERAL(8, 92, 16) // "readerProperties"

    },
    "qSlicerDataDialog\0addFile\0\0filePath\0"
    "addDirectory\0directoryPath\0exec\0"
    "qSlicerIO::IOProperties\0readerProperties"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerDataDialog[] = {

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

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x02 /* Public */,
       6,    0,   43,    2, 0x22 /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 7,    8,
    QMetaType::Bool,

       0        // eod
};

void qSlicerDataDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerDataDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->addDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { bool _r = _t->exec((*reinterpret_cast< const qSlicerIO::IOProperties(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->exec();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIO::IOProperties >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerDataDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerFileDialog::staticMetaObject>(),
    qt_meta_stringdata_qSlicerDataDialog.data,
    qt_meta_data_qSlicerDataDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerDataDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerDataDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerDataDialog.stringdata0))
        return static_cast<void*>(this);
    return qSlicerFileDialog::qt_metacast(_clname);
}

int qSlicerDataDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
