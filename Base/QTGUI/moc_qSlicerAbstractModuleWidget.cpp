/****************************************************************************
** Meta object code from reading C++ file 'qSlicerAbstractModuleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerAbstractModuleWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerAbstractModuleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerAbstractModuleWidget_t {
    QByteArrayData data[11];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerAbstractModuleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerAbstractModuleWidget_t qt_meta_stringdata_qSlicerAbstractModuleWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "qSlicerAbstractModuleWidget"
QT_MOC_LITERAL(1, 28, 5), // "enter"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "exit"
QT_MOC_LITERAL(4, 40, 13), // "setEditedNode"
QT_MOC_LITERAL(5, 54, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 67, 4), // "node"
QT_MOC_LITERAL(7, 72, 4), // "role"
QT_MOC_LITERAL(8, 77, 7), // "context"
QT_MOC_LITERAL(9, 85, 12), // "nodeEditable"
QT_MOC_LITERAL(10, 98, 9) // "isEntered"

    },
    "qSlicerAbstractModuleWidget\0enter\0\0"
    "exit\0setEditedNode\0vtkMRMLNode*\0node\0"
    "role\0context\0nodeEditable\0isEntered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerAbstractModuleWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x02 /* Public */,
       3,    0,   45,    2, 0x02 /* Public */,
       4,    3,   46,    2, 0x02 /* Public */,
       4,    2,   53,    2, 0x22 /* Public | MethodCloned */,
       4,    1,   58,    2, 0x22 /* Public | MethodCloned */,
       9,    1,   61,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 5, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Bool, 0x80000000 | 5, QMetaType::QString,    6,    7,
    QMetaType::Bool, 0x80000000 | 5,    6,
    QMetaType::Double, 0x80000000 | 5,    6,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00095001,

       0        // eod
};

void qSlicerAbstractModuleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerAbstractModuleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->enter(); break;
        case 1: _t->exit(); break;
        case 2: { bool _r = _t->setEditedNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->setEditedNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->setEditedNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { double _r = _t->nodeEditable((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerAbstractModuleWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isEntered(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerAbstractModuleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerAbstractModuleWidget.data,
    qt_meta_data_qSlicerAbstractModuleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerAbstractModuleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerAbstractModuleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerAbstractModuleWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "qSlicerAbstractModuleRepresentation"))
        return static_cast< qSlicerAbstractModuleRepresentation*>(this);
    return qSlicerWidget::qt_metacast(_clname);
}

int qSlicerAbstractModuleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE