/****************************************************************************
** Meta object code from reading C++ file 'qSlicerDiffusionTensorVolumeDisplayWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Volumes/Widgets/qSlicerDiffusionTensorVolumeDisplayWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerDiffusionTensorVolumeDisplayWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerDiffusionTensorVolumeDisplayWidget_t {
    QByteArrayData data[15];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerDiffusionTensorVolumeDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerDiffusionTensorVolumeDisplayWidget_t qt_meta_stringdata_qSlicerDiffusionTensorVolumeDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 41), // "qSlicerDiffusionTensorVolumeD..."
QT_MOC_LITERAL(1, 42, 17), // "setMRMLVolumeNode"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 33), // "vtkMRMLDiffusionTensorVolumeN..."
QT_MOC_LITERAL(4, 95, 10), // "volumeNode"
QT_MOC_LITERAL(5, 106, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 119, 4), // "node"
QT_MOC_LITERAL(7, 124, 24), // "setVolumeScalarInvariant"
QT_MOC_LITERAL(8, 149, 15), // "scalarInvariant"
QT_MOC_LITERAL(9, 165, 18), // "setRedSliceVisible"
QT_MOC_LITERAL(10, 184, 7), // "visible"
QT_MOC_LITERAL(11, 192, 21), // "setYellowSliceVisible"
QT_MOC_LITERAL(12, 214, 20), // "setGreenSliceVisible"
QT_MOC_LITERAL(13, 235, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(14, 256, 28) // "synchronizeSliceDisplayNodes"

    },
    "qSlicerDiffusionTensorVolumeDisplayWidget\0"
    "setMRMLVolumeNode\0\0vtkMRMLDiffusionTensorVolumeNode*\0"
    "volumeNode\0vtkMRMLNode*\0node\0"
    "setVolumeScalarInvariant\0scalarInvariant\0"
    "setRedSliceVisible\0visible\0"
    "setYellowSliceVisible\0setGreenSliceVisible\0"
    "updateWidgetFromMRML\0synchronizeSliceDisplayNodes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerDiffusionTensorVolumeDisplayWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       1,    1,   57,    2, 0x0a /* Public */,
       7,    1,   60,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x0a /* Public */,
      11,    1,   66,    2, 0x0a /* Public */,
      12,    1,   69,    2, 0x0a /* Public */,
      13,    0,   72,    2, 0x09 /* Protected */,
      14,    0,   73,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qSlicerDiffusionTensorVolumeDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerDiffusionTensorVolumeDisplayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLVolumeNode((*reinterpret_cast< vtkMRMLDiffusionTensorVolumeNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLVolumeNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->setVolumeScalarInvariant((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setRedSliceVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setYellowSliceVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setGreenSliceVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->updateWidgetFromMRML(); break;
        case 7: _t->synchronizeSliceDisplayNodes(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerDiffusionTensorVolumeDisplayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerDiffusionTensorVolumeDisplayWidget.data,
    qt_meta_data_qSlicerDiffusionTensorVolumeDisplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerDiffusionTensorVolumeDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerDiffusionTensorVolumeDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerDiffusionTensorVolumeDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerWidget::qt_metacast(_clname);
}

int qSlicerDiffusionTensorVolumeDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
