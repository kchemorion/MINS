/****************************************************************************
** Meta object code from reading C++ file 'qSlicerExportNodeDialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerExportNodeDialog_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerExportNodeDialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NodeTypeWidgetSet_t {
    QByteArrayData data[3];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NodeTypeWidgetSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NodeTypeWidgetSet_t qt_meta_stringdata_NodeTypeWidgetSet = {
    {
QT_MOC_LITERAL(0, 0, 17), // "NodeTypeWidgetSet"
QT_MOC_LITERAL(1, 18, 17), // "formatChangedSlot"
QT_MOC_LITERAL(2, 36, 0) // ""

    },
    "NodeTypeWidgetSet\0formatChangedSlot\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NodeTypeWidgetSet[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void NodeTypeWidgetSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NodeTypeWidgetSet *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->formatChangedSlot(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject NodeTypeWidgetSet::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_NodeTypeWidgetSet.data,
    qt_meta_data_NodeTypeWidgetSet,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NodeTypeWidgetSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NodeTypeWidgetSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NodeTypeWidgetSet.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NodeTypeWidgetSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_qSlicerExportNodeDialogPrivate_t {
    QByteArrayData data[8];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerExportNodeDialogPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerExportNodeDialogPrivate_t qt_meta_stringdata_qSlicerExportNodeDialogPrivate = {
    {
QT_MOC_LITERAL(0, 0, 30), // "qSlicerExportNodeDialogPrivate"
QT_MOC_LITERAL(1, 31, 6), // "accept"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 17), // "formatChangedSlot"
QT_MOC_LITERAL(4, 57, 25), // "onFilenameEditingFinished"
QT_MOC_LITERAL(5, 83, 35), // "onNodeInclusionCheckboxStateC..."
QT_MOC_LITERAL(6, 119, 5), // "state"
QT_MOC_LITERAL(7, 125, 37) // "onIncludeChildrenCheckBoxStat..."

    },
    "qSlicerExportNodeDialogPrivate\0accept\0"
    "\0formatChangedSlot\0onFilenameEditingFinished\0"
    "onNodeInclusionCheckboxStateChanged\0"
    "state\0onIncludeChildrenCheckBoxStateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerExportNodeDialogPrivate[] = {

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
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    1,   42,    2, 0x09 /* Protected */,
       7,    1,   45,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void qSlicerExportNodeDialogPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerExportNodeDialogPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->formatChangedSlot(); break;
        case 2: _t->onFilenameEditingFinished(); break;
        case 3: _t->onNodeInclusionCheckboxStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onIncludeChildrenCheckBoxStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerExportNodeDialogPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qSlicerExportNodeDialogPrivate.data,
    qt_meta_data_qSlicerExportNodeDialogPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerExportNodeDialogPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerExportNodeDialogPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerExportNodeDialogPrivate.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_qSlicerExportNodeDialog"))
        return static_cast< Ui_qSlicerExportNodeDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int qSlicerExportNodeDialogPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
