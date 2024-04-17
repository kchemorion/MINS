/****************************************************************************
** Meta object code from reading C++ file 'qSlicerModuleManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTCore/qSlicerModuleManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerModuleManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerModuleManager_t {
    QByteArrayData data[10];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerModuleManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerModuleManager_t qt_meta_stringdata_qSlicerModuleManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "qSlicerModuleManager"
QT_MOC_LITERAL(1, 21, 12), // "moduleLoaded"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "module"
QT_MOC_LITERAL(4, 42, 23), // "moduleAboutToBeUnloaded"
QT_MOC_LITERAL(5, 66, 14), // "factoryManager"
QT_MOC_LITERAL(6, 81, 28), // "qSlicerModuleFactoryManager*"
QT_MOC_LITERAL(7, 110, 12), // "modulesNames"
QT_MOC_LITERAL(8, 123, 26), // "qSlicerAbstractCoreModule*"
QT_MOC_LITERAL(9, 150, 4) // "name"

    },
    "qSlicerModuleManager\0moduleLoaded\0\0"
    "module\0moduleAboutToBeUnloaded\0"
    "factoryManager\0qSlicerModuleFactoryManager*\0"
    "modulesNames\0qSlicerAbstractCoreModule*\0"
    "name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerModuleManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   45,    2, 0x02 /* Public */,
       7,    0,   46,    2, 0x02 /* Public */,
       3,    1,   47,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // methods: parameters
    0x80000000 | 6,
    QMetaType::QStringList,
    0x80000000 | 8, QMetaType::QString,    9,

       0        // eod
};

void qSlicerModuleManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerModuleManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moduleLoaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->moduleAboutToBeUnloaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { qSlicerModuleFactoryManager* _r = _t->factoryManager();
            if (_a[0]) *reinterpret_cast< qSlicerModuleFactoryManager**>(_a[0]) = std::move(_r); }  break;
        case 3: { QStringList _r = _t->modulesNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 4: { qSlicerAbstractCoreModule* _r = _t->module((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerAbstractCoreModule**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qSlicerModuleManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerModuleManager::moduleLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qSlicerModuleManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerModuleManager::moduleAboutToBeUnloaded)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerModuleManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerModuleManager.data,
    qt_meta_data_qSlicerModuleManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerModuleManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerModuleManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerModuleManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerModuleManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void qSlicerModuleManager::moduleLoaded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qSlicerModuleManager::moduleAboutToBeUnloaded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
