/****************************************************************************
** Meta object code from reading C++ file 'qSlicerLayoutManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerLayoutManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerLayoutManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerLayoutManager_t {
    QByteArrayData data[6];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerLayoutManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerLayoutManager_t qt_meta_stringdata_qSlicerLayoutManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "qSlicerLayoutManager"
QT_MOC_LITERAL(1, 21, 12), // "selectModule"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10), // "moduleName"
QT_MOC_LITERAL(4, 46, 38), // "setScriptedDisplayableManager..."
QT_MOC_LITERAL(5, 85, 35) // "scriptedDisplayableManagerDir..."

    },
    "qSlicerLayoutManager\0selectModule\0\0"
    "moduleName\0setScriptedDisplayableManagerDirectory\0"
    "scriptedDisplayableManagerDirectory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerLayoutManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void qSlicerLayoutManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerLayoutManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectModule((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setScriptedDisplayableManagerDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qSlicerLayoutManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerLayoutManager::selectModule)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerLayoutManager::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLLayoutManager::staticMetaObject>(),
    qt_meta_stringdata_qSlicerLayoutManager.data,
    qt_meta_data_qSlicerLayoutManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerLayoutManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerLayoutManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerLayoutManager.stringdata0))
        return static_cast<void*>(this);
    return qMRMLLayoutManager::qt_metacast(_clname);
}

int qSlicerLayoutManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLLayoutManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void qSlicerLayoutManager::selectModule(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
