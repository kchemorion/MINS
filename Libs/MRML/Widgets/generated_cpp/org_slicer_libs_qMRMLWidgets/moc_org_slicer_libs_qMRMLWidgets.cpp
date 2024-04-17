/****************************************************************************
** Meta object code from reading C++ file 'org_slicer_libs_qMRMLWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "org_slicer_libs_qMRMLWidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'org_slicer_libs_qMRMLWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythonQtWrapper_qMRMLCaptureToolBar_t {
    QByteArrayData data[8];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLCaptureToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLCaptureToolBar_t qt_meta_stringdata_PythonQtWrapper_qMRMLCaptureToolBar = {
    {
QT_MOC_LITERAL(0, 0, 35), // "PythonQtWrapper_qMRMLCaptureT..."
QT_MOC_LITERAL(1, 36, 23), // "new_qMRMLCaptureToolBar"
QT_MOC_LITERAL(2, 60, 20), // "qMRMLCaptureToolBar*"
QT_MOC_LITERAL(3, 81, 0), // ""
QT_MOC_LITERAL(4, 82, 8), // "QWidget*"
QT_MOC_LITERAL(5, 91, 6), // "parent"
QT_MOC_LITERAL(6, 98, 26), // "delete_qMRMLCaptureToolBar"
QT_MOC_LITERAL(7, 125, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLCaptureToolBar\0"
    "new_qMRMLCaptureToolBar\0qMRMLCaptureToolBar*\0"
    "\0QWidget*\0parent\0delete_qMRMLCaptureToolBar\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLCaptureToolBar[] = {

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

void PythonQtWrapper_qMRMLCaptureToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLCaptureToolBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLCaptureToolBar* _r = _t->new_qMRMLCaptureToolBar((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLCaptureToolBar**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLCaptureToolBar* _r = _t->new_qMRMLCaptureToolBar();
            if (_a[0]) *reinterpret_cast< qMRMLCaptureToolBar**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLCaptureToolBar((*reinterpret_cast< qMRMLCaptureToolBar*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLCaptureToolBar* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLCaptureToolBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLCaptureToolBar.data,
    qt_meta_data_PythonQtWrapper_qMRMLCaptureToolBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLCaptureToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLCaptureToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLCaptureToolBar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLCaptureToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLCheckableNodeComboBox_t {
    QByteArrayData data[8];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLCheckableNodeComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLCheckableNodeComboBox_t qt_meta_stringdata_PythonQtWrapper_qMRMLCheckableNodeComboBox = {
    {
QT_MOC_LITERAL(0, 0, 42), // "PythonQtWrapper_qMRMLCheckabl..."
QT_MOC_LITERAL(1, 43, 30), // "new_qMRMLCheckableNodeComboBox"
QT_MOC_LITERAL(2, 74, 27), // "qMRMLCheckableNodeComboBox*"
QT_MOC_LITERAL(3, 102, 0), // ""
QT_MOC_LITERAL(4, 103, 8), // "QWidget*"
QT_MOC_LITERAL(5, 112, 6), // "parent"
QT_MOC_LITERAL(6, 119, 33), // "delete_qMRMLCheckableNodeComb..."
QT_MOC_LITERAL(7, 153, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLCheckableNodeComboBox\0"
    "new_qMRMLCheckableNodeComboBox\0"
    "qMRMLCheckableNodeComboBox*\0\0QWidget*\0"
    "parent\0delete_qMRMLCheckableNodeComboBox\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLCheckableNodeComboBox[] = {

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

void PythonQtWrapper_qMRMLCheckableNodeComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLCheckableNodeComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLCheckableNodeComboBox* _r = _t->new_qMRMLCheckableNodeComboBox((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLCheckableNodeComboBox**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLCheckableNodeComboBox* _r = _t->new_qMRMLCheckableNodeComboBox();
            if (_a[0]) *reinterpret_cast< qMRMLCheckableNodeComboBox**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLCheckableNodeComboBox((*reinterpret_cast< qMRMLCheckableNodeComboBox*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLCheckableNodeComboBox* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLCheckableNodeComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLCheckableNodeComboBox.data,
    qt_meta_data_PythonQtWrapper_qMRMLCheckableNodeComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLCheckableNodeComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLCheckableNodeComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLCheckableNodeComboBox.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLCheckableNodeComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLClipNodeWidget_t {
    QByteArrayData data[8];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLClipNodeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLClipNodeWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLClipNodeWidget = {
    {
QT_MOC_LITERAL(0, 0, 35), // "PythonQtWrapper_qMRMLClipNode..."
QT_MOC_LITERAL(1, 36, 23), // "new_qMRMLClipNodeWidget"
QT_MOC_LITERAL(2, 60, 20), // "qMRMLClipNodeWidget*"
QT_MOC_LITERAL(3, 81, 0), // ""
QT_MOC_LITERAL(4, 82, 8), // "QWidget*"
QT_MOC_LITERAL(5, 91, 6), // "parent"
QT_MOC_LITERAL(6, 98, 26), // "delete_qMRMLClipNodeWidget"
QT_MOC_LITERAL(7, 125, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLClipNodeWidget\0"
    "new_qMRMLClipNodeWidget\0qMRMLClipNodeWidget*\0"
    "\0QWidget*\0parent\0delete_qMRMLClipNodeWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLClipNodeWidget[] = {

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

void PythonQtWrapper_qMRMLClipNodeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLClipNodeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLClipNodeWidget* _r = _t->new_qMRMLClipNodeWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLClipNodeWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLClipNodeWidget* _r = _t->new_qMRMLClipNodeWidget();
            if (_a[0]) *reinterpret_cast< qMRMLClipNodeWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLClipNodeWidget((*reinterpret_cast< qMRMLClipNodeWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLClipNodeWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLClipNodeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLClipNodeWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLClipNodeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLClipNodeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLClipNodeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLClipNodeWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLClipNodeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLCollapsibleButton_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLCollapsibleButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLCollapsibleButton_t qt_meta_stringdata_PythonQtWrapper_qMRMLCollapsibleButton = {
    {
QT_MOC_LITERAL(0, 0, 38), // "PythonQtWrapper_qMRMLCollapsi..."
QT_MOC_LITERAL(1, 39, 26), // "new_qMRMLCollapsibleButton"
QT_MOC_LITERAL(2, 66, 23), // "qMRMLCollapsibleButton*"
QT_MOC_LITERAL(3, 90, 0), // ""
QT_MOC_LITERAL(4, 91, 8), // "QWidget*"
QT_MOC_LITERAL(5, 100, 6), // "parent"
QT_MOC_LITERAL(6, 107, 29), // "delete_qMRMLCollapsibleButton"
QT_MOC_LITERAL(7, 137, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLCollapsibleButton\0"
    "new_qMRMLCollapsibleButton\0"
    "qMRMLCollapsibleButton*\0\0QWidget*\0"
    "parent\0delete_qMRMLCollapsibleButton\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLCollapsibleButton[] = {

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

void PythonQtWrapper_qMRMLCollapsibleButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLCollapsibleButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLCollapsibleButton* _r = _t->new_qMRMLCollapsibleButton((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLCollapsibleButton**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLCollapsibleButton* _r = _t->new_qMRMLCollapsibleButton();
            if (_a[0]) *reinterpret_cast< qMRMLCollapsibleButton**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLCollapsibleButton((*reinterpret_cast< qMRMLCollapsibleButton*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLCollapsibleButton* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLCollapsibleButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLCollapsibleButton.data,
    qt_meta_data_PythonQtWrapper_qMRMLCollapsibleButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLCollapsibleButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLCollapsibleButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLCollapsibleButton.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLCollapsibleButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLColorListView_t {
    QByteArrayData data[8];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLColorListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLColorListView_t qt_meta_stringdata_PythonQtWrapper_qMRMLColorListView = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_qMRMLColorLis..."
QT_MOC_LITERAL(1, 35, 22), // "new_qMRMLColorListView"
QT_MOC_LITERAL(2, 58, 19), // "qMRMLColorListView*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 8), // "QWidget*"
QT_MOC_LITERAL(5, 88, 6), // "parent"
QT_MOC_LITERAL(6, 95, 25), // "delete_qMRMLColorListView"
QT_MOC_LITERAL(7, 121, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLColorListView\0"
    "new_qMRMLColorListView\0qMRMLColorListView*\0"
    "\0QWidget*\0parent\0delete_qMRMLColorListView\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLColorListView[] = {

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

void PythonQtWrapper_qMRMLColorListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLColorListView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLColorListView* _r = _t->new_qMRMLColorListView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLColorListView**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLColorListView* _r = _t->new_qMRMLColorListView();
            if (_a[0]) *reinterpret_cast< qMRMLColorListView**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLColorListView((*reinterpret_cast< qMRMLColorListView*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLColorListView* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLColorListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLColorListView.data,
    qt_meta_data_PythonQtWrapper_qMRMLColorListView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLColorListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLColorListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLColorListView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLColorListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLColorModel_t {
    QByteArrayData data[7];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLColorModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLColorModel_t qt_meta_stringdata_PythonQtWrapper_qMRMLColorModel = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_qMRMLColorModel"
QT_MOC_LITERAL(1, 32, 19), // "new_qMRMLColorModel"
QT_MOC_LITERAL(2, 52, 16), // "qMRMLColorModel*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 6), // "parent"
QT_MOC_LITERAL(5, 77, 22), // "delete_qMRMLColorModel"
QT_MOC_LITERAL(6, 100, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLColorModel\0"
    "new_qMRMLColorModel\0qMRMLColorModel*\0"
    "\0parent\0delete_qMRMLColorModel\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLColorModel[] = {

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

void PythonQtWrapper_qMRMLColorModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLColorModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLColorModel* _r = _t->new_qMRMLColorModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLColorModel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLColorModel* _r = _t->new_qMRMLColorModel();
            if (_a[0]) *reinterpret_cast< qMRMLColorModel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLColorModel((*reinterpret_cast< qMRMLColorModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLColorModel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLColorModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLColorModel.data,
    qt_meta_data_PythonQtWrapper_qMRMLColorModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLColorModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLColorModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLColorModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLColorModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLColorPickerWidget_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLColorPickerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLColorPickerWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLColorPickerWidget = {
    {
QT_MOC_LITERAL(0, 0, 38), // "PythonQtWrapper_qMRMLColorPic..."
QT_MOC_LITERAL(1, 39, 26), // "new_qMRMLColorPickerWidget"
QT_MOC_LITERAL(2, 66, 23), // "qMRMLColorPickerWidget*"
QT_MOC_LITERAL(3, 90, 0), // ""
QT_MOC_LITERAL(4, 91, 8), // "QWidget*"
QT_MOC_LITERAL(5, 100, 6), // "parent"
QT_MOC_LITERAL(6, 107, 29), // "delete_qMRMLColorPickerWidget"
QT_MOC_LITERAL(7, 137, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLColorPickerWidget\0"
    "new_qMRMLColorPickerWidget\0"
    "qMRMLColorPickerWidget*\0\0QWidget*\0"
    "parent\0delete_qMRMLColorPickerWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLColorPickerWidget[] = {

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

void PythonQtWrapper_qMRMLColorPickerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLColorPickerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLColorPickerWidget* _r = _t->new_qMRMLColorPickerWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLColorPickerWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLColorPickerWidget* _r = _t->new_qMRMLColorPickerWidget();
            if (_a[0]) *reinterpret_cast< qMRMLColorPickerWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLColorPickerWidget((*reinterpret_cast< qMRMLColorPickerWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLColorPickerWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLColorPickerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLColorPickerWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLColorPickerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLColorPickerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLColorPickerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLColorPickerWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLColorPickerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLColorTableComboBox_t {
    QByteArrayData data[8];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLColorTableComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLColorTableComboBox_t qt_meta_stringdata_PythonQtWrapper_qMRMLColorTableComboBox = {
    {
QT_MOC_LITERAL(0, 0, 39), // "PythonQtWrapper_qMRMLColorTab..."
QT_MOC_LITERAL(1, 40, 27), // "new_qMRMLColorTableComboBox"
QT_MOC_LITERAL(2, 68, 24), // "qMRMLColorTableComboBox*"
QT_MOC_LITERAL(3, 93, 0), // ""
QT_MOC_LITERAL(4, 94, 8), // "QWidget*"
QT_MOC_LITERAL(5, 103, 6), // "parent"
QT_MOC_LITERAL(6, 110, 30), // "delete_qMRMLColorTableComboBox"
QT_MOC_LITERAL(7, 141, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLColorTableComboBox\0"
    "new_qMRMLColorTableComboBox\0"
    "qMRMLColorTableComboBox*\0\0QWidget*\0"
    "parent\0delete_qMRMLColorTableComboBox\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLColorTableComboBox[] = {

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

void PythonQtWrapper_qMRMLColorTableComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLColorTableComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLColorTableComboBox* _r = _t->new_qMRMLColorTableComboBox((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLColorTableComboBox**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLColorTableComboBox* _r = _t->new_qMRMLColorTableComboBox();
            if (_a[0]) *reinterpret_cast< qMRMLColorTableComboBox**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLColorTableComboBox((*reinterpret_cast< qMRMLColorTableComboBox*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLColorTableComboBox* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLColorTableComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLColorTableComboBox.data,
    qt_meta_data_PythonQtWrapper_qMRMLColorTableComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLColorTableComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLColorTableComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLColorTableComboBox.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLColorTableComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLColorTableView_t {
    QByteArrayData data[8];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLColorTableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLColorTableView_t qt_meta_stringdata_PythonQtWrapper_qMRMLColorTableView = {
    {
QT_MOC_LITERAL(0, 0, 35), // "PythonQtWrapper_qMRMLColorTab..."
QT_MOC_LITERAL(1, 36, 23), // "new_qMRMLColorTableView"
QT_MOC_LITERAL(2, 60, 20), // "qMRMLColorTableView*"
QT_MOC_LITERAL(3, 81, 0), // ""
QT_MOC_LITERAL(4, 82, 8), // "QWidget*"
QT_MOC_LITERAL(5, 91, 6), // "parent"
QT_MOC_LITERAL(6, 98, 26), // "delete_qMRMLColorTableView"
QT_MOC_LITERAL(7, 125, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLColorTableView\0"
    "new_qMRMLColorTableView\0qMRMLColorTableView*\0"
    "\0QWidget*\0parent\0delete_qMRMLColorTableView\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLColorTableView[] = {

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

void PythonQtWrapper_qMRMLColorTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLColorTableView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLColorTableView* _r = _t->new_qMRMLColorTableView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLColorTableView**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLColorTableView* _r = _t->new_qMRMLColorTableView();
            if (_a[0]) *reinterpret_cast< qMRMLColorTableView**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLColorTableView((*reinterpret_cast< qMRMLColorTableView*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLColorTableView* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLColorTableView::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLColorTableView.data,
    qt_meta_data_PythonQtWrapper_qMRMLColorTableView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLColorTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLColorTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLColorTableView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLColorTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLCoordinatesWidget_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLCoordinatesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLCoordinatesWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLCoordinatesWidget = {
    {
QT_MOC_LITERAL(0, 0, 38), // "PythonQtWrapper_qMRMLCoordina..."
QT_MOC_LITERAL(1, 39, 26), // "new_qMRMLCoordinatesWidget"
QT_MOC_LITERAL(2, 66, 23), // "qMRMLCoordinatesWidget*"
QT_MOC_LITERAL(3, 90, 0), // ""
QT_MOC_LITERAL(4, 91, 8), // "QWidget*"
QT_MOC_LITERAL(5, 100, 6), // "parent"
QT_MOC_LITERAL(6, 107, 29), // "delete_qMRMLCoordinatesWidget"
QT_MOC_LITERAL(7, 137, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLCoordinatesWidget\0"
    "new_qMRMLCoordinatesWidget\0"
    "qMRMLCoordinatesWidget*\0\0QWidget*\0"
    "parent\0delete_qMRMLCoordinatesWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLCoordinatesWidget[] = {

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

void PythonQtWrapper_qMRMLCoordinatesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLCoordinatesWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLCoordinatesWidget* _r = _t->new_qMRMLCoordinatesWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLCoordinatesWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLCoordinatesWidget* _r = _t->new_qMRMLCoordinatesWidget();
            if (_a[0]) *reinterpret_cast< qMRMLCoordinatesWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLCoordinatesWidget((*reinterpret_cast< qMRMLCoordinatesWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLCoordinatesWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLCoordinatesWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLCoordinatesWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLCoordinatesWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLCoordinatesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLCoordinatesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLCoordinatesWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLCoordinatesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLDisplayNodeWidget_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLDisplayNodeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLDisplayNodeWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLDisplayNodeWidget = {
    {
QT_MOC_LITERAL(0, 0, 38), // "PythonQtWrapper_qMRMLDisplayN..."
QT_MOC_LITERAL(1, 39, 26), // "new_qMRMLDisplayNodeWidget"
QT_MOC_LITERAL(2, 66, 23), // "qMRMLDisplayNodeWidget*"
QT_MOC_LITERAL(3, 90, 0), // ""
QT_MOC_LITERAL(4, 91, 8), // "QWidget*"
QT_MOC_LITERAL(5, 100, 6), // "parent"
QT_MOC_LITERAL(6, 107, 29), // "delete_qMRMLDisplayNodeWidget"
QT_MOC_LITERAL(7, 137, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLDisplayNodeWidget\0"
    "new_qMRMLDisplayNodeWidget\0"
    "qMRMLDisplayNodeWidget*\0\0QWidget*\0"
    "parent\0delete_qMRMLDisplayNodeWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLDisplayNodeWidget[] = {

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

void PythonQtWrapper_qMRMLDisplayNodeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLDisplayNodeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLDisplayNodeWidget* _r = _t->new_qMRMLDisplayNodeWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLDisplayNodeWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLDisplayNodeWidget* _r = _t->new_qMRMLDisplayNodeWidget();
            if (_a[0]) *reinterpret_cast< qMRMLDisplayNodeWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLDisplayNodeWidget((*reinterpret_cast< qMRMLDisplayNodeWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLDisplayNodeWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLDisplayNodeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLDisplayNodeWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLDisplayNodeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLDisplayNodeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLDisplayNodeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLDisplayNodeWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLDisplayNodeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLDisplayNodeViewComboBox_t {
    QByteArrayData data[8];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLDisplayNodeViewComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLDisplayNodeViewComboBox_t qt_meta_stringdata_PythonQtWrapper_qMRMLDisplayNodeViewComboBox = {
    {
QT_MOC_LITERAL(0, 0, 44), // "PythonQtWrapper_qMRMLDisplayN..."
QT_MOC_LITERAL(1, 45, 32), // "new_qMRMLDisplayNodeViewComboBox"
QT_MOC_LITERAL(2, 78, 29), // "qMRMLDisplayNodeViewComboBox*"
QT_MOC_LITERAL(3, 108, 0), // ""
QT_MOC_LITERAL(4, 109, 8), // "QWidget*"
QT_MOC_LITERAL(5, 118, 6), // "parent"
QT_MOC_LITERAL(6, 125, 35), // "delete_qMRMLDisplayNodeViewCo..."
QT_MOC_LITERAL(7, 161, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLDisplayNodeViewComboBox\0"
    "new_qMRMLDisplayNodeViewComboBox\0"
    "qMRMLDisplayNodeViewComboBox*\0\0QWidget*\0"
    "parent\0delete_qMRMLDisplayNodeViewComboBox\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLDisplayNodeViewComboBox[] = {

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

void PythonQtWrapper_qMRMLDisplayNodeViewComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLDisplayNodeViewComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLDisplayNodeViewComboBox* _r = _t->new_qMRMLDisplayNodeViewComboBox((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLDisplayNodeViewComboBox**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLDisplayNodeViewComboBox* _r = _t->new_qMRMLDisplayNodeViewComboBox();
            if (_a[0]) *reinterpret_cast< qMRMLDisplayNodeViewComboBox**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLDisplayNodeViewComboBox((*reinterpret_cast< qMRMLDisplayNodeViewComboBox*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLDisplayNodeViewComboBox* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLDisplayNodeViewComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLDisplayNodeViewComboBox.data,
    qt_meta_data_PythonQtWrapper_qMRMLDisplayNodeViewComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLDisplayNodeViewComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLDisplayNodeViewComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLDisplayNodeViewComboBox.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLDisplayNodeViewComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLLabelComboBox_t {
    QByteArrayData data[8];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLLabelComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLLabelComboBox_t qt_meta_stringdata_PythonQtWrapper_qMRMLLabelComboBox = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_qMRMLLabelCom..."
QT_MOC_LITERAL(1, 35, 22), // "new_qMRMLLabelComboBox"
QT_MOC_LITERAL(2, 58, 19), // "qMRMLLabelComboBox*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 8), // "QWidget*"
QT_MOC_LITERAL(5, 88, 6), // "parent"
QT_MOC_LITERAL(6, 95, 25), // "delete_qMRMLLabelComboBox"
QT_MOC_LITERAL(7, 121, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLLabelComboBox\0"
    "new_qMRMLLabelComboBox\0qMRMLLabelComboBox*\0"
    "\0QWidget*\0parent\0delete_qMRMLLabelComboBox\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLLabelComboBox[] = {

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

void PythonQtWrapper_qMRMLLabelComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLLabelComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLLabelComboBox* _r = _t->new_qMRMLLabelComboBox((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLLabelComboBox**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLLabelComboBox* _r = _t->new_qMRMLLabelComboBox();
            if (_a[0]) *reinterpret_cast< qMRMLLabelComboBox**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLLabelComboBox((*reinterpret_cast< qMRMLLabelComboBox*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLLabelComboBox* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLLabelComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLLabelComboBox.data,
    qt_meta_data_PythonQtWrapper_qMRMLLabelComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLLabelComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLLabelComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLLabelComboBox.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLLabelComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLEventBrokerConnection_t {
    QByteArrayData data[7];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLEventBrokerConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLEventBrokerConnection_t qt_meta_stringdata_PythonQtWrapper_qMRMLEventBrokerConnection = {
    {
QT_MOC_LITERAL(0, 0, 42), // "PythonQtWrapper_qMRMLEventBro..."
QT_MOC_LITERAL(1, 43, 30), // "new_qMRMLEventBrokerConnection"
QT_MOC_LITERAL(2, 74, 27), // "qMRMLEventBrokerConnection*"
QT_MOC_LITERAL(3, 102, 0), // ""
QT_MOC_LITERAL(4, 103, 6), // "parent"
QT_MOC_LITERAL(5, 110, 33), // "delete_qMRMLEventBrokerConnec..."
QT_MOC_LITERAL(6, 144, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLEventBrokerConnection\0"
    "new_qMRMLEventBrokerConnection\0"
    "qMRMLEventBrokerConnection*\0\0parent\0"
    "delete_qMRMLEventBrokerConnection\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLEventBrokerConnection[] = {

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

void PythonQtWrapper_qMRMLEventBrokerConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLEventBrokerConnection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLEventBrokerConnection* _r = _t->new_qMRMLEventBrokerConnection((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLEventBrokerConnection**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLEventBrokerConnection* _r = _t->new_qMRMLEventBrokerConnection();
            if (_a[0]) *reinterpret_cast< qMRMLEventBrokerConnection**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLEventBrokerConnection((*reinterpret_cast< qMRMLEventBrokerConnection*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLEventBrokerConnection* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLEventBrokerConnection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLEventBrokerConnection.data,
    qt_meta_data_PythonQtWrapper_qMRMLEventBrokerConnection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLEventBrokerConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLEventBrokerConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLEventBrokerConnection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLEventBrokerConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLEventBrokerWidget_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLEventBrokerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLEventBrokerWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLEventBrokerWidget = {
    {
QT_MOC_LITERAL(0, 0, 38), // "PythonQtWrapper_qMRMLEventBro..."
QT_MOC_LITERAL(1, 39, 26), // "new_qMRMLEventBrokerWidget"
QT_MOC_LITERAL(2, 66, 23), // "qMRMLEventBrokerWidget*"
QT_MOC_LITERAL(3, 90, 0), // ""
QT_MOC_LITERAL(4, 91, 8), // "QWidget*"
QT_MOC_LITERAL(5, 100, 6), // "parent"
QT_MOC_LITERAL(6, 107, 29), // "delete_qMRMLEventBrokerWidget"
QT_MOC_LITERAL(7, 137, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLEventBrokerWidget\0"
    "new_qMRMLEventBrokerWidget\0"
    "qMRMLEventBrokerWidget*\0\0QWidget*\0"
    "parent\0delete_qMRMLEventBrokerWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLEventBrokerWidget[] = {

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

void PythonQtWrapper_qMRMLEventBrokerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLEventBrokerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLEventBrokerWidget* _r = _t->new_qMRMLEventBrokerWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLEventBrokerWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLEventBrokerWidget* _r = _t->new_qMRMLEventBrokerWidget();
            if (_a[0]) *reinterpret_cast< qMRMLEventBrokerWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLEventBrokerWidget((*reinterpret_cast< qMRMLEventBrokerWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLEventBrokerWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLEventBrokerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLEventBrokerWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLEventBrokerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLEventBrokerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLEventBrokerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLEventBrokerWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLEventBrokerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLEventLogger_t {
    QByteArrayData data[7];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLEventLogger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLEventLogger_t qt_meta_stringdata_PythonQtWrapper_qMRMLEventLogger = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_qMRMLEventLogger"
QT_MOC_LITERAL(1, 33, 20), // "new_qMRMLEventLogger"
QT_MOC_LITERAL(2, 54, 17), // "qMRMLEventLogger*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 6), // "parent"
QT_MOC_LITERAL(5, 80, 23), // "delete_qMRMLEventLogger"
QT_MOC_LITERAL(6, 104, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLEventLogger\0"
    "new_qMRMLEventLogger\0qMRMLEventLogger*\0"
    "\0parent\0delete_qMRMLEventLogger\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLEventLogger[] = {

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

void PythonQtWrapper_qMRMLEventLogger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLEventLogger *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLEventLogger* _r = _t->new_qMRMLEventLogger((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLEventLogger**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLEventLogger* _r = _t->new_qMRMLEventLogger();
            if (_a[0]) *reinterpret_cast< qMRMLEventLogger**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLEventLogger((*reinterpret_cast< qMRMLEventLogger*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLEventLogger* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLEventLogger::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLEventLogger.data,
    qt_meta_data_PythonQtWrapper_qMRMLEventLogger,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLEventLogger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLEventLogger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLEventLogger.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLEventLogger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLEventLoggerWidget_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLEventLoggerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLEventLoggerWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLEventLoggerWidget = {
    {
QT_MOC_LITERAL(0, 0, 38), // "PythonQtWrapper_qMRMLEventLog..."
QT_MOC_LITERAL(1, 39, 26), // "new_qMRMLEventLoggerWidget"
QT_MOC_LITERAL(2, 66, 23), // "qMRMLEventLoggerWidget*"
QT_MOC_LITERAL(3, 90, 0), // ""
QT_MOC_LITERAL(4, 91, 8), // "QWidget*"
QT_MOC_LITERAL(5, 100, 6), // "parent"
QT_MOC_LITERAL(6, 107, 29), // "delete_qMRMLEventLoggerWidget"
QT_MOC_LITERAL(7, 137, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLEventLoggerWidget\0"
    "new_qMRMLEventLoggerWidget\0"
    "qMRMLEventLoggerWidget*\0\0QWidget*\0"
    "parent\0delete_qMRMLEventLoggerWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLEventLoggerWidget[] = {

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

void PythonQtWrapper_qMRMLEventLoggerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLEventLoggerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLEventLoggerWidget* _r = _t->new_qMRMLEventLoggerWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLEventLoggerWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLEventLoggerWidget* _r = _t->new_qMRMLEventLoggerWidget();
            if (_a[0]) *reinterpret_cast< qMRMLEventLoggerWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLEventLoggerWidget((*reinterpret_cast< qMRMLEventLoggerWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLEventLoggerWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLEventLoggerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLEventLoggerWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLEventLoggerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLEventLoggerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLEventLoggerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLEventLoggerWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLEventLoggerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLItemDelegate_t {
    QByteArrayData data[7];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLItemDelegate_t qt_meta_stringdata_PythonQtWrapper_qMRMLItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PythonQtWrapper_qMRMLItemDele..."
QT_MOC_LITERAL(1, 34, 21), // "new_qMRMLItemDelegate"
QT_MOC_LITERAL(2, 56, 18), // "qMRMLItemDelegate*"
QT_MOC_LITERAL(3, 75, 0), // ""
QT_MOC_LITERAL(4, 76, 6), // "parent"
QT_MOC_LITERAL(5, 83, 24), // "delete_qMRMLItemDelegate"
QT_MOC_LITERAL(6, 108, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLItemDelegate\0"
    "new_qMRMLItemDelegate\0qMRMLItemDelegate*\0"
    "\0parent\0delete_qMRMLItemDelegate\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLItemDelegate[] = {

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

void PythonQtWrapper_qMRMLItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLItemDelegate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLItemDelegate* _r = _t->new_qMRMLItemDelegate((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLItemDelegate**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLItemDelegate* _r = _t->new_qMRMLItemDelegate();
            if (_a[0]) *reinterpret_cast< qMRMLItemDelegate**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLItemDelegate((*reinterpret_cast< qMRMLItemDelegate*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLItemDelegate* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLItemDelegate.data,
    qt_meta_data_PythonQtWrapper_qMRMLItemDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutManager_t {
    QByteArrayData data[7];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutManager_t qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutManager = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_qMRMLLayoutMa..."
QT_MOC_LITERAL(1, 35, 22), // "new_qMRMLLayoutManager"
QT_MOC_LITERAL(2, 58, 19), // "qMRMLLayoutManager*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 6), // "parent"
QT_MOC_LITERAL(5, 86, 25), // "delete_qMRMLLayoutManager"
QT_MOC_LITERAL(6, 112, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLLayoutManager\0"
    "new_qMRMLLayoutManager\0qMRMLLayoutManager*\0"
    "\0parent\0delete_qMRMLLayoutManager\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLLayoutManager[] = {

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

void PythonQtWrapper_qMRMLLayoutManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLLayoutManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLLayoutManager* _r = _t->new_qMRMLLayoutManager((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLLayoutManager**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLLayoutManager* _r = _t->new_qMRMLLayoutManager();
            if (_a[0]) *reinterpret_cast< qMRMLLayoutManager**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLLayoutManager((*reinterpret_cast< qMRMLLayoutManager*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLLayoutManager* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLLayoutManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutManager.data,
    qt_meta_data_PythonQtWrapper_qMRMLLayoutManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLLayoutManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLLayoutManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLLayoutManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutViewFactory_t {
    QByteArrayData data[7];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutViewFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutViewFactory_t qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutViewFactory = {
    {
QT_MOC_LITERAL(0, 0, 38), // "PythonQtWrapper_qMRMLLayoutVi..."
QT_MOC_LITERAL(1, 39, 26), // "new_qMRMLLayoutViewFactory"
QT_MOC_LITERAL(2, 66, 23), // "qMRMLLayoutViewFactory*"
QT_MOC_LITERAL(3, 90, 0), // ""
QT_MOC_LITERAL(4, 91, 6), // "parent"
QT_MOC_LITERAL(5, 98, 29), // "delete_qMRMLLayoutViewFactory"
QT_MOC_LITERAL(6, 128, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLLayoutViewFactory\0"
    "new_qMRMLLayoutViewFactory\0"
    "qMRMLLayoutViewFactory*\0\0parent\0"
    "delete_qMRMLLayoutViewFactory\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLLayoutViewFactory[] = {

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

void PythonQtWrapper_qMRMLLayoutViewFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLLayoutViewFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLLayoutViewFactory* _r = _t->new_qMRMLLayoutViewFactory((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLLayoutViewFactory**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLLayoutViewFactory* _r = _t->new_qMRMLLayoutViewFactory();
            if (_a[0]) *reinterpret_cast< qMRMLLayoutViewFactory**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLLayoutViewFactory((*reinterpret_cast< qMRMLLayoutViewFactory*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLLayoutViewFactory* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLLayoutViewFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutViewFactory.data,
    qt_meta_data_PythonQtWrapper_qMRMLLayoutViewFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLLayoutViewFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLLayoutViewFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutViewFactory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLLayoutViewFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutWidget_t {
    QByteArrayData data[8];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutWidget = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PythonQtWrapper_qMRMLLayoutWi..."
QT_MOC_LITERAL(1, 34, 21), // "new_qMRMLLayoutWidget"
QT_MOC_LITERAL(2, 56, 18), // "qMRMLLayoutWidget*"
QT_MOC_LITERAL(3, 75, 0), // ""
QT_MOC_LITERAL(4, 76, 8), // "QWidget*"
QT_MOC_LITERAL(5, 85, 6), // "parent"
QT_MOC_LITERAL(6, 92, 24), // "delete_qMRMLLayoutWidget"
QT_MOC_LITERAL(7, 117, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLLayoutWidget\0"
    "new_qMRMLLayoutWidget\0qMRMLLayoutWidget*\0"
    "\0QWidget*\0parent\0delete_qMRMLLayoutWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLLayoutWidget[] = {

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

void PythonQtWrapper_qMRMLLayoutWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLLayoutWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLLayoutWidget* _r = _t->new_qMRMLLayoutWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLLayoutWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLLayoutWidget* _r = _t->new_qMRMLLayoutWidget();
            if (_a[0]) *reinterpret_cast< qMRMLLayoutWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLLayoutWidget((*reinterpret_cast< qMRMLLayoutWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLLayoutWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLLayoutWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLLayoutWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLLayoutWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLLayoutWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLLayoutWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLLayoutWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLLinearTransformSlider_t {
    QByteArrayData data[8];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLLinearTransformSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLLinearTransformSlider_t qt_meta_stringdata_PythonQtWrapper_qMRMLLinearTransformSlider = {
    {
QT_MOC_LITERAL(0, 0, 42), // "PythonQtWrapper_qMRMLLinearTr..."
QT_MOC_LITERAL(1, 43, 30), // "new_qMRMLLinearTransformSlider"
QT_MOC_LITERAL(2, 74, 27), // "qMRMLLinearTransformSlider*"
QT_MOC_LITERAL(3, 102, 0), // ""
QT_MOC_LITERAL(4, 103, 8), // "QWidget*"
QT_MOC_LITERAL(5, 112, 6), // "parent"
QT_MOC_LITERAL(6, 119, 33), // "delete_qMRMLLinearTransformSl..."
QT_MOC_LITERAL(7, 153, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLLinearTransformSlider\0"
    "new_qMRMLLinearTransformSlider\0"
    "qMRMLLinearTransformSlider*\0\0QWidget*\0"
    "parent\0delete_qMRMLLinearTransformSlider\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLLinearTransformSlider[] = {

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

void PythonQtWrapper_qMRMLLinearTransformSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLLinearTransformSlider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLLinearTransformSlider* _r = _t->new_qMRMLLinearTransformSlider((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLLinearTransformSlider**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLLinearTransformSlider* _r = _t->new_qMRMLLinearTransformSlider();
            if (_a[0]) *reinterpret_cast< qMRMLLinearTransformSlider**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLLinearTransformSlider((*reinterpret_cast< qMRMLLinearTransformSlider*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLLinearTransformSlider* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLLinearTransformSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLLinearTransformSlider.data,
    qt_meta_data_PythonQtWrapper_qMRMLLinearTransformSlider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLLinearTransformSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLLinearTransformSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLLinearTransformSlider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLLinearTransformSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLListWidget_t {
    QByteArrayData data[8];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLListWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLListWidget = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_qMRMLListWidget"
QT_MOC_LITERAL(1, 32, 19), // "new_qMRMLListWidget"
QT_MOC_LITERAL(2, 52, 16), // "qMRMLListWidget*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 8), // "QWidget*"
QT_MOC_LITERAL(5, 79, 6), // "parent"
QT_MOC_LITERAL(6, 86, 22), // "delete_qMRMLListWidget"
QT_MOC_LITERAL(7, 109, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLListWidget\0"
    "new_qMRMLListWidget\0qMRMLListWidget*\0"
    "\0QWidget*\0parent\0delete_qMRMLListWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLListWidget[] = {

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

void PythonQtWrapper_qMRMLListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLListWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLListWidget* _r = _t->new_qMRMLListWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLListWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLListWidget* _r = _t->new_qMRMLListWidget();
            if (_a[0]) *reinterpret_cast< qMRMLListWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLListWidget((*reinterpret_cast< qMRMLListWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLListWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLListWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLListWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLMatrixWidget_t {
    QByteArrayData data[8];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLMatrixWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLMatrixWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLMatrixWidget = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PythonQtWrapper_qMRMLMatrixWi..."
QT_MOC_LITERAL(1, 34, 21), // "new_qMRMLMatrixWidget"
QT_MOC_LITERAL(2, 56, 18), // "qMRMLMatrixWidget*"
QT_MOC_LITERAL(3, 75, 0), // ""
QT_MOC_LITERAL(4, 76, 8), // "QWidget*"
QT_MOC_LITERAL(5, 85, 6), // "parent"
QT_MOC_LITERAL(6, 92, 24), // "delete_qMRMLMatrixWidget"
QT_MOC_LITERAL(7, 117, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLMatrixWidget\0"
    "new_qMRMLMatrixWidget\0qMRMLMatrixWidget*\0"
    "\0QWidget*\0parent\0delete_qMRMLMatrixWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLMatrixWidget[] = {

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

void PythonQtWrapper_qMRMLMatrixWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLMatrixWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLMatrixWidget* _r = _t->new_qMRMLMatrixWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLMatrixWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLMatrixWidget* _r = _t->new_qMRMLMatrixWidget();
            if (_a[0]) *reinterpret_cast< qMRMLMatrixWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLMatrixWidget((*reinterpret_cast< qMRMLMatrixWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLMatrixWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLMatrixWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLMatrixWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLMatrixWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLMatrixWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLMatrixWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLMatrixWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLMatrixWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLModelInfoWidget_t {
    QByteArrayData data[8];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLModelInfoWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLModelInfoWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLModelInfoWidget = {
    {
QT_MOC_LITERAL(0, 0, 36), // "PythonQtWrapper_qMRMLModelInf..."
QT_MOC_LITERAL(1, 37, 24), // "new_qMRMLModelInfoWidget"
QT_MOC_LITERAL(2, 62, 21), // "qMRMLModelInfoWidget*"
QT_MOC_LITERAL(3, 84, 0), // ""
QT_MOC_LITERAL(4, 85, 8), // "QWidget*"
QT_MOC_LITERAL(5, 94, 6), // "parent"
QT_MOC_LITERAL(6, 101, 27), // "delete_qMRMLModelInfoWidget"
QT_MOC_LITERAL(7, 129, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLModelInfoWidget\0"
    "new_qMRMLModelInfoWidget\0qMRMLModelInfoWidget*\0"
    "\0QWidget*\0parent\0delete_qMRMLModelInfoWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLModelInfoWidget[] = {

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

void PythonQtWrapper_qMRMLModelInfoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLModelInfoWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLModelInfoWidget* _r = _t->new_qMRMLModelInfoWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLModelInfoWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLModelInfoWidget* _r = _t->new_qMRMLModelInfoWidget();
            if (_a[0]) *reinterpret_cast< qMRMLModelInfoWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLModelInfoWidget((*reinterpret_cast< qMRMLModelInfoWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLModelInfoWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLModelInfoWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLModelInfoWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLModelInfoWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLModelInfoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLModelInfoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLModelInfoWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLModelInfoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLNavigationView_t {
    QByteArrayData data[8];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLNavigationView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLNavigationView_t qt_meta_stringdata_PythonQtWrapper_qMRMLNavigationView = {
    {
QT_MOC_LITERAL(0, 0, 35), // "PythonQtWrapper_qMRMLNavigati..."
QT_MOC_LITERAL(1, 36, 23), // "new_qMRMLNavigationView"
QT_MOC_LITERAL(2, 60, 20), // "qMRMLNavigationView*"
QT_MOC_LITERAL(3, 81, 0), // ""
QT_MOC_LITERAL(4, 82, 8), // "QWidget*"
QT_MOC_LITERAL(5, 91, 6), // "parent"
QT_MOC_LITERAL(6, 98, 26), // "delete_qMRMLNavigationView"
QT_MOC_LITERAL(7, 125, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLNavigationView\0"
    "new_qMRMLNavigationView\0qMRMLNavigationView*\0"
    "\0QWidget*\0parent\0delete_qMRMLNavigationView\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLNavigationView[] = {

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

void PythonQtWrapper_qMRMLNavigationView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLNavigationView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLNavigationView* _r = _t->new_qMRMLNavigationView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLNavigationView**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLNavigationView* _r = _t->new_qMRMLNavigationView();
            if (_a[0]) *reinterpret_cast< qMRMLNavigationView**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLNavigationView((*reinterpret_cast< qMRMLNavigationView*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLNavigationView* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLNavigationView::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLNavigationView.data,
    qt_meta_data_PythonQtWrapper_qMRMLNavigationView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLNavigationView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLNavigationView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLNavigationView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLNavigationView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLNodeAttributeTableView_t {
    QByteArrayData data[8];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLNodeAttributeTableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLNodeAttributeTableView_t qt_meta_stringdata_PythonQtWrapper_qMRMLNodeAttributeTableView = {
    {
QT_MOC_LITERAL(0, 0, 43), // "PythonQtWrapper_qMRMLNodeAttr..."
QT_MOC_LITERAL(1, 44, 31), // "new_qMRMLNodeAttributeTableView"
QT_MOC_LITERAL(2, 76, 28), // "qMRMLNodeAttributeTableView*"
QT_MOC_LITERAL(3, 105, 0), // ""
QT_MOC_LITERAL(4, 106, 8), // "QWidget*"
QT_MOC_LITERAL(5, 115, 6), // "parent"
QT_MOC_LITERAL(6, 122, 34), // "delete_qMRMLNodeAttributeTabl..."
QT_MOC_LITERAL(7, 157, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLNodeAttributeTableView\0"
    "new_qMRMLNodeAttributeTableView\0"
    "qMRMLNodeAttributeTableView*\0\0QWidget*\0"
    "parent\0delete_qMRMLNodeAttributeTableView\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLNodeAttributeTableView[] = {

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

void PythonQtWrapper_qMRMLNodeAttributeTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLNodeAttributeTableView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLNodeAttributeTableView* _r = _t->new_qMRMLNodeAttributeTableView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLNodeAttributeTableView**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLNodeAttributeTableView* _r = _t->new_qMRMLNodeAttributeTableView();
            if (_a[0]) *reinterpret_cast< qMRMLNodeAttributeTableView**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLNodeAttributeTableView((*reinterpret_cast< qMRMLNodeAttributeTableView*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLNodeAttributeTableView* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLNodeAttributeTableView::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLNodeAttributeTableView.data,
    qt_meta_data_PythonQtWrapper_qMRMLNodeAttributeTableView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLNodeAttributeTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLNodeAttributeTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLNodeAttributeTableView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLNodeAttributeTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLNodeAttributeTableWidget_t {
    QByteArrayData data[8];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLNodeAttributeTableWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLNodeAttributeTableWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLNodeAttributeTableWidget = {
    {
QT_MOC_LITERAL(0, 0, 45), // "PythonQtWrapper_qMRMLNodeAttr..."
QT_MOC_LITERAL(1, 46, 33), // "new_qMRMLNodeAttributeTableWi..."
QT_MOC_LITERAL(2, 80, 30), // "qMRMLNodeAttributeTableWidget*"
QT_MOC_LITERAL(3, 111, 0), // ""
QT_MOC_LITERAL(4, 112, 8), // "QWidget*"
QT_MOC_LITERAL(5, 121, 6), // "parent"
QT_MOC_LITERAL(6, 128, 36), // "delete_qMRMLNodeAttributeTabl..."
QT_MOC_LITERAL(7, 165, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLNodeAttributeTableWidget\0"
    "new_qMRMLNodeAttributeTableWidget\0"
    "qMRMLNodeAttributeTableWidget*\0\0"
    "QWidget*\0parent\0delete_qMRMLNodeAttributeTableWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLNodeAttributeTableWidget[] = {

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

void PythonQtWrapper_qMRMLNodeAttributeTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLNodeAttributeTableWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLNodeAttributeTableWidget* _r = _t->new_qMRMLNodeAttributeTableWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLNodeAttributeTableWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLNodeAttributeTableWidget* _r = _t->new_qMRMLNodeAttributeTableWidget();
            if (_a[0]) *reinterpret_cast< qMRMLNodeAttributeTableWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLNodeAttributeTableWidget((*reinterpret_cast< qMRMLNodeAttributeTableWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLNodeAttributeTableWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLNodeAttributeTableWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLNodeAttributeTableWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLNodeAttributeTableWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLNodeAttributeTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLNodeAttributeTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLNodeAttributeTableWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLNodeAttributeTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLNodeComboBox_t {
    QByteArrayData data[8];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLNodeComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLNodeComboBox_t qt_meta_stringdata_PythonQtWrapper_qMRMLNodeComboBox = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PythonQtWrapper_qMRMLNodeComb..."
QT_MOC_LITERAL(1, 34, 21), // "new_qMRMLNodeComboBox"
QT_MOC_LITERAL(2, 56, 18), // "qMRMLNodeComboBox*"
QT_MOC_LITERAL(3, 75, 0), // ""
QT_MOC_LITERAL(4, 76, 8), // "QWidget*"
QT_MOC_LITERAL(5, 85, 6), // "parent"
QT_MOC_LITERAL(6, 92, 24), // "delete_qMRMLNodeComboBox"
QT_MOC_LITERAL(7, 117, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLNodeComboBox\0"
    "new_qMRMLNodeComboBox\0qMRMLNodeComboBox*\0"
    "\0QWidget*\0parent\0delete_qMRMLNodeComboBox\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLNodeComboBox[] = {

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

void PythonQtWrapper_qMRMLNodeComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLNodeComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLNodeComboBox* _r = _t->new_qMRMLNodeComboBox((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLNodeComboBox**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLNodeComboBox* _r = _t->new_qMRMLNodeComboBox();
            if (_a[0]) *reinterpret_cast< qMRMLNodeComboBox**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLNodeComboBox((*reinterpret_cast< qMRMLNodeComboBox*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLNodeComboBox* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLNodeComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLNodeComboBox.data,
    qt_meta_data_PythonQtWrapper_qMRMLNodeComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLNodeComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLNodeComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLNodeComboBox.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLNodeComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLNodeFactory_t {
    QByteArrayData data[7];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLNodeFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLNodeFactory_t qt_meta_stringdata_PythonQtWrapper_qMRMLNodeFactory = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_qMRMLNodeFactory"
QT_MOC_LITERAL(1, 33, 20), // "new_qMRMLNodeFactory"
QT_MOC_LITERAL(2, 54, 17), // "qMRMLNodeFactory*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 6), // "parent"
QT_MOC_LITERAL(5, 80, 23), // "delete_qMRMLNodeFactory"
QT_MOC_LITERAL(6, 104, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLNodeFactory\0"
    "new_qMRMLNodeFactory\0qMRMLNodeFactory*\0"
    "\0parent\0delete_qMRMLNodeFactory\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLNodeFactory[] = {

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

void PythonQtWrapper_qMRMLNodeFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLNodeFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLNodeFactory* _r = _t->new_qMRMLNodeFactory((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLNodeFactory**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLNodeFactory* _r = _t->new_qMRMLNodeFactory();
            if (_a[0]) *reinterpret_cast< qMRMLNodeFactory**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLNodeFactory((*reinterpret_cast< qMRMLNodeFactory*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLNodeFactory* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLNodeFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLNodeFactory.data,
    qt_meta_data_PythonQtWrapper_qMRMLNodeFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLNodeFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLNodeFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLNodeFactory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLNodeFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLPlotWidget_t {
    QByteArrayData data[8];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLPlotWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLPlotWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLPlotWidget = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_qMRMLPlotWidget"
QT_MOC_LITERAL(1, 32, 19), // "new_qMRMLPlotWidget"
QT_MOC_LITERAL(2, 52, 16), // "qMRMLPlotWidget*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 8), // "QWidget*"
QT_MOC_LITERAL(5, 79, 6), // "parent"
QT_MOC_LITERAL(6, 86, 22), // "delete_qMRMLPlotWidget"
QT_MOC_LITERAL(7, 109, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLPlotWidget\0"
    "new_qMRMLPlotWidget\0qMRMLPlotWidget*\0"
    "\0QWidget*\0parent\0delete_qMRMLPlotWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLPlotWidget[] = {

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

void PythonQtWrapper_qMRMLPlotWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLPlotWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLPlotWidget* _r = _t->new_qMRMLPlotWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLPlotWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLPlotWidget* _r = _t->new_qMRMLPlotWidget();
            if (_a[0]) *reinterpret_cast< qMRMLPlotWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLPlotWidget((*reinterpret_cast< qMRMLPlotWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLPlotWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLPlotWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLPlotWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLPlotWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLPlotWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLPlotWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLPlotWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLPlotWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLPlotView_t {
    QByteArrayData data[8];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLPlotView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLPlotView_t qt_meta_stringdata_PythonQtWrapper_qMRMLPlotView = {
    {
QT_MOC_LITERAL(0, 0, 29), // "PythonQtWrapper_qMRMLPlotView"
QT_MOC_LITERAL(1, 30, 17), // "new_qMRMLPlotView"
QT_MOC_LITERAL(2, 48, 14), // "qMRMLPlotView*"
QT_MOC_LITERAL(3, 63, 0), // ""
QT_MOC_LITERAL(4, 64, 8), // "QWidget*"
QT_MOC_LITERAL(5, 73, 6), // "parent"
QT_MOC_LITERAL(6, 80, 20), // "delete_qMRMLPlotView"
QT_MOC_LITERAL(7, 101, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLPlotView\0"
    "new_qMRMLPlotView\0qMRMLPlotView*\0\0"
    "QWidget*\0parent\0delete_qMRMLPlotView\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLPlotView[] = {

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

void PythonQtWrapper_qMRMLPlotView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLPlotView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLPlotView* _r = _t->new_qMRMLPlotView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLPlotView**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLPlotView* _r = _t->new_qMRMLPlotView();
            if (_a[0]) *reinterpret_cast< qMRMLPlotView**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLPlotView((*reinterpret_cast< qMRMLPlotView*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLPlotView* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLPlotView::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLPlotView.data,
    qt_meta_data_PythonQtWrapper_qMRMLPlotView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLPlotView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLPlotView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLPlotView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLPlotView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLPlotViewControllerWidget_t {
    QByteArrayData data[8];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLPlotViewControllerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLPlotViewControllerWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLPlotViewControllerWidget = {
    {
QT_MOC_LITERAL(0, 0, 45), // "PythonQtWrapper_qMRMLPlotView..."
QT_MOC_LITERAL(1, 46, 33), // "new_qMRMLPlotViewControllerWi..."
QT_MOC_LITERAL(2, 80, 30), // "qMRMLPlotViewControllerWidget*"
QT_MOC_LITERAL(3, 111, 0), // ""
QT_MOC_LITERAL(4, 112, 8), // "QWidget*"
QT_MOC_LITERAL(5, 121, 6), // "parent"
QT_MOC_LITERAL(6, 128, 36), // "delete_qMRMLPlotViewControlle..."
QT_MOC_LITERAL(7, 165, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLPlotViewControllerWidget\0"
    "new_qMRMLPlotViewControllerWidget\0"
    "qMRMLPlotViewControllerWidget*\0\0"
    "QWidget*\0parent\0delete_qMRMLPlotViewControllerWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLPlotViewControllerWidget[] = {

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

void PythonQtWrapper_qMRMLPlotViewControllerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLPlotViewControllerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLPlotViewControllerWidget* _r = _t->new_qMRMLPlotViewControllerWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLPlotViewControllerWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLPlotViewControllerWidget* _r = _t->new_qMRMLPlotViewControllerWidget();
            if (_a[0]) *reinterpret_cast< qMRMLPlotViewControllerWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLPlotViewControllerWidget((*reinterpret_cast< qMRMLPlotViewControllerWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLPlotViewControllerWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLPlotViewControllerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLPlotViewControllerWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLPlotViewControllerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLPlotViewControllerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLPlotViewControllerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLPlotViewControllerWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLPlotViewControllerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLRangeWidget_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLRangeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLRangeWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLRangeWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_qMRMLRangeWidget"
QT_MOC_LITERAL(1, 33, 20), // "new_qMRMLRangeWidget"
QT_MOC_LITERAL(2, 54, 17), // "qMRMLRangeWidget*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 8), // "QWidget*"
QT_MOC_LITERAL(5, 82, 6), // "parent"
QT_MOC_LITERAL(6, 89, 23), // "delete_qMRMLRangeWidget"
QT_MOC_LITERAL(7, 113, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLRangeWidget\0"
    "new_qMRMLRangeWidget\0qMRMLRangeWidget*\0"
    "\0QWidget*\0parent\0delete_qMRMLRangeWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLRangeWidget[] = {

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

void PythonQtWrapper_qMRMLRangeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLRangeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLRangeWidget* _r = _t->new_qMRMLRangeWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLRangeWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLRangeWidget* _r = _t->new_qMRMLRangeWidget();
            if (_a[0]) *reinterpret_cast< qMRMLRangeWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLRangeWidget((*reinterpret_cast< qMRMLRangeWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLRangeWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLRangeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLRangeWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLRangeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLRangeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLRangeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLRangeWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLRangeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLROIWidget_t {
    QByteArrayData data[8];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLROIWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLROIWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLROIWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PythonQtWrapper_qMRMLROIWidget"
QT_MOC_LITERAL(1, 31, 18), // "new_qMRMLROIWidget"
QT_MOC_LITERAL(2, 50, 15), // "qMRMLROIWidget*"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 8), // "QWidget*"
QT_MOC_LITERAL(5, 76, 6), // "parent"
QT_MOC_LITERAL(6, 83, 21), // "delete_qMRMLROIWidget"
QT_MOC_LITERAL(7, 105, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLROIWidget\0"
    "new_qMRMLROIWidget\0qMRMLROIWidget*\0\0"
    "QWidget*\0parent\0delete_qMRMLROIWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLROIWidget[] = {

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

void PythonQtWrapper_qMRMLROIWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLROIWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLROIWidget* _r = _t->new_qMRMLROIWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLROIWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLROIWidget* _r = _t->new_qMRMLROIWidget();
            if (_a[0]) *reinterpret_cast< qMRMLROIWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLROIWidget((*reinterpret_cast< qMRMLROIWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLROIWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLROIWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLROIWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLROIWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLROIWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLROIWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLROIWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLROIWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLScalarInvariantComboBox_t {
    QByteArrayData data[8];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLScalarInvariantComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLScalarInvariantComboBox_t qt_meta_stringdata_PythonQtWrapper_qMRMLScalarInvariantComboBox = {
    {
QT_MOC_LITERAL(0, 0, 44), // "PythonQtWrapper_qMRMLScalarIn..."
QT_MOC_LITERAL(1, 45, 32), // "new_qMRMLScalarInvariantComboBox"
QT_MOC_LITERAL(2, 78, 29), // "qMRMLScalarInvariantComboBox*"
QT_MOC_LITERAL(3, 108, 0), // ""
QT_MOC_LITERAL(4, 109, 8), // "QWidget*"
QT_MOC_LITERAL(5, 118, 6), // "parent"
QT_MOC_LITERAL(6, 125, 35), // "delete_qMRMLScalarInvariantCo..."
QT_MOC_LITERAL(7, 161, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLScalarInvariantComboBox\0"
    "new_qMRMLScalarInvariantComboBox\0"
    "qMRMLScalarInvariantComboBox*\0\0QWidget*\0"
    "parent\0delete_qMRMLScalarInvariantComboBox\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLScalarInvariantComboBox[] = {

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

void PythonQtWrapper_qMRMLScalarInvariantComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLScalarInvariantComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLScalarInvariantComboBox* _r = _t->new_qMRMLScalarInvariantComboBox((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLScalarInvariantComboBox**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLScalarInvariantComboBox* _r = _t->new_qMRMLScalarInvariantComboBox();
            if (_a[0]) *reinterpret_cast< qMRMLScalarInvariantComboBox**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLScalarInvariantComboBox((*reinterpret_cast< qMRMLScalarInvariantComboBox*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLScalarInvariantComboBox* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLScalarInvariantComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLScalarInvariantComboBox.data,
    qt_meta_data_PythonQtWrapper_qMRMLScalarInvariantComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLScalarInvariantComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLScalarInvariantComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLScalarInvariantComboBox.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLScalarInvariantComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLScalarsDisplayWidget_t {
    QByteArrayData data[8];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLScalarsDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLScalarsDisplayWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLScalarsDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 41), // "PythonQtWrapper_qMRMLScalarsD..."
QT_MOC_LITERAL(1, 42, 29), // "new_qMRMLScalarsDisplayWidget"
QT_MOC_LITERAL(2, 72, 26), // "qMRMLScalarsDisplayWidget*"
QT_MOC_LITERAL(3, 99, 0), // ""
QT_MOC_LITERAL(4, 100, 8), // "QWidget*"
QT_MOC_LITERAL(5, 109, 6), // "parent"
QT_MOC_LITERAL(6, 116, 32), // "delete_qMRMLScalarsDisplayWidget"
QT_MOC_LITERAL(7, 149, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLScalarsDisplayWidget\0"
    "new_qMRMLScalarsDisplayWidget\0"
    "qMRMLScalarsDisplayWidget*\0\0QWidget*\0"
    "parent\0delete_qMRMLScalarsDisplayWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLScalarsDisplayWidget[] = {

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

void PythonQtWrapper_qMRMLScalarsDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLScalarsDisplayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLScalarsDisplayWidget* _r = _t->new_qMRMLScalarsDisplayWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLScalarsDisplayWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLScalarsDisplayWidget* _r = _t->new_qMRMLScalarsDisplayWidget();
            if (_a[0]) *reinterpret_cast< qMRMLScalarsDisplayWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLScalarsDisplayWidget((*reinterpret_cast< qMRMLScalarsDisplayWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLScalarsDisplayWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLScalarsDisplayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLScalarsDisplayWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLScalarsDisplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLScalarsDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLScalarsDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLScalarsDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLScalarsDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSceneCategoryModel_t {
    QByteArrayData data[7];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSceneCategoryModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSceneCategoryModel_t qt_meta_stringdata_PythonQtWrapper_qMRMLSceneCategoryModel = {
    {
QT_MOC_LITERAL(0, 0, 39), // "PythonQtWrapper_qMRMLSceneCat..."
QT_MOC_LITERAL(1, 40, 27), // "new_qMRMLSceneCategoryModel"
QT_MOC_LITERAL(2, 68, 24), // "qMRMLSceneCategoryModel*"
QT_MOC_LITERAL(3, 93, 0), // ""
QT_MOC_LITERAL(4, 94, 6), // "parent"
QT_MOC_LITERAL(5, 101, 30), // "delete_qMRMLSceneCategoryModel"
QT_MOC_LITERAL(6, 132, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSceneCategoryModel\0"
    "new_qMRMLSceneCategoryModel\0"
    "qMRMLSceneCategoryModel*\0\0parent\0"
    "delete_qMRMLSceneCategoryModel\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSceneCategoryModel[] = {

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

void PythonQtWrapper_qMRMLSceneCategoryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSceneCategoryModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSceneCategoryModel* _r = _t->new_qMRMLSceneCategoryModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSceneCategoryModel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSceneCategoryModel* _r = _t->new_qMRMLSceneCategoryModel();
            if (_a[0]) *reinterpret_cast< qMRMLSceneCategoryModel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSceneCategoryModel((*reinterpret_cast< qMRMLSceneCategoryModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSceneCategoryModel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSceneCategoryModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSceneCategoryModel.data,
    qt_meta_data_PythonQtWrapper_qMRMLSceneCategoryModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSceneCategoryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSceneCategoryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSceneCategoryModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSceneCategoryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSceneColorTableModel_t {
    QByteArrayData data[7];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSceneColorTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSceneColorTableModel_t qt_meta_stringdata_PythonQtWrapper_qMRMLSceneColorTableModel = {
    {
QT_MOC_LITERAL(0, 0, 41), // "PythonQtWrapper_qMRMLSceneCol..."
QT_MOC_LITERAL(1, 42, 29), // "new_qMRMLSceneColorTableModel"
QT_MOC_LITERAL(2, 72, 26), // "qMRMLSceneColorTableModel*"
QT_MOC_LITERAL(3, 99, 0), // ""
QT_MOC_LITERAL(4, 100, 6), // "parent"
QT_MOC_LITERAL(5, 107, 32), // "delete_qMRMLSceneColorTableModel"
QT_MOC_LITERAL(6, 140, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSceneColorTableModel\0"
    "new_qMRMLSceneColorTableModel\0"
    "qMRMLSceneColorTableModel*\0\0parent\0"
    "delete_qMRMLSceneColorTableModel\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSceneColorTableModel[] = {

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

void PythonQtWrapper_qMRMLSceneColorTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSceneColorTableModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSceneColorTableModel* _r = _t->new_qMRMLSceneColorTableModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSceneColorTableModel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSceneColorTableModel* _r = _t->new_qMRMLSceneColorTableModel();
            if (_a[0]) *reinterpret_cast< qMRMLSceneColorTableModel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSceneColorTableModel((*reinterpret_cast< qMRMLSceneColorTableModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSceneColorTableModel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSceneColorTableModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSceneColorTableModel.data,
    qt_meta_data_PythonQtWrapper_qMRMLSceneColorTableModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSceneColorTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSceneColorTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSceneColorTableModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSceneColorTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSceneFactoryWidget_t {
    QByteArrayData data[8];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSceneFactoryWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSceneFactoryWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLSceneFactoryWidget = {
    {
QT_MOC_LITERAL(0, 0, 39), // "PythonQtWrapper_qMRMLSceneFac..."
QT_MOC_LITERAL(1, 40, 27), // "new_qMRMLSceneFactoryWidget"
QT_MOC_LITERAL(2, 68, 24), // "qMRMLSceneFactoryWidget*"
QT_MOC_LITERAL(3, 93, 0), // ""
QT_MOC_LITERAL(4, 94, 8), // "QWidget*"
QT_MOC_LITERAL(5, 103, 6), // "parent"
QT_MOC_LITERAL(6, 110, 30), // "delete_qMRMLSceneFactoryWidget"
QT_MOC_LITERAL(7, 141, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSceneFactoryWidget\0"
    "new_qMRMLSceneFactoryWidget\0"
    "qMRMLSceneFactoryWidget*\0\0QWidget*\0"
    "parent\0delete_qMRMLSceneFactoryWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSceneFactoryWidget[] = {

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

void PythonQtWrapper_qMRMLSceneFactoryWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSceneFactoryWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSceneFactoryWidget* _r = _t->new_qMRMLSceneFactoryWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSceneFactoryWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSceneFactoryWidget* _r = _t->new_qMRMLSceneFactoryWidget();
            if (_a[0]) *reinterpret_cast< qMRMLSceneFactoryWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSceneFactoryWidget((*reinterpret_cast< qMRMLSceneFactoryWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSceneFactoryWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSceneFactoryWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSceneFactoryWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLSceneFactoryWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSceneFactoryWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSceneFactoryWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSceneFactoryWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSceneFactoryWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSceneModel_t {
    QByteArrayData data[7];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSceneModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSceneModel_t qt_meta_stringdata_PythonQtWrapper_qMRMLSceneModel = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_qMRMLSceneModel"
QT_MOC_LITERAL(1, 32, 19), // "new_qMRMLSceneModel"
QT_MOC_LITERAL(2, 52, 16), // "qMRMLSceneModel*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 6), // "parent"
QT_MOC_LITERAL(5, 77, 22), // "delete_qMRMLSceneModel"
QT_MOC_LITERAL(6, 100, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSceneModel\0"
    "new_qMRMLSceneModel\0qMRMLSceneModel*\0"
    "\0parent\0delete_qMRMLSceneModel\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSceneModel[] = {

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

void PythonQtWrapper_qMRMLSceneModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSceneModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSceneModel* _r = _t->new_qMRMLSceneModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSceneModel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSceneModel* _r = _t->new_qMRMLSceneModel();
            if (_a[0]) *reinterpret_cast< qMRMLSceneModel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSceneModel((*reinterpret_cast< qMRMLSceneModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSceneModel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSceneModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSceneModel.data,
    qt_meta_data_PythonQtWrapper_qMRMLSceneModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSceneModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSceneModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSceneModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSceneModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSceneViewMenu_t {
    QByteArrayData data[8];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSceneViewMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSceneViewMenu_t qt_meta_stringdata_PythonQtWrapper_qMRMLSceneViewMenu = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_qMRMLSceneVie..."
QT_MOC_LITERAL(1, 35, 22), // "new_qMRMLSceneViewMenu"
QT_MOC_LITERAL(2, 58, 19), // "qMRMLSceneViewMenu*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 8), // "QWidget*"
QT_MOC_LITERAL(5, 88, 6), // "parent"
QT_MOC_LITERAL(6, 95, 25), // "delete_qMRMLSceneViewMenu"
QT_MOC_LITERAL(7, 121, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSceneViewMenu\0"
    "new_qMRMLSceneViewMenu\0qMRMLSceneViewMenu*\0"
    "\0QWidget*\0parent\0delete_qMRMLSceneViewMenu\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSceneViewMenu[] = {

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

void PythonQtWrapper_qMRMLSceneViewMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSceneViewMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSceneViewMenu* _r = _t->new_qMRMLSceneViewMenu((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSceneViewMenu**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSceneViewMenu* _r = _t->new_qMRMLSceneViewMenu();
            if (_a[0]) *reinterpret_cast< qMRMLSceneViewMenu**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSceneViewMenu((*reinterpret_cast< qMRMLSceneViewMenu*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSceneViewMenu* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSceneViewMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSceneViewMenu.data,
    qt_meta_data_PythonQtWrapper_qMRMLSceneViewMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSceneViewMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSceneViewMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSceneViewMenu.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSceneViewMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSceneTransformModel_t {
    QByteArrayData data[7];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSceneTransformModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSceneTransformModel_t qt_meta_stringdata_PythonQtWrapper_qMRMLSceneTransformModel = {
    {
QT_MOC_LITERAL(0, 0, 40), // "PythonQtWrapper_qMRMLSceneTra..."
QT_MOC_LITERAL(1, 41, 28), // "new_qMRMLSceneTransformModel"
QT_MOC_LITERAL(2, 70, 25), // "qMRMLSceneTransformModel*"
QT_MOC_LITERAL(3, 96, 0), // ""
QT_MOC_LITERAL(4, 97, 6), // "parent"
QT_MOC_LITERAL(5, 104, 31), // "delete_qMRMLSceneTransformModel"
QT_MOC_LITERAL(6, 136, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSceneTransformModel\0"
    "new_qMRMLSceneTransformModel\0"
    "qMRMLSceneTransformModel*\0\0parent\0"
    "delete_qMRMLSceneTransformModel\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSceneTransformModel[] = {

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

void PythonQtWrapper_qMRMLSceneTransformModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSceneTransformModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSceneTransformModel* _r = _t->new_qMRMLSceneTransformModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSceneTransformModel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSceneTransformModel* _r = _t->new_qMRMLSceneTransformModel();
            if (_a[0]) *reinterpret_cast< qMRMLSceneTransformModel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSceneTransformModel((*reinterpret_cast< qMRMLSceneTransformModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSceneTransformModel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSceneTransformModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSceneTransformModel.data,
    qt_meta_data_PythonQtWrapper_qMRMLSceneTransformModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSceneTransformModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSceneTransformModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSceneTransformModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSceneTransformModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSceneHierarchyModel_t {
    QByteArrayData data[7];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSceneHierarchyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSceneHierarchyModel_t qt_meta_stringdata_PythonQtWrapper_qMRMLSceneHierarchyModel = {
    {
QT_MOC_LITERAL(0, 0, 40), // "PythonQtWrapper_qMRMLSceneHie..."
QT_MOC_LITERAL(1, 41, 28), // "new_qMRMLSceneHierarchyModel"
QT_MOC_LITERAL(2, 70, 25), // "qMRMLSceneHierarchyModel*"
QT_MOC_LITERAL(3, 96, 0), // ""
QT_MOC_LITERAL(4, 97, 6), // "parent"
QT_MOC_LITERAL(5, 104, 31), // "delete_qMRMLSceneHierarchyModel"
QT_MOC_LITERAL(6, 136, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSceneHierarchyModel\0"
    "new_qMRMLSceneHierarchyModel\0"
    "qMRMLSceneHierarchyModel*\0\0parent\0"
    "delete_qMRMLSceneHierarchyModel\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSceneHierarchyModel[] = {

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

void PythonQtWrapper_qMRMLSceneHierarchyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSceneHierarchyModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSceneHierarchyModel* _r = _t->new_qMRMLSceneHierarchyModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSceneHierarchyModel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSceneHierarchyModel* _r = _t->new_qMRMLSceneHierarchyModel();
            if (_a[0]) *reinterpret_cast< qMRMLSceneHierarchyModel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSceneHierarchyModel((*reinterpret_cast< qMRMLSceneHierarchyModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSceneHierarchyModel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSceneHierarchyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSceneHierarchyModel.data,
    qt_meta_data_PythonQtWrapper_qMRMLSceneHierarchyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSceneHierarchyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSceneHierarchyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSceneHierarchyModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSceneHierarchyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSceneDisplayableModel_t {
    QByteArrayData data[7];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSceneDisplayableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSceneDisplayableModel_t qt_meta_stringdata_PythonQtWrapper_qMRMLSceneDisplayableModel = {
    {
QT_MOC_LITERAL(0, 0, 42), // "PythonQtWrapper_qMRMLSceneDis..."
QT_MOC_LITERAL(1, 43, 30), // "new_qMRMLSceneDisplayableModel"
QT_MOC_LITERAL(2, 74, 27), // "qMRMLSceneDisplayableModel*"
QT_MOC_LITERAL(3, 102, 0), // ""
QT_MOC_LITERAL(4, 103, 6), // "parent"
QT_MOC_LITERAL(5, 110, 33), // "delete_qMRMLSceneDisplayableM..."
QT_MOC_LITERAL(6, 144, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSceneDisplayableModel\0"
    "new_qMRMLSceneDisplayableModel\0"
    "qMRMLSceneDisplayableModel*\0\0parent\0"
    "delete_qMRMLSceneDisplayableModel\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSceneDisplayableModel[] = {

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

void PythonQtWrapper_qMRMLSceneDisplayableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSceneDisplayableModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSceneDisplayableModel* _r = _t->new_qMRMLSceneDisplayableModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSceneDisplayableModel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSceneDisplayableModel* _r = _t->new_qMRMLSceneDisplayableModel();
            if (_a[0]) *reinterpret_cast< qMRMLSceneDisplayableModel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSceneDisplayableModel((*reinterpret_cast< qMRMLSceneDisplayableModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSceneDisplayableModel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSceneDisplayableModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSceneDisplayableModel.data,
    qt_meta_data_PythonQtWrapper_qMRMLSceneDisplayableModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSceneDisplayableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSceneDisplayableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSceneDisplayableModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSceneDisplayableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLScreenShotDialog_t {
    QByteArrayData data[8];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLScreenShotDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLScreenShotDialog_t qt_meta_stringdata_PythonQtWrapper_qMRMLScreenShotDialog = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_qMRMLScreenSh..."
QT_MOC_LITERAL(1, 38, 25), // "new_qMRMLScreenShotDialog"
QT_MOC_LITERAL(2, 64, 22), // "qMRMLScreenShotDialog*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 8), // "QWidget*"
QT_MOC_LITERAL(5, 97, 6), // "parent"
QT_MOC_LITERAL(6, 104, 28), // "delete_qMRMLScreenShotDialog"
QT_MOC_LITERAL(7, 133, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLScreenShotDialog\0"
    "new_qMRMLScreenShotDialog\0"
    "qMRMLScreenShotDialog*\0\0QWidget*\0"
    "parent\0delete_qMRMLScreenShotDialog\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLScreenShotDialog[] = {

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

void PythonQtWrapper_qMRMLScreenShotDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLScreenShotDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLScreenShotDialog* _r = _t->new_qMRMLScreenShotDialog((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLScreenShotDialog**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLScreenShotDialog* _r = _t->new_qMRMLScreenShotDialog();
            if (_a[0]) *reinterpret_cast< qMRMLScreenShotDialog**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLScreenShotDialog((*reinterpret_cast< qMRMLScreenShotDialog*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLScreenShotDialog* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLScreenShotDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLScreenShotDialog.data,
    qt_meta_data_PythonQtWrapper_qMRMLScreenShotDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLScreenShotDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLScreenShotDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLScreenShotDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLScreenShotDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentSelectorWidget_t {
    QByteArrayData data[8];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentSelectorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentSelectorWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentSelectorWidget = {
    {
QT_MOC_LITERAL(0, 0, 42), // "PythonQtWrapper_qMRMLSegmentS..."
QT_MOC_LITERAL(1, 43, 30), // "new_qMRMLSegmentSelectorWidget"
QT_MOC_LITERAL(2, 74, 27), // "qMRMLSegmentSelectorWidget*"
QT_MOC_LITERAL(3, 102, 0), // ""
QT_MOC_LITERAL(4, 103, 8), // "QWidget*"
QT_MOC_LITERAL(5, 112, 6), // "parent"
QT_MOC_LITERAL(6, 119, 33), // "delete_qMRMLSegmentSelectorWi..."
QT_MOC_LITERAL(7, 153, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSegmentSelectorWidget\0"
    "new_qMRMLSegmentSelectorWidget\0"
    "qMRMLSegmentSelectorWidget*\0\0QWidget*\0"
    "parent\0delete_qMRMLSegmentSelectorWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSegmentSelectorWidget[] = {

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

void PythonQtWrapper_qMRMLSegmentSelectorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSegmentSelectorWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSegmentSelectorWidget* _r = _t->new_qMRMLSegmentSelectorWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSegmentSelectorWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSegmentSelectorWidget* _r = _t->new_qMRMLSegmentSelectorWidget();
            if (_a[0]) *reinterpret_cast< qMRMLSegmentSelectorWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSegmentSelectorWidget((*reinterpret_cast< qMRMLSegmentSelectorWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSegmentSelectorWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSegmentSelectorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentSelectorWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLSegmentSelectorWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSegmentSelectorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSegmentSelectorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSegmentSelectorWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSegmentSelectorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSliceControllerWidget_t {
    QByteArrayData data[8];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSliceControllerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSliceControllerWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLSliceControllerWidget = {
    {
QT_MOC_LITERAL(0, 0, 42), // "PythonQtWrapper_qMRMLSliceCon..."
QT_MOC_LITERAL(1, 43, 30), // "new_qMRMLSliceControllerWidget"
QT_MOC_LITERAL(2, 74, 27), // "qMRMLSliceControllerWidget*"
QT_MOC_LITERAL(3, 102, 0), // ""
QT_MOC_LITERAL(4, 103, 8), // "QWidget*"
QT_MOC_LITERAL(5, 112, 6), // "parent"
QT_MOC_LITERAL(6, 119, 33), // "delete_qMRMLSliceControllerWi..."
QT_MOC_LITERAL(7, 153, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSliceControllerWidget\0"
    "new_qMRMLSliceControllerWidget\0"
    "qMRMLSliceControllerWidget*\0\0QWidget*\0"
    "parent\0delete_qMRMLSliceControllerWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSliceControllerWidget[] = {

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

void PythonQtWrapper_qMRMLSliceControllerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSliceControllerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSliceControllerWidget* _r = _t->new_qMRMLSliceControllerWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSliceControllerWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSliceControllerWidget* _r = _t->new_qMRMLSliceControllerWidget();
            if (_a[0]) *reinterpret_cast< qMRMLSliceControllerWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSliceControllerWidget((*reinterpret_cast< qMRMLSliceControllerWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSliceControllerWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSliceControllerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSliceControllerWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLSliceControllerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSliceControllerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSliceControllerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSliceControllerWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSliceControllerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSliceInformationWidget_t {
    QByteArrayData data[8];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSliceInformationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSliceInformationWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLSliceInformationWidget = {
    {
QT_MOC_LITERAL(0, 0, 43), // "PythonQtWrapper_qMRMLSliceInf..."
QT_MOC_LITERAL(1, 44, 31), // "new_qMRMLSliceInformationWidget"
QT_MOC_LITERAL(2, 76, 28), // "qMRMLSliceInformationWidget*"
QT_MOC_LITERAL(3, 105, 0), // ""
QT_MOC_LITERAL(4, 106, 8), // "QWidget*"
QT_MOC_LITERAL(5, 115, 6), // "parent"
QT_MOC_LITERAL(6, 122, 34), // "delete_qMRMLSliceInformationW..."
QT_MOC_LITERAL(7, 157, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSliceInformationWidget\0"
    "new_qMRMLSliceInformationWidget\0"
    "qMRMLSliceInformationWidget*\0\0QWidget*\0"
    "parent\0delete_qMRMLSliceInformationWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSliceInformationWidget[] = {

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

void PythonQtWrapper_qMRMLSliceInformationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSliceInformationWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSliceInformationWidget* _r = _t->new_qMRMLSliceInformationWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSliceInformationWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSliceInformationWidget* _r = _t->new_qMRMLSliceInformationWidget();
            if (_a[0]) *reinterpret_cast< qMRMLSliceInformationWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSliceInformationWidget((*reinterpret_cast< qMRMLSliceInformationWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSliceInformationWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSliceInformationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSliceInformationWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLSliceInformationWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSliceInformationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSliceInformationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSliceInformationWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSliceInformationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSliceVerticalControllerWidget_t {
    QByteArrayData data[8];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSliceVerticalControllerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSliceVerticalControllerWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLSliceVerticalControllerWidget = {
    {
QT_MOC_LITERAL(0, 0, 50), // "PythonQtWrapper_qMRMLSliceVer..."
QT_MOC_LITERAL(1, 51, 38), // "new_qMRMLSliceVerticalControl..."
QT_MOC_LITERAL(2, 90, 35), // "qMRMLSliceVerticalControllerW..."
QT_MOC_LITERAL(3, 126, 0), // ""
QT_MOC_LITERAL(4, 127, 8), // "QWidget*"
QT_MOC_LITERAL(5, 136, 6), // "parent"
QT_MOC_LITERAL(6, 143, 41), // "delete_qMRMLSliceVerticalCont..."
QT_MOC_LITERAL(7, 185, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSliceVerticalControllerWidget\0"
    "new_qMRMLSliceVerticalControllerWidget\0"
    "qMRMLSliceVerticalControllerWidget*\0"
    "\0QWidget*\0parent\0"
    "delete_qMRMLSliceVerticalControllerWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSliceVerticalControllerWidget[] = {

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

void PythonQtWrapper_qMRMLSliceVerticalControllerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSliceVerticalControllerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSliceVerticalControllerWidget* _r = _t->new_qMRMLSliceVerticalControllerWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSliceVerticalControllerWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSliceVerticalControllerWidget* _r = _t->new_qMRMLSliceVerticalControllerWidget();
            if (_a[0]) *reinterpret_cast< qMRMLSliceVerticalControllerWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSliceVerticalControllerWidget((*reinterpret_cast< qMRMLSliceVerticalControllerWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSliceVerticalControllerWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSliceVerticalControllerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSliceVerticalControllerWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLSliceVerticalControllerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSliceVerticalControllerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSliceVerticalControllerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSliceVerticalControllerWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSliceVerticalControllerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSliceView_t {
    QByteArrayData data[8];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSliceView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSliceView_t qt_meta_stringdata_PythonQtWrapper_qMRMLSliceView = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PythonQtWrapper_qMRMLSliceView"
QT_MOC_LITERAL(1, 31, 18), // "new_qMRMLSliceView"
QT_MOC_LITERAL(2, 50, 15), // "qMRMLSliceView*"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 8), // "QWidget*"
QT_MOC_LITERAL(5, 76, 6), // "parent"
QT_MOC_LITERAL(6, 83, 21), // "delete_qMRMLSliceView"
QT_MOC_LITERAL(7, 105, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSliceView\0"
    "new_qMRMLSliceView\0qMRMLSliceView*\0\0"
    "QWidget*\0parent\0delete_qMRMLSliceView\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSliceView[] = {

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

void PythonQtWrapper_qMRMLSliceView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSliceView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSliceView* _r = _t->new_qMRMLSliceView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSliceView**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSliceView* _r = _t->new_qMRMLSliceView();
            if (_a[0]) *reinterpret_cast< qMRMLSliceView**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSliceView((*reinterpret_cast< qMRMLSliceView*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSliceView* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSliceView::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSliceView.data,
    qt_meta_data_PythonQtWrapper_qMRMLSliceView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSliceView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSliceView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSliceView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSliceView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSliceWidget_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSliceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSliceWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLSliceWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_qMRMLSliceWidget"
QT_MOC_LITERAL(1, 33, 20), // "new_qMRMLSliceWidget"
QT_MOC_LITERAL(2, 54, 17), // "qMRMLSliceWidget*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 8), // "QWidget*"
QT_MOC_LITERAL(5, 82, 6), // "parent"
QT_MOC_LITERAL(6, 89, 23), // "delete_qMRMLSliceWidget"
QT_MOC_LITERAL(7, 113, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSliceWidget\0"
    "new_qMRMLSliceWidget\0qMRMLSliceWidget*\0"
    "\0QWidget*\0parent\0delete_qMRMLSliceWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSliceWidget[] = {

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

void PythonQtWrapper_qMRMLSliceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSliceWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSliceWidget* _r = _t->new_qMRMLSliceWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSliceWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSliceWidget* _r = _t->new_qMRMLSliceWidget();
            if (_a[0]) *reinterpret_cast< qMRMLSliceWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSliceWidget((*reinterpret_cast< qMRMLSliceWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSliceWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSliceWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSliceWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLSliceWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSliceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSliceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSliceWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSliceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSliderWidget_t {
    QByteArrayData data[8];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSliderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSliderWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLSliderWidget = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PythonQtWrapper_qMRMLSliderWi..."
QT_MOC_LITERAL(1, 34, 21), // "new_qMRMLSliderWidget"
QT_MOC_LITERAL(2, 56, 18), // "qMRMLSliderWidget*"
QT_MOC_LITERAL(3, 75, 0), // ""
QT_MOC_LITERAL(4, 76, 8), // "QWidget*"
QT_MOC_LITERAL(5, 85, 6), // "parent"
QT_MOC_LITERAL(6, 92, 24), // "delete_qMRMLSliderWidget"
QT_MOC_LITERAL(7, 117, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSliderWidget\0"
    "new_qMRMLSliderWidget\0qMRMLSliderWidget*\0"
    "\0QWidget*\0parent\0delete_qMRMLSliderWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSliderWidget[] = {

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

void PythonQtWrapper_qMRMLSliderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSliderWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSliderWidget* _r = _t->new_qMRMLSliderWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSliderWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSliderWidget* _r = _t->new_qMRMLSliderWidget();
            if (_a[0]) *reinterpret_cast< qMRMLSliderWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSliderWidget((*reinterpret_cast< qMRMLSliderWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSliderWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSliderWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSliderWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLSliderWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSliderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSliderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSliderWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSliderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterHierarchyProxyModel_t {
    QByteArrayData data[7];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterHierarchyProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterHierarchyProxyModel_t qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterHierarchyProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 50), // "PythonQtWrapper_qMRMLSortFilt..."
QT_MOC_LITERAL(1, 51, 38), // "new_qMRMLSortFilterHierarchyP..."
QT_MOC_LITERAL(2, 90, 35), // "qMRMLSortFilterHierarchyProxy..."
QT_MOC_LITERAL(3, 126, 0), // ""
QT_MOC_LITERAL(4, 127, 6), // "parent"
QT_MOC_LITERAL(5, 134, 41), // "delete_qMRMLSortFilterHierarc..."
QT_MOC_LITERAL(6, 176, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSortFilterHierarchyProxyModel\0"
    "new_qMRMLSortFilterHierarchyProxyModel\0"
    "qMRMLSortFilterHierarchyProxyModel*\0"
    "\0parent\0delete_qMRMLSortFilterHierarchyProxyModel\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSortFilterHierarchyProxyModel[] = {

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

void PythonQtWrapper_qMRMLSortFilterHierarchyProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSortFilterHierarchyProxyModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSortFilterHierarchyProxyModel* _r = _t->new_qMRMLSortFilterHierarchyProxyModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSortFilterHierarchyProxyModel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSortFilterHierarchyProxyModel* _r = _t->new_qMRMLSortFilterHierarchyProxyModel();
            if (_a[0]) *reinterpret_cast< qMRMLSortFilterHierarchyProxyModel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSortFilterHierarchyProxyModel((*reinterpret_cast< qMRMLSortFilterHierarchyProxyModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSortFilterHierarchyProxyModel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSortFilterHierarchyProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterHierarchyProxyModel.data,
    qt_meta_data_PythonQtWrapper_qMRMLSortFilterHierarchyProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSortFilterHierarchyProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSortFilterHierarchyProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterHierarchyProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSortFilterHierarchyProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterProxyModel_t {
    QByteArrayData data[7];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterProxyModel_t qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 41), // "PythonQtWrapper_qMRMLSortFilt..."
QT_MOC_LITERAL(1, 42, 29), // "new_qMRMLSortFilterProxyModel"
QT_MOC_LITERAL(2, 72, 26), // "qMRMLSortFilterProxyModel*"
QT_MOC_LITERAL(3, 99, 0), // ""
QT_MOC_LITERAL(4, 100, 6), // "parent"
QT_MOC_LITERAL(5, 107, 32), // "delete_qMRMLSortFilterProxyModel"
QT_MOC_LITERAL(6, 140, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSortFilterProxyModel\0"
    "new_qMRMLSortFilterProxyModel\0"
    "qMRMLSortFilterProxyModel*\0\0parent\0"
    "delete_qMRMLSortFilterProxyModel\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSortFilterProxyModel[] = {

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

void PythonQtWrapper_qMRMLSortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSortFilterProxyModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSortFilterProxyModel* _r = _t->new_qMRMLSortFilterProxyModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSortFilterProxyModel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSortFilterProxyModel* _r = _t->new_qMRMLSortFilterProxyModel();
            if (_a[0]) *reinterpret_cast< qMRMLSortFilterProxyModel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSortFilterProxyModel((*reinterpret_cast< qMRMLSortFilterProxyModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSortFilterProxyModel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSortFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterProxyModel.data,
    qt_meta_data_PythonQtWrapper_qMRMLSortFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSortFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLSpinBox_t {
    QByteArrayData data[8];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLSpinBox_t qt_meta_stringdata_PythonQtWrapper_qMRMLSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PythonQtWrapper_qMRMLSpinBox"
QT_MOC_LITERAL(1, 29, 16), // "new_qMRMLSpinBox"
QT_MOC_LITERAL(2, 46, 13), // "qMRMLSpinBox*"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 8), // "QWidget*"
QT_MOC_LITERAL(5, 70, 6), // "parent"
QT_MOC_LITERAL(6, 77, 19), // "delete_qMRMLSpinBox"
QT_MOC_LITERAL(7, 97, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLSpinBox\0"
    "new_qMRMLSpinBox\0qMRMLSpinBox*\0\0"
    "QWidget*\0parent\0delete_qMRMLSpinBox\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLSpinBox[] = {

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

void PythonQtWrapper_qMRMLSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLSpinBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLSpinBox* _r = _t->new_qMRMLSpinBox((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLSpinBox**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLSpinBox* _r = _t->new_qMRMLSpinBox();
            if (_a[0]) *reinterpret_cast< qMRMLSpinBox**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLSpinBox((*reinterpret_cast< qMRMLSpinBox*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLSpinBox* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLSpinBox.data,
    qt_meta_data_PythonQtWrapper_qMRMLSpinBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLSpinBox.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLTableModel_t {
    QByteArrayData data[7];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLTableModel_t qt_meta_stringdata_PythonQtWrapper_qMRMLTableModel = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_qMRMLTableModel"
QT_MOC_LITERAL(1, 32, 19), // "new_qMRMLTableModel"
QT_MOC_LITERAL(2, 52, 16), // "qMRMLTableModel*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 6), // "parent"
QT_MOC_LITERAL(5, 77, 22), // "delete_qMRMLTableModel"
QT_MOC_LITERAL(6, 100, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLTableModel\0"
    "new_qMRMLTableModel\0qMRMLTableModel*\0"
    "\0parent\0delete_qMRMLTableModel\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLTableModel[] = {

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

void PythonQtWrapper_qMRMLTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLTableModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLTableModel* _r = _t->new_qMRMLTableModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLTableModel**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLTableModel* _r = _t->new_qMRMLTableModel();
            if (_a[0]) *reinterpret_cast< qMRMLTableModel**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLTableModel((*reinterpret_cast< qMRMLTableModel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLTableModel* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLTableModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLTableModel.data,
    qt_meta_data_PythonQtWrapper_qMRMLTableModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLTableModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLTableView_t {
    QByteArrayData data[8];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLTableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLTableView_t qt_meta_stringdata_PythonQtWrapper_qMRMLTableView = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PythonQtWrapper_qMRMLTableView"
QT_MOC_LITERAL(1, 31, 18), // "new_qMRMLTableView"
QT_MOC_LITERAL(2, 50, 15), // "qMRMLTableView*"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 8), // "QWidget*"
QT_MOC_LITERAL(5, 76, 6), // "parent"
QT_MOC_LITERAL(6, 83, 21), // "delete_qMRMLTableView"
QT_MOC_LITERAL(7, 105, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLTableView\0"
    "new_qMRMLTableView\0qMRMLTableView*\0\0"
    "QWidget*\0parent\0delete_qMRMLTableView\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLTableView[] = {

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

void PythonQtWrapper_qMRMLTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLTableView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLTableView* _r = _t->new_qMRMLTableView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLTableView**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLTableView* _r = _t->new_qMRMLTableView();
            if (_a[0]) *reinterpret_cast< qMRMLTableView**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLTableView((*reinterpret_cast< qMRMLTableView*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLTableView* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLTableView::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLTableView.data,
    qt_meta_data_PythonQtWrapper_qMRMLTableView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLTableView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLTableViewControllerWidget_t {
    QByteArrayData data[8];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLTableViewControllerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLTableViewControllerWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLTableViewControllerWidget = {
    {
QT_MOC_LITERAL(0, 0, 46), // "PythonQtWrapper_qMRMLTableVie..."
QT_MOC_LITERAL(1, 47, 34), // "new_qMRMLTableViewControllerW..."
QT_MOC_LITERAL(2, 82, 31), // "qMRMLTableViewControllerWidget*"
QT_MOC_LITERAL(3, 114, 0), // ""
QT_MOC_LITERAL(4, 115, 8), // "QWidget*"
QT_MOC_LITERAL(5, 124, 6), // "parent"
QT_MOC_LITERAL(6, 131, 37), // "delete_qMRMLTableViewControll..."
QT_MOC_LITERAL(7, 169, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLTableViewControllerWidget\0"
    "new_qMRMLTableViewControllerWidget\0"
    "qMRMLTableViewControllerWidget*\0\0"
    "QWidget*\0parent\0delete_qMRMLTableViewControllerWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLTableViewControllerWidget[] = {

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

void PythonQtWrapper_qMRMLTableViewControllerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLTableViewControllerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLTableViewControllerWidget* _r = _t->new_qMRMLTableViewControllerWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLTableViewControllerWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLTableViewControllerWidget* _r = _t->new_qMRMLTableViewControllerWidget();
            if (_a[0]) *reinterpret_cast< qMRMLTableViewControllerWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLTableViewControllerWidget((*reinterpret_cast< qMRMLTableViewControllerWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLTableViewControllerWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLTableViewControllerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLTableViewControllerWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLTableViewControllerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLTableViewControllerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLTableViewControllerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLTableViewControllerWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLTableViewControllerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLTableWidget_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLTableWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLTableWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLTableWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_qMRMLTableWidget"
QT_MOC_LITERAL(1, 33, 20), // "new_qMRMLTableWidget"
QT_MOC_LITERAL(2, 54, 17), // "qMRMLTableWidget*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 8), // "QWidget*"
QT_MOC_LITERAL(5, 82, 6), // "parent"
QT_MOC_LITERAL(6, 89, 23), // "delete_qMRMLTableWidget"
QT_MOC_LITERAL(7, 113, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLTableWidget\0"
    "new_qMRMLTableWidget\0qMRMLTableWidget*\0"
    "\0QWidget*\0parent\0delete_qMRMLTableWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLTableWidget[] = {

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

void PythonQtWrapper_qMRMLTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLTableWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLTableWidget* _r = _t->new_qMRMLTableWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLTableWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLTableWidget* _r = _t->new_qMRMLTableWidget();
            if (_a[0]) *reinterpret_cast< qMRMLTableWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLTableWidget((*reinterpret_cast< qMRMLTableWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLTableWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLTableWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLTableWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLTableWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLTableWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDView_t {
    QByteArrayData data[8];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDView_t qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDView = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_qMRMLThreeDView"
QT_MOC_LITERAL(1, 32, 19), // "new_qMRMLThreeDView"
QT_MOC_LITERAL(2, 52, 16), // "qMRMLThreeDView*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 8), // "QWidget*"
QT_MOC_LITERAL(5, 79, 6), // "parent"
QT_MOC_LITERAL(6, 86, 22), // "delete_qMRMLThreeDView"
QT_MOC_LITERAL(7, 109, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLThreeDView\0"
    "new_qMRMLThreeDView\0qMRMLThreeDView*\0"
    "\0QWidget*\0parent\0delete_qMRMLThreeDView\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLThreeDView[] = {

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

void PythonQtWrapper_qMRMLThreeDView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLThreeDView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLThreeDView* _r = _t->new_qMRMLThreeDView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLThreeDView**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLThreeDView* _r = _t->new_qMRMLThreeDView();
            if (_a[0]) *reinterpret_cast< qMRMLThreeDView**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLThreeDView((*reinterpret_cast< qMRMLThreeDView*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLThreeDView* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLThreeDView::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDView.data,
    qt_meta_data_PythonQtWrapper_qMRMLThreeDView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLThreeDView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLThreeDView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLThreeDView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDViewControllerWidget_t {
    QByteArrayData data[8];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDViewControllerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDViewControllerWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDViewControllerWidget = {
    {
QT_MOC_LITERAL(0, 0, 47), // "PythonQtWrapper_qMRMLThreeDVi..."
QT_MOC_LITERAL(1, 48, 35), // "new_qMRMLThreeDViewController..."
QT_MOC_LITERAL(2, 84, 32), // "qMRMLThreeDViewControllerWidget*"
QT_MOC_LITERAL(3, 117, 0), // ""
QT_MOC_LITERAL(4, 118, 8), // "QWidget*"
QT_MOC_LITERAL(5, 127, 6), // "parent"
QT_MOC_LITERAL(6, 134, 38), // "delete_qMRMLThreeDViewControl..."
QT_MOC_LITERAL(7, 173, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLThreeDViewControllerWidget\0"
    "new_qMRMLThreeDViewControllerWidget\0"
    "qMRMLThreeDViewControllerWidget*\0\0"
    "QWidget*\0parent\0delete_qMRMLThreeDViewControllerWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLThreeDViewControllerWidget[] = {

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

void PythonQtWrapper_qMRMLThreeDViewControllerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLThreeDViewControllerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLThreeDViewControllerWidget* _r = _t->new_qMRMLThreeDViewControllerWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLThreeDViewControllerWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLThreeDViewControllerWidget* _r = _t->new_qMRMLThreeDViewControllerWidget();
            if (_a[0]) *reinterpret_cast< qMRMLThreeDViewControllerWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLThreeDViewControllerWidget((*reinterpret_cast< qMRMLThreeDViewControllerWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLThreeDViewControllerWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLThreeDViewControllerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDViewControllerWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLThreeDViewControllerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLThreeDViewControllerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLThreeDViewControllerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDViewControllerWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLThreeDViewControllerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDViewInformationWidget_t {
    QByteArrayData data[8];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDViewInformationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDViewInformationWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDViewInformationWidget = {
    {
QT_MOC_LITERAL(0, 0, 48), // "PythonQtWrapper_qMRMLThreeDVi..."
QT_MOC_LITERAL(1, 49, 36), // "new_qMRMLThreeDViewInformatio..."
QT_MOC_LITERAL(2, 86, 33), // "qMRMLThreeDViewInformationWid..."
QT_MOC_LITERAL(3, 120, 0), // ""
QT_MOC_LITERAL(4, 121, 8), // "QWidget*"
QT_MOC_LITERAL(5, 130, 6), // "parent"
QT_MOC_LITERAL(6, 137, 39), // "delete_qMRMLThreeDViewInforma..."
QT_MOC_LITERAL(7, 177, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLThreeDViewInformationWidget\0"
    "new_qMRMLThreeDViewInformationWidget\0"
    "qMRMLThreeDViewInformationWidget*\0\0"
    "QWidget*\0parent\0delete_qMRMLThreeDViewInformationWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLThreeDViewInformationWidget[] = {

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

void PythonQtWrapper_qMRMLThreeDViewInformationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLThreeDViewInformationWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLThreeDViewInformationWidget* _r = _t->new_qMRMLThreeDViewInformationWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLThreeDViewInformationWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLThreeDViewInformationWidget* _r = _t->new_qMRMLThreeDViewInformationWidget();
            if (_a[0]) *reinterpret_cast< qMRMLThreeDViewInformationWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLThreeDViewInformationWidget((*reinterpret_cast< qMRMLThreeDViewInformationWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLThreeDViewInformationWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLThreeDViewInformationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDViewInformationWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLThreeDViewInformationWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLThreeDViewInformationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLThreeDViewInformationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDViewInformationWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLThreeDViewInformationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDWidget_t {
    QByteArrayData data[8];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDWidget = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PythonQtWrapper_qMRMLThreeDWi..."
QT_MOC_LITERAL(1, 34, 21), // "new_qMRMLThreeDWidget"
QT_MOC_LITERAL(2, 56, 18), // "qMRMLThreeDWidget*"
QT_MOC_LITERAL(3, 75, 0), // ""
QT_MOC_LITERAL(4, 76, 8), // "QWidget*"
QT_MOC_LITERAL(5, 85, 6), // "parent"
QT_MOC_LITERAL(6, 92, 24), // "delete_qMRMLThreeDWidget"
QT_MOC_LITERAL(7, 117, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLThreeDWidget\0"
    "new_qMRMLThreeDWidget\0qMRMLThreeDWidget*\0"
    "\0QWidget*\0parent\0delete_qMRMLThreeDWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLThreeDWidget[] = {

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

void PythonQtWrapper_qMRMLThreeDWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLThreeDWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLThreeDWidget* _r = _t->new_qMRMLThreeDWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLThreeDWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLThreeDWidget* _r = _t->new_qMRMLThreeDWidget();
            if (_a[0]) *reinterpret_cast< qMRMLThreeDWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLThreeDWidget((*reinterpret_cast< qMRMLThreeDWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLThreeDWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLThreeDWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLThreeDWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLThreeDWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLThreeDWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLThreeDWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLThreeDWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLTransformSliders_t {
    QByteArrayData data[8];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLTransformSliders_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLTransformSliders_t qt_meta_stringdata_PythonQtWrapper_qMRMLTransformSliders = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_qMRMLTransfor..."
QT_MOC_LITERAL(1, 38, 25), // "new_qMRMLTransformSliders"
QT_MOC_LITERAL(2, 64, 22), // "qMRMLTransformSliders*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 8), // "QWidget*"
QT_MOC_LITERAL(5, 97, 6), // "parent"
QT_MOC_LITERAL(6, 104, 28), // "delete_qMRMLTransformSliders"
QT_MOC_LITERAL(7, 133, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLTransformSliders\0"
    "new_qMRMLTransformSliders\0"
    "qMRMLTransformSliders*\0\0QWidget*\0"
    "parent\0delete_qMRMLTransformSliders\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLTransformSliders[] = {

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

void PythonQtWrapper_qMRMLTransformSliders::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLTransformSliders *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLTransformSliders* _r = _t->new_qMRMLTransformSliders((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLTransformSliders**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLTransformSliders* _r = _t->new_qMRMLTransformSliders();
            if (_a[0]) *reinterpret_cast< qMRMLTransformSliders**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLTransformSliders((*reinterpret_cast< qMRMLTransformSliders*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLTransformSliders* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLTransformSliders::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLTransformSliders.data,
    qt_meta_data_PythonQtWrapper_qMRMLTransformSliders,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLTransformSliders::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLTransformSliders::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLTransformSliders.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLTransformSliders::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLTreeView_t {
    QByteArrayData data[8];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLTreeView_t qt_meta_stringdata_PythonQtWrapper_qMRMLTreeView = {
    {
QT_MOC_LITERAL(0, 0, 29), // "PythonQtWrapper_qMRMLTreeView"
QT_MOC_LITERAL(1, 30, 17), // "new_qMRMLTreeView"
QT_MOC_LITERAL(2, 48, 14), // "qMRMLTreeView*"
QT_MOC_LITERAL(3, 63, 0), // ""
QT_MOC_LITERAL(4, 64, 8), // "QWidget*"
QT_MOC_LITERAL(5, 73, 6), // "parent"
QT_MOC_LITERAL(6, 80, 20), // "delete_qMRMLTreeView"
QT_MOC_LITERAL(7, 101, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLTreeView\0"
    "new_qMRMLTreeView\0qMRMLTreeView*\0\0"
    "QWidget*\0parent\0delete_qMRMLTreeView\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLTreeView[] = {

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

void PythonQtWrapper_qMRMLTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLTreeView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLTreeView* _r = _t->new_qMRMLTreeView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLTreeView**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLTreeView* _r = _t->new_qMRMLTreeView();
            if (_a[0]) *reinterpret_cast< qMRMLTreeView**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLTreeView((*reinterpret_cast< qMRMLTreeView*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLTreeView* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLTreeView::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLTreeView.data,
    qt_meta_data_PythonQtWrapper_qMRMLTreeView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLTreeView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLUtils_t {
    QByteArrayData data[7];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLUtils_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLUtils_t qt_meta_stringdata_PythonQtWrapper_qMRMLUtils = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PythonQtWrapper_qMRMLUtils"
QT_MOC_LITERAL(1, 27, 14), // "new_qMRMLUtils"
QT_MOC_LITERAL(2, 42, 11), // "qMRMLUtils*"
QT_MOC_LITERAL(3, 54, 0), // ""
QT_MOC_LITERAL(4, 55, 6), // "parent"
QT_MOC_LITERAL(5, 62, 17), // "delete_qMRMLUtils"
QT_MOC_LITERAL(6, 80, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLUtils\0new_qMRMLUtils\0"
    "qMRMLUtils*\0\0parent\0delete_qMRMLUtils\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLUtils[] = {

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

void PythonQtWrapper_qMRMLUtils::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLUtils *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLUtils* _r = _t->new_qMRMLUtils((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLUtils**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLUtils* _r = _t->new_qMRMLUtils();
            if (_a[0]) *reinterpret_cast< qMRMLUtils**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLUtils((*reinterpret_cast< qMRMLUtils*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLUtils* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLUtils::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLUtils.data,
    qt_meta_data_PythonQtWrapper_qMRMLUtils,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLUtils::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLUtils::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLUtils.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLUtils::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLViewControllerBar_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLViewControllerBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLViewControllerBar_t qt_meta_stringdata_PythonQtWrapper_qMRMLViewControllerBar = {
    {
QT_MOC_LITERAL(0, 0, 38), // "PythonQtWrapper_qMRMLViewCont..."
QT_MOC_LITERAL(1, 39, 26), // "new_qMRMLViewControllerBar"
QT_MOC_LITERAL(2, 66, 23), // "qMRMLViewControllerBar*"
QT_MOC_LITERAL(3, 90, 0), // ""
QT_MOC_LITERAL(4, 91, 8), // "QWidget*"
QT_MOC_LITERAL(5, 100, 6), // "parent"
QT_MOC_LITERAL(6, 107, 29), // "delete_qMRMLViewControllerBar"
QT_MOC_LITERAL(7, 137, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLViewControllerBar\0"
    "new_qMRMLViewControllerBar\0"
    "qMRMLViewControllerBar*\0\0QWidget*\0"
    "parent\0delete_qMRMLViewControllerBar\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLViewControllerBar[] = {

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

void PythonQtWrapper_qMRMLViewControllerBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLViewControllerBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLViewControllerBar* _r = _t->new_qMRMLViewControllerBar((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLViewControllerBar**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLViewControllerBar* _r = _t->new_qMRMLViewControllerBar();
            if (_a[0]) *reinterpret_cast< qMRMLViewControllerBar**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLViewControllerBar((*reinterpret_cast< qMRMLViewControllerBar*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLViewControllerBar* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLViewControllerBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLViewControllerBar.data,
    qt_meta_data_PythonQtWrapper_qMRMLViewControllerBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLViewControllerBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLViewControllerBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLViewControllerBar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLViewControllerBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeInfoWidget_t {
    QByteArrayData data[8];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeInfoWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeInfoWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeInfoWidget = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_qMRMLVolumeIn..."
QT_MOC_LITERAL(1, 38, 25), // "new_qMRMLVolumeInfoWidget"
QT_MOC_LITERAL(2, 64, 22), // "qMRMLVolumeInfoWidget*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 8), // "QWidget*"
QT_MOC_LITERAL(5, 97, 6), // "parent"
QT_MOC_LITERAL(6, 104, 28), // "delete_qMRMLVolumeInfoWidget"
QT_MOC_LITERAL(7, 133, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLVolumeInfoWidget\0"
    "new_qMRMLVolumeInfoWidget\0"
    "qMRMLVolumeInfoWidget*\0\0QWidget*\0"
    "parent\0delete_qMRMLVolumeInfoWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLVolumeInfoWidget[] = {

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

void PythonQtWrapper_qMRMLVolumeInfoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLVolumeInfoWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLVolumeInfoWidget* _r = _t->new_qMRMLVolumeInfoWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLVolumeInfoWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLVolumeInfoWidget* _r = _t->new_qMRMLVolumeInfoWidget();
            if (_a[0]) *reinterpret_cast< qMRMLVolumeInfoWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLVolumeInfoWidget((*reinterpret_cast< qMRMLVolumeInfoWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLVolumeInfoWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLVolumeInfoWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeInfoWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLVolumeInfoWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLVolumeInfoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLVolumeInfoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeInfoWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLVolumeInfoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeThresholdWidget_t {
    QByteArrayData data[8];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeThresholdWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeThresholdWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeThresholdWidget = {
    {
QT_MOC_LITERAL(0, 0, 42), // "PythonQtWrapper_qMRMLVolumeTh..."
QT_MOC_LITERAL(1, 43, 30), // "new_qMRMLVolumeThresholdWidget"
QT_MOC_LITERAL(2, 74, 27), // "qMRMLVolumeThresholdWidget*"
QT_MOC_LITERAL(3, 102, 0), // ""
QT_MOC_LITERAL(4, 103, 8), // "QWidget*"
QT_MOC_LITERAL(5, 112, 6), // "parent"
QT_MOC_LITERAL(6, 119, 33), // "delete_qMRMLVolumeThresholdWi..."
QT_MOC_LITERAL(7, 153, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLVolumeThresholdWidget\0"
    "new_qMRMLVolumeThresholdWidget\0"
    "qMRMLVolumeThresholdWidget*\0\0QWidget*\0"
    "parent\0delete_qMRMLVolumeThresholdWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLVolumeThresholdWidget[] = {

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

void PythonQtWrapper_qMRMLVolumeThresholdWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLVolumeThresholdWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLVolumeThresholdWidget* _r = _t->new_qMRMLVolumeThresholdWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLVolumeThresholdWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLVolumeThresholdWidget* _r = _t->new_qMRMLVolumeThresholdWidget();
            if (_a[0]) *reinterpret_cast< qMRMLVolumeThresholdWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLVolumeThresholdWidget((*reinterpret_cast< qMRMLVolumeThresholdWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLVolumeThresholdWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLVolumeThresholdWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeThresholdWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLVolumeThresholdWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLVolumeThresholdWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLVolumeThresholdWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeThresholdWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLVolumeThresholdWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeWidget_t {
    QByteArrayData data[8];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeWidget = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PythonQtWrapper_qMRMLVolumeWi..."
QT_MOC_LITERAL(1, 34, 21), // "new_qMRMLVolumeWidget"
QT_MOC_LITERAL(2, 56, 18), // "qMRMLVolumeWidget*"
QT_MOC_LITERAL(3, 75, 0), // ""
QT_MOC_LITERAL(4, 76, 8), // "QWidget*"
QT_MOC_LITERAL(5, 85, 6), // "parent"
QT_MOC_LITERAL(6, 92, 24), // "delete_qMRMLVolumeWidget"
QT_MOC_LITERAL(7, 117, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLVolumeWidget\0"
    "new_qMRMLVolumeWidget\0qMRMLVolumeWidget*\0"
    "\0QWidget*\0parent\0delete_qMRMLVolumeWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLVolumeWidget[] = {

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

void PythonQtWrapper_qMRMLVolumeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLVolumeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLVolumeWidget* _r = _t->new_qMRMLVolumeWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLVolumeWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLVolumeWidget* _r = _t->new_qMRMLVolumeWidget();
            if (_a[0]) *reinterpret_cast< qMRMLVolumeWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLVolumeWidget((*reinterpret_cast< qMRMLVolumeWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLVolumeWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLVolumeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLVolumeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLVolumeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLVolumeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLVolumeWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLVolumeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLWidget_t {
    QByteArrayData data[8];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_qMRMLWidget"
QT_MOC_LITERAL(1, 28, 15), // "new_qMRMLWidget"
QT_MOC_LITERAL(2, 44, 12), // "qMRMLWidget*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 8), // "QWidget*"
QT_MOC_LITERAL(5, 67, 6), // "parent"
QT_MOC_LITERAL(6, 74, 18), // "delete_qMRMLWidget"
QT_MOC_LITERAL(7, 93, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLWidget\0new_qMRMLWidget\0"
    "qMRMLWidget*\0\0QWidget*\0parent\0"
    "delete_qMRMLWidget\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLWidget[] = {

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

void PythonQtWrapper_qMRMLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLWidget* _r = _t->new_qMRMLWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLWidget* _r = _t->new_qMRMLWidget();
            if (_a[0]) *reinterpret_cast< qMRMLWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLWidget((*reinterpret_cast< qMRMLWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLWindowLevelWidget_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLWindowLevelWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLWindowLevelWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLWindowLevelWidget = {
    {
QT_MOC_LITERAL(0, 0, 38), // "PythonQtWrapper_qMRMLWindowLe..."
QT_MOC_LITERAL(1, 39, 26), // "new_qMRMLWindowLevelWidget"
QT_MOC_LITERAL(2, 66, 23), // "qMRMLWindowLevelWidget*"
QT_MOC_LITERAL(3, 90, 0), // ""
QT_MOC_LITERAL(4, 91, 8), // "QWidget*"
QT_MOC_LITERAL(5, 100, 6), // "parent"
QT_MOC_LITERAL(6, 107, 29), // "delete_qMRMLWindowLevelWidget"
QT_MOC_LITERAL(7, 137, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLWindowLevelWidget\0"
    "new_qMRMLWindowLevelWidget\0"
    "qMRMLWindowLevelWidget*\0\0QWidget*\0"
    "parent\0delete_qMRMLWindowLevelWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLWindowLevelWidget[] = {

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

void PythonQtWrapper_qMRMLWindowLevelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLWindowLevelWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLWindowLevelWidget* _r = _t->new_qMRMLWindowLevelWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLWindowLevelWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLWindowLevelWidget* _r = _t->new_qMRMLWindowLevelWidget();
            if (_a[0]) *reinterpret_cast< qMRMLWindowLevelWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLWindowLevelWidget((*reinterpret_cast< qMRMLWindowLevelWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLWindowLevelWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLWindowLevelWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLWindowLevelWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLWindowLevelWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLWindowLevelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLWindowLevelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLWindowLevelWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLWindowLevelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_qMRMLExpandingWebView_t {
    QByteArrayData data[8];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLExpandingWebView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLExpandingWebView_t qt_meta_stringdata_PythonQtWrapper_qMRMLExpandingWebView = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_qMRMLExpandin..."
QT_MOC_LITERAL(1, 38, 25), // "new_qMRMLExpandingWebView"
QT_MOC_LITERAL(2, 64, 22), // "qMRMLExpandingWebView*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 8), // "QWidget*"
QT_MOC_LITERAL(5, 97, 6), // "parent"
QT_MOC_LITERAL(6, 104, 28), // "delete_qMRMLExpandingWebView"
QT_MOC_LITERAL(7, 133, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLExpandingWebView\0"
    "new_qMRMLExpandingWebView\0"
    "qMRMLExpandingWebView*\0\0QWidget*\0"
    "parent\0delete_qMRMLExpandingWebView\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLExpandingWebView[] = {

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

void PythonQtWrapper_qMRMLExpandingWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLExpandingWebView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLExpandingWebView* _r = _t->new_qMRMLExpandingWebView((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLExpandingWebView**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLExpandingWebView* _r = _t->new_qMRMLExpandingWebView();
            if (_a[0]) *reinterpret_cast< qMRMLExpandingWebView**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLExpandingWebView((*reinterpret_cast< qMRMLExpandingWebView*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLExpandingWebView* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLExpandingWebView::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLExpandingWebView.data,
    qt_meta_data_PythonQtWrapper_qMRMLExpandingWebView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLExpandingWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLExpandingWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLExpandingWebView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLExpandingWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
