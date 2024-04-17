/****************************************************************************
** Meta object code from reading C++ file 'qSlicerAbstractCoreModule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTCore/qSlicerAbstractCoreModule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerAbstractCoreModule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerAbstractCoreModule_t {
    QByteArrayData data[23];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerAbstractCoreModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerAbstractCoreModule_t qt_meta_stringdata_qSlicerAbstractCoreModule = {
    {
QT_MOC_LITERAL(0, 0, 25), // "qSlicerAbstractCoreModule"
QT_MOC_LITERAL(1, 26, 12), // "setMRMLScene"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(4, 54, 5), // "logic"
QT_MOC_LITERAL(5, 60, 21), // "vtkMRMLAbstractLogic*"
QT_MOC_LITERAL(6, 82, 9), // "mrmlScene"
QT_MOC_LITERAL(7, 92, 4), // "name"
QT_MOC_LITERAL(8, 97, 5), // "title"
QT_MOC_LITERAL(9, 103, 10), // "categories"
QT_MOC_LITERAL(10, 114, 5), // "index"
QT_MOC_LITERAL(11, 120, 6), // "hidden"
QT_MOC_LITERAL(12, 127, 35), // "widgetRepresentationCreationE..."
QT_MOC_LITERAL(13, 163, 8), // "helpText"
QT_MOC_LITERAL(14, 172, 19), // "acknowledgementText"
QT_MOC_LITERAL(15, 192, 12), // "contributors"
QT_MOC_LITERAL(16, 205, 13), // "slicerWikiUrl"
QT_MOC_LITERAL(17, 219, 24), // "defaultDocumentationLink"
QT_MOC_LITERAL(18, 244, 12), // "dependencies"
QT_MOC_LITERAL(19, 257, 4), // "path"
QT_MOC_LITERAL(20, 262, 11), // "isInstalled"
QT_MOC_LITERAL(21, 274, 9), // "isBuiltIn"
QT_MOC_LITERAL(22, 284, 19) // "associatedNodeTypes"

    },
    "qSlicerAbstractCoreModule\0setMRMLScene\0"
    "\0vtkMRMLScene*\0logic\0vtkMRMLAbstractLogic*\0"
    "mrmlScene\0name\0title\0categories\0index\0"
    "hidden\0widgetRepresentationCreationEnabled\0"
    "helpText\0acknowledgementText\0contributors\0"
    "slicerWikiUrl\0defaultDocumentationLink\0"
    "dependencies\0path\0isInstalled\0isBuiltIn\0"
    "associatedNodeTypes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerAbstractCoreModule[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      16,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x02 /* Public */,
       6,    0,   33,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // methods: parameters
    0x80000000 | 5,
    0x80000000 | 3,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00095001,
       8, QMetaType::QString, 0x00095001,
       9, QMetaType::QStringList, 0x00095001,
      10, QMetaType::Int, 0x00095001,
      11, QMetaType::Bool, 0x00095001,
      12, QMetaType::Bool, 0x00095103,
      13, QMetaType::QString, 0x00095001,
      14, QMetaType::QString, 0x00095001,
      15, QMetaType::QStringList, 0x00095001,
      16, QMetaType::QString, 0x00095001,
      17, QMetaType::QString, 0x00095001,
      18, QMetaType::QStringList, 0x00095001,
      19, QMetaType::QString, 0x00095001,
      20, QMetaType::Bool, 0x00095001,
      21, QMetaType::Bool, 0x00095001,
      22, QMetaType::QStringList, 0x00095001,

       0        // eod
};

void qSlicerAbstractCoreModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerAbstractCoreModule *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 1: { vtkMRMLAbstractLogic* _r = _t->logic();
            if (_a[0]) *reinterpret_cast< vtkMRMLAbstractLogic**>(_a[0]) = std::move(_r); }  break;
        case 2: { vtkMRMLScene* _r = _t->mrmlScene();
            if (_a[0]) *reinterpret_cast< vtkMRMLScene**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerAbstractCoreModule *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->categories(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->index(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isHidden(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isWidgetRepresentationCreationEnabled(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->helpText(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->acknowledgementText(); break;
        case 8: *reinterpret_cast< QStringList*>(_v) = _t->contributors(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->slicerWikiUrl(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->defaultDocumentationLink(); break;
        case 11: *reinterpret_cast< QStringList*>(_v) = _t->dependencies(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->path(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->isInstalled(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->isBuiltIn(); break;
        case 15: *reinterpret_cast< QStringList*>(_v) = _t->associatedNodeTypes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerAbstractCoreModule *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setWidgetRepresentationCreationEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerAbstractCoreModule::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerAbstractCoreModule.data,
    qt_meta_data_qSlicerAbstractCoreModule,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerAbstractCoreModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerAbstractCoreModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerAbstractCoreModule.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerAbstractCoreModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
