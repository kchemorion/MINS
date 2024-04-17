/****************************************************************************
** Meta object code from reading C++ file 'qSlicerErrorReportDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTApp/qSlicerErrorReportDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerErrorReportDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerErrorReportDialog_t {
    QByteArrayData data[8];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerErrorReportDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerErrorReportDialog_t qt_meta_stringdata_qSlicerErrorReportDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "qSlicerErrorReportDialog"
QT_MOC_LITERAL(1, 25, 13), // "onLogFileOpen"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 21), // "onLogFileLocationOpen"
QT_MOC_LITERAL(4, 62, 9), // "onLogCopy"
QT_MOC_LITERAL(5, 72, 25), // "onLogFileSelectionChanged"
QT_MOC_LITERAL(6, 98, 20), // "onLogFileEditClicked"
QT_MOC_LITERAL(7, 119, 8) // "editable"

    },
    "qSlicerErrorReportDialog\0onLogFileOpen\0"
    "\0onLogFileLocationOpen\0onLogCopy\0"
    "onLogFileSelectionChanged\0"
    "onLogFileEditClicked\0editable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerErrorReportDialog[] = {

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
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    0,   42,    2, 0x09 /* Protected */,
       6,    1,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void qSlicerErrorReportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerErrorReportDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onLogFileOpen(); break;
        case 1: _t->onLogFileLocationOpen(); break;
        case 2: _t->onLogCopy(); break;
        case 3: _t->onLogFileSelectionChanged(); break;
        case 4: _t->onLogFileEditClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerErrorReportDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qSlicerErrorReportDialog.data,
    qt_meta_data_qSlicerErrorReportDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerErrorReportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerErrorReportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerErrorReportDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qSlicerErrorReportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
