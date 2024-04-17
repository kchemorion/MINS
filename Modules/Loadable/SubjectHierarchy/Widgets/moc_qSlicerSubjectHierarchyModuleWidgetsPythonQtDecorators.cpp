/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators_t {
    QByteArrayData data[14];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators_t qt_meta_stringdata_qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators = {
    {
QT_MOC_LITERAL(0, 0, 54), // "qSlicerSubjectHierarchyModule..."
QT_MOC_LITERAL(1, 55, 52), // "static_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(2, 108, 37), // "qSlicerSubjectHierarchyPlugin..."
QT_MOC_LITERAL(3, 146, 0), // ""
QT_MOC_LITERAL(4, 147, 62), // "static_qSlicerSubjectHierarch..."
QT_MOC_LITERAL(5, 210, 8), // "QAction*"
QT_MOC_LITERAL(6, 219, 6), // "action"
QT_MOC_LITERAL(7, 226, 7), // "section"
QT_MOC_LITERAL(8, 234, 6), // "weight"
QT_MOC_LITERAL(9, 241, 16), // "weightAdjustment"
QT_MOC_LITERAL(10, 258, 14), // "registerPlugin"
QT_MOC_LITERAL(11, 273, 7), // "handler"
QT_MOC_LITERAL(12, 281, 66), // "PythonQtPassOwnershipToCPP<qS..."
QT_MOC_LITERAL(13, 348, 6) // "plugin"

    },
    "qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators\0"
    "static_qSlicerSubjectHierarchyPluginHandler_instance\0"
    "qSlicerSubjectHierarchyPluginHandler*\0"
    "\0static_qSlicerSubjectHierarchyAbstractPlugin_setActionPosition\0"
    "QAction*\0action\0section\0weight\0"
    "weightAdjustment\0registerPlugin\0handler\0"
    "PythonQtPassOwnershipToCPP<qSlicerSubjectHierarchyAbstractPlugin*>\0"
    "plugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators[] = {

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
       1,    0,   39,    3, 0x0a /* Public */,
       4,    4,   40,    3, 0x0a /* Public */,
       4,    3,   49,    3, 0x2a /* Public | MethodCloned */,
       4,    2,   56,    3, 0x2a /* Public | MethodCloned */,
      10,    2,   61,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int, QMetaType::Double,    6,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 12,   11,   13,

       0        // eod
};

void qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qSlicerSubjectHierarchyPluginHandler* _r = _t->static_qSlicerSubjectHierarchyPluginHandler_instance();
            if (_a[0]) *reinterpret_cast< qSlicerSubjectHierarchyPluginHandler**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->static_qSlicerSubjectHierarchyAbstractPlugin_setActionPosition((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 2: _t->static_qSlicerSubjectHierarchyAbstractPlugin_setActionPosition((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->static_qSlicerSubjectHierarchyAbstractPlugin_setActionPosition((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: { bool _r = _t->registerPlugin((*reinterpret_cast< qSlicerSubjectHierarchyPluginHandler*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<qSlicerSubjectHierarchyAbstractPlugin*>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerSubjectHierarchyPluginHandler* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators.data,
    qt_meta_data_qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerSubjectHierarchyModuleWidgetsPythonQtDecorators::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
