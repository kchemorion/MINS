/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSegmentationShow3DButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Segmentations/Widgets/qMRMLSegmentationShow3DButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSegmentationShow3DButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSegmentationShow3DButton_t {
    QByteArrayData data[19];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSegmentationShow3DButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSegmentationShow3DButton_t qt_meta_stringdata_qMRMLSegmentationShow3DButton = {
    {
QT_MOC_LITERAL(0, 0, 29), // "qMRMLSegmentationShow3DButton"
QT_MOC_LITERAL(1, 30, 19), // "setSegmentationNode"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 24), // "vtkMRMLSegmentationNode*"
QT_MOC_LITERAL(4, 76, 4), // "node"
QT_MOC_LITERAL(5, 81, 9), // "setLocked"
QT_MOC_LITERAL(6, 91, 9), // "onToggled"
QT_MOC_LITERAL(7, 101, 7), // "toggled"
QT_MOC_LITERAL(8, 109, 31), // "onEnableSurfaceSmoothingToggled"
QT_MOC_LITERAL(9, 141, 16), // "smoothingEnabled"
QT_MOC_LITERAL(10, 158, 26), // "onEnableSurfaceNetsToggled"
QT_MOC_LITERAL(11, 185, 18), // "surfaceNetsEnabled"
QT_MOC_LITERAL(12, 204, 35), // "onEnableSurfaceNetsSmoothingT..."
QT_MOC_LITERAL(13, 240, 27), // "surfaceNetsSmoothingEnabled"
QT_MOC_LITERAL(14, 268, 31), // "onSurfaceSmoothingFactorChanged"
QT_MOC_LITERAL(15, 300, 18), // "newSmoothingFactor"
QT_MOC_LITERAL(16, 319, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(17, 340, 16), // "segmentationNode"
QT_MOC_LITERAL(18, 357, 6) // "locked"

    },
    "qMRMLSegmentationShow3DButton\0"
    "setSegmentationNode\0\0vtkMRMLSegmentationNode*\0"
    "node\0setLocked\0onToggled\0toggled\0"
    "onEnableSurfaceSmoothingToggled\0"
    "smoothingEnabled\0onEnableSurfaceNetsToggled\0"
    "surfaceNetsEnabled\0"
    "onEnableSurfaceNetsSmoothingToggled\0"
    "surfaceNetsSmoothingEnabled\0"
    "onSurfaceSmoothingFactorChanged\0"
    "newSmoothingFactor\0updateWidgetFromMRML\0"
    "segmentationNode\0locked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSegmentationShow3DButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       1,   88, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       5,    1,   67,    2, 0x0a /* Public */,
       6,    1,   70,    2, 0x09 /* Protected */,
       6,    0,   73,    2, 0x29 /* Protected | MethodCloned */,
       8,    1,   74,    2, 0x09 /* Protected */,
      10,    1,   77,    2, 0x09 /* Protected */,
      12,    1,   80,    2, 0x09 /* Protected */,
      14,    1,   83,    2, 0x09 /* Protected */,
      16,    0,   86,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      17,    0,   87,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 3,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qMRMLSegmentationShow3DButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSegmentationShow3DButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setSegmentationNode((*reinterpret_cast< vtkMRMLSegmentationNode*(*)>(_a[1]))); break;
        case 1: _t->setLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onToggled(); break;
        case 4: _t->onEnableSurfaceSmoothingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onEnableSurfaceNetsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onEnableSurfaceNetsSmoothingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onSurfaceSmoothingFactorChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->updateWidgetFromMRML(); break;
        case 9: { vtkMRMLSegmentationNode* _r = _t->segmentationNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLSegmentationNode**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSegmentationShow3DButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->locked(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSegmentationShow3DButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocked(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSegmentationShow3DButton::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkMenuButton::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSegmentationShow3DButton.data,
    qt_meta_data_qMRMLSegmentationShow3DButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSegmentationShow3DButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSegmentationShow3DButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSegmentationShow3DButton.stringdata0))
        return static_cast<void*>(this);
    return ctkMenuButton::qt_metacast(_clname);
}

int qMRMLSegmentationShow3DButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkMenuButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
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
