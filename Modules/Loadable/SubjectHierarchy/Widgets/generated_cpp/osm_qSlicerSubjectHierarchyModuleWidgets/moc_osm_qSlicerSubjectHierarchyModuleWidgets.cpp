/****************************************************************************
** Meta object code from reading C++ file 'osm_qSlicerSubjectHierarchyModuleWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "osm_qSlicerSubjectHierarchyModuleWidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osm_qSlicerSubjectHierarchyModuleWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyModel_t {
    QByteArrayData data[7];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyModel_t qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyModel = {
    {
QT_MOC_LITERAL(0, 0, 42), // "PythonQtWrapper_qMRMLSubjectH..."
QT_MOC_LITERAL(1, 43, 30), // "new_qMRMLSubjectHierarchyModel"
QT_MOC_LITERAL(2, 74, 27), // "qMRMLSubjectHierarchyModel*"
QT_MOC_LITERAL(3, 102, 0), // ""
QT_MOC_LITERAL(4, 103, 6), // "parent"
QT_MOC_LITERAL(5, 110, 33), // "delete_qMRMLSubjectHierarchyM..."
QT_MOC_LITERAL(6, 144, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSubjectHierarchyModel\0"
    "new_qMRMLSubjectHierarchyModel\0"
    "qMRMLSubjectHierarchyModel*\0\0parent\0"
    "delete_qMRMLSubjectHierarchyModel\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSubjectHierarchyModel[] = {

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

void PythonQtWrapper_qMRMLSubjectHierarchyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSubjectHierarchyModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSubjectHierarchyModel* _r = _t->new_qMRMLSubjectHierarchyModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSubjectHierarchyModel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSubjectHierarchyModel* _r = _t->new_qMRMLSubjectHierarchyModel();
            if (_a[0]) *reinterpret_cast< qMRMLSubjectHierarchyModel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSubjectHierarchyModel((*reinterpret_cast< qMRMLSubjectHierarchyModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSubjectHierarchyModel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSubjectHierarchyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyModel.data,
    qt_meta_data_PythonQtWrapper_qMRMLSubjectHierarchyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSubjectHierarchyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSubjectHierarchyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSubjectHierarchyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterSubjectHierarchyProxyModel_t {
    QByteArrayData data[7];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterSubjectHierarchyProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterSubjectHierarchyProxyModel_t qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterSubjectHierarchyProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 57), // "PythonQtWrapper_qMRMLSortFilt..."
QT_MOC_LITERAL(1, 58, 45), // "new_qMRMLSortFilterSubjectHie..."
QT_MOC_LITERAL(2, 104, 42), // "qMRMLSortFilterSubjectHierarc..."
QT_MOC_LITERAL(3, 147, 0), // ""
QT_MOC_LITERAL(4, 148, 6), // "parent"
QT_MOC_LITERAL(5, 155, 48), // "delete_qMRMLSortFilterSubject..."
QT_MOC_LITERAL(6, 204, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSortFilterSubjectHierarchyProxyModel\0"
    "new_qMRMLSortFilterSubjectHierarchyProxyModel\0"
    "qMRMLSortFilterSubjectHierarchyProxyModel*\0"
    "\0parent\0delete_qMRMLSortFilterSubjectHierarchyProxyModel\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSortFilterSubjectHierarchyProxyModel[] = {

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

void PythonQtWrapper_qMRMLSortFilterSubjectHierarchyProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSortFilterSubjectHierarchyProxyModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSortFilterSubjectHierarchyProxyModel* _r = _t->new_qMRMLSortFilterSubjectHierarchyProxyModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSortFilterSubjectHierarchyProxyModel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSortFilterSubjectHierarchyProxyModel* _r = _t->new_qMRMLSortFilterSubjectHierarchyProxyModel();
            if (_a[0]) *reinterpret_cast< qMRMLSortFilterSubjectHierarchyProxyModel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSortFilterSubjectHierarchyProxyModel((*reinterpret_cast< qMRMLSortFilterSubjectHierarchyProxyModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSortFilterSubjectHierarchyProxyModel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSortFilterSubjectHierarchyProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterSubjectHierarchyProxyModel.data,
    qt_meta_data_PythonQtWrapper_qMRMLSortFilterSubjectHierarchyProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSortFilterSubjectHierarchyProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSortFilterSubjectHierarchyProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterSubjectHierarchyProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSortFilterSubjectHierarchyProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyTreeView_t {
    QByteArrayData data[8];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyTreeView_t qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyTreeView = {
    {
QT_MOC_LITERAL(0, 0, 45), // "PythonQtWrapper_qMRMLSubjectH..."
QT_MOC_LITERAL(1, 46, 33), // "new_qMRMLSubjectHierarchyTree..."
QT_MOC_LITERAL(2, 80, 30), // "qMRMLSubjectHierarchyTreeView*"
QT_MOC_LITERAL(3, 111, 0), // ""
QT_MOC_LITERAL(4, 112, 8), // "QWidget*"
QT_MOC_LITERAL(5, 121, 6), // "parent"
QT_MOC_LITERAL(6, 128, 36), // "delete_qMRMLSubjectHierarchyT..."
QT_MOC_LITERAL(7, 165, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSubjectHierarchyTreeView\0"
    "new_qMRMLSubjectHierarchyTreeView\0"
    "qMRMLSubjectHierarchyTreeView*\0\0"
    "QWidget*\0parent\0delete_qMRMLSubjectHierarchyTreeView\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSubjectHierarchyTreeView[] = {

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

void PythonQtWrapper_qMRMLSubjectHierarchyTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSubjectHierarchyTreeView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSubjectHierarchyTreeView* _r = _t->new_qMRMLSubjectHierarchyTreeView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSubjectHierarchyTreeView**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSubjectHierarchyTreeView* _r = _t->new_qMRMLSubjectHierarchyTreeView();
            if (_a[0]) *reinterpret_cast< qMRMLSubjectHierarchyTreeView**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSubjectHierarchyTreeView((*reinterpret_cast< qMRMLSubjectHierarchyTreeView*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSubjectHierarchyTreeView* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSubjectHierarchyTreeView::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyTreeView.data,
    qt_meta_data_PythonQtWrapper_qMRMLSubjectHierarchyTreeView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSubjectHierarchyTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSubjectHierarchyTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyTreeView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSubjectHierarchyTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyComboBox_t {
    QByteArrayData data[8];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyComboBox_t qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyComboBox = {
    {
QT_MOC_LITERAL(0, 0, 45), // "PythonQtWrapper_qMRMLSubjectH..."
QT_MOC_LITERAL(1, 46, 33), // "new_qMRMLSubjectHierarchyComb..."
QT_MOC_LITERAL(2, 80, 30), // "qMRMLSubjectHierarchyComboBox*"
QT_MOC_LITERAL(3, 111, 0), // ""
QT_MOC_LITERAL(4, 112, 8), // "QWidget*"
QT_MOC_LITERAL(5, 121, 6), // "parent"
QT_MOC_LITERAL(6, 128, 36), // "delete_qMRMLSubjectHierarchyC..."
QT_MOC_LITERAL(7, 165, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSubjectHierarchyComboBox\0"
    "new_qMRMLSubjectHierarchyComboBox\0"
    "qMRMLSubjectHierarchyComboBox*\0\0"
    "QWidget*\0parent\0delete_qMRMLSubjectHierarchyComboBox\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSubjectHierarchyComboBox[] = {

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

void PythonQtWrapper_qMRMLSubjectHierarchyComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSubjectHierarchyComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSubjectHierarchyComboBox* _r = _t->new_qMRMLSubjectHierarchyComboBox((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSubjectHierarchyComboBox**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSubjectHierarchyComboBox* _r = _t->new_qMRMLSubjectHierarchyComboBox();
            if (_a[0]) *reinterpret_cast< qMRMLSubjectHierarchyComboBox**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSubjectHierarchyComboBox((*reinterpret_cast< qMRMLSubjectHierarchyComboBox*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSubjectHierarchyComboBox* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSubjectHierarchyComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyComboBox.data,
    qt_meta_data_PythonQtWrapper_qMRMLSubjectHierarchyComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSubjectHierarchyComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSubjectHierarchyComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSubjectHierarchyComboBox.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSubjectHierarchyComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyPluginLogic_t {
    QByteArrayData data[7];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyPluginLogic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyPluginLogic_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyPluginLogic = {
    {
QT_MOC_LITERAL(0, 0, 50), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 51, 38), // "new_qSlicerSubjectHierarchyPl..."
QT_MOC_LITERAL(2, 90, 35), // "qSlicerSubjectHierarchyPlugin..."
QT_MOC_LITERAL(3, 126, 0), // ""
QT_MOC_LITERAL(4, 127, 6), // "parent"
QT_MOC_LITERAL(5, 134, 41), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 176, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchyPluginLogic\0"
    "new_qSlicerSubjectHierarchyPluginLogic\0"
    "qSlicerSubjectHierarchyPluginLogic*\0"
    "\0parent\0delete_qSlicerSubjectHierarchyPluginLogic\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyPluginLogic[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchyPluginLogic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchyPluginLogic *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchyPluginLogic* _r = _t->new_qSlicerSubjectHierarchyPluginLogic((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyPluginLogic**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchyPluginLogic* _r = _t->new_qSlicerSubjectHierarchyPluginLogic();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyPluginLogic**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchyPluginLogic((*reinterpret_cast< qSlicerSubjectHierarchyPluginLogic*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchyPluginLogic* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchyPluginLogic::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyPluginLogic.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyPluginLogic,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchyPluginLogic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchyPluginLogic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyPluginLogic.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchyPluginLogic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyPluginHandler_t {
    QByteArrayData data[7];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyPluginHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyPluginHandler_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyPluginHandler = {
    {
QT_MOC_LITERAL(0, 0, 52), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 53, 40), // "new_qSlicerSubjectHierarchyPl..."
QT_MOC_LITERAL(2, 94, 37), // "qSlicerSubjectHierarchyPlugin..."
QT_MOC_LITERAL(3, 132, 0), // ""
QT_MOC_LITERAL(4, 133, 6), // "parent"
QT_MOC_LITERAL(5, 140, 43), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 184, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchyPluginHandler\0"
    "new_qSlicerSubjectHierarchyPluginHandler\0"
    "qSlicerSubjectHierarchyPluginHandler*\0"
    "\0parent\0delete_qSlicerSubjectHierarchyPluginHandler\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyPluginHandler[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchyPluginHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchyPluginHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchyPluginHandler* _r = _t->new_qSlicerSubjectHierarchyPluginHandler((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyPluginHandler**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchyPluginHandler* _r = _t->new_qSlicerSubjectHierarchyPluginHandler();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyPluginHandler**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchyPluginHandler((*reinterpret_cast< qSlicerSubjectHierarchyPluginHandler*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchyPluginHandler* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchyPluginHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyPluginHandler.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyPluginHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchyPluginHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchyPluginHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyPluginHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchyPluginHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyDefaultPlugin_t {
    QByteArrayData data[7];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyDefaultPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyDefaultPlugin_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyDefaultPlugin = {
    {
QT_MOC_LITERAL(0, 0, 52), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 53, 40), // "new_qSlicerSubjectHierarchyDe..."
QT_MOC_LITERAL(2, 94, 37), // "qSlicerSubjectHierarchyDefaul..."
QT_MOC_LITERAL(3, 132, 0), // ""
QT_MOC_LITERAL(4, 133, 6), // "parent"
QT_MOC_LITERAL(5, 140, 43), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 184, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchyDefaultPlugin\0"
    "new_qSlicerSubjectHierarchyDefaultPlugin\0"
    "qSlicerSubjectHierarchyDefaultPlugin*\0"
    "\0parent\0delete_qSlicerSubjectHierarchyDefaultPlugin\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyDefaultPlugin[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchyDefaultPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchyDefaultPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchyDefaultPlugin* _r = _t->new_qSlicerSubjectHierarchyDefaultPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyDefaultPlugin**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchyDefaultPlugin* _r = _t->new_qSlicerSubjectHierarchyDefaultPlugin();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyDefaultPlugin**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchyDefaultPlugin((*reinterpret_cast< qSlicerSubjectHierarchyDefaultPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchyDefaultPlugin* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchyDefaultPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyDefaultPlugin.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyDefaultPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchyDefaultPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchyDefaultPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyDefaultPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchyDefaultPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyCloneNodePlugin_t {
    QByteArrayData data[7];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyCloneNodePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyCloneNodePlugin_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyCloneNodePlugin = {
    {
QT_MOC_LITERAL(0, 0, 54), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 55, 42), // "new_qSlicerSubjectHierarchyCl..."
QT_MOC_LITERAL(2, 98, 39), // "qSlicerSubjectHierarchyCloneN..."
QT_MOC_LITERAL(3, 138, 0), // ""
QT_MOC_LITERAL(4, 139, 6), // "parent"
QT_MOC_LITERAL(5, 146, 45), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 192, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchyCloneNodePlugin\0"
    "new_qSlicerSubjectHierarchyCloneNodePlugin\0"
    "qSlicerSubjectHierarchyCloneNodePlugin*\0"
    "\0parent\0delete_qSlicerSubjectHierarchyCloneNodePlugin\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyCloneNodePlugin[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchyCloneNodePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchyCloneNodePlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchyCloneNodePlugin* _r = _t->new_qSlicerSubjectHierarchyCloneNodePlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyCloneNodePlugin**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchyCloneNodePlugin* _r = _t->new_qSlicerSubjectHierarchyCloneNodePlugin();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyCloneNodePlugin**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchyCloneNodePlugin((*reinterpret_cast< qSlicerSubjectHierarchyCloneNodePlugin*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchyCloneNodePlugin* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchyCloneNodePlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyCloneNodePlugin.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyCloneNodePlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchyCloneNodePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchyCloneNodePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyCloneNodePlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchyCloneNodePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyParseLocalDataPlugin_t {
    QByteArrayData data[7];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyParseLocalDataPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyParseLocalDataPlugin_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyParseLocalDataPlugin = {
    {
QT_MOC_LITERAL(0, 0, 59), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 60, 47), // "new_qSlicerSubjectHierarchyPa..."
QT_MOC_LITERAL(2, 108, 44), // "qSlicerSubjectHierarchyParseL..."
QT_MOC_LITERAL(3, 153, 0), // ""
QT_MOC_LITERAL(4, 154, 6), // "parent"
QT_MOC_LITERAL(5, 161, 50), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 212, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchyParseLocalDataPlugin\0"
    "new_qSlicerSubjectHierarchyParseLocalDataPlugin\0"
    "qSlicerSubjectHierarchyParseLocalDataPlugin*\0"
    "\0parent\0delete_qSlicerSubjectHierarchyParseLocalDataPlugin\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyParseLocalDataPlugin[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchyParseLocalDataPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchyParseLocalDataPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchyParseLocalDataPlugin* _r = _t->new_qSlicerSubjectHierarchyParseLocalDataPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyParseLocalDataPlugin**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchyParseLocalDataPlugin* _r = _t->new_qSlicerSubjectHierarchyParseLocalDataPlugin();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyParseLocalDataPlugin**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchyParseLocalDataPlugin((*reinterpret_cast< qSlicerSubjectHierarchyParseLocalDataPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchyParseLocalDataPlugin* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchyParseLocalDataPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyParseLocalDataPlugin.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyParseLocalDataPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchyParseLocalDataPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchyParseLocalDataPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyParseLocalDataPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchyParseLocalDataPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyRegisterPlugin_t {
    QByteArrayData data[7];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyRegisterPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyRegisterPlugin_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyRegisterPlugin = {
    {
QT_MOC_LITERAL(0, 0, 53), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 54, 41), // "new_qSlicerSubjectHierarchyRe..."
QT_MOC_LITERAL(2, 96, 38), // "qSlicerSubjectHierarchyRegist..."
QT_MOC_LITERAL(3, 135, 0), // ""
QT_MOC_LITERAL(4, 136, 6), // "parent"
QT_MOC_LITERAL(5, 143, 44), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 188, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchyRegisterPlugin\0"
    "new_qSlicerSubjectHierarchyRegisterPlugin\0"
    "qSlicerSubjectHierarchyRegisterPlugin*\0"
    "\0parent\0delete_qSlicerSubjectHierarchyRegisterPlugin\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyRegisterPlugin[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchyRegisterPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchyRegisterPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchyRegisterPlugin* _r = _t->new_qSlicerSubjectHierarchyRegisterPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyRegisterPlugin**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchyRegisterPlugin* _r = _t->new_qSlicerSubjectHierarchyRegisterPlugin();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyRegisterPlugin**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchyRegisterPlugin((*reinterpret_cast< qSlicerSubjectHierarchyRegisterPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchyRegisterPlugin* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchyRegisterPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyRegisterPlugin.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyRegisterPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchyRegisterPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchyRegisterPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyRegisterPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchyRegisterPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyFolderPlugin_t {
    QByteArrayData data[7];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyFolderPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyFolderPlugin_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyFolderPlugin = {
    {
QT_MOC_LITERAL(0, 0, 51), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 52, 39), // "new_qSlicerSubjectHierarchyFo..."
QT_MOC_LITERAL(2, 92, 36), // "qSlicerSubjectHierarchyFolder..."
QT_MOC_LITERAL(3, 129, 0), // ""
QT_MOC_LITERAL(4, 130, 6), // "parent"
QT_MOC_LITERAL(5, 137, 42), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 180, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchyFolderPlugin\0"
    "new_qSlicerSubjectHierarchyFolderPlugin\0"
    "qSlicerSubjectHierarchyFolderPlugin*\0"
    "\0parent\0delete_qSlicerSubjectHierarchyFolderPlugin\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyFolderPlugin[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchyFolderPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchyFolderPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchyFolderPlugin* _r = _t->new_qSlicerSubjectHierarchyFolderPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyFolderPlugin**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchyFolderPlugin* _r = _t->new_qSlicerSubjectHierarchyFolderPlugin();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyFolderPlugin**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchyFolderPlugin((*reinterpret_cast< qSlicerSubjectHierarchyFolderPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchyFolderPlugin* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchyFolderPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyFolderPlugin.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyFolderPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchyFolderPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchyFolderPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyFolderPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchyFolderPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyOpacityPlugin_t {
    QByteArrayData data[7];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyOpacityPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyOpacityPlugin_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyOpacityPlugin = {
    {
QT_MOC_LITERAL(0, 0, 52), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 53, 40), // "new_qSlicerSubjectHierarchyOp..."
QT_MOC_LITERAL(2, 94, 37), // "qSlicerSubjectHierarchyOpacit..."
QT_MOC_LITERAL(3, 132, 0), // ""
QT_MOC_LITERAL(4, 133, 6), // "parent"
QT_MOC_LITERAL(5, 140, 43), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 184, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchyOpacityPlugin\0"
    "new_qSlicerSubjectHierarchyOpacityPlugin\0"
    "qSlicerSubjectHierarchyOpacityPlugin*\0"
    "\0parent\0delete_qSlicerSubjectHierarchyOpacityPlugin\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyOpacityPlugin[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchyOpacityPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchyOpacityPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchyOpacityPlugin* _r = _t->new_qSlicerSubjectHierarchyOpacityPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyOpacityPlugin**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchyOpacityPlugin* _r = _t->new_qSlicerSubjectHierarchyOpacityPlugin();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyOpacityPlugin**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchyOpacityPlugin((*reinterpret_cast< qSlicerSubjectHierarchyOpacityPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchyOpacityPlugin* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchyOpacityPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyOpacityPlugin.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyOpacityPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchyOpacityPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchyOpacityPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyOpacityPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchyOpacityPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyViewContextMenuPlugin_t {
    QByteArrayData data[7];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyViewContextMenuPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyViewContextMenuPlugin_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyViewContextMenuPlugin = {
    {
QT_MOC_LITERAL(0, 0, 60), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 61, 48), // "new_qSlicerSubjectHierarchyVi..."
QT_MOC_LITERAL(2, 110, 45), // "qSlicerSubjectHierarchyViewCo..."
QT_MOC_LITERAL(3, 156, 0), // ""
QT_MOC_LITERAL(4, 157, 6), // "parent"
QT_MOC_LITERAL(5, 164, 51), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 216, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchyViewContextMenuPlugin\0"
    "new_qSlicerSubjectHierarchyViewContextMenuPlugin\0"
    "qSlicerSubjectHierarchyViewContextMenuPlugin*\0"
    "\0parent\0delete_qSlicerSubjectHierarchyViewContextMenuPlugin\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyViewContextMenuPlugin[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchyViewContextMenuPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchyViewContextMenuPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchyViewContextMenuPlugin* _r = _t->new_qSlicerSubjectHierarchyViewContextMenuPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyViewContextMenuPlugin**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchyViewContextMenuPlugin* _r = _t->new_qSlicerSubjectHierarchyViewContextMenuPlugin();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyViewContextMenuPlugin**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchyViewContextMenuPlugin((*reinterpret_cast< qSlicerSubjectHierarchyViewContextMenuPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchyViewContextMenuPlugin* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchyViewContextMenuPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyViewContextMenuPlugin.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyViewContextMenuPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchyViewContextMenuPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchyViewContextMenuPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyViewContextMenuPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchyViewContextMenuPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyVisibilityPlugin_t {
    QByteArrayData data[7];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyVisibilityPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyVisibilityPlugin_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyVisibilityPlugin = {
    {
QT_MOC_LITERAL(0, 0, 55), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 56, 43), // "new_qSlicerSubjectHierarchyVi..."
QT_MOC_LITERAL(2, 100, 40), // "qSlicerSubjectHierarchyVisibi..."
QT_MOC_LITERAL(3, 141, 0), // ""
QT_MOC_LITERAL(4, 142, 6), // "parent"
QT_MOC_LITERAL(5, 149, 46), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 196, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchyVisibilityPlugin\0"
    "new_qSlicerSubjectHierarchyVisibilityPlugin\0"
    "qSlicerSubjectHierarchyVisibilityPlugin*\0"
    "\0parent\0delete_qSlicerSubjectHierarchyVisibilityPlugin\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyVisibilityPlugin[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchyVisibilityPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchyVisibilityPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchyVisibilityPlugin* _r = _t->new_qSlicerSubjectHierarchyVisibilityPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyVisibilityPlugin**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchyVisibilityPlugin* _r = _t->new_qSlicerSubjectHierarchyVisibilityPlugin();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyVisibilityPlugin**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchyVisibilityPlugin((*reinterpret_cast< qSlicerSubjectHierarchyVisibilityPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchyVisibilityPlugin* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchyVisibilityPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyVisibilityPlugin.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyVisibilityPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchyVisibilityPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchyVisibilityPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyVisibilityPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchyVisibilityPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyExportPlugin_t {
    QByteArrayData data[7];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyExportPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyExportPlugin_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyExportPlugin = {
    {
QT_MOC_LITERAL(0, 0, 51), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 52, 39), // "new_qSlicerSubjectHierarchyEx..."
QT_MOC_LITERAL(2, 92, 36), // "qSlicerSubjectHierarchyExport..."
QT_MOC_LITERAL(3, 129, 0), // ""
QT_MOC_LITERAL(4, 130, 6), // "parent"
QT_MOC_LITERAL(5, 137, 42), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 180, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchyExportPlugin\0"
    "new_qSlicerSubjectHierarchyExportPlugin\0"
    "qSlicerSubjectHierarchyExportPlugin*\0"
    "\0parent\0delete_qSlicerSubjectHierarchyExportPlugin\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyExportPlugin[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchyExportPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchyExportPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchyExportPlugin* _r = _t->new_qSlicerSubjectHierarchyExportPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyExportPlugin**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchyExportPlugin* _r = _t->new_qSlicerSubjectHierarchyExportPlugin();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyExportPlugin**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchyExportPlugin((*reinterpret_cast< qSlicerSubjectHierarchyExportPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchyExportPlugin* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchyExportPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyExportPlugin.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyExportPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchyExportPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchyExportPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyExportPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchyExportPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyExpandToDepthPlugin_t {
    QByteArrayData data[7];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyExpandToDepthPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyExpandToDepthPlugin_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyExpandToDepthPlugin = {
    {
QT_MOC_LITERAL(0, 0, 58), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 59, 46), // "new_qSlicerSubjectHierarchyEx..."
QT_MOC_LITERAL(2, 106, 43), // "qSlicerSubjectHierarchyExpand..."
QT_MOC_LITERAL(3, 150, 0), // ""
QT_MOC_LITERAL(4, 151, 6), // "parent"
QT_MOC_LITERAL(5, 158, 49), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 208, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchyExpandToDepthPlugin\0"
    "new_qSlicerSubjectHierarchyExpandToDepthPlugin\0"
    "qSlicerSubjectHierarchyExpandToDepthPlugin*\0"
    "\0parent\0delete_qSlicerSubjectHierarchyExpandToDepthPlugin\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyExpandToDepthPlugin[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchyExpandToDepthPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchyExpandToDepthPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchyExpandToDepthPlugin* _r = _t->new_qSlicerSubjectHierarchyExpandToDepthPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyExpandToDepthPlugin**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchyExpandToDepthPlugin* _r = _t->new_qSlicerSubjectHierarchyExpandToDepthPlugin();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyExpandToDepthPlugin**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchyExpandToDepthPlugin((*reinterpret_cast< qSlicerSubjectHierarchyExpandToDepthPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchyExpandToDepthPlugin* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchyExpandToDepthPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyExpandToDepthPlugin.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyExpandToDepthPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchyExpandToDepthPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchyExpandToDepthPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyExpandToDepthPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchyExpandToDepthPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyScriptedPlugin_t {
    QByteArrayData data[7];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyScriptedPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyScriptedPlugin_t qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyScriptedPlugin = {
    {
QT_MOC_LITERAL(0, 0, 53), // "PythonQtWrapper_qSlicerSubjec..."
QT_MOC_LITERAL(1, 54, 41), // "new_qSlicerSubjectHierarchySc..."
QT_MOC_LITERAL(2, 96, 38), // "qSlicerSubjectHierarchyScript..."
QT_MOC_LITERAL(3, 135, 0), // ""
QT_MOC_LITERAL(4, 136, 6), // "parent"
QT_MOC_LITERAL(5, 143, 44), // "delete_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(6, 188, 3) // "obj"

    },
    "PythonQtWrapper_qSlicerSubjectHierarchyScriptedPlugin\0"
    "new_qSlicerSubjectHierarchyScriptedPlugin\0"
    "qSlicerSubjectHierarchyScriptedPlugin*\0"
    "\0parent\0delete_qSlicerSubjectHierarchyScriptedPlugin\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyScriptedPlugin[] = {

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

void PythonQtWrapper_qSlicerSubjectHierarchyScriptedPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qSlicerSubjectHierarchyScriptedPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchyScriptedPlugin* _r = _t->new_qSlicerSubjectHierarchyScriptedPlugin((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyScriptedPlugin**>(_a[0]) = std::move(_r); }  break;
        case 1: { qSlicerSubjectHierarchyScriptedPlugin* _r = _t->new_qSlicerSubjectHierarchyScriptedPlugin();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyScriptedPlugin**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qSlicerSubjectHierarchyScriptedPlugin((*reinterpret_cast< qSlicerSubjectHierarchyScriptedPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchyScriptedPlugin* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qSlicerSubjectHierarchyScriptedPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyScriptedPlugin.data,
    qt_meta_data_PythonQtWrapper_qSlicerSubjectHierarchyScriptedPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qSlicerSubjectHierarchyScriptedPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qSlicerSubjectHierarchyScriptedPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qSlicerSubjectHierarchyScriptedPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qSlicerSubjectHierarchyScriptedPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
