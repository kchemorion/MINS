/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSubjectHierarchyPlotsPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Plots/SubjectHierarchyPlugins/qSlicerSubjectHierarchyPlotsPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSubjectHierarchyPlotsPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSubjectHierarchyPlotsPlugin_t {
    QByteArrayData data[3];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSubjectHierarchyPlotsPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSubjectHierarchyPlotsPlugin_t qt_meta_stringdata_qSlicerSubjectHierarchyPlotsPlugin = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qSlicerSubjectHierarchyPlotsP..."
QT_MOC_LITERAL(1, 35, 13), // "roleForPlugin"
QT_MOC_LITERAL(2, 49, 0) // ""

    },
    "qSlicerSubjectHierarchyPlotsPlugin\0"
    "roleForPlugin\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSubjectHierarchyPlotsPlugin[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,

       0        // eod
};

void qSlicerSubjectHierarchyPlotsPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSubjectHierarchyPlotsPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->roleForPlugin();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSubjectHierarchyPlotsPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerSubjectHierarchyAbstractPlugin::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSubjectHierarchyPlotsPlugin.data,
    qt_meta_data_qSlicerSubjectHierarchyPlotsPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSubjectHierarchyPlotsPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSubjectHierarchyPlotsPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSubjectHierarchyPlotsPlugin.stringdata0))
        return static_cast<void*>(this);
    return qSlicerSubjectHierarchyAbstractPlugin::qt_metacast(_clname);
}

int qSlicerSubjectHierarchyPlotsPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerSubjectHierarchyAbstractPlugin::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
