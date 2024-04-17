/****************************************************************************
** Meta object code from reading C++ file 'osb_qSlicerBaseQTCLI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "osb_qSlicerBaseQTCLI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osb_qSlicerBaseQTCLI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythonQtWrapper_qSlicerCLIModule_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerCLIModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerCLIModule_t qt_meta_stringdata_PythonQtWrapper_qSlicerCLIModule = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_qSlicerCLIModule"
QT_MOC_LITERAL(1, 33, 20), // "new_qSlicerCLIModule"
QT_MOC_LITERAL(2, 54, 17), // "qSlicerCLIModule*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 8), // "QWidget*"
QT_MOC_LITERAL(5, 82, 6), // "parent"
QT_MOC_LITERAL(6, 89, 23), // "delete_qSlicerCLIModule"
QT_MOC_LITERAL(7, 113, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerCLIModule\0"
    "new_qSlicerCLIModule\0qSlicerCLIModule*\0"
    "\0QWidget*\0parent\0delete_qSlicerCLIModule\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerCLIModule[] = {

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

void PythonQtWrapper_qSlicerCLIModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerCLIModule *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerCLIModule* _r = _t->new_qSlicerCLIModule((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerCLIModule**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerCLIModule* _r = _t->new_qSlicerCLIModule();
            if (_a[0]) *reinterpret_cast< qSlicerCLIModule**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerCLIModule((*reinterpret_cast< qSlicerCLIModule*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerCLIModule* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerCLIModule::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerCLIModule.data,
    qt_meta_data_PythonQtWrapper_qSlicerCLIModule,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerCLIModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerCLIModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerCLIModule.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerCLIModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerCLIModuleWidget_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerCLIModuleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerCLIModuleWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerCLIModuleWidget = {
    {
QT_MOC_LITERAL(0, 0, 38), // "PythonQtWrapper_qSlicerCLIMod..."
QT_MOC_LITERAL(1, 39, 26), // "new_qSlicerCLIModuleWidget"
QT_MOC_LITERAL(2, 66, 23), // "qSlicerCLIModuleWidget*"
QT_MOC_LITERAL(3, 90, 0), // ""
QT_MOC_LITERAL(4, 91, 8), // "QWidget*"
QT_MOC_LITERAL(5, 100, 6), // "parent"
QT_MOC_LITERAL(6, 107, 29), // "delete_qSlicerCLIModuleWidget"
QT_MOC_LITERAL(7, 137, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerCLIModuleWidget\0"
    "new_qSlicerCLIModuleWidget\0"
    "qSlicerCLIModuleWidget*\0\0QWidget*\0"
    "parent\0delete_qSlicerCLIModuleWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerCLIModuleWidget[] = {

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

void PythonQtWrapper_qSlicerCLIModuleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerCLIModuleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerCLIModuleWidget* _r = _t->new_qSlicerCLIModuleWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerCLIModuleWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerCLIModuleWidget* _r = _t->new_qSlicerCLIModuleWidget();
            if (_a[0]) *reinterpret_cast< qSlicerCLIModuleWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerCLIModuleWidget((*reinterpret_cast< qSlicerCLIModuleWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerCLIModuleWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerCLIModuleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerCLIModuleWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerCLIModuleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerCLIModuleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerCLIModuleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerCLIModuleWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerCLIModuleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerCLIProgressBar_t {
    QByteArrayData data[8];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerCLIProgressBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerCLIProgressBar_t qt_meta_stringdata_PythonQtWrapper_qSlicerCLIProgressBar = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_qSlicerCLIPro..."
QT_MOC_LITERAL(1, 38, 25), // "new_qSlicerCLIProgressBar"
QT_MOC_LITERAL(2, 64, 22), // "qSlicerCLIProgressBar*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 8), // "QWidget*"
QT_MOC_LITERAL(5, 97, 6), // "parent"
QT_MOC_LITERAL(6, 104, 28), // "delete_qSlicerCLIProgressBar"
QT_MOC_LITERAL(7, 133, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerCLIProgressBar\0"
    "new_qSlicerCLIProgressBar\0"
    "qSlicerCLIProgressBar*\0\0QWidget*\0"
    "parent\0delete_qSlicerCLIProgressBar\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerCLIProgressBar[] = {

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

void PythonQtWrapper_qSlicerCLIProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerCLIProgressBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerCLIProgressBar* _r = _t->new_qSlicerCLIProgressBar((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerCLIProgressBar**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerCLIProgressBar* _r = _t->new_qSlicerCLIProgressBar();
            if (_a[0]) *reinterpret_cast< qSlicerCLIProgressBar**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerCLIProgressBar((*reinterpret_cast< qSlicerCLIProgressBar*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerCLIProgressBar* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerCLIProgressBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerCLIProgressBar.data,
    qt_meta_data_PythonQtWrapper_qSlicerCLIProgressBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerCLIProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerCLIProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerCLIProgressBar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerCLIProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
