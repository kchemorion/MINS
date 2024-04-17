/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSubjectHierarchyModule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/SubjectHierarchy/qSlicerSubjectHierarchyModule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSubjectHierarchyModule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSubjectHierarchyModule_t {
    QByteArrayData data[3];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSubjectHierarchyModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSubjectHierarchyModule_t qt_meta_stringdata_qSlicerSubjectHierarchyModule = {
    {
QT_MOC_LITERAL(0, 0, 29), // "qSlicerSubjectHierarchyModule"
QT_MOC_LITERAL(1, 30, 15), // "onLogicModified"
QT_MOC_LITERAL(2, 46, 0) // ""

    },
    "qSlicerSubjectHierarchyModule\0"
    "onLogicModified\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSubjectHierarchyModule[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void qSlicerSubjectHierarchyModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSubjectHierarchyModule *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onLogicModified(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSubjectHierarchyModule::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerLoadableModule::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSubjectHierarchyModule.data,
    qt_meta_data_qSlicerSubjectHierarchyModule,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSubjectHierarchyModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSubjectHierarchyModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSubjectHierarchyModule.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.slicer.modules.loadable.qSlicerLoadableModule/1.0"))
        return static_cast< qSlicerLoadableModule*>(this);
    return qSlicerLoadableModule::qt_metacast(_clname);
}

int qSlicerSubjectHierarchyModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerLoadableModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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
    0x03,  0x78,  0x1d,  'q',  'S',  'l',  'i',  'c', 
    'e',  'r',  'S',  'u',  'b',  'j',  'e',  'c', 
    't',  'H',  'i',  'e',  'r',  'a',  'r',  'c', 
    'h',  'y',  'M',  'o',  'd',  'u',  'l',  'e', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(qSlicerSubjectHierarchyModule, qSlicerSubjectHierarchyModule)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
