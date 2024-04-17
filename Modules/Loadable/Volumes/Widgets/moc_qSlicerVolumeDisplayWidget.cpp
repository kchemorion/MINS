/****************************************************************************
** Meta object code from reading C++ file 'qSlicerVolumeDisplayWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Volumes/Widgets/qSlicerVolumeDisplayWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerVolumeDisplayWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerVolumeDisplayWidget_t {
    QByteArrayData data[8];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerVolumeDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerVolumeDisplayWidget_t qt_meta_stringdata_qSlicerVolumeDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "qSlicerVolumeDisplayWidget"
QT_MOC_LITERAL(1, 27, 17), // "setMRMLVolumeNode"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 59, 4), // "node"
QT_MOC_LITERAL(5, 64, 14), // "updateFromMRML"
QT_MOC_LITERAL(6, 79, 10), // "vtkObject*"
QT_MOC_LITERAL(7, 90, 6) // "volume"

    },
    "qSlicerVolumeDisplayWidget\0setMRMLVolumeNode\0"
    "\0vtkMRMLNode*\0node\0updateFromMRML\0"
    "vtkObject*\0volume"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerVolumeDisplayWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       5,    1,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void qSlicerVolumeDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerVolumeDisplayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLVolumeNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->updateFromMRML((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerVolumeDisplayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerVolumeDisplayWidget.data,
    qt_meta_data_qSlicerVolumeDisplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerVolumeDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerVolumeDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerVolumeDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qSlicerVolumeDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
