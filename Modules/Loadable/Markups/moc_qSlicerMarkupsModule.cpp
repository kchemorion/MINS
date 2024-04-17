/****************************************************************************
** Meta object code from reading C++ file 'qSlicerMarkupsModule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/Markups/qSlicerMarkupsModule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerMarkupsModule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerMarkupsModule_t {
    QByteArrayData data[14];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerMarkupsModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerMarkupsModule_t qt_meta_stringdata_qSlicerMarkupsModule = {
    {
QT_MOC_LITERAL(0, 0, 20), // "qSlicerMarkupsModule"
QT_MOC_LITERAL(1, 21, 17), // "setToolBarVisible"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "visible"
QT_MOC_LITERAL(4, 48, 18), // "setAutoShowToolBar"
QT_MOC_LITERAL(5, 67, 8), // "autoShow"
QT_MOC_LITERAL(6, 76, 15), // "autoShowToolBar"
QT_MOC_LITERAL(7, 92, 16), // "isToolBarVisible"
QT_MOC_LITERAL(8, 109, 7), // "toolBar"
QT_MOC_LITERAL(9, 117, 20), // "qMRMLMarkupsToolBar*"
QT_MOC_LITERAL(10, 138, 11), // "showMarkups"
QT_MOC_LITERAL(11, 150, 19), // "vtkMRMLMarkupsNode*"
QT_MOC_LITERAL(12, 170, 11), // "markupsNode"
QT_MOC_LITERAL(13, 182, 14) // "toolBarVisible"

    },
    "qSlicerMarkupsModule\0setToolBarVisible\0"
    "\0visible\0setAutoShowToolBar\0autoShow\0"
    "autoShowToolBar\0isToolBarVisible\0"
    "toolBar\0qMRMLMarkupsToolBar*\0showMarkups\0"
    "vtkMRMLMarkupsNode*\0markupsNode\0"
    "toolBarVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerMarkupsModule[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   50,    2, 0x02 /* Public */,
       7,    0,   51,    2, 0x02 /* Public */,
       8,    0,   52,    2, 0x02 /* Public */,
      10,    1,   53,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    0x80000000 | 9,
    QMetaType::Bool, 0x80000000 | 11,   12,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00095103,
       6, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qSlicerMarkupsModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerMarkupsModule *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setToolBarVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setAutoShowToolBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->autoShowToolBar();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->isToolBarVisible();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { qMRMLMarkupsToolBar* _r = _t->toolBar();
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsToolBar**>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->showMarkups((*reinterpret_cast< vtkMRMLMarkupsNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerMarkupsModule *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isToolBarVisible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->autoShowToolBar(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerMarkupsModule *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setToolBarVisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setAutoShowToolBar(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerMarkupsModule::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerLoadableModule::staticMetaObject>(),
    qt_meta_stringdata_qSlicerMarkupsModule.data,
    qt_meta_data_qSlicerMarkupsModule,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerMarkupsModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerMarkupsModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerMarkupsModule.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.slicer.modules.loadable.qSlicerLoadableModule/1.0"))
        return static_cast< qSlicerLoadableModule*>(this);
    return qSlicerLoadableModule::qt_metacast(_clname);
}

int qSlicerMarkupsModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerLoadableModule::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
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
    0x03,  0x74,  'q',  'S',  'l',  'i',  'c',  'e', 
    'r',  'M',  'a',  'r',  'k',  'u',  'p',  's', 
    'M',  'o',  'd',  'u',  'l',  'e', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(qSlicerMarkupsModule, qSlicerMarkupsModule)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
