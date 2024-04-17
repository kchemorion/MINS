/****************************************************************************
** Meta object code from reading C++ file 'qSlicerDataDialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerDataDialog_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerDataDialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerDataDialogPrivate_t {
    QByteArrayData data[10];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerDataDialogPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerDataDialogPrivate_t qt_meta_stringdata_qSlicerDataDialogPrivate = {
    {
QT_MOC_LITERAL(0, 0, 24), // "qSlicerDataDialogPrivate"
QT_MOC_LITERAL(1, 25, 12), // "addDirectory"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "addFiles"
QT_MOC_LITERAL(4, 48, 5), // "reset"
QT_MOC_LITERAL(5, 54, 11), // "showOptions"
QT_MOC_LITERAL(6, 66, 17), // "resetColumnWidths"
QT_MOC_LITERAL(7, 84, 22), // "forceFileColumnStretch"
QT_MOC_LITERAL(8, 107, 17), // "onFileTypeChanged"
QT_MOC_LITERAL(9, 125, 19) // "onFileTypeActivated"

    },
    "qSlicerDataDialogPrivate\0addDirectory\0"
    "\0addFiles\0reset\0showOptions\0"
    "resetColumnWidths\0forceFileColumnStretch\0"
    "onFileTypeChanged\0onFileTypeActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerDataDialogPrivate[] = {

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

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       6,    1,   60,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x2a /* Public | MethodCloned */,
       8,    1,   64,    2, 0x09 /* Protected */,
       9,    1,   67,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void qSlicerDataDialogPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerDataDialogPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addDirectory(); break;
        case 1: _t->addFiles(); break;
        case 2: _t->reset(); break;
        case 3: _t->showOptions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->resetColumnWidths((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->resetColumnWidths(); break;
        case 6: _t->onFileTypeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onFileTypeActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerDataDialogPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qSlicerDataDialogPrivate.data,
    qt_meta_data_qSlicerDataDialogPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerDataDialogPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerDataDialogPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerDataDialogPrivate.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_qSlicerDataDialog"))
        return static_cast< Ui_qSlicerDataDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int qSlicerDataDialogPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
