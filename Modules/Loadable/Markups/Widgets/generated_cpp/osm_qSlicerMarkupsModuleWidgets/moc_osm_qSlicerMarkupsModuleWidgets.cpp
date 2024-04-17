/****************************************************************************
** Meta object code from reading C++ file 'osm_qSlicerMarkupsModuleWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "osm_qSlicerMarkupsModuleWidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osm_qSlicerMarkupsModuleWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsDisplayNodeWidget_t {
    QByteArrayData data[8];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsDisplayNodeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsDisplayNodeWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsDisplayNodeWidget = {
    {
QT_MOC_LITERAL(0, 0, 45), // "PythonQtWrapper_qMRMLMarkupsD..."
QT_MOC_LITERAL(1, 46, 33), // "new_qMRMLMarkupsDisplayNodeWi..."
QT_MOC_LITERAL(2, 80, 30), // "qMRMLMarkupsDisplayNodeWidget*"
QT_MOC_LITERAL(3, 111, 0), // ""
QT_MOC_LITERAL(4, 112, 8), // "QWidget*"
QT_MOC_LITERAL(5, 121, 6), // "parent"
QT_MOC_LITERAL(6, 128, 36), // "delete_qMRMLMarkupsDisplayNod..."
QT_MOC_LITERAL(7, 165, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLMarkupsDisplayNodeWidget\0"
    "new_qMRMLMarkupsDisplayNodeWidget\0"
    "qMRMLMarkupsDisplayNodeWidget*\0\0"
    "QWidget*\0parent\0delete_qMRMLMarkupsDisplayNodeWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLMarkupsDisplayNodeWidget[] = {

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

void PythonQtWrapper_qMRMLMarkupsDisplayNodeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLMarkupsDisplayNodeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLMarkupsDisplayNodeWidget* _r = _t->new_qMRMLMarkupsDisplayNodeWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsDisplayNodeWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLMarkupsDisplayNodeWidget* _r = _t->new_qMRMLMarkupsDisplayNodeWidget();
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsDisplayNodeWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLMarkupsDisplayNodeWidget((*reinterpret_cast< qMRMLMarkupsDisplayNodeWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLMarkupsDisplayNodeWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLMarkupsDisplayNodeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsDisplayNodeWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLMarkupsDisplayNodeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLMarkupsDisplayNodeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLMarkupsDisplayNodeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsDisplayNodeWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLMarkupsDisplayNodeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsFiducialProjectionPropertyWidget_t {
    QByteArrayData data[8];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsFiducialProjectionPropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsFiducialProjectionPropertyWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsFiducialProjectionPropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 60), // "PythonQtWrapper_qMRMLMarkupsF..."
QT_MOC_LITERAL(1, 61, 48), // "new_qMRMLMarkupsFiducialProje..."
QT_MOC_LITERAL(2, 110, 45), // "qMRMLMarkupsFiducialProjectio..."
QT_MOC_LITERAL(3, 156, 0), // ""
QT_MOC_LITERAL(4, 157, 8), // "QWidget*"
QT_MOC_LITERAL(5, 166, 6), // "parent"
QT_MOC_LITERAL(6, 173, 51), // "delete_qMRMLMarkupsFiducialPr..."
QT_MOC_LITERAL(7, 225, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLMarkupsFiducialProjectionPropertyWidget\0"
    "new_qMRMLMarkupsFiducialProjectionPropertyWidget\0"
    "qMRMLMarkupsFiducialProjectionPropertyWidget*\0"
    "\0QWidget*\0parent\0"
    "delete_qMRMLMarkupsFiducialProjectionPropertyWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLMarkupsFiducialProjectionPropertyWidget[] = {

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

void PythonQtWrapper_qMRMLMarkupsFiducialProjectionPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLMarkupsFiducialProjectionPropertyWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLMarkupsFiducialProjectionPropertyWidget* _r = _t->new_qMRMLMarkupsFiducialProjectionPropertyWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsFiducialProjectionPropertyWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLMarkupsFiducialProjectionPropertyWidget* _r = _t->new_qMRMLMarkupsFiducialProjectionPropertyWidget();
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsFiducialProjectionPropertyWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLMarkupsFiducialProjectionPropertyWidget((*reinterpret_cast< qMRMLMarkupsFiducialProjectionPropertyWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLMarkupsFiducialProjectionPropertyWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLMarkupsFiducialProjectionPropertyWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsFiducialProjectionPropertyWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLMarkupsFiducialProjectionPropertyWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLMarkupsFiducialProjectionPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLMarkupsFiducialProjectionPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsFiducialProjectionPropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLMarkupsFiducialProjectionPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsInteractionHandleWidget_t {
    QByteArrayData data[8];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsInteractionHandleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsInteractionHandleWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsInteractionHandleWidget = {
    {
QT_MOC_LITERAL(0, 0, 51), // "PythonQtWrapper_qMRMLMarkupsI..."
QT_MOC_LITERAL(1, 52, 39), // "new_qMRMLMarkupsInteractionHa..."
QT_MOC_LITERAL(2, 92, 36), // "qMRMLMarkupsInteractionHandle..."
QT_MOC_LITERAL(3, 129, 0), // ""
QT_MOC_LITERAL(4, 130, 8), // "QWidget*"
QT_MOC_LITERAL(5, 139, 6), // "parent"
QT_MOC_LITERAL(6, 146, 42), // "delete_qMRMLMarkupsInteractio..."
QT_MOC_LITERAL(7, 189, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLMarkupsInteractionHandleWidget\0"
    "new_qMRMLMarkupsInteractionHandleWidget\0"
    "qMRMLMarkupsInteractionHandleWidget*\0"
    "\0QWidget*\0parent\0"
    "delete_qMRMLMarkupsInteractionHandleWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLMarkupsInteractionHandleWidget[] = {

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

void PythonQtWrapper_qMRMLMarkupsInteractionHandleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLMarkupsInteractionHandleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLMarkupsInteractionHandleWidget* _r = _t->new_qMRMLMarkupsInteractionHandleWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsInteractionHandleWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLMarkupsInteractionHandleWidget* _r = _t->new_qMRMLMarkupsInteractionHandleWidget();
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsInteractionHandleWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLMarkupsInteractionHandleWidget((*reinterpret_cast< qMRMLMarkupsInteractionHandleWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLMarkupsInteractionHandleWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLMarkupsInteractionHandleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsInteractionHandleWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLMarkupsInteractionHandleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLMarkupsInteractionHandleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLMarkupsInteractionHandleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsInteractionHandleWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLMarkupsInteractionHandleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsToolBar_t {
    QByteArrayData data[8];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsToolBar_t qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsToolBar = {
    {
QT_MOC_LITERAL(0, 0, 35), // "PythonQtWrapper_qMRMLMarkupsT..."
QT_MOC_LITERAL(1, 36, 23), // "new_qMRMLMarkupsToolBar"
QT_MOC_LITERAL(2, 60, 20), // "qMRMLMarkupsToolBar*"
QT_MOC_LITERAL(3, 81, 0), // ""
QT_MOC_LITERAL(4, 82, 8), // "QWidget*"
QT_MOC_LITERAL(5, 91, 6), // "parent"
QT_MOC_LITERAL(6, 98, 26), // "delete_qMRMLMarkupsToolBar"
QT_MOC_LITERAL(7, 125, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLMarkupsToolBar\0"
    "new_qMRMLMarkupsToolBar\0qMRMLMarkupsToolBar*\0"
    "\0QWidget*\0parent\0delete_qMRMLMarkupsToolBar\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLMarkupsToolBar[] = {

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

void PythonQtWrapper_qMRMLMarkupsToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLMarkupsToolBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLMarkupsToolBar* _r = _t->new_qMRMLMarkupsToolBar((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsToolBar**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLMarkupsToolBar* _r = _t->new_qMRMLMarkupsToolBar();
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsToolBar**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLMarkupsToolBar((*reinterpret_cast< qMRMLMarkupsToolBar*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLMarkupsToolBar* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLMarkupsToolBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsToolBar.data,
    qt_meta_data_PythonQtWrapper_qMRMLMarkupsToolBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLMarkupsToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLMarkupsToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsToolBar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLMarkupsToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsPlaneWidget_t {
    QByteArrayData data[6];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsPlaneWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsPlaneWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsPlaneWidget = {
    {
QT_MOC_LITERAL(0, 0, 39), // "PythonQtWrapper_qMRMLMarkupsP..."
QT_MOC_LITERAL(1, 40, 27), // "new_qMRMLMarkupsPlaneWidget"
QT_MOC_LITERAL(2, 68, 24), // "qMRMLMarkupsPlaneWidget*"
QT_MOC_LITERAL(3, 93, 0), // ""
QT_MOC_LITERAL(4, 94, 30), // "delete_qMRMLMarkupsPlaneWidget"
QT_MOC_LITERAL(5, 125, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLMarkupsPlaneWidget\0"
    "new_qMRMLMarkupsPlaneWidget\0"
    "qMRMLMarkupsPlaneWidget*\0\0"
    "delete_qMRMLMarkupsPlaneWidget\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLMarkupsPlaneWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    3, 0x0a /* Public */,
       4,    1,   25,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,

       0        // eod
};

void PythonQtWrapper_qMRMLMarkupsPlaneWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLMarkupsPlaneWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLMarkupsPlaneWidget* _r = _t->new_qMRMLMarkupsPlaneWidget();
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsPlaneWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->delete_qMRMLMarkupsPlaneWidget((*reinterpret_cast< qMRMLMarkupsPlaneWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLMarkupsPlaneWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLMarkupsPlaneWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsPlaneWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLMarkupsPlaneWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLMarkupsPlaneWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLMarkupsPlaneWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsPlaneWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLMarkupsPlaneWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsROIWidget_t {
    QByteArrayData data[6];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsROIWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsROIWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsROIWidget = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_qMRMLMarkupsR..."
QT_MOC_LITERAL(1, 38, 25), // "new_qMRMLMarkupsROIWidget"
QT_MOC_LITERAL(2, 64, 22), // "qMRMLMarkupsROIWidget*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 28), // "delete_qMRMLMarkupsROIWidget"
QT_MOC_LITERAL(5, 117, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLMarkupsROIWidget\0"
    "new_qMRMLMarkupsROIWidget\0"
    "qMRMLMarkupsROIWidget*\0\0"
    "delete_qMRMLMarkupsROIWidget\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLMarkupsROIWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    3, 0x0a /* Public */,
       4,    1,   25,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,

       0        // eod
};

void PythonQtWrapper_qMRMLMarkupsROIWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLMarkupsROIWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLMarkupsROIWidget* _r = _t->new_qMRMLMarkupsROIWidget();
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsROIWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->delete_qMRMLMarkupsROIWidget((*reinterpret_cast< qMRMLMarkupsROIWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLMarkupsROIWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLMarkupsROIWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsROIWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLMarkupsROIWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLMarkupsROIWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLMarkupsROIWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsROIWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLMarkupsROIWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsAngleMeasurementsWidget_t {
    QByteArrayData data[6];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsAngleMeasurementsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsAngleMeasurementsWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsAngleMeasurementsWidget = {
    {
QT_MOC_LITERAL(0, 0, 51), // "PythonQtWrapper_qMRMLMarkupsA..."
QT_MOC_LITERAL(1, 52, 39), // "new_qMRMLMarkupsAngleMeasurem..."
QT_MOC_LITERAL(2, 92, 36), // "qMRMLMarkupsAngleMeasurements..."
QT_MOC_LITERAL(3, 129, 0), // ""
QT_MOC_LITERAL(4, 130, 42), // "delete_qMRMLMarkupsAngleMeasu..."
QT_MOC_LITERAL(5, 173, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLMarkupsAngleMeasurementsWidget\0"
    "new_qMRMLMarkupsAngleMeasurementsWidget\0"
    "qMRMLMarkupsAngleMeasurementsWidget*\0"
    "\0delete_qMRMLMarkupsAngleMeasurementsWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLMarkupsAngleMeasurementsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    3, 0x0a /* Public */,
       4,    1,   25,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,

       0        // eod
};

void PythonQtWrapper_qMRMLMarkupsAngleMeasurementsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLMarkupsAngleMeasurementsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLMarkupsAngleMeasurementsWidget* _r = _t->new_qMRMLMarkupsAngleMeasurementsWidget();
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsAngleMeasurementsWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->delete_qMRMLMarkupsAngleMeasurementsWidget((*reinterpret_cast< qMRMLMarkupsAngleMeasurementsWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLMarkupsAngleMeasurementsWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLMarkupsAngleMeasurementsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsAngleMeasurementsWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLMarkupsAngleMeasurementsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLMarkupsAngleMeasurementsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLMarkupsAngleMeasurementsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsAngleMeasurementsWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLMarkupsAngleMeasurementsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsCurveSettingsWidget_t {
    QByteArrayData data[6];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsCurveSettingsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsCurveSettingsWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsCurveSettingsWidget = {
    {
QT_MOC_LITERAL(0, 0, 47), // "PythonQtWrapper_qMRMLMarkupsC..."
QT_MOC_LITERAL(1, 48, 35), // "new_qMRMLMarkupsCurveSettings..."
QT_MOC_LITERAL(2, 84, 32), // "qMRMLMarkupsCurveSettingsWidget*"
QT_MOC_LITERAL(3, 117, 0), // ""
QT_MOC_LITERAL(4, 118, 38), // "delete_qMRMLMarkupsCurveSetti..."
QT_MOC_LITERAL(5, 157, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLMarkupsCurveSettingsWidget\0"
    "new_qMRMLMarkupsCurveSettingsWidget\0"
    "qMRMLMarkupsCurveSettingsWidget*\0\0"
    "delete_qMRMLMarkupsCurveSettingsWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLMarkupsCurveSettingsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    3, 0x0a /* Public */,
       4,    1,   25,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,

       0        // eod
};

void PythonQtWrapper_qMRMLMarkupsCurveSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLMarkupsCurveSettingsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLMarkupsCurveSettingsWidget* _r = _t->new_qMRMLMarkupsCurveSettingsWidget();
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsCurveSettingsWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->delete_qMRMLMarkupsCurveSettingsWidget((*reinterpret_cast< qMRMLMarkupsCurveSettingsWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLMarkupsCurveSettingsWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLMarkupsCurveSettingsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsCurveSettingsWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLMarkupsCurveSettingsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLMarkupsCurveSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLMarkupsCurveSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsCurveSettingsWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLMarkupsCurveSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsOptionsWidgetsFactory_t {
    QByteArrayData data[7];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsOptionsWidgetsFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsOptionsWidgetsFactory_t qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsOptionsWidgetsFactory = {
    {
QT_MOC_LITERAL(0, 0, 49), // "PythonQtWrapper_qMRMLMarkupsO..."
QT_MOC_LITERAL(1, 50, 37), // "new_qMRMLMarkupsOptionsWidget..."
QT_MOC_LITERAL(2, 88, 34), // "qMRMLMarkupsOptionsWidgetsFac..."
QT_MOC_LITERAL(3, 123, 0), // ""
QT_MOC_LITERAL(4, 124, 6), // "parent"
QT_MOC_LITERAL(5, 131, 40), // "delete_qMRMLMarkupsOptionsWid..."
QT_MOC_LITERAL(6, 172, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLMarkupsOptionsWidgetsFactory\0"
    "new_qMRMLMarkupsOptionsWidgetsFactory\0"
    "qMRMLMarkupsOptionsWidgetsFactory*\0\0"
    "parent\0delete_qMRMLMarkupsOptionsWidgetsFactory\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLMarkupsOptionsWidgetsFactory[] = {

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

void PythonQtWrapper_qMRMLMarkupsOptionsWidgetsFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLMarkupsOptionsWidgetsFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLMarkupsOptionsWidgetsFactory* _r = _t->new_qMRMLMarkupsOptionsWidgetsFactory((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsOptionsWidgetsFactory**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLMarkupsOptionsWidgetsFactory* _r = _t->new_qMRMLMarkupsOptionsWidgetsFactory();
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsOptionsWidgetsFactory**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLMarkupsOptionsWidgetsFactory((*reinterpret_cast< qMRMLMarkupsOptionsWidgetsFactory*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLMarkupsOptionsWidgetsFactory* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLMarkupsOptionsWidgetsFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsOptionsWidgetsFactory.data,
    qt_meta_data_PythonQtWrapper_qMRMLMarkupsOptionsWidgetsFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLMarkupsOptionsWidgetsFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLMarkupsOptionsWidgetsFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLMarkupsOptionsWidgetsFactory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLMarkupsOptionsWidgetsFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerMarkupsPlaceWidget_t {
    QByteArrayData data[8];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerMarkupsPlaceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerMarkupsPlaceWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerMarkupsPlaceWidget = {
    {
QT_MOC_LITERAL(0, 0, 41), // "PythonQtWrapper_qSlicerMarkup..."
QT_MOC_LITERAL(1, 42, 29), // "new_qSlicerMarkupsPlaceWidget"
QT_MOC_LITERAL(2, 72, 26), // "qSlicerMarkupsPlaceWidget*"
QT_MOC_LITERAL(3, 99, 0), // ""
QT_MOC_LITERAL(4, 100, 8), // "QWidget*"
QT_MOC_LITERAL(5, 109, 6), // "parent"
QT_MOC_LITERAL(6, 116, 32), // "delete_qSlicerMarkupsPlaceWidget"
QT_MOC_LITERAL(7, 149, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerMarkupsPlaceWidget\0"
    "new_qSlicerMarkupsPlaceWidget\0"
    "qSlicerMarkupsPlaceWidget*\0\0QWidget*\0"
    "parent\0delete_qSlicerMarkupsPlaceWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerMarkupsPlaceWidget[] = {

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

void PythonQtWrapper_qSlicerMarkupsPlaceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerMarkupsPlaceWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerMarkupsPlaceWidget* _r = _t->new_qSlicerMarkupsPlaceWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerMarkupsPlaceWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerMarkupsPlaceWidget* _r = _t->new_qSlicerMarkupsPlaceWidget();
            if (_a[0]) *reinterpret_cast< qSlicerMarkupsPlaceWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerMarkupsPlaceWidget((*reinterpret_cast< qSlicerMarkupsPlaceWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerMarkupsPlaceWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerMarkupsPlaceWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerMarkupsPlaceWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerMarkupsPlaceWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerMarkupsPlaceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerMarkupsPlaceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerMarkupsPlaceWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerMarkupsPlaceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSimpleMarkupsWidget_t {
    QByteArrayData data[8];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSimpleMarkupsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSimpleMarkupsWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerSimpleMarkupsWidget = {
    {
QT_MOC_LITERAL(0, 0, 42), // "PythonQtWrapper_qSlicerSimple..."
QT_MOC_LITERAL(1, 43, 30), // "new_qSlicerSimpleMarkupsWidget"
QT_MOC_LITERAL(2, 74, 27), // "qSlicerSimpleMarkupsWidget*"
QT_MOC_LITERAL(3, 102, 0), // ""
QT_MOC_LITERAL(4, 103, 8), // "QWidget*"
QT_MOC_LITERAL(5, 112, 6), // "parent"
QT_MOC_LITERAL(6, 119, 33), // "delete_qSlicerSimpleMarkupsWi..."
QT_MOC_LITERAL(7, 153, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSimpleMarkupsWidget\0"
    "new_qSlicerSimpleMarkupsWidget\0"
    "qSlicerSimpleMarkupsWidget*\0\0QWidget*\0"
    "parent\0delete_qSlicerSimpleMarkupsWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSimpleMarkupsWidget[] = {

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

void PythonQtWrapper_qSlicerSimpleMarkupsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSimpleMarkupsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSimpleMarkupsWidget* _r = _t->new_qSlicerSimpleMarkupsWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSimpleMarkupsWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSimpleMarkupsWidget* _r = _t->new_qSlicerSimpleMarkupsWidget();
            if (_a[0]) *reinterpret_cast< qSlicerSimpleMarkupsWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSimpleMarkupsWidget((*reinterpret_cast< qSlicerSimpleMarkupsWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSimpleMarkupsWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSimpleMarkupsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSimpleMarkupsWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerSimpleMarkupsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSimpleMarkupsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSimpleMarkupsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSimpleMarkupsWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSimpleMarkupsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
