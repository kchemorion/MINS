/****************************************************************************
** Meta object code from reading C++ file 'qSlicerModuleFactoryManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTCore/qSlicerModuleFactoryManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerModuleFactoryManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerModuleFactoryManager_t {
    QByteArrayData data[23];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerModuleFactoryManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerModuleFactoryManager_t qt_meta_stringdata_qSlicerModuleFactoryManager = {
    {
QT_MOC_LITERAL(0, 0, 27), // "qSlicerModuleFactoryManager"
QT_MOC_LITERAL(1, 28, 13), // "modulesLoaded"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 12), // "modulesNames"
QT_MOC_LITERAL(4, 56, 12), // "moduleLoaded"
QT_MOC_LITERAL(5, 69, 10), // "moduleName"
QT_MOC_LITERAL(6, 80, 24), // "modulesAboutToBeUnloaded"
QT_MOC_LITERAL(7, 105, 23), // "moduleAboutToBeUnloaded"
QT_MOC_LITERAL(8, 129, 15), // "modulesUnloaded"
QT_MOC_LITERAL(9, 145, 14), // "moduleUnloaded"
QT_MOC_LITERAL(10, 160, 16), // "mrmlSceneChanged"
QT_MOC_LITERAL(11, 177, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(12, 191, 8), // "newScene"
QT_MOC_LITERAL(13, 200, 12), // "setMRMLScene"
QT_MOC_LITERAL(14, 213, 9), // "mrmlScene"
QT_MOC_LITERAL(15, 223, 11), // "loadModules"
QT_MOC_LITERAL(16, 235, 17), // "loadedModuleNames"
QT_MOC_LITERAL(17, 253, 13), // "unloadModules"
QT_MOC_LITERAL(18, 267, 8), // "isLoaded"
QT_MOC_LITERAL(19, 276, 4), // "name"
QT_MOC_LITERAL(20, 281, 12), // "loadedModule"
QT_MOC_LITERAL(21, 294, 26), // "qSlicerAbstractCoreModule*"
QT_MOC_LITERAL(22, 321, 7) // "modules"

    },
    "qSlicerModuleFactoryManager\0modulesLoaded\0"
    "\0modulesNames\0moduleLoaded\0moduleName\0"
    "modulesAboutToBeUnloaded\0"
    "moduleAboutToBeUnloaded\0modulesUnloaded\0"
    "moduleUnloaded\0mrmlSceneChanged\0"
    "vtkMRMLScene*\0newScene\0setMRMLScene\0"
    "mrmlScene\0loadModules\0loadedModuleNames\0"
    "unloadModules\0isLoaded\0name\0loadedModule\0"
    "qSlicerAbstractCoreModule*\0modules"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerModuleFactoryManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       6,    1,   90,    2, 0x06 /* Public */,
       7,    1,   93,    2, 0x06 /* Public */,
       8,    1,   96,    2, 0x06 /* Public */,
       9,    1,   99,    2, 0x06 /* Public */,
      10,    1,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  105,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      15,    0,  108,    2, 0x02 /* Public */,
      16,    0,  109,    2, 0x02 /* Public */,
      17,    0,  110,    2, 0x02 /* Public */,
      18,    1,  111,    2, 0x02 /* Public */,
      20,    1,  114,    2, 0x02 /* Public */,
      15,    1,  117,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   14,

 // methods: parameters
    QMetaType::Int,
    QMetaType::QStringList,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   19,
    0x80000000 | 21, QMetaType::QString,   19,
    QMetaType::Bool, QMetaType::QStringList,   22,

       0        // eod
};

void qSlicerModuleFactoryManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerModuleFactoryManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->modulesLoaded((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->moduleLoaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->modulesAboutToBeUnloaded((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->moduleAboutToBeUnloaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->modulesUnloaded((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->moduleUnloaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->mrmlSceneChanged((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 7: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 8: { int _r = _t->loadModules();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: { QStringList _r = _t->loadedModuleNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->unloadModules(); break;
        case 11: { bool _r = _t->isLoaded((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { qSlicerAbstractCoreModule* _r = _t->loadedModule((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qSlicerAbstractCoreModule**>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->loadModules((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qSlicerModuleFactoryManager::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerModuleFactoryManager::modulesLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qSlicerModuleFactoryManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerModuleFactoryManager::moduleLoaded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qSlicerModuleFactoryManager::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerModuleFactoryManager::modulesAboutToBeUnloaded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (qSlicerModuleFactoryManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerModuleFactoryManager::moduleAboutToBeUnloaded)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (qSlicerModuleFactoryManager::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerModuleFactoryManager::modulesUnloaded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (qSlicerModuleFactoryManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerModuleFactoryManager::moduleUnloaded)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (qSlicerModuleFactoryManager::*)(vtkMRMLScene * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerModuleFactoryManager::mrmlSceneChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerModuleFactoryManager::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerAbstractModuleFactoryManager::staticMetaObject>(),
    qt_meta_stringdata_qSlicerModuleFactoryManager.data,
    qt_meta_data_qSlicerModuleFactoryManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerModuleFactoryManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerModuleFactoryManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerModuleFactoryManager.stringdata0))
        return static_cast<void*>(this);
    return qSlicerAbstractModuleFactoryManager::qt_metacast(_clname);
}

int qSlicerModuleFactoryManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerAbstractModuleFactoryManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void qSlicerModuleFactoryManager::modulesLoaded(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qSlicerModuleFactoryManager::moduleLoaded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qSlicerModuleFactoryManager::modulesAboutToBeUnloaded(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qSlicerModuleFactoryManager::moduleAboutToBeUnloaded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void qSlicerModuleFactoryManager::modulesUnloaded(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void qSlicerModuleFactoryManager::moduleUnloaded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void qSlicerModuleFactoryManager::mrmlSceneChanged(vtkMRMLScene * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
