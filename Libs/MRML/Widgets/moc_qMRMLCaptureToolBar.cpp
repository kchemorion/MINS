/****************************************************************************
** Meta object code from reading C++ file 'qMRMLCaptureToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLCaptureToolBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLCaptureToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLCaptureToolBar_t {
    QByteArrayData data[14];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLCaptureToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLCaptureToolBar_t qt_meta_stringdata_qMRMLCaptureToolBar = {
    {
QT_MOC_LITERAL(0, 0, 19), // "qMRMLCaptureToolBar"
QT_MOC_LITERAL(1, 20, 23), // "screenshotButtonClicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 22), // "sceneViewButtonClicked"
QT_MOC_LITERAL(4, 68, 16), // "mrmlSceneChanged"
QT_MOC_LITERAL(5, 85, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(6, 99, 12), // "setMRMLScene"
QT_MOC_LITERAL(7, 112, 8), // "newScene"
QT_MOC_LITERAL(8, 121, 27), // "setActiveMRMLThreeDViewNode"
QT_MOC_LITERAL(9, 149, 16), // "vtkMRMLViewNode*"
QT_MOC_LITERAL(10, 166, 27), // "newActiveMRMLThreeDViewNode"
QT_MOC_LITERAL(11, 194, 16), // "setPopupsTimeOut"
QT_MOC_LITERAL(12, 211, 4), // "flag"
QT_MOC_LITERAL(13, 216, 13) // "popupsTimeOut"

    },
    "qMRMLCaptureToolBar\0screenshotButtonClicked\0"
    "\0sceneViewButtonClicked\0mrmlSceneChanged\0"
    "vtkMRMLScene*\0setMRMLScene\0newScene\0"
    "setActiveMRMLThreeDViewNode\0"
    "vtkMRMLViewNode*\0newActiveMRMLThreeDViewNode\0"
    "setPopupsTimeOut\0flag\0popupsTimeOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLCaptureToolBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   49,    2, 0x0a /* Public */,
       8,    1,   52,    2, 0x0a /* Public */,
      11,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qMRMLCaptureToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLCaptureToolBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->screenshotButtonClicked(); break;
        case 1: _t->sceneViewButtonClicked(); break;
        case 2: _t->mrmlSceneChanged((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 3: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 4: _t->setActiveMRMLThreeDViewNode((*reinterpret_cast< vtkMRMLViewNode*(*)>(_a[1]))); break;
        case 5: _t->setPopupsTimeOut((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLCaptureToolBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLCaptureToolBar::screenshotButtonClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLCaptureToolBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLCaptureToolBar::sceneViewButtonClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qMRMLCaptureToolBar::*)(vtkMRMLScene * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLCaptureToolBar::mrmlSceneChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLCaptureToolBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->popupsTimeOut(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLCaptureToolBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPopupsTimeOut(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLCaptureToolBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolBar::staticMetaObject>(),
    qt_meta_stringdata_qMRMLCaptureToolBar.data,
    qt_meta_data_qMRMLCaptureToolBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLCaptureToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLCaptureToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLCaptureToolBar.stringdata0))
        return static_cast<void*>(this);
    return QToolBar::qt_metacast(_clname);
}

int qMRMLCaptureToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void qMRMLCaptureToolBar::screenshotButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void qMRMLCaptureToolBar::sceneViewButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void qMRMLCaptureToolBar::mrmlSceneChanged(vtkMRMLScene * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
