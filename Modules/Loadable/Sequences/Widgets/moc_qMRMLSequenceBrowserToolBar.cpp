/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSequenceBrowserToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Sequences/Widgets/qMRMLSequenceBrowserToolBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSequenceBrowserToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSequenceBrowserToolBar_t {
    QByteArrayData data[12];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSequenceBrowserToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSequenceBrowserToolBar_t qt_meta_stringdata_qMRMLSequenceBrowserToolBar = {
    {
QT_MOC_LITERAL(0, 0, 27), // "qMRMLSequenceBrowserToolBar"
QT_MOC_LITERAL(1, 28, 16), // "mrmlSceneChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(4, 60, 24), // "activeBrowserNodeChanged"
QT_MOC_LITERAL(5, 85, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 98, 17), // "activeBrowserNode"
QT_MOC_LITERAL(7, 116, 12), // "setMRMLScene"
QT_MOC_LITERAL(8, 129, 8), // "newScene"
QT_MOC_LITERAL(9, 138, 20), // "setActiveBrowserNode"
QT_MOC_LITERAL(10, 159, 27), // "vtkMRMLSequenceBrowserNode*"
QT_MOC_LITERAL(11, 187, 20) // "newActiveBrowserNode"

    },
    "qMRMLSequenceBrowserToolBar\0"
    "mrmlSceneChanged\0\0vtkMRMLScene*\0"
    "activeBrowserNodeChanged\0vtkMRMLNode*\0"
    "activeBrowserNode\0setMRMLScene\0newScene\0"
    "setActiveBrowserNode\0vtkMRMLSequenceBrowserNode*\0"
    "newActiveBrowserNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSequenceBrowserToolBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   45,    2, 0x0a /* Public */,
       9,    1,   48,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   51,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

 // methods: parameters
    0x80000000 | 10,

       0        // eod
};

void qMRMLSequenceBrowserToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSequenceBrowserToolBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mrmlSceneChanged((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 1: _t->activeBrowserNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 3: _t->setActiveBrowserNode((*reinterpret_cast< vtkMRMLSequenceBrowserNode*(*)>(_a[1]))); break;
        case 4: { vtkMRMLSequenceBrowserNode* _r = _t->activeBrowserNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLSequenceBrowserNode**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLSequenceBrowserToolBar::*)(vtkMRMLScene * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSequenceBrowserToolBar::mrmlSceneChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLSequenceBrowserToolBar::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSequenceBrowserToolBar::activeBrowserNodeChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSequenceBrowserToolBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolBar::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSequenceBrowserToolBar.data,
    qt_meta_data_qMRMLSequenceBrowserToolBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSequenceBrowserToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSequenceBrowserToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSequenceBrowserToolBar.stringdata0))
        return static_cast<void*>(this);
    return QToolBar::qt_metacast(_clname);
}

int qMRMLSequenceBrowserToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void qMRMLSequenceBrowserToolBar::mrmlSceneChanged(vtkMRMLScene * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLSequenceBrowserToolBar::activeBrowserNodeChanged(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
