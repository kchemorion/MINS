/****************************************************************************
** Meta object code from reading C++ file 'osm_qSlicerSegmentationsModuleWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "osm_qSlicerSegmentationsModuleWidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osm_qSlicerSegmentationsModuleWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythonQtWrapper_qMRMLDoubleSpinBoxDelegate_t {
    QByteArrayData data[7];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLDoubleSpinBoxDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLDoubleSpinBoxDelegate_t qt_meta_stringdata_PythonQtWrapper_qMRMLDoubleSpinBoxDelegate = {
    {
QT_MOC_LITERAL(0, 0, 42), // "PythonQtWrapper_qMRMLDoubleSp..."
QT_MOC_LITERAL(1, 43, 30), // "new_qMRMLDoubleSpinBoxDelegate"
QT_MOC_LITERAL(2, 74, 27), // "qMRMLDoubleSpinBoxDelegate*"
QT_MOC_LITERAL(3, 102, 0), // ""
QT_MOC_LITERAL(4, 103, 6), // "parent"
QT_MOC_LITERAL(5, 110, 33), // "delete_qMRMLDoubleSpinBoxDele..."
QT_MOC_LITERAL(6, 144, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLDoubleSpinBoxDelegate\0"
    "new_qMRMLDoubleSpinBoxDelegate\0"
    "qMRMLDoubleSpinBoxDelegate*\0\0parent\0"
    "delete_qMRMLDoubleSpinBoxDelegate\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLDoubleSpinBoxDelegate[] = {

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

void PythonQtWrapper_qMRMLDoubleSpinBoxDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLDoubleSpinBoxDelegate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLDoubleSpinBoxDelegate* _r = _t->new_qMRMLDoubleSpinBoxDelegate((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLDoubleSpinBoxDelegate**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLDoubleSpinBoxDelegate* _r = _t->new_qMRMLDoubleSpinBoxDelegate();
            if (_a[0]) *reinterpret_cast< qMRMLDoubleSpinBoxDelegate**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLDoubleSpinBoxDelegate((*reinterpret_cast< qMRMLDoubleSpinBoxDelegate*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLDoubleSpinBoxDelegate* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLDoubleSpinBoxDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLDoubleSpinBoxDelegate.data,
    qt_meta_data_PythonQtWrapper_qMRMLDoubleSpinBoxDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLDoubleSpinBoxDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLDoubleSpinBoxDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLDoubleSpinBoxDelegate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLDoubleSpinBoxDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentsModel_t {
    QByteArrayData data[7];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentsModel_t qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentsModel = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_qMRMLSegments..."
QT_MOC_LITERAL(1, 35, 22), // "new_qMRMLSegmentsModel"
QT_MOC_LITERAL(2, 58, 19), // "qMRMLSegmentsModel*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 6), // "parent"
QT_MOC_LITERAL(5, 86, 25), // "delete_qMRMLSegmentsModel"
QT_MOC_LITERAL(6, 112, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSegmentsModel\0"
    "new_qMRMLSegmentsModel\0qMRMLSegmentsModel*\0"
    "\0parent\0delete_qMRMLSegmentsModel\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSegmentsModel[] = {

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

void PythonQtWrapper_qMRMLSegmentsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSegmentsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSegmentsModel* _r = _t->new_qMRMLSegmentsModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSegmentsModel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSegmentsModel* _r = _t->new_qMRMLSegmentsModel();
            if (_a[0]) *reinterpret_cast< qMRMLSegmentsModel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSegmentsModel((*reinterpret_cast< qMRMLSegmentsModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSegmentsModel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSegmentsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentsModel.data,
    qt_meta_data_PythonQtWrapper_qMRMLSegmentsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSegmentsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSegmentsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentsModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSegmentsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentsTableView_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentsTableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentsTableView_t qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentsTableView = {
    {
QT_MOC_LITERAL(0, 0, 38), // "PythonQtWrapper_qMRMLSegments..."
QT_MOC_LITERAL(1, 39, 26), // "new_qMRMLSegmentsTableView"
QT_MOC_LITERAL(2, 66, 23), // "qMRMLSegmentsTableView*"
QT_MOC_LITERAL(3, 90, 0), // ""
QT_MOC_LITERAL(4, 91, 8), // "QWidget*"
QT_MOC_LITERAL(5, 100, 6), // "parent"
QT_MOC_LITERAL(6, 107, 29), // "delete_qMRMLSegmentsTableView"
QT_MOC_LITERAL(7, 137, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSegmentsTableView\0"
    "new_qMRMLSegmentsTableView\0"
    "qMRMLSegmentsTableView*\0\0QWidget*\0"
    "parent\0delete_qMRMLSegmentsTableView\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSegmentsTableView[] = {

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

void PythonQtWrapper_qMRMLSegmentsTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSegmentsTableView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSegmentsTableView* _r = _t->new_qMRMLSegmentsTableView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSegmentsTableView**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSegmentsTableView* _r = _t->new_qMRMLSegmentsTableView();
            if (_a[0]) *reinterpret_cast< qMRMLSegmentsTableView**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSegmentsTableView((*reinterpret_cast< qMRMLSegmentsTableView*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSegmentsTableView* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSegmentsTableView::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentsTableView.data,
    qt_meta_data_PythonQtWrapper_qMRMLSegmentsTableView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSegmentsTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSegmentsTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentsTableView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSegmentsTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationConversionParametersWidget_t {
    QByteArrayData data[8];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationConversionParametersWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationConversionParametersWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationConversionParametersWidget = {
    {
QT_MOC_LITERAL(0, 0, 59), // "PythonQtWrapper_qMRMLSegmenta..."
QT_MOC_LITERAL(1, 60, 47), // "new_qMRMLSegmentationConversi..."
QT_MOC_LITERAL(2, 108, 44), // "qMRMLSegmentationConversionPa..."
QT_MOC_LITERAL(3, 153, 0), // ""
QT_MOC_LITERAL(4, 154, 8), // "QWidget*"
QT_MOC_LITERAL(5, 163, 6), // "parent"
QT_MOC_LITERAL(6, 170, 50), // "delete_qMRMLSegmentationConve..."
QT_MOC_LITERAL(7, 221, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSegmentationConversionParametersWidget\0"
    "new_qMRMLSegmentationConversionParametersWidget\0"
    "qMRMLSegmentationConversionParametersWidget*\0"
    "\0QWidget*\0parent\0"
    "delete_qMRMLSegmentationConversionParametersWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSegmentationConversionParametersWidget[] = {

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

void PythonQtWrapper_qMRMLSegmentationConversionParametersWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSegmentationConversionParametersWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSegmentationConversionParametersWidget* _r = _t->new_qMRMLSegmentationConversionParametersWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSegmentationConversionParametersWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSegmentationConversionParametersWidget* _r = _t->new_qMRMLSegmentationConversionParametersWidget();
            if (_a[0]) *reinterpret_cast< qMRMLSegmentationConversionParametersWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSegmentationConversionParametersWidget((*reinterpret_cast< qMRMLSegmentationConversionParametersWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSegmentationConversionParametersWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSegmentationConversionParametersWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationConversionParametersWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLSegmentationConversionParametersWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSegmentationConversionParametersWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSegmentationConversionParametersWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationConversionParametersWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSegmentationConversionParametersWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationDisplayNodeWidget_t {
    QByteArrayData data[8];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationDisplayNodeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationDisplayNodeWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationDisplayNodeWidget = {
    {
QT_MOC_LITERAL(0, 0, 50), // "PythonQtWrapper_qMRMLSegmenta..."
QT_MOC_LITERAL(1, 51, 38), // "new_qMRMLSegmentationDisplayN..."
QT_MOC_LITERAL(2, 90, 35), // "qMRMLSegmentationDisplayNodeW..."
QT_MOC_LITERAL(3, 126, 0), // ""
QT_MOC_LITERAL(4, 127, 8), // "QWidget*"
QT_MOC_LITERAL(5, 136, 6), // "parent"
QT_MOC_LITERAL(6, 143, 41), // "delete_qMRMLSegmentationDispl..."
QT_MOC_LITERAL(7, 185, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSegmentationDisplayNodeWidget\0"
    "new_qMRMLSegmentationDisplayNodeWidget\0"
    "qMRMLSegmentationDisplayNodeWidget*\0"
    "\0QWidget*\0parent\0"
    "delete_qMRMLSegmentationDisplayNodeWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSegmentationDisplayNodeWidget[] = {

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

void PythonQtWrapper_qMRMLSegmentationDisplayNodeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSegmentationDisplayNodeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSegmentationDisplayNodeWidget* _r = _t->new_qMRMLSegmentationDisplayNodeWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSegmentationDisplayNodeWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSegmentationDisplayNodeWidget* _r = _t->new_qMRMLSegmentationDisplayNodeWidget();
            if (_a[0]) *reinterpret_cast< qMRMLSegmentationDisplayNodeWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSegmentationDisplayNodeWidget((*reinterpret_cast< qMRMLSegmentationDisplayNodeWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSegmentationDisplayNodeWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSegmentationDisplayNodeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationDisplayNodeWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLSegmentationDisplayNodeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSegmentationDisplayNodeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSegmentationDisplayNodeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationDisplayNodeWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSegmentationDisplayNodeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationFileExportWidget_t {
    QByteArrayData data[8];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationFileExportWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationFileExportWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationFileExportWidget = {
    {
QT_MOC_LITERAL(0, 0, 49), // "PythonQtWrapper_qMRMLSegmenta..."
QT_MOC_LITERAL(1, 50, 37), // "new_qMRMLSegmentationFileExpo..."
QT_MOC_LITERAL(2, 88, 34), // "qMRMLSegmentationFileExportWi..."
QT_MOC_LITERAL(3, 123, 0), // ""
QT_MOC_LITERAL(4, 124, 8), // "QWidget*"
QT_MOC_LITERAL(5, 133, 6), // "parent"
QT_MOC_LITERAL(6, 140, 40), // "delete_qMRMLSegmentationFileE..."
QT_MOC_LITERAL(7, 181, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSegmentationFileExportWidget\0"
    "new_qMRMLSegmentationFileExportWidget\0"
    "qMRMLSegmentationFileExportWidget*\0\0"
    "QWidget*\0parent\0"
    "delete_qMRMLSegmentationFileExportWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSegmentationFileExportWidget[] = {

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

void PythonQtWrapper_qMRMLSegmentationFileExportWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSegmentationFileExportWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSegmentationFileExportWidget* _r = _t->new_qMRMLSegmentationFileExportWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSegmentationFileExportWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSegmentationFileExportWidget* _r = _t->new_qMRMLSegmentationFileExportWidget();
            if (_a[0]) *reinterpret_cast< qMRMLSegmentationFileExportWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSegmentationFileExportWidget((*reinterpret_cast< qMRMLSegmentationFileExportWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSegmentationFileExportWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSegmentationFileExportWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationFileExportWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLSegmentationFileExportWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSegmentationFileExportWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSegmentationFileExportWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationFileExportWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSegmentationFileExportWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationGeometryWidget_t {
    QByteArrayData data[8];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationGeometryWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationGeometryWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationGeometryWidget = {
    {
QT_MOC_LITERAL(0, 0, 47), // "PythonQtWrapper_qMRMLSegmenta..."
QT_MOC_LITERAL(1, 48, 35), // "new_qMRMLSegmentationGeometry..."
QT_MOC_LITERAL(2, 84, 32), // "qMRMLSegmentationGeometryWidget*"
QT_MOC_LITERAL(3, 117, 0), // ""
QT_MOC_LITERAL(4, 118, 8), // "QWidget*"
QT_MOC_LITERAL(5, 127, 6), // "parent"
QT_MOC_LITERAL(6, 134, 38), // "delete_qMRMLSegmentationGeome..."
QT_MOC_LITERAL(7, 173, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSegmentationGeometryWidget\0"
    "new_qMRMLSegmentationGeometryWidget\0"
    "qMRMLSegmentationGeometryWidget*\0\0"
    "QWidget*\0parent\0delete_qMRMLSegmentationGeometryWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSegmentationGeometryWidget[] = {

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

void PythonQtWrapper_qMRMLSegmentationGeometryWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSegmentationGeometryWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSegmentationGeometryWidget* _r = _t->new_qMRMLSegmentationGeometryWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSegmentationGeometryWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSegmentationGeometryWidget* _r = _t->new_qMRMLSegmentationGeometryWidget();
            if (_a[0]) *reinterpret_cast< qMRMLSegmentationGeometryWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSegmentationGeometryWidget((*reinterpret_cast< qMRMLSegmentationGeometryWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSegmentationGeometryWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSegmentationGeometryWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationGeometryWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLSegmentationGeometryWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSegmentationGeometryWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSegmentationGeometryWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationGeometryWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSegmentationGeometryWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationRepresentationsListView_t {
    QByteArrayData data[8];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationRepresentationsListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationRepresentationsListView_t qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationRepresentationsListView = {
    {
QT_MOC_LITERAL(0, 0, 56), // "PythonQtWrapper_qMRMLSegmenta..."
QT_MOC_LITERAL(1, 57, 44), // "new_qMRMLSegmentationRepresen..."
QT_MOC_LITERAL(2, 102, 41), // "qMRMLSegmentationRepresentati..."
QT_MOC_LITERAL(3, 144, 0), // ""
QT_MOC_LITERAL(4, 145, 8), // "QWidget*"
QT_MOC_LITERAL(5, 154, 6), // "parent"
QT_MOC_LITERAL(6, 161, 47), // "delete_qMRMLSegmentationRepre..."
QT_MOC_LITERAL(7, 209, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSegmentationRepresentationsListView\0"
    "new_qMRMLSegmentationRepresentationsListView\0"
    "qMRMLSegmentationRepresentationsListView*\0"
    "\0QWidget*\0parent\0"
    "delete_qMRMLSegmentationRepresentationsListView\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSegmentationRepresentationsListView[] = {

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

void PythonQtWrapper_qMRMLSegmentationRepresentationsListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSegmentationRepresentationsListView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSegmentationRepresentationsListView* _r = _t->new_qMRMLSegmentationRepresentationsListView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSegmentationRepresentationsListView**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSegmentationRepresentationsListView* _r = _t->new_qMRMLSegmentationRepresentationsListView();
            if (_a[0]) *reinterpret_cast< qMRMLSegmentationRepresentationsListView**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSegmentationRepresentationsListView((*reinterpret_cast< qMRMLSegmentationRepresentationsListView*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSegmentationRepresentationsListView* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSegmentationRepresentationsListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationRepresentationsListView.data,
    qt_meta_data_PythonQtWrapper_qMRMLSegmentationRepresentationsListView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSegmentationRepresentationsListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSegmentationRepresentationsListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationRepresentationsListView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSegmentationRepresentationsListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationShow3DButton_t {
    QByteArrayData data[8];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationShow3DButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationShow3DButton_t qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationShow3DButton = {
    {
QT_MOC_LITERAL(0, 0, 45), // "PythonQtWrapper_qMRMLSegmenta..."
QT_MOC_LITERAL(1, 46, 33), // "new_qMRMLSegmentationShow3DBu..."
QT_MOC_LITERAL(2, 80, 30), // "qMRMLSegmentationShow3DButton*"
QT_MOC_LITERAL(3, 111, 0), // ""
QT_MOC_LITERAL(4, 112, 8), // "QWidget*"
QT_MOC_LITERAL(5, 121, 6), // "parent"
QT_MOC_LITERAL(6, 128, 36), // "delete_qMRMLSegmentationShow3..."
QT_MOC_LITERAL(7, 165, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSegmentationShow3DButton\0"
    "new_qMRMLSegmentationShow3DButton\0"
    "qMRMLSegmentationShow3DButton*\0\0"
    "QWidget*\0parent\0delete_qMRMLSegmentationShow3DButton\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSegmentationShow3DButton[] = {

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

void PythonQtWrapper_qMRMLSegmentationShow3DButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSegmentationShow3DButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSegmentationShow3DButton* _r = _t->new_qMRMLSegmentationShow3DButton((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSegmentationShow3DButton**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSegmentationShow3DButton* _r = _t->new_qMRMLSegmentationShow3DButton();
            if (_a[0]) *reinterpret_cast< qMRMLSegmentationShow3DButton**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSegmentationShow3DButton((*reinterpret_cast< qMRMLSegmentationShow3DButton*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSegmentationShow3DButton* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSegmentationShow3DButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationShow3DButton.data,
    qt_meta_data_PythonQtWrapper_qMRMLSegmentationShow3DButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSegmentationShow3DButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSegmentationShow3DButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentationShow3DButton.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSegmentationShow3DButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentEditorWidget_t {
    QByteArrayData data[8];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentEditorWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 40), // "PythonQtWrapper_qMRMLSegmentE..."
QT_MOC_LITERAL(1, 41, 28), // "new_qMRMLSegmentEditorWidget"
QT_MOC_LITERAL(2, 70, 25), // "qMRMLSegmentEditorWidget*"
QT_MOC_LITERAL(3, 96, 0), // ""
QT_MOC_LITERAL(4, 97, 8), // "QWidget*"
QT_MOC_LITERAL(5, 106, 6), // "parent"
QT_MOC_LITERAL(6, 113, 31), // "delete_qMRMLSegmentEditorWidget"
QT_MOC_LITERAL(7, 145, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSegmentEditorWidget\0"
    "new_qMRMLSegmentEditorWidget\0"
    "qMRMLSegmentEditorWidget*\0\0QWidget*\0"
    "parent\0delete_qMRMLSegmentEditorWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSegmentEditorWidget[] = {

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

void PythonQtWrapper_qMRMLSegmentEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSegmentEditorWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSegmentEditorWidget* _r = _t->new_qMRMLSegmentEditorWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSegmentEditorWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSegmentEditorWidget* _r = _t->new_qMRMLSegmentEditorWidget();
            if (_a[0]) *reinterpret_cast< qMRMLSegmentEditorWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSegmentEditorWidget((*reinterpret_cast< qMRMLSegmentEditorWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSegmentEditorWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSegmentEditorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentEditorWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLSegmentEditorWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSegmentEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSegmentEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentEditorWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSegmentEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterSegmentsProxyModel_t {
    QByteArrayData data[7];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterSegmentsProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterSegmentsProxyModel_t qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterSegmentsProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 49), // "PythonQtWrapper_qMRMLSortFilt..."
QT_MOC_LITERAL(1, 50, 37), // "new_qMRMLSortFilterSegmentsPr..."
QT_MOC_LITERAL(2, 88, 34), // "qMRMLSortFilterSegmentsProxyM..."
QT_MOC_LITERAL(3, 123, 0), // ""
QT_MOC_LITERAL(4, 124, 6), // "parent"
QT_MOC_LITERAL(5, 131, 40), // "delete_qMRMLSortFilterSegment..."
QT_MOC_LITERAL(6, 172, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSortFilterSegmentsProxyModel\0"
    "new_qMRMLSortFilterSegmentsProxyModel\0"
    "qMRMLSortFilterSegmentsProxyModel*\0\0"
    "parent\0delete_qMRMLSortFilterSegmentsProxyModel\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSortFilterSegmentsProxyModel[] = {

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

void PythonQtWrapper_qMRMLSortFilterSegmentsProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSortFilterSegmentsProxyModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSortFilterSegmentsProxyModel* _r = _t->new_qMRMLSortFilterSegmentsProxyModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSortFilterSegmentsProxyModel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSortFilterSegmentsProxyModel* _r = _t->new_qMRMLSortFilterSegmentsProxyModel();
            if (_a[0]) *reinterpret_cast< qMRMLSortFilterSegmentsProxyModel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSortFilterSegmentsProxyModel((*reinterpret_cast< qMRMLSortFilterSegmentsProxyModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSortFilterSegmentsProxyModel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSortFilterSegmentsProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterSegmentsProxyModel.data,
    qt_meta_data_PythonQtWrapper_qMRMLSortFilterSegmentsProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSortFilterSegmentsProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSortFilterSegmentsProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterSegmentsProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSortFilterSegmentsProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
