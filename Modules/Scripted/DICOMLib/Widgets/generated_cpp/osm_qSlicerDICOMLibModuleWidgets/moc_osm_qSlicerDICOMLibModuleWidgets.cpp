/****************************************************************************
** Meta object code from reading C++ file 'osm_qSlicerDICOMLibModuleWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "osm_qSlicerDICOMLibModuleWidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osm_qSlicerDICOMLibModuleWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMExportDialog_t {
    QByteArrayData data[7];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMExportDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMExportDialog_t qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMExportDialog = {
    {
QT_MOC_LITERAL(0, 0, 40), // "PythonQtWrapper_qSlicerDICOME..."
QT_MOC_LITERAL(1, 41, 28), // "new_qSlicerDICOMExportDialog"
QT_MOC_LITERAL(2, 70, 25), // "qSlicerDICOMExportDialog*"
QT_MOC_LITERAL(3, 96, 0), // ""
QT_MOC_LITERAL(4, 97, 6), // "parent"
QT_MOC_LITERAL(5, 104, 31), // "delete_qSlicerDICOMExportDialog"
QT_MOC_LITERAL(6, 136, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerDICOMExportDialog\0"
    "new_qSlicerDICOMExportDialog\0"
    "qSlicerDICOMExportDialog*\0\0parent\0"
    "delete_qSlicerDICOMExportDialog\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerDICOMExportDialog[] = {

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

void PythonQtWrapper_qSlicerDICOMExportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerDICOMExportDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerDICOMExportDialog* _r = _t->new_qSlicerDICOMExportDialog((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerDICOMExportDialog**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerDICOMExportDialog* _r = _t->new_qSlicerDICOMExportDialog();
            if (_a[0]) *reinterpret_cast< qSlicerDICOMExportDialog**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerDICOMExportDialog((*reinterpret_cast< qSlicerDICOMExportDialog*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerDICOMExportDialog* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerDICOMExportDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMExportDialog.data,
    qt_meta_data_PythonQtWrapper_qSlicerDICOMExportDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerDICOMExportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerDICOMExportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMExportDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerDICOMExportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMLoadable_t {
    QByteArrayData data[7];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMLoadable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMLoadable_t qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMLoadable = {
    {
QT_MOC_LITERAL(0, 0, 36), // "PythonQtWrapper_qSlicerDICOML..."
QT_MOC_LITERAL(1, 37, 24), // "new_qSlicerDICOMLoadable"
QT_MOC_LITERAL(2, 62, 21), // "qSlicerDICOMLoadable*"
QT_MOC_LITERAL(3, 84, 0), // ""
QT_MOC_LITERAL(4, 85, 6), // "parent"
QT_MOC_LITERAL(5, 92, 27), // "delete_qSlicerDICOMLoadable"
QT_MOC_LITERAL(6, 120, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerDICOMLoadable\0"
    "new_qSlicerDICOMLoadable\0qSlicerDICOMLoadable*\0"
    "\0parent\0delete_qSlicerDICOMLoadable\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerDICOMLoadable[] = {

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

void PythonQtWrapper_qSlicerDICOMLoadable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerDICOMLoadable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerDICOMLoadable* _r = _t->new_qSlicerDICOMLoadable((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerDICOMLoadable**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerDICOMLoadable* _r = _t->new_qSlicerDICOMLoadable();
            if (_a[0]) *reinterpret_cast< qSlicerDICOMLoadable**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerDICOMLoadable((*reinterpret_cast< qSlicerDICOMLoadable*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerDICOMLoadable* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerDICOMLoadable::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMLoadable.data,
    qt_meta_data_PythonQtWrapper_qSlicerDICOMLoadable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerDICOMLoadable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerDICOMLoadable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMLoadable.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerDICOMLoadable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMExportable_t {
    QByteArrayData data[7];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMExportable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMExportable_t qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMExportable = {
    {
QT_MOC_LITERAL(0, 0, 38), // "PythonQtWrapper_qSlicerDICOME..."
QT_MOC_LITERAL(1, 39, 26), // "new_qSlicerDICOMExportable"
QT_MOC_LITERAL(2, 66, 23), // "qSlicerDICOMExportable*"
QT_MOC_LITERAL(3, 90, 0), // ""
QT_MOC_LITERAL(4, 91, 6), // "parent"
QT_MOC_LITERAL(5, 98, 29), // "delete_qSlicerDICOMExportable"
QT_MOC_LITERAL(6, 128, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerDICOMExportable\0"
    "new_qSlicerDICOMExportable\0"
    "qSlicerDICOMExportable*\0\0parent\0"
    "delete_qSlicerDICOMExportable\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerDICOMExportable[] = {

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

void PythonQtWrapper_qSlicerDICOMExportable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerDICOMExportable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerDICOMExportable* _r = _t->new_qSlicerDICOMExportable((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerDICOMExportable**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerDICOMExportable* _r = _t->new_qSlicerDICOMExportable();
            if (_a[0]) *reinterpret_cast< qSlicerDICOMExportable**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerDICOMExportable((*reinterpret_cast< qSlicerDICOMExportable*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerDICOMExportable* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerDICOMExportable::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMExportable.data,
    qt_meta_data_PythonQtWrapper_qSlicerDICOMExportable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerDICOMExportable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerDICOMExportable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMExportable.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerDICOMExportable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMTagEditorWidget_t {
    QByteArrayData data[8];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMTagEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMTagEditorWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMTagEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 43), // "PythonQtWrapper_qSlicerDICOMT..."
QT_MOC_LITERAL(1, 44, 31), // "new_qSlicerDICOMTagEditorWidget"
QT_MOC_LITERAL(2, 76, 28), // "qSlicerDICOMTagEditorWidget*"
QT_MOC_LITERAL(3, 105, 0), // ""
QT_MOC_LITERAL(4, 106, 8), // "QWidget*"
QT_MOC_LITERAL(5, 115, 6), // "parent"
QT_MOC_LITERAL(6, 122, 34), // "delete_qSlicerDICOMTagEditorW..."
QT_MOC_LITERAL(7, 157, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerDICOMTagEditorWidget\0"
    "new_qSlicerDICOMTagEditorWidget\0"
    "qSlicerDICOMTagEditorWidget*\0\0QWidget*\0"
    "parent\0delete_qSlicerDICOMTagEditorWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerDICOMTagEditorWidget[] = {

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

void PythonQtWrapper_qSlicerDICOMTagEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerDICOMTagEditorWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerDICOMTagEditorWidget* _r = _t->new_qSlicerDICOMTagEditorWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerDICOMTagEditorWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerDICOMTagEditorWidget* _r = _t->new_qSlicerDICOMTagEditorWidget();
            if (_a[0]) *reinterpret_cast< qSlicerDICOMTagEditorWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerDICOMTagEditorWidget((*reinterpret_cast< qSlicerDICOMTagEditorWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerDICOMTagEditorWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerDICOMTagEditorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMTagEditorWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerDICOMTagEditorWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerDICOMTagEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerDICOMTagEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerDICOMTagEditorWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerDICOMTagEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
