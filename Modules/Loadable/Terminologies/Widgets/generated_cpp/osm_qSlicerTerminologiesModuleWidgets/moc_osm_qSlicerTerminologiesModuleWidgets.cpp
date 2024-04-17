/****************************************************************************
** Meta object code from reading C++ file 'osm_qSlicerTerminologiesModuleWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "osm_qSlicerTerminologiesModuleWidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osm_qSlicerTerminologiesModuleWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologyItemDelegate_t {
    QByteArrayData data[7];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologyItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologyItemDelegate_t qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologyItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 46), // "PythonQtWrapper_qSlicerTermin..."
QT_MOC_LITERAL(1, 47, 34), // "new_qSlicerTerminologyItemDel..."
QT_MOC_LITERAL(2, 82, 31), // "qSlicerTerminologyItemDelegate*"
QT_MOC_LITERAL(3, 114, 0), // ""
QT_MOC_LITERAL(4, 115, 6), // "parent"
QT_MOC_LITERAL(5, 122, 37), // "delete_qSlicerTerminologyItem..."
QT_MOC_LITERAL(6, 160, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerTerminologyItemDelegate\0"
    "new_qSlicerTerminologyItemDelegate\0"
    "qSlicerTerminologyItemDelegate*\0\0"
    "parent\0delete_qSlicerTerminologyItemDelegate\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerTerminologyItemDelegate[] = {

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

void PythonQtWrapper_qSlicerTerminologyItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerTerminologyItemDelegate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerTerminologyItemDelegate* _r = _t->new_qSlicerTerminologyItemDelegate((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerTerminologyItemDelegate**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerTerminologyItemDelegate* _r = _t->new_qSlicerTerminologyItemDelegate();
            if (_a[0]) *reinterpret_cast< qSlicerTerminologyItemDelegate**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerTerminologyItemDelegate((*reinterpret_cast< qSlicerTerminologyItemDelegate*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerTerminologyItemDelegate* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerTerminologyItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologyItemDelegate.data,
    qt_meta_data_PythonQtWrapper_qSlicerTerminologyItemDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerTerminologyItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerTerminologyItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologyItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerTerminologyItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologyNavigatorWidget_t {
    QByteArrayData data[8];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologyNavigatorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologyNavigatorWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologyNavigatorWidget = {
    {
QT_MOC_LITERAL(0, 0, 49), // "PythonQtWrapper_qSlicerTermin..."
QT_MOC_LITERAL(1, 50, 37), // "new_qSlicerTerminologyNavigat..."
QT_MOC_LITERAL(2, 88, 34), // "qSlicerTerminologyNavigatorWi..."
QT_MOC_LITERAL(3, 123, 0), // ""
QT_MOC_LITERAL(4, 124, 8), // "QWidget*"
QT_MOC_LITERAL(5, 133, 6), // "parent"
QT_MOC_LITERAL(6, 140, 40), // "delete_qSlicerTerminologyNavi..."
QT_MOC_LITERAL(7, 181, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerTerminologyNavigatorWidget\0"
    "new_qSlicerTerminologyNavigatorWidget\0"
    "qSlicerTerminologyNavigatorWidget*\0\0"
    "QWidget*\0parent\0"
    "delete_qSlicerTerminologyNavigatorWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerTerminologyNavigatorWidget[] = {

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

void PythonQtWrapper_qSlicerTerminologyNavigatorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerTerminologyNavigatorWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerTerminologyNavigatorWidget* _r = _t->new_qSlicerTerminologyNavigatorWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerTerminologyNavigatorWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerTerminologyNavigatorWidget* _r = _t->new_qSlicerTerminologyNavigatorWidget();
            if (_a[0]) *reinterpret_cast< qSlicerTerminologyNavigatorWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerTerminologyNavigatorWidget((*reinterpret_cast< qSlicerTerminologyNavigatorWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerTerminologyNavigatorWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerTerminologyNavigatorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologyNavigatorWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerTerminologyNavigatorWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerTerminologyNavigatorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerTerminologyNavigatorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologyNavigatorWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerTerminologyNavigatorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologySelectorButton_t {
    QByteArrayData data[8];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologySelectorButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologySelectorButton_t qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologySelectorButton = {
    {
QT_MOC_LITERAL(0, 0, 48), // "PythonQtWrapper_qSlicerTermin..."
QT_MOC_LITERAL(1, 49, 36), // "new_qSlicerTerminologySelecto..."
QT_MOC_LITERAL(2, 86, 33), // "qSlicerTerminologySelectorBut..."
QT_MOC_LITERAL(3, 120, 0), // ""
QT_MOC_LITERAL(4, 121, 8), // "QWidget*"
QT_MOC_LITERAL(5, 130, 6), // "parent"
QT_MOC_LITERAL(6, 137, 39), // "delete_qSlicerTerminologySele..."
QT_MOC_LITERAL(7, 177, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerTerminologySelectorButton\0"
    "new_qSlicerTerminologySelectorButton\0"
    "qSlicerTerminologySelectorButton*\0\0"
    "QWidget*\0parent\0delete_qSlicerTerminologySelectorButton\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerTerminologySelectorButton[] = {

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

void PythonQtWrapper_qSlicerTerminologySelectorButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerTerminologySelectorButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerTerminologySelectorButton* _r = _t->new_qSlicerTerminologySelectorButton((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerTerminologySelectorButton**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerTerminologySelectorButton* _r = _t->new_qSlicerTerminologySelectorButton();
            if (_a[0]) *reinterpret_cast< qSlicerTerminologySelectorButton**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerTerminologySelectorButton((*reinterpret_cast< qSlicerTerminologySelectorButton*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerTerminologySelectorButton* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerTerminologySelectorButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologySelectorButton.data,
    qt_meta_data_PythonQtWrapper_qSlicerTerminologySelectorButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerTerminologySelectorButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerTerminologySelectorButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologySelectorButton.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerTerminologySelectorButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologySelectorDialog_t {
    QByteArrayData data[7];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologySelectorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologySelectorDialog_t qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologySelectorDialog = {
    {
QT_MOC_LITERAL(0, 0, 48), // "PythonQtWrapper_qSlicerTermin..."
QT_MOC_LITERAL(1, 49, 36), // "new_qSlicerTerminologySelecto..."
QT_MOC_LITERAL(2, 86, 33), // "qSlicerTerminologySelectorDia..."
QT_MOC_LITERAL(3, 120, 0), // ""
QT_MOC_LITERAL(4, 121, 6), // "parent"
QT_MOC_LITERAL(5, 128, 39), // "delete_qSlicerTerminologySele..."
QT_MOC_LITERAL(6, 168, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerTerminologySelectorDialog\0"
    "new_qSlicerTerminologySelectorDialog\0"
    "qSlicerTerminologySelectorDialog*\0\0"
    "parent\0delete_qSlicerTerminologySelectorDialog\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerTerminologySelectorDialog[] = {

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

void PythonQtWrapper_qSlicerTerminologySelectorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerTerminologySelectorDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerTerminologySelectorDialog* _r = _t->new_qSlicerTerminologySelectorDialog((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerTerminologySelectorDialog**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerTerminologySelectorDialog* _r = _t->new_qSlicerTerminologySelectorDialog();
            if (_a[0]) *reinterpret_cast< qSlicerTerminologySelectorDialog**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerTerminologySelectorDialog((*reinterpret_cast< qSlicerTerminologySelectorDialog*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerTerminologySelectorDialog* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerTerminologySelectorDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologySelectorDialog.data,
    qt_meta_data_PythonQtWrapper_qSlicerTerminologySelectorDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerTerminologySelectorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerTerminologySelectorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerTerminologySelectorDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerTerminologySelectorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
