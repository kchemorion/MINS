/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSceneFactoryWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLSceneFactoryWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSceneFactoryWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSceneFactoryWidget_t {
    QByteArrayData data[15];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSceneFactoryWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSceneFactoryWidget_t qt_meta_stringdata_qMRMLSceneFactoryWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "qMRMLSceneFactoryWidget"
QT_MOC_LITERAL(1, 24, 16), // "mrmlSceneChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(4, 56, 5), // "scene"
QT_MOC_LITERAL(5, 62, 13), // "mrmlNodeAdded"
QT_MOC_LITERAL(6, 76, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(7, 89, 4), // "node"
QT_MOC_LITERAL(8, 94, 15), // "mrmlNodeRemoved"
QT_MOC_LITERAL(9, 110, 13), // "generateScene"
QT_MOC_LITERAL(10, 124, 11), // "deleteScene"
QT_MOC_LITERAL(11, 136, 12), // "generateNode"
QT_MOC_LITERAL(12, 149, 17), // "mrmlNodeClassName"
QT_MOC_LITERAL(13, 167, 10), // "deleteNode"
QT_MOC_LITERAL(14, 178, 10) // "mrmlNodeID"

    },
    "qMRMLSceneFactoryWidget\0mrmlSceneChanged\0"
    "\0vtkMRMLScene*\0scene\0mrmlNodeAdded\0"
    "vtkMRMLNode*\0node\0mrmlNodeRemoved\0"
    "generateScene\0deleteScene\0generateNode\0"
    "mrmlNodeClassName\0deleteNode\0mrmlNodeID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSceneFactoryWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       8,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   68,    2, 0x0a /* Public */,
      10,    0,   69,    2, 0x0a /* Public */,
      11,    1,   70,    2, 0x0a /* Public */,
      13,    1,   73,    2, 0x0a /* Public */,
      11,    0,   76,    2, 0x0a /* Public */,
      13,    0,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 6, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,
    0x80000000 | 6,
    QMetaType::Void,

       0        // eod
};

void qMRMLSceneFactoryWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSceneFactoryWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mrmlSceneChanged((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 1: _t->mrmlNodeAdded((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->mrmlNodeRemoved((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->generateScene(); break;
        case 4: _t->deleteScene(); break;
        case 5: { vtkMRMLNode* _r = _t->generateNode((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< vtkMRMLNode**>(_a[0]) = std::move(_r); }  break;
        case 6: _t->deleteNode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: { vtkMRMLNode* _r = _t->generateNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLNode**>(_a[0]) = std::move(_r); }  break;
        case 8: _t->deleteNode(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLSceneFactoryWidget::*)(vtkMRMLScene * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSceneFactoryWidget::mrmlSceneChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLSceneFactoryWidget::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSceneFactoryWidget::mrmlNodeAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qMRMLSceneFactoryWidget::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSceneFactoryWidget::mrmlNodeRemoved)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSceneFactoryWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSceneFactoryWidget.data,
    qt_meta_data_qMRMLSceneFactoryWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSceneFactoryWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSceneFactoryWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSceneFactoryWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qMRMLSceneFactoryWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void qMRMLSceneFactoryWidget::mrmlSceneChanged(vtkMRMLScene * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLSceneFactoryWidget::mrmlNodeAdded(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qMRMLSceneFactoryWidget::mrmlNodeRemoved(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
