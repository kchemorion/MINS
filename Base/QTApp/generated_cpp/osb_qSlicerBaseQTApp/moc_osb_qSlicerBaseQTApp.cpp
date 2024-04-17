/****************************************************************************
** Meta object code from reading C++ file 'osb_qSlicerBaseQTApp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "osb_qSlicerBaseQTApp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osb_qSlicerBaseQTApp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythonQtWrapper_qSlicerAboutDialog_t {
    QByteArrayData data[8];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerAboutDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerAboutDialog_t qt_meta_stringdata_PythonQtWrapper_qSlicerAboutDialog = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_qSlicerAboutD..."
QT_MOC_LITERAL(1, 35, 22), // "new_qSlicerAboutDialog"
QT_MOC_LITERAL(2, 58, 19), // "qSlicerAboutDialog*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 8), // "QWidget*"
QT_MOC_LITERAL(5, 88, 6), // "parent"
QT_MOC_LITERAL(6, 95, 25), // "delete_qSlicerAboutDialog"
QT_MOC_LITERAL(7, 121, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerAboutDialog\0"
    "new_qSlicerAboutDialog\0qSlicerAboutDialog*\0"
    "\0QWidget*\0parent\0delete_qSlicerAboutDialog\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerAboutDialog[] = {

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

void PythonQtWrapper_qSlicerAboutDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerAboutDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerAboutDialog* _r = _t->new_qSlicerAboutDialog((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerAboutDialog**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerAboutDialog* _r = _t->new_qSlicerAboutDialog();
            if (_a[0]) *reinterpret_cast< qSlicerAboutDialog**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerAboutDialog((*reinterpret_cast< qSlicerAboutDialog*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerAboutDialog* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerAboutDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerAboutDialog.data,
    qt_meta_data_PythonQtWrapper_qSlicerAboutDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerAboutDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerAboutDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerAboutDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerAboutDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerApplicationHelper_t {
    QByteArrayData data[7];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerApplicationHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerApplicationHelper_t qt_meta_stringdata_PythonQtWrapper_qSlicerApplicationHelper = {
    {
QT_MOC_LITERAL(0, 0, 40), // "PythonQtWrapper_qSlicerApplic..."
QT_MOC_LITERAL(1, 41, 28), // "new_qSlicerApplicationHelper"
QT_MOC_LITERAL(2, 70, 25), // "qSlicerApplicationHelper*"
QT_MOC_LITERAL(3, 96, 0), // ""
QT_MOC_LITERAL(4, 97, 6), // "parent"
QT_MOC_LITERAL(5, 104, 31), // "delete_qSlicerApplicationHelper"
QT_MOC_LITERAL(6, 136, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerApplicationHelper\0"
    "new_qSlicerApplicationHelper\0"
    "qSlicerApplicationHelper*\0\0parent\0"
    "delete_qSlicerApplicationHelper\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerApplicationHelper[] = {

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

void PythonQtWrapper_qSlicerApplicationHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerApplicationHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerApplicationHelper* _r = _t->new_qSlicerApplicationHelper((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerApplicationHelper**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerApplicationHelper* _r = _t->new_qSlicerApplicationHelper();
            if (_a[0]) *reinterpret_cast< qSlicerApplicationHelper**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerApplicationHelper((*reinterpret_cast< qSlicerApplicationHelper*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerApplicationHelper* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerApplicationHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerApplicationHelper.data,
    qt_meta_data_PythonQtWrapper_qSlicerApplicationHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerApplicationHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerApplicationHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerApplicationHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerApplicationHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerErrorReportDialog_t {
    QByteArrayData data[8];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerErrorReportDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerErrorReportDialog_t qt_meta_stringdata_PythonQtWrapper_qSlicerErrorReportDialog = {
    {
QT_MOC_LITERAL(0, 0, 40), // "PythonQtWrapper_qSlicerErrorR..."
QT_MOC_LITERAL(1, 41, 28), // "new_qSlicerErrorReportDialog"
QT_MOC_LITERAL(2, 70, 25), // "qSlicerErrorReportDialog*"
QT_MOC_LITERAL(3, 96, 0), // ""
QT_MOC_LITERAL(4, 97, 8), // "QWidget*"
QT_MOC_LITERAL(5, 106, 6), // "parent"
QT_MOC_LITERAL(6, 113, 31), // "delete_qSlicerErrorReportDialog"
QT_MOC_LITERAL(7, 145, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerErrorReportDialog\0"
    "new_qSlicerErrorReportDialog\0"
    "qSlicerErrorReportDialog*\0\0QWidget*\0"
    "parent\0delete_qSlicerErrorReportDialog\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerErrorReportDialog[] = {

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

void PythonQtWrapper_qSlicerErrorReportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerErrorReportDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerErrorReportDialog* _r = _t->new_qSlicerErrorReportDialog((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerErrorReportDialog**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerErrorReportDialog* _r = _t->new_qSlicerErrorReportDialog();
            if (_a[0]) *reinterpret_cast< qSlicerErrorReportDialog**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerErrorReportDialog((*reinterpret_cast< qSlicerErrorReportDialog*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerErrorReportDialog* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerErrorReportDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerErrorReportDialog.data,
    qt_meta_data_PythonQtWrapper_qSlicerErrorReportDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerErrorReportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerErrorReportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerErrorReportDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerErrorReportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerMainWindow_t {
    QByteArrayData data[8];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerMainWindow_t qt_meta_stringdata_PythonQtWrapper_qSlicerMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PythonQtWrapper_qSlicerMainWi..."
QT_MOC_LITERAL(1, 34, 21), // "new_qSlicerMainWindow"
QT_MOC_LITERAL(2, 56, 18), // "qSlicerMainWindow*"
QT_MOC_LITERAL(3, 75, 0), // ""
QT_MOC_LITERAL(4, 76, 8), // "QWidget*"
QT_MOC_LITERAL(5, 85, 6), // "parent"
QT_MOC_LITERAL(6, 92, 24), // "delete_qSlicerMainWindow"
QT_MOC_LITERAL(7, 117, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerMainWindow\0"
    "new_qSlicerMainWindow\0qSlicerMainWindow*\0"
    "\0QWidget*\0parent\0delete_qSlicerMainWindow\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerMainWindow[] = {

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

void PythonQtWrapper_qSlicerMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerMainWindow* _r = _t->new_qSlicerMainWindow((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerMainWindow**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerMainWindow* _r = _t->new_qSlicerMainWindow();
            if (_a[0]) *reinterpret_cast< qSlicerMainWindow**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerMainWindow((*reinterpret_cast< qSlicerMainWindow*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerMainWindow* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerMainWindow.data,
    qt_meta_data_PythonQtWrapper_qSlicerMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
