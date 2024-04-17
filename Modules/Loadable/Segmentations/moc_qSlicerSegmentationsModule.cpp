/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSegmentationsModule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/Segmentations/qSlicerSegmentationsModule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSegmentationsModule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSegmentationsModule_t {
    QByteArrayData data[8];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSegmentationsModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSegmentationsModule_t qt_meta_stringdata_qSlicerSegmentationsModule = {
    {
QT_MOC_LITERAL(0, 0, 26), // "qSlicerSegmentationsModule"
QT_MOC_LITERAL(1, 27, 12), // "setMRMLScene"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(4, 55, 5), // "scene"
QT_MOC_LITERAL(5, 61, 11), // "onNodeAdded"
QT_MOC_LITERAL(6, 73, 10), // "vtkObject*"
QT_MOC_LITERAL(7, 84, 10) // "nodeObject"

    },
    "qSlicerSegmentationsModule\0setMRMLScene\0"
    "\0vtkMRMLScene*\0scene\0onNodeAdded\0"
    "vtkObject*\0nodeObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSegmentationsModule[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       5,    2,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    4,    7,

       0        // eod
};

void qSlicerSegmentationsModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSegmentationsModule *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 1: _t->onNodeAdded((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSegmentationsModule::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerLoadableModule::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSegmentationsModule.data,
    qt_meta_data_qSlicerSegmentationsModule,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSegmentationsModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSegmentationsModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSegmentationsModule.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.slicer.modules.loadable.qSlicerLoadableModule/1.0"))
        return static_cast< qSlicerLoadableModule*>(this);
    return qSlicerLoadableModule::qt_metacast(_clname);
}

int qSlicerSegmentationsModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerLoadableModule::qt_metacall(_c, _id, _a);
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

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x35,  'o',  'r',  'g',  '.',  's', 
    'l',  'i',  'c',  'e',  'r',  '.',  'm',  'o', 
    'd',  'u',  'l',  'e',  's',  '.',  'l',  'o', 
    'a',  'd',  'a',  'b',  'l',  'e',  '.',  'q', 
    'S',  'l',  'i',  'c',  'e',  'r',  'L',  'o', 
    'a',  'd',  'a',  'b',  'l',  'e',  'M',  'o', 
    'd',  'u',  'l',  'e',  '/',  '1',  '.',  '0', 
    // "className"
    0x03,  0x78,  0x1a,  'q',  'S',  'l',  'i',  'c', 
    'e',  'r',  'S',  'e',  'g',  'm',  'e',  'n', 
    't',  'a',  't',  'i',  'o',  'n',  's',  'M', 
    'o',  'd',  'u',  'l',  'e', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(qSlicerSegmentationsModule, qSlicerSegmentationsModule)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
