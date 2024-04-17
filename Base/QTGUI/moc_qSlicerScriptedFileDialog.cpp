/****************************************************************************
** Meta object code from reading C++ file 'qSlicerScriptedFileDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerScriptedFileDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerScriptedFileDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerScriptedFileDialog_t {
    QByteArrayData data[11];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerScriptedFileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerScriptedFileDialog_t qt_meta_stringdata_qSlicerScriptedFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "qSlicerScriptedFileDialog"
QT_MOC_LITERAL(1, 26, 14), // "acceptMimeData"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 6), // "accept"
QT_MOC_LITERAL(4, 49, 4), // "self"
QT_MOC_LITERAL(5, 54, 9), // "PyObject*"
QT_MOC_LITERAL(6, 64, 12), // "ioProperties"
QT_MOC_LITERAL(7, 77, 8), // "mimeData"
QT_MOC_LITERAL(8, 86, 16), // "const QMimeData*"
QT_MOC_LITERAL(9, 103, 9), // "dropEvent"
QT_MOC_LITERAL(10, 113, 11) // "QDropEvent*"

    },
    "qSlicerScriptedFileDialog\0acceptMimeData\0"
    "\0accept\0self\0PyObject*\0ioProperties\0"
    "mimeData\0const QMimeData*\0dropEvent\0"
    "QDropEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerScriptedFileDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x02 /* Public */,
       6,    0,   43,    2, 0x02 /* Public */,
       7,    0,   44,    2, 0x02 /* Public */,
       9,    0,   45,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // methods: parameters
    0x80000000 | 5,
    QMetaType::Void,
    0x80000000 | 8,
    0x80000000 | 10,

       0        // eod
};

void qSlicerScriptedFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerScriptedFileDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->acceptMimeData((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { PyObject* _r = _t->self();
            if (_a[0]) *reinterpret_cast< PyObject**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->ioProperties(); break;
        case 3: { const QMimeData* _r = _t->mimeData();
            if (_a[0]) *reinterpret_cast< const QMimeData**>(_a[0]) = std::move(_r); }  break;
        case 4: { QDropEvent* _r = _t->dropEvent();
            if (_a[0]) *reinterpret_cast< QDropEvent**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerScriptedFileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerStandardFileDialog::staticMetaObject>(),
    qt_meta_stringdata_qSlicerScriptedFileDialog.data,
    qt_meta_data_qSlicerScriptedFileDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerScriptedFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerScriptedFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerScriptedFileDialog.stringdata0))
        return static_cast<void*>(this);
    return qSlicerStandardFileDialog::qt_metacast(_clname);
}

int qSlicerScriptedFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerStandardFileDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
