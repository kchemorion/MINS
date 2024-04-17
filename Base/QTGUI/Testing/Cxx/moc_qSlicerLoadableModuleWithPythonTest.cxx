/****************************************************************************
** Meta object code from reading C++ file 'qSlicerLoadableModuleWithPythonTest.cxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerLoadableModuleWithPythonTest.cxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerLoadableHelloWorldModule_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerLoadableHelloWorldModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerLoadableHelloWorldModule_t qt_meta_stringdata_qSlicerLoadableHelloWorldModule = {
    {
QT_MOC_LITERAL(0, 0, 31) // "qSlicerLoadableHelloWorldModule"

    },
    "qSlicerLoadableHelloWorldModule"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerLoadableHelloWorldModule[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void qSlicerLoadableHelloWorldModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject qSlicerLoadableHelloWorldModule::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerLoadableModule::staticMetaObject>(),
    qt_meta_stringdata_qSlicerLoadableHelloWorldModule.data,
    qt_meta_data_qSlicerLoadableHelloWorldModule,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerLoadableHelloWorldModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerLoadableHelloWorldModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerLoadableHelloWorldModule.stringdata0))
        return static_cast<void*>(this);
    return qSlicerLoadableModule::qt_metacast(_clname);
}

int qSlicerLoadableHelloWorldModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerLoadableModule::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_qSlicerLoadableModuleWithPythonTester_t {
    QByteArrayData data[7];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerLoadableModuleWithPythonTester_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerLoadableModuleWithPythonTester_t qt_meta_stringdata_qSlicerLoadableModuleWithPythonTester = {
    {
QT_MOC_LITERAL(0, 0, 37), // "qSlicerLoadableModuleWithPyth..."
QT_MOC_LITERAL(1, 38, 14), // "testInitialize"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 28), // "testAddModuleToSlicerModules"
QT_MOC_LITERAL(4, 83, 33), // "testAddModuleToSlicerModules_..."
QT_MOC_LITERAL(5, 117, 36), // "testAddModuleNameToSlicerModu..."
QT_MOC_LITERAL(6, 154, 41) // "testAddModuleNameToSlicerModu..."

    },
    "qSlicerLoadableModuleWithPythonTester\0"
    "testInitialize\0\0testAddModuleToSlicerModules\0"
    "testAddModuleToSlicerModules_data\0"
    "testAddModuleNameToSlicerModuleNames\0"
    "testAddModuleNameToSlicerModuleNames_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerLoadableModuleWithPythonTester[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qSlicerLoadableModuleWithPythonTester::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerLoadableModuleWithPythonTester *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->testInitialize(); break;
        case 1: _t->testAddModuleToSlicerModules(); break;
        case 2: _t->testAddModuleToSlicerModules_data(); break;
        case 3: _t->testAddModuleNameToSlicerModuleNames(); break;
        case 4: _t->testAddModuleNameToSlicerModuleNames_data(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject qSlicerLoadableModuleWithPythonTester::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerLoadableModuleWithPythonTester.data,
    qt_meta_data_qSlicerLoadableModuleWithPythonTester,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerLoadableModuleWithPythonTester::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerLoadableModuleWithPythonTester::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerLoadableModuleWithPythonTester.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerLoadableModuleWithPythonTester::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
