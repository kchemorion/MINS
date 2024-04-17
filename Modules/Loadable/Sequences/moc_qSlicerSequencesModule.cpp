/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSequencesModule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/Sequences/qSlicerSequencesModule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSequencesModule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSequencesModule_t {
    QByteArrayData data[21];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSequencesModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSequencesModule_t qt_meta_stringdata_qSlicerSequencesModule = {
    {
QT_MOC_LITERAL(0, 0, 22), // "qSlicerSequencesModule"
QT_MOC_LITERAL(1, 23, 12), // "setMRMLScene"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(4, 51, 17), // "setToolBarVisible"
QT_MOC_LITERAL(5, 69, 7), // "visible"
QT_MOC_LITERAL(6, 77, 18), // "setAutoShowToolBar"
QT_MOC_LITERAL(7, 96, 8), // "autoShow"
QT_MOC_LITERAL(8, 105, 16), // "onNodeAddedEvent"
QT_MOC_LITERAL(9, 122, 10), // "vtkObject*"
QT_MOC_LITERAL(10, 133, 18), // "onNodeRemovedEvent"
QT_MOC_LITERAL(11, 152, 27), // "updateAllVirtualOutputNodes"
QT_MOC_LITERAL(12, 180, 27), // "setToolBarActiveBrowserNode"
QT_MOC_LITERAL(13, 208, 27), // "vtkMRMLSequenceBrowserNode*"
QT_MOC_LITERAL(14, 236, 11), // "browserNode"
QT_MOC_LITERAL(15, 248, 15), // "autoShowToolBar"
QT_MOC_LITERAL(16, 264, 16), // "isToolBarVisible"
QT_MOC_LITERAL(17, 281, 7), // "toolBar"
QT_MOC_LITERAL(18, 289, 28), // "qMRMLSequenceBrowserToolBar*"
QT_MOC_LITERAL(19, 318, 19), // "showSequenceBrowser"
QT_MOC_LITERAL(20, 338, 14) // "toolBarVisible"

    },
    "qSlicerSequencesModule\0setMRMLScene\0"
    "\0vtkMRMLScene*\0setToolBarVisible\0"
    "visible\0setAutoShowToolBar\0autoShow\0"
    "onNodeAddedEvent\0vtkObject*\0"
    "onNodeRemovedEvent\0updateAllVirtualOutputNodes\0"
    "setToolBarActiveBrowserNode\0"
    "vtkMRMLSequenceBrowserNode*\0browserNode\0"
    "autoShowToolBar\0isToolBarVisible\0"
    "toolBar\0qMRMLSequenceBrowserToolBar*\0"
    "showSequenceBrowser\0toolBarVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSequencesModule[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       2,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       4,    1,   72,    2, 0x0a /* Public */,
       6,    1,   75,    2, 0x0a /* Public */,
       8,    2,   78,    2, 0x0a /* Public */,
      10,    2,   83,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    1,   89,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      15,    0,   92,    2, 0x02 /* Public */,
      16,    0,   93,    2, 0x02 /* Public */,
      17,    0,   94,    2, 0x02 /* Public */,
      19,    1,   95,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,    2,    2,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    0x80000000 | 18,
    QMetaType::Bool, 0x80000000 | 13,   14,

 // properties: name, type, flags
      20, QMetaType::Bool, 0x00095103,
      15, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qSlicerSequencesModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSequencesModule *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 1: _t->setToolBarVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setAutoShowToolBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onNodeAddedEvent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        case 4: _t->onNodeRemovedEvent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        case 5: _t->updateAllVirtualOutputNodes(); break;
        case 6: _t->setToolBarActiveBrowserNode((*reinterpret_cast< vtkMRMLSequenceBrowserNode*(*)>(_a[1]))); break;
        case 7: { bool _r = _t->autoShowToolBar();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->isToolBarVisible();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { qMRMLSequenceBrowserToolBar* _r = _t->toolBar();
            if (_a[0]) *reinterpret_cast< qMRMLSequenceBrowserToolBar**>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->showSequenceBrowser((*reinterpret_cast< vtkMRMLSequenceBrowserNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerSequencesModule *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isToolBarVisible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->autoShowToolBar(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerSequencesModule *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject qSlicerSequencesModule::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerLoadableModule::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSequencesModule.data,
    qt_meta_data_qSlicerSequencesModule,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSequencesModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSequencesModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSequencesModule.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.slicer.modules.loadable.qSlicerLoadableModule/1.0"))
        return static_cast< qSlicerLoadableModule*>(this);
    return qSlicerLoadableModule::qt_metacast(_clname);
}

int qSlicerSequencesModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerLoadableModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
    0x03,  0x76,  'q',  'S',  'l',  'i',  'c',  'e', 
    'r',  'S',  'e',  'q',  'u',  'e',  'n',  'c', 
    'e',  's',  'M',  'o',  'd',  'u',  'l',  'e', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(qSlicerSequencesModule, qSlicerSequencesModule)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
