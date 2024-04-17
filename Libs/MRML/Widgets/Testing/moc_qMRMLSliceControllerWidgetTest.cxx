/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSliceControllerWidgetTest.cxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSliceControllerWidgetTest.cxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSliceControllerWidgetTester_t {
    QByteArrayData data[14];
    char stringdata0[303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSliceControllerWidgetTester_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSliceControllerWidgetTester_t qt_meta_stringdata_qMRMLSliceControllerWidgetTester = {
    {
QT_MOC_LITERAL(0, 0, 32), // "qMRMLSliceControllerWidgetTester"
QT_MOC_LITERAL(1, 33, 4), // "init"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "cleanup"
QT_MOC_LITERAL(4, 47, 12), // "testDefaults"
QT_MOC_LITERAL(5, 60, 20), // "testSetMRMLSliceNode"
QT_MOC_LITERAL(6, 81, 23), // "testSetBackgroundVolume"
QT_MOC_LITERAL(7, 105, 28), // "testSetBackgroundVolume_data"
QT_MOC_LITERAL(8, 134, 23), // "testSetForegroundVolume"
QT_MOC_LITERAL(9, 158, 28), // "testSetForegroundVolume_data"
QT_MOC_LITERAL(10, 187, 18), // "testSetLabelVolume"
QT_MOC_LITERAL(11, 206, 23), // "testSetLabelVolume_data"
QT_MOC_LITERAL(12, 230, 37), // "testSetLabelVolumeWithNoLinke..."
QT_MOC_LITERAL(13, 268, 34) // "testUpdateSliceOrientationSel..."

    },
    "qMRMLSliceControllerWidgetTester\0init\0"
    "\0cleanup\0testDefaults\0testSetMRMLSliceNode\0"
    "testSetBackgroundVolume\0"
    "testSetBackgroundVolume_data\0"
    "testSetForegroundVolume\0"
    "testSetForegroundVolume_data\0"
    "testSetLabelVolume\0testSetLabelVolume_data\0"
    "testSetLabelVolumeWithNoLinkedControl\0"
    "testUpdateSliceOrientationSelector"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSliceControllerWidgetTester[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qMRMLSliceControllerWidgetTester::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSliceControllerWidgetTester *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->cleanup(); break;
        case 2: _t->testDefaults(); break;
        case 3: _t->testSetMRMLSliceNode(); break;
        case 4: _t->testSetBackgroundVolume(); break;
        case 5: _t->testSetBackgroundVolume_data(); break;
        case 6: _t->testSetForegroundVolume(); break;
        case 7: _t->testSetForegroundVolume_data(); break;
        case 8: _t->testSetLabelVolume(); break;
        case 9: _t->testSetLabelVolume_data(); break;
        case 10: _t->testSetLabelVolumeWithNoLinkedControl(); break;
        case 11: _t->testUpdateSliceOrientationSelector(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSliceControllerWidgetTester::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSliceControllerWidgetTester.data,
    qt_meta_data_qMRMLSliceControllerWidgetTester,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSliceControllerWidgetTester::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSliceControllerWidgetTester::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSliceControllerWidgetTester.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qMRMLSliceControllerWidgetTester::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
