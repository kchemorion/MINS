/****************************************************************************
** Meta object code from reading C++ file 'osm_qSlicerSequencesModuleWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "osm_qSlicerSequencesModuleWidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osm_qSlicerSequencesModuleWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserPlayWidget_t {
    QByteArrayData data[8];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserPlayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserPlayWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserPlayWidget = {
    {
QT_MOC_LITERAL(0, 0, 46), // "PythonQtWrapper_qMRMLSequence..."
QT_MOC_LITERAL(1, 47, 34), // "new_qMRMLSequenceBrowserPlayW..."
QT_MOC_LITERAL(2, 82, 31), // "qMRMLSequenceBrowserPlayWidget*"
QT_MOC_LITERAL(3, 114, 0), // ""
QT_MOC_LITERAL(4, 115, 8), // "QWidget*"
QT_MOC_LITERAL(5, 124, 6), // "parent"
QT_MOC_LITERAL(6, 131, 37), // "delete_qMRMLSequenceBrowserPl..."
QT_MOC_LITERAL(7, 169, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSequenceBrowserPlayWidget\0"
    "new_qMRMLSequenceBrowserPlayWidget\0"
    "qMRMLSequenceBrowserPlayWidget*\0\0"
    "QWidget*\0parent\0delete_qMRMLSequenceBrowserPlayWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSequenceBrowserPlayWidget[] = {

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

void PythonQtWrapper_qMRMLSequenceBrowserPlayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSequenceBrowserPlayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSequenceBrowserPlayWidget* _r = _t->new_qMRMLSequenceBrowserPlayWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSequenceBrowserPlayWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSequenceBrowserPlayWidget* _r = _t->new_qMRMLSequenceBrowserPlayWidget();
            if (_a[0]) *reinterpret_cast< qMRMLSequenceBrowserPlayWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSequenceBrowserPlayWidget((*reinterpret_cast< qMRMLSequenceBrowserPlayWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSequenceBrowserPlayWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSequenceBrowserPlayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserPlayWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLSequenceBrowserPlayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSequenceBrowserPlayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSequenceBrowserPlayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserPlayWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSequenceBrowserPlayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserSeekWidget_t {
    QByteArrayData data[8];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserSeekWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserSeekWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserSeekWidget = {
    {
QT_MOC_LITERAL(0, 0, 46), // "PythonQtWrapper_qMRMLSequence..."
QT_MOC_LITERAL(1, 47, 34), // "new_qMRMLSequenceBrowserSeekW..."
QT_MOC_LITERAL(2, 82, 31), // "qMRMLSequenceBrowserSeekWidget*"
QT_MOC_LITERAL(3, 114, 0), // ""
QT_MOC_LITERAL(4, 115, 8), // "QWidget*"
QT_MOC_LITERAL(5, 124, 6), // "parent"
QT_MOC_LITERAL(6, 131, 37), // "delete_qMRMLSequenceBrowserSe..."
QT_MOC_LITERAL(7, 169, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSequenceBrowserSeekWidget\0"
    "new_qMRMLSequenceBrowserSeekWidget\0"
    "qMRMLSequenceBrowserSeekWidget*\0\0"
    "QWidget*\0parent\0delete_qMRMLSequenceBrowserSeekWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSequenceBrowserSeekWidget[] = {

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

void PythonQtWrapper_qMRMLSequenceBrowserSeekWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSequenceBrowserSeekWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSequenceBrowserSeekWidget* _r = _t->new_qMRMLSequenceBrowserSeekWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSequenceBrowserSeekWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSequenceBrowserSeekWidget* _r = _t->new_qMRMLSequenceBrowserSeekWidget();
            if (_a[0]) *reinterpret_cast< qMRMLSequenceBrowserSeekWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSequenceBrowserSeekWidget((*reinterpret_cast< qMRMLSequenceBrowserSeekWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSequenceBrowserSeekWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSequenceBrowserSeekWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserSeekWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLSequenceBrowserSeekWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSequenceBrowserSeekWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSequenceBrowserSeekWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserSeekWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSequenceBrowserSeekWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserToolBar_t {
    QByteArrayData data[8];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserToolBar_t qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserToolBar = {
    {
QT_MOC_LITERAL(0, 0, 43), // "PythonQtWrapper_qMRMLSequence..."
QT_MOC_LITERAL(1, 44, 31), // "new_qMRMLSequenceBrowserToolBar"
QT_MOC_LITERAL(2, 76, 28), // "qMRMLSequenceBrowserToolBar*"
QT_MOC_LITERAL(3, 105, 0), // ""
QT_MOC_LITERAL(4, 106, 8), // "QWidget*"
QT_MOC_LITERAL(5, 115, 6), // "parent"
QT_MOC_LITERAL(6, 122, 34), // "delete_qMRMLSequenceBrowserTo..."
QT_MOC_LITERAL(7, 157, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSequenceBrowserToolBar\0"
    "new_qMRMLSequenceBrowserToolBar\0"
    "qMRMLSequenceBrowserToolBar*\0\0QWidget*\0"
    "parent\0delete_qMRMLSequenceBrowserToolBar\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSequenceBrowserToolBar[] = {

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

void PythonQtWrapper_qMRMLSequenceBrowserToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSequenceBrowserToolBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSequenceBrowserToolBar* _r = _t->new_qMRMLSequenceBrowserToolBar((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSequenceBrowserToolBar**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSequenceBrowserToolBar* _r = _t->new_qMRMLSequenceBrowserToolBar();
            if (_a[0]) *reinterpret_cast< qMRMLSequenceBrowserToolBar**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSequenceBrowserToolBar((*reinterpret_cast< qMRMLSequenceBrowserToolBar*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSequenceBrowserToolBar* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSequenceBrowserToolBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserToolBar.data,
    qt_meta_data_PythonQtWrapper_qMRMLSequenceBrowserToolBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSequenceBrowserToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSequenceBrowserToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceBrowserToolBar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSequenceBrowserToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceEditWidget_t {
    QByteArrayData data[8];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceEditWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceEditWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceEditWidget = {
    {
QT_MOC_LITERAL(0, 0, 39), // "PythonQtWrapper_qMRMLSequence..."
QT_MOC_LITERAL(1, 40, 27), // "new_qMRMLSequenceEditWidget"
QT_MOC_LITERAL(2, 68, 24), // "qMRMLSequenceEditWidget*"
QT_MOC_LITERAL(3, 93, 0), // ""
QT_MOC_LITERAL(4, 94, 8), // "QWidget*"
QT_MOC_LITERAL(5, 103, 6), // "parent"
QT_MOC_LITERAL(6, 110, 30), // "delete_qMRMLSequenceEditWidget"
QT_MOC_LITERAL(7, 141, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSequenceEditWidget\0"
    "new_qMRMLSequenceEditWidget\0"
    "qMRMLSequenceEditWidget*\0\0QWidget*\0"
    "parent\0delete_qMRMLSequenceEditWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSequenceEditWidget[] = {

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

void PythonQtWrapper_qMRMLSequenceEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSequenceEditWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSequenceEditWidget* _r = _t->new_qMRMLSequenceEditWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSequenceEditWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSequenceEditWidget* _r = _t->new_qMRMLSequenceEditWidget();
            if (_a[0]) *reinterpret_cast< qMRMLSequenceEditWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSequenceEditWidget((*reinterpret_cast< qMRMLSequenceEditWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSequenceEditWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSequenceEditWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceEditWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLSequenceEditWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSequenceEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSequenceEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSequenceEditWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSequenceEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
