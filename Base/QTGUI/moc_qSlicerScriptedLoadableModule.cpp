/****************************************************************************
** Meta object code from reading C++ file 'qSlicerScriptedLoadableModule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerScriptedLoadableModule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerScriptedLoadableModule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerScriptedLoadableModule_t {
    QByteArrayData data[12];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerScriptedLoadableModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerScriptedLoadableModule_t qt_meta_stringdata_qSlicerScriptedLoadableModule = {
    {
QT_MOC_LITERAL(0, 0, 29), // "qSlicerScriptedLoadableModule"
QT_MOC_LITERAL(1, 30, 5), // "title"
QT_MOC_LITERAL(2, 36, 10), // "categories"
QT_MOC_LITERAL(3, 47, 12), // "contributors"
QT_MOC_LITERAL(4, 60, 19), // "associatedNodeTypes"
QT_MOC_LITERAL(5, 80, 8), // "helpText"
QT_MOC_LITERAL(6, 89, 19), // "acknowledgementText"
QT_MOC_LITERAL(7, 109, 10), // "extensions"
QT_MOC_LITERAL(8, 120, 4), // "icon"
QT_MOC_LITERAL(9, 125, 6), // "hidden"
QT_MOC_LITERAL(10, 132, 12), // "dependencies"
QT_MOC_LITERAL(11, 145, 5) // "index"

    },
    "qSlicerScriptedLoadableModule\0title\0"
    "categories\0contributors\0associatedNodeTypes\0"
    "helpText\0acknowledgementText\0extensions\0"
    "icon\0hidden\0dependencies\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerScriptedLoadableModule[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      11,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095103,
       2, QMetaType::QStringList, 0x00095103,
       3, QMetaType::QStringList, 0x00095103,
       4, QMetaType::QStringList, 0x00095103,
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QVariantMap, 0x00095103,
       8, QMetaType::QIcon, 0x00095103,
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::QStringList, 0x00095103,
      11, QMetaType::Int, 0x00095103,

       0        // eod
};

void qSlicerScriptedLoadableModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerScriptedLoadableModule *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->categories(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->contributors(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->associatedNodeTypes(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->helpText(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->acknowledgementText(); break;
        case 6: *reinterpret_cast< QVariantMap*>(_v) = _t->extensions(); break;
        case 7: *reinterpret_cast< QIcon*>(_v) = _t->icon(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isHidden(); break;
        case 9: *reinterpret_cast< QStringList*>(_v) = _t->dependencies(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->index(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerScriptedLoadableModule *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setCategories(*reinterpret_cast< QStringList*>(_v)); break;
        case 2: _t->setContributors(*reinterpret_cast< QStringList*>(_v)); break;
        case 3: _t->setAssociatedNodeTypes(*reinterpret_cast< QStringList*>(_v)); break;
        case 4: _t->setHelpText(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setAcknowledgementText(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setExtensions(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 7: _t->setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 8: _t->setHidden(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setDependencies(*reinterpret_cast< QStringList*>(_v)); break;
        case 10: _t->setIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject qSlicerScriptedLoadableModule::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerLoadableModule::staticMetaObject>(),
    qt_meta_stringdata_qSlicerScriptedLoadableModule.data,
    qt_meta_data_qSlicerScriptedLoadableModule,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerScriptedLoadableModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerScriptedLoadableModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerScriptedLoadableModule.stringdata0))
        return static_cast<void*>(this);
    return qSlicerLoadableModule::qt_metacast(_clname);
}

int qSlicerScriptedLoadableModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerLoadableModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
