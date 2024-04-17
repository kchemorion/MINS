/****************************************************************************
** Meta object code from reading C++ file 'qSlicerScriptedLoadableModuleWidgetTest.cxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerScriptedLoadableModuleWidgetTest.cxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerScriptedLoadableModuleWidgetTester_t {
    QByteArrayData data[12];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerScriptedLoadableModuleWidgetTester_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerScriptedLoadableModuleWidgetTester_t qt_meta_stringdata_qSlicerScriptedLoadableModuleWidgetTester = {
    {
QT_MOC_LITERAL(0, 0, 41), // "qSlicerScriptedLoadableModule..."
QT_MOC_LITERAL(1, 42, 12), // "initTestCase"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 15), // "cleanupTestCase"
QT_MOC_LITERAL(4, 72, 19), // "testSetPythonSource"
QT_MOC_LITERAL(5, 92, 24), // "testSetPythonSource_data"
QT_MOC_LITERAL(6, 117, 13), // "testEnterExit"
QT_MOC_LITERAL(7, 131, 18), // "testEnterExit_data"
QT_MOC_LITERAL(8, 150, 9), // "testSetup"
QT_MOC_LITERAL(9, 160, 14), // "testSetup_data"
QT_MOC_LITERAL(10, 175, 12), // "testNodeEdit"
QT_MOC_LITERAL(11, 188, 17) // "testNodeEdit_data"

    },
    "qSlicerScriptedLoadableModuleWidgetTester\0"
    "initTestCase\0\0cleanupTestCase\0"
    "testSetPythonSource\0testSetPythonSource_data\0"
    "testEnterExit\0testEnterExit_data\0"
    "testSetup\0testSetup_data\0testNodeEdit\0"
    "testNodeEdit_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerScriptedLoadableModuleWidgetTester[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qSlicerScriptedLoadableModuleWidgetTester::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerScriptedLoadableModuleWidgetTester *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->testSetPythonSource(); break;
        case 3: _t->testSetPythonSource_data(); break;
        case 4: _t->testEnterExit(); break;
        case 5: _t->testEnterExit_data(); break;
        case 6: _t->testSetup(); break;
        case 7: _t->testSetup_data(); break;
        case 8: _t->testNodeEdit(); break;
        case 9: _t->testNodeEdit_data(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject qSlicerScriptedLoadableModuleWidgetTester::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerScriptedLoadableModuleWidgetTester.data,
    qt_meta_data_qSlicerScriptedLoadableModuleWidgetTester,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerScriptedLoadableModuleWidgetTester::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerScriptedLoadableModuleWidgetTester::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerScriptedLoadableModuleWidgetTester.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerScriptedLoadableModuleWidgetTester::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
