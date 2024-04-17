/****************************************************************************
** Meta object code from reading C++ file 'qSlicerMouseModeToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerMouseModeToolBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerMouseModeToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerMouseModeToolBar_t {
    QByteArrayData data[21];
    char stringdata0[362];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerMouseModeToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerMouseModeToolBar_t qt_meta_stringdata_qSlicerMouseModeToolBar = {
    {
QT_MOC_LITERAL(0, 0, 23), // "qSlicerMouseModeToolBar"
QT_MOC_LITERAL(1, 24, 19), // "setApplicationLogic"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 26), // "vtkSlicerApplicationLogic*"
QT_MOC_LITERAL(4, 72, 5), // "logic"
QT_MOC_LITERAL(5, 78, 12), // "setMRMLScene"
QT_MOC_LITERAL(6, 91, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(7, 105, 8), // "newScene"
QT_MOC_LITERAL(8, 114, 25), // "switchToViewTransformMode"
QT_MOC_LITERAL(9, 140, 14), // "changeCursorTo"
QT_MOC_LITERAL(10, 155, 6), // "cursor"
QT_MOC_LITERAL(11, 162, 15), // "switchPlaceMode"
QT_MOC_LITERAL(12, 178, 14), // "setPersistence"
QT_MOC_LITERAL(13, 193, 10), // "persistent"
QT_MOC_LITERAL(14, 204, 18), // "setInteractionNode"
QT_MOC_LITERAL(15, 223, 23), // "vtkMRMLInteractionNode*"
QT_MOC_LITERAL(16, 247, 15), // "interactionNode"
QT_MOC_LITERAL(17, 263, 30), // "interactionModeActionTriggered"
QT_MOC_LITERAL(18, 294, 24), // "setAdjustWindowLevelMode"
QT_MOC_LITERAL(19, 319, 20), // "toggleMarkupsToolBar"
QT_MOC_LITERAL(20, 340, 21) // "defaultPlaceClassName"

    },
    "qSlicerMouseModeToolBar\0setApplicationLogic\0"
    "\0vtkSlicerApplicationLogic*\0logic\0"
    "setMRMLScene\0vtkMRMLScene*\0newScene\0"
    "switchToViewTransformMode\0changeCursorTo\0"
    "cursor\0switchPlaceMode\0setPersistence\0"
    "persistent\0setInteractionNode\0"
    "vtkMRMLInteractionNode*\0interactionNode\0"
    "interactionModeActionTriggered\0"
    "setAdjustWindowLevelMode\0toggleMarkupsToolBar\0"
    "defaultPlaceClassName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerMouseModeToolBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       1,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       5,    1,   72,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x0a /* Public */,
      12,    1,   80,    2, 0x0a /* Public */,
      14,    1,   83,    2, 0x0a /* Public */,
      17,    1,   86,    2, 0x0a /* Public */,
      18,    1,   89,    2, 0x0a /* Public */,
      19,    0,   92,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      16,    0,   93,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QCursor,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 15,

 // properties: name, type, flags
      20, QMetaType::QString, 0x00095103,

       0        // eod
};

void qSlicerMouseModeToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerMouseModeToolBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setApplicationLogic((*reinterpret_cast< vtkSlicerApplicationLogic*(*)>(_a[1]))); break;
        case 1: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 2: _t->switchToViewTransformMode(); break;
        case 3: _t->changeCursorTo((*reinterpret_cast< QCursor(*)>(_a[1]))); break;
        case 4: _t->switchPlaceMode(); break;
        case 5: _t->setPersistence((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setInteractionNode((*reinterpret_cast< vtkMRMLInteractionNode*(*)>(_a[1]))); break;
        case 7: _t->interactionModeActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setAdjustWindowLevelMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->toggleMarkupsToolBar(); break;
        case 10: { vtkMRMLInteractionNode* _r = _t->interactionNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLInteractionNode**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerMouseModeToolBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->defaultPlaceClassName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerMouseModeToolBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDefaultPlaceClassName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerMouseModeToolBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolBar::staticMetaObject>(),
    qt_meta_stringdata_qSlicerMouseModeToolBar.data,
    qt_meta_data_qSlicerMouseModeToolBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerMouseModeToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerMouseModeToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerMouseModeToolBar.stringdata0))
        return static_cast<void*>(this);
    return QToolBar::qt_metacast(_clname);
}

int qSlicerMouseModeToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
