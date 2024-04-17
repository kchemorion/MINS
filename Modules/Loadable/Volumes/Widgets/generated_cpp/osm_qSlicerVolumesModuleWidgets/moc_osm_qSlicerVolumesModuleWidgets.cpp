/****************************************************************************
** Meta object code from reading C++ file 'osm_qSlicerVolumesModuleWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "osm_qSlicerVolumesModuleWidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osm_qSlicerVolumesModuleWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythonQtWrapper_qSlicerDiffusionTensorVolumeDisplayWidget_t {
    QByteArrayData data[8];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerDiffusionTensorVolumeDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerDiffusionTensorVolumeDisplayWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerDiffusionTensorVolumeDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 57), // "PythonQtWrapper_qSlicerDiffus..."
QT_MOC_LITERAL(1, 58, 45), // "new_qSlicerDiffusionTensorVol..."
QT_MOC_LITERAL(2, 104, 42), // "qSlicerDiffusionTensorVolumeD..."
QT_MOC_LITERAL(3, 147, 0), // ""
QT_MOC_LITERAL(4, 148, 8), // "QWidget*"
QT_MOC_LITERAL(5, 157, 6), // "parent"
QT_MOC_LITERAL(6, 164, 48), // "delete_qSlicerDiffusionTensor..."
QT_MOC_LITERAL(7, 213, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerDiffusionTensorVolumeDisplayWidget\0"
    "new_qSlicerDiffusionTensorVolumeDisplayWidget\0"
    "qSlicerDiffusionTensorVolumeDisplayWidget*\0"
    "\0QWidget*\0parent\0"
    "delete_qSlicerDiffusionTensorVolumeDisplayWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerDiffusionTensorVolumeDisplayWidget[] = {

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

void PythonQtWrapper_qSlicerDiffusionTensorVolumeDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerDiffusionTensorVolumeDisplayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerDiffusionTensorVolumeDisplayWidget* _r = _t->new_qSlicerDiffusionTensorVolumeDisplayWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerDiffusionTensorVolumeDisplayWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerDiffusionTensorVolumeDisplayWidget* _r = _t->new_qSlicerDiffusionTensorVolumeDisplayWidget();
            if (_a[0]) *reinterpret_cast< qSlicerDiffusionTensorVolumeDisplayWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerDiffusionTensorVolumeDisplayWidget((*reinterpret_cast< qSlicerDiffusionTensorVolumeDisplayWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerDiffusionTensorVolumeDisplayWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerDiffusionTensorVolumeDisplayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerDiffusionTensorVolumeDisplayWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerDiffusionTensorVolumeDisplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerDiffusionTensorVolumeDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerDiffusionTensorVolumeDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerDiffusionTensorVolumeDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerDiffusionTensorVolumeDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerDiffusionWeightedVolumeDisplayWidget_t {
    QByteArrayData data[8];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerDiffusionWeightedVolumeDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerDiffusionWeightedVolumeDisplayWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerDiffusionWeightedVolumeDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 59), // "PythonQtWrapper_qSlicerDiffus..."
QT_MOC_LITERAL(1, 60, 47), // "new_qSlicerDiffusionWeightedV..."
QT_MOC_LITERAL(2, 108, 44), // "qSlicerDiffusionWeightedVolum..."
QT_MOC_LITERAL(3, 153, 0), // ""
QT_MOC_LITERAL(4, 154, 8), // "QWidget*"
QT_MOC_LITERAL(5, 163, 6), // "parent"
QT_MOC_LITERAL(6, 170, 50), // "delete_qSlicerDiffusionWeight..."
QT_MOC_LITERAL(7, 221, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerDiffusionWeightedVolumeDisplayWidget\0"
    "new_qSlicerDiffusionWeightedVolumeDisplayWidget\0"
    "qSlicerDiffusionWeightedVolumeDisplayWidget*\0"
    "\0QWidget*\0parent\0"
    "delete_qSlicerDiffusionWeightedVolumeDisplayWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerDiffusionWeightedVolumeDisplayWidget[] = {

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

void PythonQtWrapper_qSlicerDiffusionWeightedVolumeDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerDiffusionWeightedVolumeDisplayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerDiffusionWeightedVolumeDisplayWidget* _r = _t->new_qSlicerDiffusionWeightedVolumeDisplayWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerDiffusionWeightedVolumeDisplayWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerDiffusionWeightedVolumeDisplayWidget* _r = _t->new_qSlicerDiffusionWeightedVolumeDisplayWidget();
            if (_a[0]) *reinterpret_cast< qSlicerDiffusionWeightedVolumeDisplayWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerDiffusionWeightedVolumeDisplayWidget((*reinterpret_cast< qSlicerDiffusionWeightedVolumeDisplayWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerDiffusionWeightedVolumeDisplayWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerDiffusionWeightedVolumeDisplayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerDiffusionWeightedVolumeDisplayWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerDiffusionWeightedVolumeDisplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerDiffusionWeightedVolumeDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerDiffusionWeightedVolumeDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerDiffusionWeightedVolumeDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerDiffusionWeightedVolumeDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerLabelMapVolumeDisplayWidget_t {
    QByteArrayData data[8];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerLabelMapVolumeDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerLabelMapVolumeDisplayWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerLabelMapVolumeDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 50), // "PythonQtWrapper_qSlicerLabelM..."
QT_MOC_LITERAL(1, 51, 38), // "new_qSlicerLabelMapVolumeDisp..."
QT_MOC_LITERAL(2, 90, 35), // "qSlicerLabelMapVolumeDisplayW..."
QT_MOC_LITERAL(3, 126, 0), // ""
QT_MOC_LITERAL(4, 127, 8), // "QWidget*"
QT_MOC_LITERAL(5, 136, 6), // "parent"
QT_MOC_LITERAL(6, 143, 41), // "delete_qSlicerLabelMapVolumeD..."
QT_MOC_LITERAL(7, 185, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerLabelMapVolumeDisplayWidget\0"
    "new_qSlicerLabelMapVolumeDisplayWidget\0"
    "qSlicerLabelMapVolumeDisplayWidget*\0"
    "\0QWidget*\0parent\0"
    "delete_qSlicerLabelMapVolumeDisplayWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerLabelMapVolumeDisplayWidget[] = {

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

void PythonQtWrapper_qSlicerLabelMapVolumeDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerLabelMapVolumeDisplayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerLabelMapVolumeDisplayWidget* _r = _t->new_qSlicerLabelMapVolumeDisplayWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerLabelMapVolumeDisplayWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerLabelMapVolumeDisplayWidget* _r = _t->new_qSlicerLabelMapVolumeDisplayWidget();
            if (_a[0]) *reinterpret_cast< qSlicerLabelMapVolumeDisplayWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerLabelMapVolumeDisplayWidget((*reinterpret_cast< qSlicerLabelMapVolumeDisplayWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerLabelMapVolumeDisplayWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerLabelMapVolumeDisplayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerLabelMapVolumeDisplayWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerLabelMapVolumeDisplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerLabelMapVolumeDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerLabelMapVolumeDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerLabelMapVolumeDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerLabelMapVolumeDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerScalarVolumeDisplayWidget_t {
    QByteArrayData data[8];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerScalarVolumeDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerScalarVolumeDisplayWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerScalarVolumeDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 48), // "PythonQtWrapper_qSlicerScalar..."
QT_MOC_LITERAL(1, 49, 36), // "new_qSlicerScalarVolumeDispla..."
QT_MOC_LITERAL(2, 86, 33), // "qSlicerScalarVolumeDisplayWid..."
QT_MOC_LITERAL(3, 120, 0), // ""
QT_MOC_LITERAL(4, 121, 8), // "QWidget*"
QT_MOC_LITERAL(5, 130, 6), // "parent"
QT_MOC_LITERAL(6, 137, 39), // "delete_qSlicerScalarVolumeDis..."
QT_MOC_LITERAL(7, 177, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerScalarVolumeDisplayWidget\0"
    "new_qSlicerScalarVolumeDisplayWidget\0"
    "qSlicerScalarVolumeDisplayWidget*\0\0"
    "QWidget*\0parent\0delete_qSlicerScalarVolumeDisplayWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerScalarVolumeDisplayWidget[] = {

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

void PythonQtWrapper_qSlicerScalarVolumeDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerScalarVolumeDisplayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerScalarVolumeDisplayWidget* _r = _t->new_qSlicerScalarVolumeDisplayWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerScalarVolumeDisplayWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerScalarVolumeDisplayWidget* _r = _t->new_qSlicerScalarVolumeDisplayWidget();
            if (_a[0]) *reinterpret_cast< qSlicerScalarVolumeDisplayWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerScalarVolumeDisplayWidget((*reinterpret_cast< qSlicerScalarVolumeDisplayWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerScalarVolumeDisplayWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerScalarVolumeDisplayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerScalarVolumeDisplayWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerScalarVolumeDisplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerScalarVolumeDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerScalarVolumeDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerScalarVolumeDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerScalarVolumeDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerVolumeDisplayWidget_t {
    QByteArrayData data[8];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerVolumeDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerVolumeDisplayWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerVolumeDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 42), // "PythonQtWrapper_qSlicerVolume..."
QT_MOC_LITERAL(1, 43, 30), // "new_qSlicerVolumeDisplayWidget"
QT_MOC_LITERAL(2, 74, 27), // "qSlicerVolumeDisplayWidget*"
QT_MOC_LITERAL(3, 102, 0), // ""
QT_MOC_LITERAL(4, 103, 8), // "QWidget*"
QT_MOC_LITERAL(5, 112, 6), // "parent"
QT_MOC_LITERAL(6, 119, 33), // "delete_qSlicerVolumeDisplayWi..."
QT_MOC_LITERAL(7, 153, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerVolumeDisplayWidget\0"
    "new_qSlicerVolumeDisplayWidget\0"
    "qSlicerVolumeDisplayWidget*\0\0QWidget*\0"
    "parent\0delete_qSlicerVolumeDisplayWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerVolumeDisplayWidget[] = {

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

void PythonQtWrapper_qSlicerVolumeDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerVolumeDisplayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerVolumeDisplayWidget* _r = _t->new_qSlicerVolumeDisplayWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerVolumeDisplayWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerVolumeDisplayWidget* _r = _t->new_qSlicerVolumeDisplayWidget();
            if (_a[0]) *reinterpret_cast< qSlicerVolumeDisplayWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerVolumeDisplayWidget((*reinterpret_cast< qSlicerVolumeDisplayWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerVolumeDisplayWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerVolumeDisplayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerVolumeDisplayWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerVolumeDisplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerVolumeDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerVolumeDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerVolumeDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerVolumeDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerDTISliceDisplayWidget_t {
    QByteArrayData data[8];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerDTISliceDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerDTISliceDisplayWidget_t qt_meta_stringdata_PythonQtWrapper_qSlicerDTISliceDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 44), // "PythonQtWrapper_qSlicerDTISli..."
QT_MOC_LITERAL(1, 45, 32), // "new_qSlicerDTISliceDisplayWidget"
QT_MOC_LITERAL(2, 78, 29), // "qSlicerDTISliceDisplayWidget*"
QT_MOC_LITERAL(3, 108, 0), // ""
QT_MOC_LITERAL(4, 109, 8), // "QWidget*"
QT_MOC_LITERAL(5, 118, 6), // "parent"
QT_MOC_LITERAL(6, 125, 35), // "delete_qSlicerDTISliceDisplay..."
QT_MOC_LITERAL(7, 161, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerDTISliceDisplayWidget\0"
    "new_qSlicerDTISliceDisplayWidget\0"
    "qSlicerDTISliceDisplayWidget*\0\0QWidget*\0"
    "parent\0delete_qSlicerDTISliceDisplayWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerDTISliceDisplayWidget[] = {

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

void PythonQtWrapper_qSlicerDTISliceDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerDTISliceDisplayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerDTISliceDisplayWidget* _r = _t->new_qSlicerDTISliceDisplayWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerDTISliceDisplayWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerDTISliceDisplayWidget* _r = _t->new_qSlicerDTISliceDisplayWidget();
            if (_a[0]) *reinterpret_cast< qSlicerDTISliceDisplayWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerDTISliceDisplayWidget((*reinterpret_cast< qSlicerDTISliceDisplayWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerDTISliceDisplayWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerDTISliceDisplayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerDTISliceDisplayWidget.data,
    qt_meta_data_PythonQtWrapper_qSlicerDTISliceDisplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerDTISliceDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerDTISliceDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerDTISliceDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerDTISliceDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
