/****************************************************************************
** Meta object code from reading C++ file 'qSlicerLabelMapVolumeDisplayWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Volumes/Widgets/qSlicerLabelMapVolumeDisplayWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerLabelMapVolumeDisplayWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerLabelMapVolumeDisplayWidget_t {
    QByteArrayData data[11];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerLabelMapVolumeDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerLabelMapVolumeDisplayWidget_t qt_meta_stringdata_qSlicerLabelMapVolumeDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qSlicerLabelMapVolumeDisplayW..."
QT_MOC_LITERAL(1, 35, 17), // "setMRMLVolumeNode"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 24), // "vtkMRMLScalarVolumeNode*"
QT_MOC_LITERAL(4, 79, 10), // "volumeNode"
QT_MOC_LITERAL(5, 90, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 103, 4), // "node"
QT_MOC_LITERAL(7, 108, 12), // "setColorNode"
QT_MOC_LITERAL(8, 121, 9), // "colorNode"
QT_MOC_LITERAL(9, 131, 29), // "setSliceIntersectionThickness"
QT_MOC_LITERAL(10, 161, 20) // "updateWidgetFromMRML"

    },
    "qSlicerLabelMapVolumeDisplayWidget\0"
    "setMRMLVolumeNode\0\0vtkMRMLScalarVolumeNode*\0"
    "volumeNode\0vtkMRMLNode*\0node\0setColorNode\0"
    "colorNode\0setSliceIntersectionThickness\0"
    "updateWidgetFromMRML"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerLabelMapVolumeDisplayWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       1,    1,   42,    2, 0x0a /* Public */,
       7,    1,   45,    2, 0x0a /* Public */,
       9,    1,   48,    2, 0x0a /* Public */,
      10,    0,   51,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    8,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void qSlicerLabelMapVolumeDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerLabelMapVolumeDisplayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLVolumeNode((*reinterpret_cast< vtkMRMLScalarVolumeNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLVolumeNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->setColorNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->setSliceIntersectionThickness((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateWidgetFromMRML(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerLabelMapVolumeDisplayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerLabelMapVolumeDisplayWidget.data,
    qt_meta_data_qSlicerLabelMapVolumeDisplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerLabelMapVolumeDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerLabelMapVolumeDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerLabelMapVolumeDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerWidget::qt_metacast(_clname);
}

int qSlicerLabelMapVolumeDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
