/****************************************************************************
** Meta object code from reading C++ file 'qMRMLLayoutWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLLayoutWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLLayoutWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLLayoutWidget_t {
    QByteArrayData data[9];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLLayoutWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLLayoutWidget_t qt_meta_stringdata_qMRMLLayoutWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "qMRMLLayoutWidget"
QT_MOC_LITERAL(1, 18, 12), // "setMRMLScene"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(4, 46, 5), // "scene"
QT_MOC_LITERAL(5, 52, 9), // "setLayout"
QT_MOC_LITERAL(6, 62, 13), // "layoutManager"
QT_MOC_LITERAL(7, 76, 19), // "qMRMLLayoutManager*"
QT_MOC_LITERAL(8, 96, 16) // "setLayoutManager"

    },
    "qMRMLLayoutWidget\0setMRMLScene\0\0"
    "vtkMRMLScene*\0scene\0setLayout\0"
    "layoutManager\0qMRMLLayoutManager*\0"
    "setLayoutManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLLayoutWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   40,    2, 0x02 /* Public */,
       8,    1,   41,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    2,

 // methods: parameters
    0x80000000 | 7,
    QMetaType::Void, 0x80000000 | 7,    6,

       0        // eod
};

void qMRMLLayoutWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLLayoutWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 1: _t->setLayout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: { qMRMLLayoutManager* _r = _t->layoutManager();
            if (_a[0]) *reinterpret_cast< qMRMLLayoutManager**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setLayoutManager((*reinterpret_cast< qMRMLLayoutManager*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLLayoutWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLLayoutWidget.data,
    qt_meta_data_qMRMLLayoutWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLLayoutWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLLayoutWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLLayoutWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qMRMLLayoutWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
