/****************************************************************************
** Meta object code from reading C++ file 'qSlicerViewersToolBar_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerViewersToolBar_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerViewersToolBar_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerViewersToolBarPrivate_t {
    QByteArrayData data[18];
    char stringdata0[482];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerViewersToolBarPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerViewersToolBarPrivate_t qt_meta_stringdata_qSlicerViewersToolBarPrivate = {
    {
QT_MOC_LITERAL(0, 0, 28), // "qSlicerViewersToolBarPrivate"
QT_MOC_LITERAL(1, 29, 21), // "OnMRMLSceneStartClose"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 20), // "OnMRMLSceneEndImport"
QT_MOC_LITERAL(4, 73, 19), // "OnMRMLSceneEndClose"
QT_MOC_LITERAL(5, 93, 31), // "onCrosshairNodeModeChangedEvent"
QT_MOC_LITERAL(6, 125, 30), // "onSliceDisplayNodeChangedEvent"
QT_MOC_LITERAL(7, 156, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(8, 177, 16), // "setCrosshairMode"
QT_MOC_LITERAL(9, 194, 19), // "setCrosshairEnabled"
QT_MOC_LITERAL(10, 214, 21), // "setCrosshairThickness"
QT_MOC_LITERAL(11, 236, 26), // "setCrosshairJumpSlicesMode"
QT_MOC_LITERAL(12, 263, 37), // "setIntersectingSlicesIntersec..."
QT_MOC_LITERAL(13, 301, 31), // "setIntersectingSlicesVisibility"
QT_MOC_LITERAL(14, 333, 38), // "setIntersectingSlicesLineThic..."
QT_MOC_LITERAL(15, 372, 32), // "setIntersectingSlicesInteractive"
QT_MOC_LITERAL(16, 405, 36), // "setIntersectingSlicesRotation..."
QT_MOC_LITERAL(17, 442, 39) // "setIntersectingSlicesTranslat..."

    },
    "qSlicerViewersToolBarPrivate\0"
    "OnMRMLSceneStartClose\0\0OnMRMLSceneEndImport\0"
    "OnMRMLSceneEndClose\0onCrosshairNodeModeChangedEvent\0"
    "onSliceDisplayNodeChangedEvent\0"
    "updateWidgetFromMRML\0setCrosshairMode\0"
    "setCrosshairEnabled\0setCrosshairThickness\0"
    "setCrosshairJumpSlicesMode\0"
    "setIntersectingSlicesIntersectionMode\0"
    "setIntersectingSlicesVisibility\0"
    "setIntersectingSlicesLineThicknessMode\0"
    "setIntersectingSlicesInteractive\0"
    "setIntersectingSlicesRotationEnabled\0"
    "setIntersectingSlicesTranslationEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerViewersToolBarPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    0,   95,    2, 0x0a /* Public */,
       4,    0,   96,    2, 0x0a /* Public */,
       5,    0,   97,    2, 0x0a /* Public */,
       6,    0,   98,    2, 0x0a /* Public */,
       7,    0,   99,    2, 0x0a /* Public */,
       8,    1,  100,    2, 0x0a /* Public */,
       9,    1,  103,    2, 0x0a /* Public */,
      10,    1,  106,    2, 0x0a /* Public */,
      11,    1,  109,    2, 0x0a /* Public */,
      12,    1,  112,    2, 0x0a /* Public */,
      13,    1,  115,    2, 0x0a /* Public */,
      14,    1,  118,    2, 0x0a /* Public */,
      15,    1,  121,    2, 0x0a /* Public */,
      16,    1,  124,    2, 0x0a /* Public */,
      17,    1,  127,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void qSlicerViewersToolBarPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerViewersToolBarPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->OnMRMLSceneStartClose(); break;
        case 1: _t->OnMRMLSceneEndImport(); break;
        case 2: _t->OnMRMLSceneEndClose(); break;
        case 3: _t->onCrosshairNodeModeChangedEvent(); break;
        case 4: _t->onSliceDisplayNodeChangedEvent(); break;
        case 5: _t->updateWidgetFromMRML(); break;
        case 6: _t->setCrosshairMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setCrosshairEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setCrosshairThickness((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setCrosshairJumpSlicesMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setIntersectingSlicesIntersectionMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setIntersectingSlicesVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setIntersectingSlicesLineThicknessMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setIntersectingSlicesInteractive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setIntersectingSlicesRotationEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setIntersectingSlicesTranslationEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerViewersToolBarPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerViewersToolBarPrivate.data,
    qt_meta_data_qSlicerViewersToolBarPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerViewersToolBarPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerViewersToolBarPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerViewersToolBarPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerViewersToolBarPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
