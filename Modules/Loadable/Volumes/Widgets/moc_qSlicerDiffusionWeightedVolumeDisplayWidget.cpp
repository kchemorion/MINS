/****************************************************************************
** Meta object code from reading C++ file 'qSlicerDiffusionWeightedVolumeDisplayWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Volumes/Widgets/qSlicerDiffusionWeightedVolumeDisplayWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerDiffusionWeightedVolumeDisplayWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerDiffusionWeightedVolumeDisplayWidget_t {
    QByteArrayData data[11];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerDiffusionWeightedVolumeDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerDiffusionWeightedVolumeDisplayWidget_t qt_meta_stringdata_qSlicerDiffusionWeightedVolumeDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 43), // "qSlicerDiffusionWeightedVolum..."
QT_MOC_LITERAL(1, 44, 17), // "setMRMLVolumeNode"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 35), // "vtkMRMLDiffusionWeightedVolum..."
QT_MOC_LITERAL(4, 99, 10), // "volumeNode"
QT_MOC_LITERAL(5, 110, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 123, 4), // "node"
QT_MOC_LITERAL(7, 128, 15), // "setDWIComponent"
QT_MOC_LITERAL(8, 144, 9), // "component"
QT_MOC_LITERAL(9, 154, 26), // "updateWidgetFromVolumeNode"
QT_MOC_LITERAL(10, 181, 27) // "updateWidgetFromDisplayNode"

    },
    "qSlicerDiffusionWeightedVolumeDisplayWidget\0"
    "setMRMLVolumeNode\0\0"
    "vtkMRMLDiffusionWeightedVolumeNode*\0"
    "volumeNode\0vtkMRMLNode*\0node\0"
    "setDWIComponent\0component\0"
    "updateWidgetFromVolumeNode\0"
    "updateWidgetFromDisplayNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerDiffusionWeightedVolumeDisplayWidget[] = {

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
       9,    0,   48,    2, 0x09 /* Protected */,
      10,    0,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qSlicerDiffusionWeightedVolumeDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerDiffusionWeightedVolumeDisplayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLVolumeNode((*reinterpret_cast< vtkMRMLDiffusionWeightedVolumeNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLVolumeNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->setDWIComponent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateWidgetFromVolumeNode(); break;
        case 4: _t->updateWidgetFromDisplayNode(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerDiffusionWeightedVolumeDisplayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerDiffusionWeightedVolumeDisplayWidget.data,
    qt_meta_data_qSlicerDiffusionWeightedVolumeDisplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerDiffusionWeightedVolumeDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerDiffusionWeightedVolumeDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerDiffusionWeightedVolumeDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerWidget::qt_metacast(_clname);
}

int qSlicerDiffusionWeightedVolumeDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
