/****************************************************************************
** Meta object code from reading C++ file 'qSlicerCamerasModuleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/Cameras/qSlicerCamerasModuleWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerCamerasModuleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerCamerasModuleWidget_t {
    QByteArrayData data[10];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerCamerasModuleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerCamerasModuleWidget_t qt_meta_stringdata_qSlicerCamerasModuleWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "qSlicerCamerasModuleWidget"
QT_MOC_LITERAL(1, 27, 12), // "setMRMLScene"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(4, 55, 24), // "onCurrentViewNodeChanged"
QT_MOC_LITERAL(5, 80, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 93, 22), // "setCameraToCurrentView"
QT_MOC_LITERAL(7, 116, 17), // "onCameraNodeAdded"
QT_MOC_LITERAL(8, 134, 19), // "onCameraNodeRemoved"
QT_MOC_LITERAL(9, 154, 25) // "synchronizeCameraWithView"

    },
    "qSlicerCamerasModuleWidget\0setMRMLScene\0"
    "\0vtkMRMLScene*\0onCurrentViewNodeChanged\0"
    "vtkMRMLNode*\0setCameraToCurrentView\0"
    "onCameraNodeAdded\0onCameraNodeRemoved\0"
    "synchronizeCameraWithView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerCamerasModuleWidget[] = {

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
       4,    1,   47,    2, 0x09 /* Protected */,
       6,    1,   50,    2, 0x09 /* Protected */,
       7,    1,   53,    2, 0x09 /* Protected */,
       8,    1,   56,    2, 0x09 /* Protected */,
       9,    0,   59,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,

       0        // eod
};

void qSlicerCamerasModuleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerCamerasModuleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 1: _t->onCurrentViewNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->setCameraToCurrentView((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->onCameraNodeAdded((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 4: _t->onCameraNodeRemoved((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 5: _t->synchronizeCameraWithView(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerCamerasModuleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerAbstractModuleWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerCamerasModuleWidget.data,
    qt_meta_data_qSlicerCamerasModuleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerCamerasModuleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerCamerasModuleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerCamerasModuleWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerAbstractModuleWidget::qt_metacast(_clname);
}

int qSlicerCamerasModuleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerAbstractModuleWidget::qt_metacall(_c, _id, _a);
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
