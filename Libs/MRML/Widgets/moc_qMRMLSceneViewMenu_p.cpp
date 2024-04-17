/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSceneViewMenu_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLSceneViewMenu_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSceneViewMenu_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSceneViewMenuPrivate_t {
    QByteArrayData data[16];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSceneViewMenuPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSceneViewMenuPrivate_t qt_meta_stringdata_qMRMLSceneViewMenuPrivate = {
    {
QT_MOC_LITERAL(0, 0, 25), // "qMRMLSceneViewMenuPrivate"
QT_MOC_LITERAL(1, 26, 15), // "onMRMLNodeAdded"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 10), // "vtkObject*"
QT_MOC_LITERAL(4, 54, 9), // "mrmlScene"
QT_MOC_LITERAL(5, 64, 8), // "mrmlNode"
QT_MOC_LITERAL(6, 73, 11), // "addMenuItem"
QT_MOC_LITERAL(7, 85, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(8, 98, 13), // "sceneViewNode"
QT_MOC_LITERAL(9, 112, 17), // "onMRMLNodeRemoved"
QT_MOC_LITERAL(10, 130, 14), // "removeMenuItem"
QT_MOC_LITERAL(11, 145, 27), // "onMRMLSceneViewNodeModified"
QT_MOC_LITERAL(12, 173, 18), // "hasNoSceneViewItem"
QT_MOC_LITERAL(13, 192, 16), // "restoreSceneView"
QT_MOC_LITERAL(14, 209, 15), // "sceneViewNodeId"
QT_MOC_LITERAL(15, 225, 15) // "deleteSceneView"

    },
    "qMRMLSceneViewMenuPrivate\0onMRMLNodeAdded\0"
    "\0vtkObject*\0mrmlScene\0mrmlNode\0"
    "addMenuItem\0vtkMRMLNode*\0sceneViewNode\0"
    "onMRMLNodeRemoved\0removeMenuItem\0"
    "onMRMLSceneViewNodeModified\0"
    "hasNoSceneViewItem\0restoreSceneView\0"
    "sceneViewNodeId\0deleteSceneView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSceneViewMenuPrivate[] = {

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
       1,    2,   54,    2, 0x0a /* Public */,
       6,    1,   59,    2, 0x0a /* Public */,
       9,    2,   62,    2, 0x0a /* Public */,
      10,    1,   67,    2, 0x0a /* Public */,
      11,    1,   70,    2, 0x0a /* Public */,
      12,    0,   73,    2, 0x0a /* Public */,
      13,    1,   74,    2, 0x0a /* Public */,
      15,    1,   77,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 3,    5,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void qMRMLSceneViewMenuPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSceneViewMenuPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onMRMLNodeAdded((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        case 1: _t->addMenuItem((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->onMRMLNodeRemoved((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        case 3: _t->removeMenuItem((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 4: _t->onMRMLSceneViewNodeModified((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->hasNoSceneViewItem();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->restoreSceneView((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->deleteSceneView((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSceneViewMenuPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSceneViewMenuPrivate.data,
    qt_meta_data_qMRMLSceneViewMenuPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSceneViewMenuPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSceneViewMenuPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSceneViewMenuPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qMRMLSceneViewMenuPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
