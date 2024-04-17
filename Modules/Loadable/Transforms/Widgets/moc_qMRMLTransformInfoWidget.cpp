/****************************************************************************
** Meta object code from reading C++ file 'qMRMLTransformInfoWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Transforms/Widgets/qMRMLTransformInfoWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLTransformInfoWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLTransformInfoWidget_t {
    QByteArrayData data[18];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLTransformInfoWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLTransformInfoWidget_t qt_meta_stringdata_qMRMLTransformInfoWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "qMRMLTransformInfoWidget"
QT_MOC_LITERAL(1, 25, 20), // "setMRMLTransformNode"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 21), // "vtkMRMLTransformNode*"
QT_MOC_LITERAL(4, 69, 13), // "transformNode"
QT_MOC_LITERAL(5, 83, 12), // "setMRMLScene"
QT_MOC_LITERAL(6, 96, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(7, 110, 5), // "scene"
QT_MOC_LITERAL(8, 116, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(9, 129, 4), // "node"
QT_MOC_LITERAL(10, 134, 12), // "processEvent"
QT_MOC_LITERAL(11, 147, 10), // "vtkObject*"
QT_MOC_LITERAL(12, 158, 6), // "sender"
QT_MOC_LITERAL(13, 165, 8), // "callData"
QT_MOC_LITERAL(14, 174, 7), // "eventId"
QT_MOC_LITERAL(15, 182, 10), // "clientData"
QT_MOC_LITERAL(16, 193, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(17, 214, 36) // "updateTransformVectorDisplayF..."

    },
    "qMRMLTransformInfoWidget\0setMRMLTransformNode\0"
    "\0vtkMRMLTransformNode*\0transformNode\0"
    "setMRMLScene\0vtkMRMLScene*\0scene\0"
    "vtkMRMLNode*\0node\0processEvent\0"
    "vtkObject*\0sender\0callData\0eventId\0"
    "clientData\0updateWidgetFromMRML\0"
    "updateTransformVectorDisplayFromMRML"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLTransformInfoWidget[] = {

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
       5,    1,   47,    2, 0x0a /* Public */,
       1,    1,   50,    2, 0x0a /* Public */,
      10,    4,   53,    2, 0x0a /* Public */,
      16,    0,   62,    2, 0x09 /* Protected */,
      17,    0,   63,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::VoidStar, QMetaType::ULong, QMetaType::VoidStar,   12,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qMRMLTransformInfoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLTransformInfoWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLTransformNode((*reinterpret_cast< vtkMRMLTransformNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 2: _t->setMRMLTransformNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->processEvent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])),(*reinterpret_cast< ulong(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 4: _t->updateWidgetFromMRML(); break;
        case 5: _t->updateTransformVectorDisplayFromMRML(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLTransformInfoWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLTransformInfoWidget.data,
    qt_meta_data_qMRMLTransformInfoWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLTransformInfoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLTransformInfoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLTransformInfoWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLTransformInfoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
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
