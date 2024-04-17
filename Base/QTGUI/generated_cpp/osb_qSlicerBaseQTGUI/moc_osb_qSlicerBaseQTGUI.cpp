/****************************************************************************
** Meta object code from reading C++ file 'osb_qSlicerBaseQTGUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "osb_qSlicerBaseQTGUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osb_qSlicerBaseQTGUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythonQtWrapper_qSlicerActionsDialog_t {
    QByteArrayData data[8];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerActionsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerActionsDialog_t qt_meta_stringdata_PythonQtWrapper_qSlicerActionsDialog = {
    {
QT_MOC_LITERAL(0, 0, 36), // "PythonQtWrapper_qSlicerAction..."
QT_MOC_LITERAL(1, 37, 24), // "new_qSlicerActionsDialog"
QT_MOC_LITERAL(2, 62, 21), // "qSlicerActionsDialog*"
QT_MOC_LITERAL(3, 84, 0), // ""
QT_MOC_LITERAL(4, 85, 8), // "QWidget*"
QT_MOC_LITERAL(5, 94, 6), // "parent"
QT_MOC_LITERAL(6, 101, 27), // "delete_qSlicerActionsDialog"
QT_MOC_LITERAL(7, 129, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerActionsDialog\0"
    "new_qSlicerActionsDialog\0qSlicerActionsDialog*\0"
    "\0QWidget*\0parent\0delete_qSlicerActionsDialog\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerActionsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerActionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerActionsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerActionsDialog* _r = _t->new_qSlicerActionsDialog((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerActionsDialog**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerActionsDialog* _r = _t->new_qSlicerActionsDialog();
            if (_a[0]) *reinterpret_cast< qSlicerActionsDialog**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerActionsDialog((*reinterpret_cast< qSlicerActionsDialog*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerActionsDialog* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerActionsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerActionsDialog.data,
    qt_meta_data_PythonQtWrapper_qSlicerActionsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerActionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerActionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerActionsDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerActionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerDataDialog_t {
    QByteArrayData data[7];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerDataDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerDataDialog_t qt_meta_stringdata_PythonQtWrapper_qSlicerDataDialog = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PythonQtWrapper_qSlicerDataDi..."
QT_MOC_LITERAL(1, 34, 21), // "new_qSlicerDataDialog"
QT_MOC_LITERAL(2, 56, 18), // "qSlicerDataDialog*"
QT_MOC_LITERAL(3, 75, 0), // ""
QT_MOC_LITERAL(4, 76, 6), // "parent"
QT_MOC_LITERAL(5, 83, 24), // "delete_qSlicerDataDialog"
QT_MOC_LITERAL(6, 108, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerDataDialog\0"
    "new_qSlicerDataDialog\0qSlicerDataDialog*\0"
    "\0parent\0delete_qSlicerDataDialog\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerDataDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerDataDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerDataDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerDataDialog* _r = _t->new_qSlicerDataDialog((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerDataDialog**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerDataDialog* _r = _t->new_qSlicerDataDialog();
            if (_a[0]) *reinterpret_cast< qSlicerDataDialog**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerDataDialog((*reinterpret_cast< qSlicerDataDialog*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerDataDialog* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerDataDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerDataDialog.data,
    qt_meta_data_PythonQtWrapper_qSlicerDataDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerDataDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerDataDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerDataDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerDataDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerDirectoryListView_t {
    QByteArrayData data[8];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerDirectoryListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerDirectoryListView_t qt_meta_stringdata_PythonQtWrapper_qSlicerDirectoryListView = {
    {
QT_MOC_LITERAL(0, 0, 40), // "PythonQtWrapper_qSlicerDirect..."
QT_MOC_LITERAL(1, 41, 28), // "new_qSlicerDirectoryListView"
QT_MOC_LITERAL(2, 70, 25), // "qSlicerDirectoryListView*"
QT_MOC_LITERAL(3, 96, 0), // ""
QT_MOC_LITERAL(4, 97, 8), // "QWidget*"
QT_MOC_LITERAL(5, 106, 6), // "parent"
QT_MOC_LITERAL(6, 113, 31), // "delete_qSlicerDirectoryListView"
QT_MOC_LITERAL(7, 145, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerDirectoryListView\0"
    "new_qSlicerDirectoryListView\0"
    "qSlicerDirectoryListView*\0\0QWidget*\0"
    "parent\0delete_qSlicerDirectoryListView\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerDirectoryListView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerDirectoryListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerDirectoryListView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerDirectoryListView* _r = _t->new_qSlicerDirectoryListView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerDirectoryListView**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerDirectoryListView* _r = _t->new_qSlicerDirectoryListView();
            if (_a[0]) *reinterpret_cast< qSlicerDirectoryListView**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerDirectoryListView((*reinterpret_cast< qSlicerDirectoryListView*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerDirectoryListView* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerDirectoryListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerDirectoryListView.data,
    qt_meta_data_PythonQtWrapper_qSlicerDirectoryListView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerDirectoryListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerDirectoryListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerDirectoryListView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerDirectoryListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerExportNodeDialog_t {
    QByteArrayData data[7];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerExportNodeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerExportNodeDialog_t qt_meta_stringdata_PythonQtWrapper_qSlicerExportNodeDialog = {
    {
QT_MOC_LITERAL(0, 0, 39), // "PythonQtWrapper_qSlicerExport..."
QT_MOC_LITERAL(1, 40, 27), // "new_qSlicerExportNodeDialog"
QT_MOC_LITERAL(2, 68, 24), // "qSlicerExportNodeDialog*"
QT_MOC_LITERAL(3, 93, 0), // ""
QT_MOC_LITERAL(4, 94, 6), // "parent"
QT_MOC_LITERAL(5, 101, 30), // "delete_qSlicerExportNodeDialog"
QT_MOC_LITERAL(6, 132, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerExportNodeDialog\0"
    "new_qSlicerExportNodeDialog\0"
    "qSlicerExportNodeDialog*\0\0parent\0"
    "delete_qSlicerExportNodeDialog\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerExportNodeDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerExportNodeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerExportNodeDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerExportNodeDialog* _r = _t->new_qSlicerExportNodeDialog((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerExportNodeDialog**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerExportNodeDialog* _r = _t->new_qSlicerExportNodeDialog();
            if (_a[0]) *reinterpret_cast< qSlicerExportNodeDialog**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerExportNodeDialog((*reinterpret_cast< qSlicerExportNodeDialog*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerExportNodeDialog* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerExportNodeDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerExportNodeDialog.data,
    qt_meta_data_PythonQtWrapper_qSlicerExportNodeDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerExportNodeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerExportNodeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerExportNodeDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerExportNodeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerFileWriterOptionsWidget_t {
    QByteArrayData data[8];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerFileWriterOptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerFileWriterOptionsWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerFileWriterOptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 46), // "PythonQtWrapper_qSlicerFileWr..."
QT_MOC_LITERAL(1, 47, 34), // "new_qSlicerFileWriterOptionsW..."
QT_MOC_LITERAL(2, 82, 31), // "qSlicerFileWriterOptionsWidget*"
QT_MOC_LITERAL(3, 114, 0), // ""
QT_MOC_LITERAL(4, 115, 8), // "QWidget*"
QT_MOC_LITERAL(5, 124, 6), // "parent"
QT_MOC_LITERAL(6, 131, 37), // "delete_qSlicerFileWriterOptio..."
QT_MOC_LITERAL(7, 169, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerFileWriterOptionsWidget\0"
    "new_qSlicerFileWriterOptionsWidget\0"
    "qSlicerFileWriterOptionsWidget*\0\0"
    "QWidget*\0parent\0delete_qSlicerFileWriterOptionsWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerFileWriterOptionsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerFileWriterOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerFileWriterOptionsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerFileWriterOptionsWidget* _r = _t->new_qSlicerFileWriterOptionsWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerFileWriterOptionsWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerFileWriterOptionsWidget* _r = _t->new_qSlicerFileWriterOptionsWidget();
            if (_a[0]) *reinterpret_cast< qSlicerFileWriterOptionsWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerFileWriterOptionsWidget((*reinterpret_cast< qSlicerFileWriterOptionsWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerFileWriterOptionsWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerFileWriterOptionsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerFileWriterOptionsWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerFileWriterOptionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerFileWriterOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerFileWriterOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerFileWriterOptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerFileWriterOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerIOManager_t {
    QByteArrayData data[7];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerIOManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerIOManager_t qt_meta_stringdata_PythonQtWrapper_qSlicerIOManager = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_qSlicerIOManager"
QT_MOC_LITERAL(1, 33, 20), // "new_qSlicerIOManager"
QT_MOC_LITERAL(2, 54, 17), // "qSlicerIOManager*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 6), // "parent"
QT_MOC_LITERAL(5, 80, 23), // "delete_qSlicerIOManager"
QT_MOC_LITERAL(6, 104, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerIOManager\0"
    "new_qSlicerIOManager\0qSlicerIOManager*\0"
    "\0parent\0delete_qSlicerIOManager\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerIOManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerIOManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerIOManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerIOManager* _r = _t->new_qSlicerIOManager((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerIOManager**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerIOManager* _r = _t->new_qSlicerIOManager();
            if (_a[0]) *reinterpret_cast< qSlicerIOManager**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerIOManager((*reinterpret_cast< qSlicerIOManager*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIOManager* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerIOManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerIOManager.data,
    qt_meta_data_PythonQtWrapper_qSlicerIOManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerIOManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerIOManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerIOManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerIOManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerIOOptionsWidget_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerIOOptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerIOOptionsWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerIOOptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 38), // "PythonQtWrapper_qSlicerIOOpti..."
QT_MOC_LITERAL(1, 39, 26), // "new_qSlicerIOOptionsWidget"
QT_MOC_LITERAL(2, 66, 23), // "qSlicerIOOptionsWidget*"
QT_MOC_LITERAL(3, 90, 0), // ""
QT_MOC_LITERAL(4, 91, 8), // "QWidget*"
QT_MOC_LITERAL(5, 100, 6), // "parent"
QT_MOC_LITERAL(6, 107, 29), // "delete_qSlicerIOOptionsWidget"
QT_MOC_LITERAL(7, 137, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerIOOptionsWidget\0"
    "new_qSlicerIOOptionsWidget\0"
    "qSlicerIOOptionsWidget*\0\0QWidget*\0"
    "parent\0delete_qSlicerIOOptionsWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerIOOptionsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerIOOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerIOOptionsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerIOOptionsWidget* _r = _t->new_qSlicerIOOptionsWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerIOOptionsWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerIOOptionsWidget* _r = _t->new_qSlicerIOOptionsWidget();
            if (_a[0]) *reinterpret_cast< qSlicerIOOptionsWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerIOOptionsWidget((*reinterpret_cast< qSlicerIOOptionsWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerIOOptionsWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerIOOptionsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerIOOptionsWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerIOOptionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerIOOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerIOOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerIOOptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerIOOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerLayoutManager_t {
    QByteArrayData data[8];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerLayoutManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerLayoutManager_t qt_meta_stringdata_PythonQtWrapper_qSlicerLayoutManager = {
    {
QT_MOC_LITERAL(0, 0, 36), // "PythonQtWrapper_qSlicerLayout..."
QT_MOC_LITERAL(1, 37, 24), // "new_qSlicerLayoutManager"
QT_MOC_LITERAL(2, 62, 21), // "qSlicerLayoutManager*"
QT_MOC_LITERAL(3, 84, 0), // ""
QT_MOC_LITERAL(4, 85, 8), // "QWidget*"
QT_MOC_LITERAL(5, 94, 6), // "parent"
QT_MOC_LITERAL(6, 101, 27), // "delete_qSlicerLayoutManager"
QT_MOC_LITERAL(7, 129, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerLayoutManager\0"
    "new_qSlicerLayoutManager\0qSlicerLayoutManager*\0"
    "\0QWidget*\0parent\0delete_qSlicerLayoutManager\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerLayoutManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerLayoutManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerLayoutManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerLayoutManager* _r = _t->new_qSlicerLayoutManager((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerLayoutManager**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerLayoutManager* _r = _t->new_qSlicerLayoutManager();
            if (_a[0]) *reinterpret_cast< qSlicerLayoutManager**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerLayoutManager((*reinterpret_cast< qSlicerLayoutManager*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerLayoutManager* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerLayoutManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerLayoutManager.data,
    qt_meta_data_PythonQtWrapper_qSlicerLayoutManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerLayoutManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerLayoutManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerLayoutManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerLayoutManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerModelsDialog_t {
    QByteArrayData data[7];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerModelsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerModelsDialog_t qt_meta_stringdata_PythonQtWrapper_qSlicerModelsDialog = {
    {
QT_MOC_LITERAL(0, 0, 35), // "PythonQtWrapper_qSlicerModels..."
QT_MOC_LITERAL(1, 36, 23), // "new_qSlicerModelsDialog"
QT_MOC_LITERAL(2, 60, 20), // "qSlicerModelsDialog*"
QT_MOC_LITERAL(3, 81, 0), // ""
QT_MOC_LITERAL(4, 82, 6), // "parent"
QT_MOC_LITERAL(5, 89, 26), // "delete_qSlicerModelsDialog"
QT_MOC_LITERAL(6, 116, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerModelsDialog\0"
    "new_qSlicerModelsDialog\0qSlicerModelsDialog*\0"
    "\0parent\0delete_qSlicerModelsDialog\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerModelsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerModelsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerModelsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerModelsDialog* _r = _t->new_qSlicerModelsDialog((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerModelsDialog**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerModelsDialog* _r = _t->new_qSlicerModelsDialog();
            if (_a[0]) *reinterpret_cast< qSlicerModelsDialog**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerModelsDialog((*reinterpret_cast< qSlicerModelsDialog*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerModelsDialog* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerModelsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerModelsDialog.data,
    qt_meta_data_PythonQtWrapper_qSlicerModelsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerModelsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerModelsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerModelsDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerModelsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFactoryFilterModel_t {
    QByteArrayData data[7];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFactoryFilterModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFactoryFilterModel_t qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFactoryFilterModel = {
    {
QT_MOC_LITERAL(0, 0, 47), // "PythonQtWrapper_qSlicerModule..."
QT_MOC_LITERAL(1, 48, 35), // "new_qSlicerModuleFactoryFilte..."
QT_MOC_LITERAL(2, 84, 32), // "qSlicerModuleFactoryFilterModel*"
QT_MOC_LITERAL(3, 117, 0), // ""
QT_MOC_LITERAL(4, 118, 6), // "parent"
QT_MOC_LITERAL(5, 125, 38), // "delete_qSlicerModuleFactoryFi..."
QT_MOC_LITERAL(6, 164, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerModuleFactoryFilterModel\0"
    "new_qSlicerModuleFactoryFilterModel\0"
    "qSlicerModuleFactoryFilterModel*\0\0"
    "parent\0delete_qSlicerModuleFactoryFilterModel\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerModuleFactoryFilterModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerModuleFactoryFilterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerModuleFactoryFilterModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerModuleFactoryFilterModel* _r = _t->new_qSlicerModuleFactoryFilterModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerModuleFactoryFilterModel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerModuleFactoryFilterModel* _r = _t->new_qSlicerModuleFactoryFilterModel();
            if (_a[0]) *reinterpret_cast< qSlicerModuleFactoryFilterModel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerModuleFactoryFilterModel((*reinterpret_cast< qSlicerModuleFactoryFilterModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerModuleFactoryFilterModel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerModuleFactoryFilterModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFactoryFilterModel.data,
    qt_meta_data_PythonQtWrapper_qSlicerModuleFactoryFilterModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerModuleFactoryFilterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerModuleFactoryFilterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFactoryFilterModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerModuleFactoryFilterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFinderDialog_t {
    QByteArrayData data[8];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFinderDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFinderDialog_t qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFinderDialog = {
    {
QT_MOC_LITERAL(0, 0, 41), // "PythonQtWrapper_qSlicerModule..."
QT_MOC_LITERAL(1, 42, 29), // "new_qSlicerModuleFinderDialog"
QT_MOC_LITERAL(2, 72, 26), // "qSlicerModuleFinderDialog*"
QT_MOC_LITERAL(3, 99, 0), // ""
QT_MOC_LITERAL(4, 100, 8), // "QWidget*"
QT_MOC_LITERAL(5, 109, 6), // "parent"
QT_MOC_LITERAL(6, 116, 32), // "delete_qSlicerModuleFinderDialog"
QT_MOC_LITERAL(7, 149, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerModuleFinderDialog\0"
    "new_qSlicerModuleFinderDialog\0"
    "qSlicerModuleFinderDialog*\0\0QWidget*\0"
    "parent\0delete_qSlicerModuleFinderDialog\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerModuleFinderDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerModuleFinderDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerModuleFinderDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerModuleFinderDialog* _r = _t->new_qSlicerModuleFinderDialog((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerModuleFinderDialog**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerModuleFinderDialog* _r = _t->new_qSlicerModuleFinderDialog();
            if (_a[0]) *reinterpret_cast< qSlicerModuleFinderDialog**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerModuleFinderDialog((*reinterpret_cast< qSlicerModuleFinderDialog*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerModuleFinderDialog* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerModuleFinderDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFinderDialog.data,
    qt_meta_data_PythonQtWrapper_qSlicerModuleFinderDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerModuleFinderDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerModuleFinderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerModuleFinderDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerModuleFinderDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerModulesListView_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerModulesListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerModulesListView_t qt_meta_stringdata_PythonQtWrapper_qSlicerModulesListView = {
    {
QT_MOC_LITERAL(0, 0, 38), // "PythonQtWrapper_qSlicerModule..."
QT_MOC_LITERAL(1, 39, 26), // "new_qSlicerModulesListView"
QT_MOC_LITERAL(2, 66, 23), // "qSlicerModulesListView*"
QT_MOC_LITERAL(3, 90, 0), // ""
QT_MOC_LITERAL(4, 91, 8), // "QWidget*"
QT_MOC_LITERAL(5, 100, 6), // "parent"
QT_MOC_LITERAL(6, 107, 29), // "delete_qSlicerModulesListView"
QT_MOC_LITERAL(7, 137, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerModulesListView\0"
    "new_qSlicerModulesListView\0"
    "qSlicerModulesListView*\0\0QWidget*\0"
    "parent\0delete_qSlicerModulesListView\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerModulesListView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerModulesListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerModulesListView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerModulesListView* _r = _t->new_qSlicerModulesListView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerModulesListView**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerModulesListView* _r = _t->new_qSlicerModulesListView();
            if (_a[0]) *reinterpret_cast< qSlicerModulesListView**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerModulesListView((*reinterpret_cast< qSlicerModulesListView*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerModulesListView* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerModulesListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerModulesListView.data,
    qt_meta_data_PythonQtWrapper_qSlicerModulesListView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerModulesListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerModulesListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerModulesListView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerModulesListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerModulesMenu_t {
    QByteArrayData data[8];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerModulesMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerModulesMenu_t qt_meta_stringdata_PythonQtWrapper_qSlicerModulesMenu = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_qSlicerModule..."
QT_MOC_LITERAL(1, 35, 22), // "new_qSlicerModulesMenu"
QT_MOC_LITERAL(2, 58, 19), // "qSlicerModulesMenu*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 8), // "QWidget*"
QT_MOC_LITERAL(5, 88, 6), // "parent"
QT_MOC_LITERAL(6, 95, 25), // "delete_qSlicerModulesMenu"
QT_MOC_LITERAL(7, 121, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerModulesMenu\0"
    "new_qSlicerModulesMenu\0qSlicerModulesMenu*\0"
    "\0QWidget*\0parent\0delete_qSlicerModulesMenu\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerModulesMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerModulesMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerModulesMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerModulesMenu* _r = _t->new_qSlicerModulesMenu((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerModulesMenu**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerModulesMenu* _r = _t->new_qSlicerModulesMenu();
            if (_a[0]) *reinterpret_cast< qSlicerModulesMenu**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerModulesMenu((*reinterpret_cast< qSlicerModulesMenu*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerModulesMenu* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerModulesMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerModulesMenu.data,
    qt_meta_data_PythonQtWrapper_qSlicerModulesMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerModulesMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerModulesMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerModulesMenu.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerModulesMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerModulePanel_t {
    QByteArrayData data[8];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerModulePanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerModulePanel_t qt_meta_stringdata_PythonQtWrapper_qSlicerModulePanel = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_qSlicerModule..."
QT_MOC_LITERAL(1, 35, 22), // "new_qSlicerModulePanel"
QT_MOC_LITERAL(2, 58, 19), // "qSlicerModulePanel*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 8), // "QWidget*"
QT_MOC_LITERAL(5, 88, 6), // "parent"
QT_MOC_LITERAL(6, 95, 25), // "delete_qSlicerModulePanel"
QT_MOC_LITERAL(7, 121, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerModulePanel\0"
    "new_qSlicerModulePanel\0qSlicerModulePanel*\0"
    "\0QWidget*\0parent\0delete_qSlicerModulePanel\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerModulePanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerModulePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerModulePanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerModulePanel* _r = _t->new_qSlicerModulePanel((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerModulePanel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerModulePanel* _r = _t->new_qSlicerModulePanel();
            if (_a[0]) *reinterpret_cast< qSlicerModulePanel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerModulePanel((*reinterpret_cast< qSlicerModulePanel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerModulePanel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerModulePanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerModulePanel.data,
    qt_meta_data_PythonQtWrapper_qSlicerModulePanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerModulePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerModulePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerModulePanel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerModulePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerModuleSelectorToolBar_t {
    QByteArrayData data[8];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerModuleSelectorToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerModuleSelectorToolBar_t qt_meta_stringdata_PythonQtWrapper_qSlicerModuleSelectorToolBar = {
    {
QT_MOC_LITERAL(0, 0, 44), // "PythonQtWrapper_qSlicerModule..."
QT_MOC_LITERAL(1, 45, 32), // "new_qSlicerModuleSelectorToolBar"
QT_MOC_LITERAL(2, 78, 29), // "qSlicerModuleSelectorToolBar*"
QT_MOC_LITERAL(3, 108, 0), // ""
QT_MOC_LITERAL(4, 109, 8), // "QWidget*"
QT_MOC_LITERAL(5, 118, 6), // "parent"
QT_MOC_LITERAL(6, 125, 35), // "delete_qSlicerModuleSelectorT..."
QT_MOC_LITERAL(7, 161, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerModuleSelectorToolBar\0"
    "new_qSlicerModuleSelectorToolBar\0"
    "qSlicerModuleSelectorToolBar*\0\0QWidget*\0"
    "parent\0delete_qSlicerModuleSelectorToolBar\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerModuleSelectorToolBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerModuleSelectorToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerModuleSelectorToolBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerModuleSelectorToolBar* _r = _t->new_qSlicerModuleSelectorToolBar((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerModuleSelectorToolBar**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerModuleSelectorToolBar* _r = _t->new_qSlicerModuleSelectorToolBar();
            if (_a[0]) *reinterpret_cast< qSlicerModuleSelectorToolBar**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerModuleSelectorToolBar((*reinterpret_cast< qSlicerModuleSelectorToolBar*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerModuleSelectorToolBar* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerModuleSelectorToolBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerModuleSelectorToolBar.data,
    qt_meta_data_PythonQtWrapper_qSlicerModuleSelectorToolBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerModuleSelectorToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerModuleSelectorToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerModuleSelectorToolBar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerModuleSelectorToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerMouseModeToolBar_t {
    QByteArrayData data[8];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerMouseModeToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerMouseModeToolBar_t qt_meta_stringdata_PythonQtWrapper_qSlicerMouseModeToolBar = {
    {
QT_MOC_LITERAL(0, 0, 39), // "PythonQtWrapper_qSlicerMouseM..."
QT_MOC_LITERAL(1, 40, 27), // "new_qSlicerMouseModeToolBar"
QT_MOC_LITERAL(2, 68, 24), // "qSlicerMouseModeToolBar*"
QT_MOC_LITERAL(3, 93, 0), // ""
QT_MOC_LITERAL(4, 94, 8), // "QWidget*"
QT_MOC_LITERAL(5, 103, 6), // "parent"
QT_MOC_LITERAL(6, 110, 30), // "delete_qSlicerMouseModeToolBar"
QT_MOC_LITERAL(7, 141, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerMouseModeToolBar\0"
    "new_qSlicerMouseModeToolBar\0"
    "qSlicerMouseModeToolBar*\0\0QWidget*\0"
    "parent\0delete_qSlicerMouseModeToolBar\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerMouseModeToolBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerMouseModeToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerMouseModeToolBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerMouseModeToolBar* _r = _t->new_qSlicerMouseModeToolBar((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerMouseModeToolBar**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerMouseModeToolBar* _r = _t->new_qSlicerMouseModeToolBar();
            if (_a[0]) *reinterpret_cast< qSlicerMouseModeToolBar**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerMouseModeToolBar((*reinterpret_cast< qSlicerMouseModeToolBar*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerMouseModeToolBar* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerMouseModeToolBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerMouseModeToolBar.data,
    qt_meta_data_PythonQtWrapper_qSlicerMouseModeToolBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerMouseModeToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerMouseModeToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerMouseModeToolBar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerMouseModeToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerNodeWriterOptionsWidget_t {
    QByteArrayData data[8];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerNodeWriterOptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerNodeWriterOptionsWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerNodeWriterOptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 46), // "PythonQtWrapper_qSlicerNodeWr..."
QT_MOC_LITERAL(1, 47, 34), // "new_qSlicerNodeWriterOptionsW..."
QT_MOC_LITERAL(2, 82, 31), // "qSlicerNodeWriterOptionsWidget*"
QT_MOC_LITERAL(3, 114, 0), // ""
QT_MOC_LITERAL(4, 115, 8), // "QWidget*"
QT_MOC_LITERAL(5, 124, 6), // "parent"
QT_MOC_LITERAL(6, 131, 37), // "delete_qSlicerNodeWriterOptio..."
QT_MOC_LITERAL(7, 169, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerNodeWriterOptionsWidget\0"
    "new_qSlicerNodeWriterOptionsWidget\0"
    "qSlicerNodeWriterOptionsWidget*\0\0"
    "QWidget*\0parent\0delete_qSlicerNodeWriterOptionsWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerNodeWriterOptionsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerNodeWriterOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerNodeWriterOptionsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerNodeWriterOptionsWidget* _r = _t->new_qSlicerNodeWriterOptionsWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerNodeWriterOptionsWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerNodeWriterOptionsWidget* _r = _t->new_qSlicerNodeWriterOptionsWidget();
            if (_a[0]) *reinterpret_cast< qSlicerNodeWriterOptionsWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerNodeWriterOptionsWidget((*reinterpret_cast< qSlicerNodeWriterOptionsWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerNodeWriterOptionsWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerNodeWriterOptionsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerNodeWriterOptionsWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerNodeWriterOptionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerNodeWriterOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerNodeWriterOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerNodeWriterOptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerNodeWriterOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSaveDataDialog_t {
    QByteArrayData data[7];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSaveDataDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSaveDataDialog_t qt_meta_stringdata_PythonQtWrapper_qSlicerSaveDataDialog = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_qSlicerSaveDa..."
QT_MOC_LITERAL(1, 38, 25), // "new_qSlicerSaveDataDialog"
QT_MOC_LITERAL(2, 64, 22), // "qSlicerSaveDataDialog*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 6), // "parent"
QT_MOC_LITERAL(5, 95, 28), // "delete_qSlicerSaveDataDialog"
QT_MOC_LITERAL(6, 124, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSaveDataDialog\0"
    "new_qSlicerSaveDataDialog\0"
    "qSlicerSaveDataDialog*\0\0parent\0"
    "delete_qSlicerSaveDataDialog\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSaveDataDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerSaveDataDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSaveDataDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSaveDataDialog* _r = _t->new_qSlicerSaveDataDialog((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSaveDataDialog**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSaveDataDialog* _r = _t->new_qSlicerSaveDataDialog();
            if (_a[0]) *reinterpret_cast< qSlicerSaveDataDialog**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSaveDataDialog((*reinterpret_cast< qSlicerSaveDataDialog*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSaveDataDialog* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSaveDataDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSaveDataDialog.data,
    qt_meta_data_PythonQtWrapper_qSlicerSaveDataDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSaveDataDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSaveDataDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSaveDataDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSaveDataDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsCachePanel_t {
    QByteArrayData data[8];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsCachePanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsCachePanel_t qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsCachePanel = {
    {
QT_MOC_LITERAL(0, 0, 41), // "PythonQtWrapper_qSlicerSettin..."
QT_MOC_LITERAL(1, 42, 29), // "new_qSlicerSettingsCachePanel"
QT_MOC_LITERAL(2, 72, 26), // "qSlicerSettingsCachePanel*"
QT_MOC_LITERAL(3, 99, 0), // ""
QT_MOC_LITERAL(4, 100, 8), // "QWidget*"
QT_MOC_LITERAL(5, 109, 6), // "parent"
QT_MOC_LITERAL(6, 116, 32), // "delete_qSlicerSettingsCachePanel"
QT_MOC_LITERAL(7, 149, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSettingsCachePanel\0"
    "new_qSlicerSettingsCachePanel\0"
    "qSlicerSettingsCachePanel*\0\0QWidget*\0"
    "parent\0delete_qSlicerSettingsCachePanel\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSettingsCachePanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerSettingsCachePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSettingsCachePanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSettingsCachePanel* _r = _t->new_qSlicerSettingsCachePanel((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSettingsCachePanel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSettingsCachePanel* _r = _t->new_qSlicerSettingsCachePanel();
            if (_a[0]) *reinterpret_cast< qSlicerSettingsCachePanel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSettingsCachePanel((*reinterpret_cast< qSlicerSettingsCachePanel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSettingsCachePanel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSettingsCachePanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsCachePanel.data,
    qt_meta_data_PythonQtWrapper_qSlicerSettingsCachePanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSettingsCachePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSettingsCachePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsCachePanel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSettingsCachePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsGeneralPanel_t {
    QByteArrayData data[8];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsGeneralPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsGeneralPanel_t qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsGeneralPanel = {
    {
QT_MOC_LITERAL(0, 0, 43), // "PythonQtWrapper_qSlicerSettin..."
QT_MOC_LITERAL(1, 44, 31), // "new_qSlicerSettingsGeneralPanel"
QT_MOC_LITERAL(2, 76, 28), // "qSlicerSettingsGeneralPanel*"
QT_MOC_LITERAL(3, 105, 0), // ""
QT_MOC_LITERAL(4, 106, 8), // "QWidget*"
QT_MOC_LITERAL(5, 115, 6), // "parent"
QT_MOC_LITERAL(6, 122, 34), // "delete_qSlicerSettingsGeneral..."
QT_MOC_LITERAL(7, 157, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSettingsGeneralPanel\0"
    "new_qSlicerSettingsGeneralPanel\0"
    "qSlicerSettingsGeneralPanel*\0\0QWidget*\0"
    "parent\0delete_qSlicerSettingsGeneralPanel\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSettingsGeneralPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerSettingsGeneralPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSettingsGeneralPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSettingsGeneralPanel* _r = _t->new_qSlicerSettingsGeneralPanel((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSettingsGeneralPanel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSettingsGeneralPanel* _r = _t->new_qSlicerSettingsGeneralPanel();
            if (_a[0]) *reinterpret_cast< qSlicerSettingsGeneralPanel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSettingsGeneralPanel((*reinterpret_cast< qSlicerSettingsGeneralPanel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSettingsGeneralPanel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSettingsGeneralPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsGeneralPanel.data,
    qt_meta_data_PythonQtWrapper_qSlicerSettingsGeneralPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSettingsGeneralPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSettingsGeneralPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsGeneralPanel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSettingsGeneralPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsModulesPanel_t {
    QByteArrayData data[8];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsModulesPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsModulesPanel_t qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsModulesPanel = {
    {
QT_MOC_LITERAL(0, 0, 43), // "PythonQtWrapper_qSlicerSettin..."
QT_MOC_LITERAL(1, 44, 31), // "new_qSlicerSettingsModulesPanel"
QT_MOC_LITERAL(2, 76, 28), // "qSlicerSettingsModulesPanel*"
QT_MOC_LITERAL(3, 105, 0), // ""
QT_MOC_LITERAL(4, 106, 8), // "QWidget*"
QT_MOC_LITERAL(5, 115, 6), // "parent"
QT_MOC_LITERAL(6, 122, 34), // "delete_qSlicerSettingsModules..."
QT_MOC_LITERAL(7, 157, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSettingsModulesPanel\0"
    "new_qSlicerSettingsModulesPanel\0"
    "qSlicerSettingsModulesPanel*\0\0QWidget*\0"
    "parent\0delete_qSlicerSettingsModulesPanel\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSettingsModulesPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerSettingsModulesPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSettingsModulesPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSettingsModulesPanel* _r = _t->new_qSlicerSettingsModulesPanel((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSettingsModulesPanel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSettingsModulesPanel* _r = _t->new_qSlicerSettingsModulesPanel();
            if (_a[0]) *reinterpret_cast< qSlicerSettingsModulesPanel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSettingsModulesPanel((*reinterpret_cast< qSlicerSettingsModulesPanel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSettingsModulesPanel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSettingsModulesPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsModulesPanel.data,
    qt_meta_data_PythonQtWrapper_qSlicerSettingsModulesPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSettingsModulesPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSettingsModulesPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsModulesPanel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSettingsModulesPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsStylesPanel_t {
    QByteArrayData data[8];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsStylesPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsStylesPanel_t qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsStylesPanel = {
    {
QT_MOC_LITERAL(0, 0, 42), // "PythonQtWrapper_qSlicerSettin..."
QT_MOC_LITERAL(1, 43, 30), // "new_qSlicerSettingsStylesPanel"
QT_MOC_LITERAL(2, 74, 27), // "qSlicerSettingsStylesPanel*"
QT_MOC_LITERAL(3, 102, 0), // ""
QT_MOC_LITERAL(4, 103, 8), // "QWidget*"
QT_MOC_LITERAL(5, 112, 6), // "parent"
QT_MOC_LITERAL(6, 119, 33), // "delete_qSlicerSettingsStylesP..."
QT_MOC_LITERAL(7, 153, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSettingsStylesPanel\0"
    "new_qSlicerSettingsStylesPanel\0"
    "qSlicerSettingsStylesPanel*\0\0QWidget*\0"
    "parent\0delete_qSlicerSettingsStylesPanel\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSettingsStylesPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerSettingsStylesPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSettingsStylesPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSettingsStylesPanel* _r = _t->new_qSlicerSettingsStylesPanel((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSettingsStylesPanel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSettingsStylesPanel* _r = _t->new_qSlicerSettingsStylesPanel();
            if (_a[0]) *reinterpret_cast< qSlicerSettingsStylesPanel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSettingsStylesPanel((*reinterpret_cast< qSlicerSettingsStylesPanel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSettingsStylesPanel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSettingsStylesPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsStylesPanel.data,
    qt_meta_data_PythonQtWrapper_qSlicerSettingsStylesPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSettingsStylesPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSettingsStylesPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsStylesPanel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSettingsStylesPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsViewsPanel_t {
    QByteArrayData data[8];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsViewsPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsViewsPanel_t qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsViewsPanel = {
    {
QT_MOC_LITERAL(0, 0, 41), // "PythonQtWrapper_qSlicerSettin..."
QT_MOC_LITERAL(1, 42, 29), // "new_qSlicerSettingsViewsPanel"
QT_MOC_LITERAL(2, 72, 26), // "qSlicerSettingsViewsPanel*"
QT_MOC_LITERAL(3, 99, 0), // ""
QT_MOC_LITERAL(4, 100, 8), // "QWidget*"
QT_MOC_LITERAL(5, 109, 6), // "parent"
QT_MOC_LITERAL(6, 116, 32), // "delete_qSlicerSettingsViewsPanel"
QT_MOC_LITERAL(7, 149, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSettingsViewsPanel\0"
    "new_qSlicerSettingsViewsPanel\0"
    "qSlicerSettingsViewsPanel*\0\0QWidget*\0"
    "parent\0delete_qSlicerSettingsViewsPanel\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSettingsViewsPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerSettingsViewsPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSettingsViewsPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSettingsViewsPanel* _r = _t->new_qSlicerSettingsViewsPanel((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSettingsViewsPanel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSettingsViewsPanel* _r = _t->new_qSlicerSettingsViewsPanel();
            if (_a[0]) *reinterpret_cast< qSlicerSettingsViewsPanel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSettingsViewsPanel((*reinterpret_cast< qSlicerSettingsViewsPanel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSettingsViewsPanel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSettingsViewsPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsViewsPanel.data,
    qt_meta_data_PythonQtWrapper_qSlicerSettingsViewsPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSettingsViewsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSettingsViewsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsViewsPanel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSettingsViewsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsDeveloperPanel_t {
    QByteArrayData data[8];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsDeveloperPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsDeveloperPanel_t qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsDeveloperPanel = {
    {
QT_MOC_LITERAL(0, 0, 45), // "PythonQtWrapper_qSlicerSettin..."
QT_MOC_LITERAL(1, 46, 33), // "new_qSlicerSettingsDeveloperP..."
QT_MOC_LITERAL(2, 80, 30), // "qSlicerSettingsDeveloperPanel*"
QT_MOC_LITERAL(3, 111, 0), // ""
QT_MOC_LITERAL(4, 112, 8), // "QWidget*"
QT_MOC_LITERAL(5, 121, 6), // "parent"
QT_MOC_LITERAL(6, 128, 36), // "delete_qSlicerSettingsDevelop..."
QT_MOC_LITERAL(7, 165, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSettingsDeveloperPanel\0"
    "new_qSlicerSettingsDeveloperPanel\0"
    "qSlicerSettingsDeveloperPanel*\0\0"
    "QWidget*\0parent\0delete_qSlicerSettingsDeveloperPanel\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSettingsDeveloperPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerSettingsDeveloperPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSettingsDeveloperPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSettingsDeveloperPanel* _r = _t->new_qSlicerSettingsDeveloperPanel((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSettingsDeveloperPanel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSettingsDeveloperPanel* _r = _t->new_qSlicerSettingsDeveloperPanel();
            if (_a[0]) *reinterpret_cast< qSlicerSettingsDeveloperPanel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSettingsDeveloperPanel((*reinterpret_cast< qSlicerSettingsDeveloperPanel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSettingsDeveloperPanel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSettingsDeveloperPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsDeveloperPanel.data,
    qt_meta_data_PythonQtWrapper_qSlicerSettingsDeveloperPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSettingsDeveloperPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSettingsDeveloperPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsDeveloperPanel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSettingsDeveloperPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsUserInformationPanel_t {
    QByteArrayData data[8];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsUserInformationPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsUserInformationPanel_t qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsUserInformationPanel = {
    {
QT_MOC_LITERAL(0, 0, 51), // "PythonQtWrapper_qSlicerSettin..."
QT_MOC_LITERAL(1, 52, 39), // "new_qSlicerSettingsUserInform..."
QT_MOC_LITERAL(2, 92, 36), // "qSlicerSettingsUserInformatio..."
QT_MOC_LITERAL(3, 129, 0), // ""
QT_MOC_LITERAL(4, 130, 8), // "QWidget*"
QT_MOC_LITERAL(5, 139, 6), // "parent"
QT_MOC_LITERAL(6, 146, 42), // "delete_qSlicerSettingsUserInf..."
QT_MOC_LITERAL(7, 189, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSettingsUserInformationPanel\0"
    "new_qSlicerSettingsUserInformationPanel\0"
    "qSlicerSettingsUserInformationPanel*\0"
    "\0QWidget*\0parent\0"
    "delete_qSlicerSettingsUserInformationPanel\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSettingsUserInformationPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerSettingsUserInformationPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSettingsUserInformationPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSettingsUserInformationPanel* _r = _t->new_qSlicerSettingsUserInformationPanel((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSettingsUserInformationPanel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSettingsUserInformationPanel* _r = _t->new_qSlicerSettingsUserInformationPanel();
            if (_a[0]) *reinterpret_cast< qSlicerSettingsUserInformationPanel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSettingsUserInformationPanel((*reinterpret_cast< qSlicerSettingsUserInformationPanel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSettingsUserInformationPanel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSettingsUserInformationPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsUserInformationPanel.data,
    qt_meta_data_PythonQtWrapper_qSlicerSettingsUserInformationPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSettingsUserInformationPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSettingsUserInformationPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsUserInformationPanel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSettingsUserInformationPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerViewersToolBar_t {
    QByteArrayData data[8];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerViewersToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerViewersToolBar_t qt_meta_stringdata_PythonQtWrapper_qSlicerViewersToolBar = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_qSlicerViewer..."
QT_MOC_LITERAL(1, 38, 25), // "new_qSlicerViewersToolBar"
QT_MOC_LITERAL(2, 64, 22), // "qSlicerViewersToolBar*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 8), // "QWidget*"
QT_MOC_LITERAL(5, 97, 6), // "parent"
QT_MOC_LITERAL(6, 104, 28), // "delete_qSlicerViewersToolBar"
QT_MOC_LITERAL(7, 133, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerViewersToolBar\0"
    "new_qSlicerViewersToolBar\0"
    "qSlicerViewersToolBar*\0\0QWidget*\0"
    "parent\0delete_qSlicerViewersToolBar\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerViewersToolBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerViewersToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerViewersToolBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerViewersToolBar* _r = _t->new_qSlicerViewersToolBar((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerViewersToolBar**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerViewersToolBar* _r = _t->new_qSlicerViewersToolBar();
            if (_a[0]) *reinterpret_cast< qSlicerViewersToolBar**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerViewersToolBar((*reinterpret_cast< qSlicerViewersToolBar*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerViewersToolBar* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerViewersToolBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerViewersToolBar.data,
    qt_meta_data_PythonQtWrapper_qSlicerViewersToolBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerViewersToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerViewersToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerViewersToolBar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerViewersToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerWidget_t {
    QByteArrayData data[8];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "PythonQtWrapper_qSlicerWidget"
QT_MOC_LITERAL(1, 30, 17), // "new_qSlicerWidget"
QT_MOC_LITERAL(2, 48, 14), // "qSlicerWidget*"
QT_MOC_LITERAL(3, 63, 0), // ""
QT_MOC_LITERAL(4, 64, 8), // "QWidget*"
QT_MOC_LITERAL(5, 73, 6), // "parent"
QT_MOC_LITERAL(6, 80, 20), // "delete_qSlicerWidget"
QT_MOC_LITERAL(7, 101, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerWidget\0"
    "new_qSlicerWidget\0qSlicerWidget*\0\0"
    "QWidget*\0parent\0delete_qSlicerWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerWidget* _r = _t->new_qSlicerWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerWidget* _r = _t->new_qSlicerWidget();
            if (_a[0]) *reinterpret_cast< qSlicerWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerWidget((*reinterpret_cast< qSlicerWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSingletonViewFactory_t {
    QByteArrayData data[7];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSingletonViewFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSingletonViewFactory_t qt_meta_stringdata_PythonQtWrapper_qSlicerSingletonViewFactory = {
    {
QT_MOC_LITERAL(0, 0, 43), // "PythonQtWrapper_qSlicerSingle..."
QT_MOC_LITERAL(1, 44, 31), // "new_qSlicerSingletonViewFactory"
QT_MOC_LITERAL(2, 76, 28), // "qSlicerSingletonViewFactory*"
QT_MOC_LITERAL(3, 105, 0), // ""
QT_MOC_LITERAL(4, 106, 6), // "parent"
QT_MOC_LITERAL(5, 113, 34), // "delete_qSlicerSingletonViewFa..."
QT_MOC_LITERAL(6, 148, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSingletonViewFactory\0"
    "new_qSlicerSingletonViewFactory\0"
    "qSlicerSingletonViewFactory*\0\0parent\0"
    "delete_qSlicerSingletonViewFactory\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSingletonViewFactory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerSingletonViewFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSingletonViewFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSingletonViewFactory* _r = _t->new_qSlicerSingletonViewFactory((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSingletonViewFactory**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSingletonViewFactory* _r = _t->new_qSlicerSingletonViewFactory();
            if (_a[0]) *reinterpret_cast< qSlicerSingletonViewFactory**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSingletonViewFactory((*reinterpret_cast< qSlicerSingletonViewFactory*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSingletonViewFactory* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSingletonViewFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSingletonViewFactory.data,
    qt_meta_data_PythonQtWrapper_qSlicerSingletonViewFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSingletonViewFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSingletonViewFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSingletonViewFactory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSingletonViewFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsInternationalizationPanel_t {
    QByteArrayData data[8];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsInternationalizationPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsInternationalizationPanel_t qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsInternationalizationPanel = {
    {
QT_MOC_LITERAL(0, 0, 56), // "PythonQtWrapper_qSlicerSettin..."
QT_MOC_LITERAL(1, 57, 44), // "new_qSlicerSettingsInternatio..."
QT_MOC_LITERAL(2, 102, 41), // "qSlicerSettingsInternationali..."
QT_MOC_LITERAL(3, 144, 0), // ""
QT_MOC_LITERAL(4, 145, 8), // "QWidget*"
QT_MOC_LITERAL(5, 154, 6), // "parent"
QT_MOC_LITERAL(6, 161, 47), // "delete_qSlicerSettingsInterna..."
QT_MOC_LITERAL(7, 209, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSettingsInternationalizationPanel\0"
    "new_qSlicerSettingsInternationalizationPanel\0"
    "qSlicerSettingsInternationalizationPanel*\0"
    "\0QWidget*\0parent\0"
    "delete_qSlicerSettingsInternationalizationPanel\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSettingsInternationalizationPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerSettingsInternationalizationPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSettingsInternationalizationPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSettingsInternationalizationPanel* _r = _t->new_qSlicerSettingsInternationalizationPanel((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSettingsInternationalizationPanel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSettingsInternationalizationPanel* _r = _t->new_qSlicerSettingsInternationalizationPanel();
            if (_a[0]) *reinterpret_cast< qSlicerSettingsInternationalizationPanel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSettingsInternationalizationPanel((*reinterpret_cast< qSlicerSettingsInternationalizationPanel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSettingsInternationalizationPanel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSettingsInternationalizationPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsInternationalizationPanel.data,
    qt_meta_data_PythonQtWrapper_qSlicerSettingsInternationalizationPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSettingsInternationalizationPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSettingsInternationalizationPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsInternationalizationPanel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSettingsInternationalizationPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerWebPythonProxy_t {
    QByteArrayData data[7];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerWebPythonProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerWebPythonProxy_t qt_meta_stringdata_PythonQtWrapper_qSlicerWebPythonProxy = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_qSlicerWebPyt..."
QT_MOC_LITERAL(1, 38, 25), // "new_qSlicerWebPythonProxy"
QT_MOC_LITERAL(2, 64, 22), // "qSlicerWebPythonProxy*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 6), // "parent"
QT_MOC_LITERAL(5, 95, 28), // "delete_qSlicerWebPythonProxy"
QT_MOC_LITERAL(6, 124, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerWebPythonProxy\0"
    "new_qSlicerWebPythonProxy\0"
    "qSlicerWebPythonProxy*\0\0parent\0"
    "delete_qSlicerWebPythonProxy\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerWebPythonProxy[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerWebPythonProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerWebPythonProxy *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerWebPythonProxy* _r = _t->new_qSlicerWebPythonProxy((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerWebPythonProxy**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerWebPythonProxy* _r = _t->new_qSlicerWebPythonProxy();
            if (_a[0]) *reinterpret_cast< qSlicerWebPythonProxy**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerWebPythonProxy((*reinterpret_cast< qSlicerWebPythonProxy*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerWebPythonProxy* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerWebPythonProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerWebPythonProxy.data,
    qt_meta_data_PythonQtWrapper_qSlicerWebPythonProxy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerWebPythonProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerWebPythonProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerWebPythonProxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerWebPythonProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerWebDownloadWidget_t {
    QByteArrayData data[8];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerWebDownloadWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerWebDownloadWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerWebDownloadWidget = {
    {
QT_MOC_LITERAL(0, 0, 40), // "PythonQtWrapper_qSlicerWebDow..."
QT_MOC_LITERAL(1, 41, 28), // "new_qSlicerWebDownloadWidget"
QT_MOC_LITERAL(2, 70, 25), // "qSlicerWebDownloadWidget*"
QT_MOC_LITERAL(3, 96, 0), // ""
QT_MOC_LITERAL(4, 97, 8), // "QWidget*"
QT_MOC_LITERAL(5, 106, 6), // "parent"
QT_MOC_LITERAL(6, 113, 31), // "delete_qSlicerWebDownloadWidget"
QT_MOC_LITERAL(7, 145, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerWebDownloadWidget\0"
    "new_qSlicerWebDownloadWidget\0"
    "qSlicerWebDownloadWidget*\0\0QWidget*\0"
    "parent\0delete_qSlicerWebDownloadWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerWebDownloadWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerWebDownloadWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerWebDownloadWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerWebDownloadWidget* _r = _t->new_qSlicerWebDownloadWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerWebDownloadWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerWebDownloadWidget* _r = _t->new_qSlicerWebDownloadWidget();
            if (_a[0]) *reinterpret_cast< qSlicerWebDownloadWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerWebDownloadWidget((*reinterpret_cast< qSlicerWebDownloadWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerWebDownloadWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerWebDownloadWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerWebDownloadWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerWebDownloadWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerWebDownloadWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerWebDownloadWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerWebDownloadWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerWebDownloadWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerWebWidget_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerWebWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerWebWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerWebWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_qSlicerWebWidget"
QT_MOC_LITERAL(1, 33, 20), // "new_qSlicerWebWidget"
QT_MOC_LITERAL(2, 54, 17), // "qSlicerWebWidget*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 8), // "QWidget*"
QT_MOC_LITERAL(5, 82, 6), // "parent"
QT_MOC_LITERAL(6, 89, 23), // "delete_qSlicerWebWidget"
QT_MOC_LITERAL(7, 113, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerWebWidget\0"
    "new_qSlicerWebWidget\0qSlicerWebWidget*\0"
    "\0QWidget*\0parent\0delete_qSlicerWebWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerWebWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerWebWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerWebWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerWebWidget* _r = _t->new_qSlicerWebWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerWebWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerWebWidget* _r = _t->new_qSlicerWebWidget();
            if (_a[0]) *reinterpret_cast< qSlicerWebWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerWebWidget((*reinterpret_cast< qSlicerWebWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerWebWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerWebWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerWebWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerWebWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerWebWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerWebWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerWebWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerWebWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedLoadableModuleWidget_t {
    QByteArrayData data[8];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedLoadableModuleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedLoadableModuleWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedLoadableModuleWidget = {
    {
QT_MOC_LITERAL(0, 0, 51), // "PythonQtWrapper_qSlicerScript..."
QT_MOC_LITERAL(1, 52, 39), // "new_qSlicerScriptedLoadableMo..."
QT_MOC_LITERAL(2, 92, 36), // "qSlicerScriptedLoadableModule..."
QT_MOC_LITERAL(3, 129, 0), // ""
QT_MOC_LITERAL(4, 130, 8), // "QWidget*"
QT_MOC_LITERAL(5, 139, 6), // "parent"
QT_MOC_LITERAL(6, 146, 42), // "delete_qSlicerScriptedLoadabl..."
QT_MOC_LITERAL(7, 189, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerScriptedLoadableModuleWidget\0"
    "new_qSlicerScriptedLoadableModuleWidget\0"
    "qSlicerScriptedLoadableModuleWidget*\0"
    "\0QWidget*\0parent\0"
    "delete_qSlicerScriptedLoadableModuleWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerScriptedLoadableModuleWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerScriptedLoadableModuleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerScriptedLoadableModuleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerScriptedLoadableModuleWidget* _r = _t->new_qSlicerScriptedLoadableModuleWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerScriptedLoadableModuleWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerScriptedLoadableModuleWidget* _r = _t->new_qSlicerScriptedLoadableModuleWidget();
            if (_a[0]) *reinterpret_cast< qSlicerScriptedLoadableModuleWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerScriptedLoadableModuleWidget((*reinterpret_cast< qSlicerScriptedLoadableModuleWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerScriptedLoadableModuleWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerScriptedLoadableModuleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedLoadableModuleWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerScriptedLoadableModuleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerScriptedLoadableModuleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerScriptedLoadableModuleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedLoadableModuleWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerScriptedLoadableModuleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedLoadableModule_t {
    QByteArrayData data[7];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedLoadableModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedLoadableModule_t qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedLoadableModule = {
    {
QT_MOC_LITERAL(0, 0, 45), // "PythonQtWrapper_qSlicerScript..."
QT_MOC_LITERAL(1, 46, 33), // "new_qSlicerScriptedLoadableMo..."
QT_MOC_LITERAL(2, 80, 30), // "qSlicerScriptedLoadableModule*"
QT_MOC_LITERAL(3, 111, 0), // ""
QT_MOC_LITERAL(4, 112, 6), // "parent"
QT_MOC_LITERAL(5, 119, 36), // "delete_qSlicerScriptedLoadabl..."
QT_MOC_LITERAL(6, 156, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerScriptedLoadableModule\0"
    "new_qSlicerScriptedLoadableModule\0"
    "qSlicerScriptedLoadableModule*\0\0parent\0"
    "delete_qSlicerScriptedLoadableModule\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerScriptedLoadableModule[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerScriptedLoadableModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerScriptedLoadableModule *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerScriptedLoadableModule* _r = _t->new_qSlicerScriptedLoadableModule((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerScriptedLoadableModule**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerScriptedLoadableModule* _r = _t->new_qSlicerScriptedLoadableModule();
            if (_a[0]) *reinterpret_cast< qSlicerScriptedLoadableModule**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerScriptedLoadableModule((*reinterpret_cast< qSlicerScriptedLoadableModule*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerScriptedLoadableModule* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerScriptedLoadableModule::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedLoadableModule.data,
    qt_meta_data_PythonQtWrapper_qSlicerScriptedLoadableModule,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerScriptedLoadableModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerScriptedLoadableModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedLoadableModule.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerScriptedLoadableModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileDialog_t {
    QByteArrayData data[7];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileDialog_t qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 41), // "PythonQtWrapper_qSlicerScript..."
QT_MOC_LITERAL(1, 42, 29), // "new_qSlicerScriptedFileDialog"
QT_MOC_LITERAL(2, 72, 26), // "qSlicerScriptedFileDialog*"
QT_MOC_LITERAL(3, 99, 0), // ""
QT_MOC_LITERAL(4, 100, 6), // "parent"
QT_MOC_LITERAL(5, 107, 32), // "delete_qSlicerScriptedFileDialog"
QT_MOC_LITERAL(6, 140, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerScriptedFileDialog\0"
    "new_qSlicerScriptedFileDialog\0"
    "qSlicerScriptedFileDialog*\0\0parent\0"
    "delete_qSlicerScriptedFileDialog\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerScriptedFileDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerScriptedFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerScriptedFileDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerScriptedFileDialog* _r = _t->new_qSlicerScriptedFileDialog((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerScriptedFileDialog**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerScriptedFileDialog* _r = _t->new_qSlicerScriptedFileDialog();
            if (_a[0]) *reinterpret_cast< qSlicerScriptedFileDialog**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerScriptedFileDialog((*reinterpret_cast< qSlicerScriptedFileDialog*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerScriptedFileDialog* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerScriptedFileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileDialog.data,
    qt_meta_data_PythonQtWrapper_qSlicerScriptedFileDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerScriptedFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerScriptedFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerScriptedFileDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerScriptedFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsPythonPanel_t {
    QByteArrayData data[8];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsPythonPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsPythonPanel_t qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsPythonPanel = {
    {
QT_MOC_LITERAL(0, 0, 42), // "PythonQtWrapper_qSlicerSettin..."
QT_MOC_LITERAL(1, 43, 30), // "new_qSlicerSettingsPythonPanel"
QT_MOC_LITERAL(2, 74, 27), // "qSlicerSettingsPythonPanel*"
QT_MOC_LITERAL(3, 102, 0), // ""
QT_MOC_LITERAL(4, 103, 8), // "QWidget*"
QT_MOC_LITERAL(5, 112, 6), // "parent"
QT_MOC_LITERAL(6, 119, 33), // "delete_qSlicerSettingsPythonP..."
QT_MOC_LITERAL(7, 153, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSettingsPythonPanel\0"
    "new_qSlicerSettingsPythonPanel\0"
    "qSlicerSettingsPythonPanel*\0\0QWidget*\0"
    "parent\0delete_qSlicerSettingsPythonPanel\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSettingsPythonPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qSlicerSettingsPythonPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSettingsPythonPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSettingsPythonPanel* _r = _t->new_qSlicerSettingsPythonPanel((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSettingsPythonPanel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSettingsPythonPanel* _r = _t->new_qSlicerSettingsPythonPanel();
            if (_a[0]) *reinterpret_cast< qSlicerSettingsPythonPanel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSettingsPythonPanel((*reinterpret_cast< qSlicerSettingsPythonPanel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSettingsPythonPanel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSettingsPythonPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsPythonPanel.data,
    qt_meta_data_PythonQtWrapper_qSlicerSettingsPythonPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSettingsPythonPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSettingsPythonPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSettingsPythonPanel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSettingsPythonPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qSlicerPythonManager_t {
    QByteArrayData data[7];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerPythonManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerPythonManager_t qt_meta_stringdata_PythonQtWrapper_qSlicerPythonManager = {
    {
QT_MOC_LITERAL(0, 0, 36), // "PythonQtWrapper_qSlicerPython..."
QT_MOC_LITERAL(1, 37, 24), // "new_qSlicerPythonManager"
QT_MOC_LITERAL(2, 62, 21), // "qSlicerPythonManager*"
QT_MOC_LITERAL(3, 84, 0), // ""
QT_MOC_LITERAL(4, 85, 6), // "parent"
QT_MOC_LITERAL(5, 92, 27), // "delete_qSlicerPythonManager"
QT_MOC_LITERAL(6, 120, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerPythonManager\0"
    "new_qSlicerPythonManager\0qSlicerPythonManager*\0"
    "\0parent\0delete_qSlicerPythonManager\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerPythonManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,

       0        // eod
};

void PythonQtWrapper_qSlicerPythonManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerPythonManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerPythonManager* _r = _t->new_qSlicerPythonManager((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerPythonManager**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerPythonManager* _r = _t->new_qSlicerPythonManager();
            if (_a[0]) *reinterpret_cast< qSlicerPythonManager**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerPythonManager((*reinterpret_cast< qSlicerPythonManager*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerPythonManager* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerPythonManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerPythonManager.data,
    qt_meta_data_PythonQtWrapper_qSlicerPythonManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerPythonManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerPythonManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerPythonManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerPythonManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
