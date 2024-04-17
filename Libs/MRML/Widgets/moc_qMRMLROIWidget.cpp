/****************************************************************************
** Meta object code from reading C++ file 'qMRMLROIWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLROIWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLROIWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLROIWidget_t {
    QByteArrayData data[12];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLROIWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLROIWidget_t qt_meta_stringdata_qMRMLROIWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "qMRMLROIWidget"
QT_MOC_LITERAL(1, 15, 14), // "setMRMLROINode"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "vtkMRMLROINode*"
QT_MOC_LITERAL(4, 47, 4), // "node"
QT_MOC_LITERAL(5, 52, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 65, 21), // "setDisplayClippingBox"
QT_MOC_LITERAL(7, 87, 7), // "visible"
QT_MOC_LITERAL(8, 95, 18), // "setInteractiveMode"
QT_MOC_LITERAL(9, 114, 11), // "interactive"
QT_MOC_LITERAL(10, 126, 18), // "onMRMLNodeModified"
QT_MOC_LITERAL(11, 145, 9) // "updateROI"

    },
    "qMRMLROIWidget\0setMRMLROINode\0\0"
    "vtkMRMLROINode*\0node\0vtkMRMLNode*\0"
    "setDisplayClippingBox\0visible\0"
    "setInteractiveMode\0interactive\0"
    "onMRMLNodeModified\0updateROI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLROIWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       1,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x0a /* Public */,
       8,    1,   53,    2, 0x0a /* Public */,
      10,    0,   56,    2, 0x09 /* Protected */,
      11,    0,   57,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qMRMLROIWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLROIWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLROINode((*reinterpret_cast< vtkMRMLROINode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLROINode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->setDisplayClippingBox((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setInteractiveMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onMRMLNodeModified(); break;
        case 5: _t->updateROI(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLROIWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLROIWidget.data,
    qt_meta_data_qMRMLROIWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLROIWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLROIWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLROIWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qMRMLROIWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
