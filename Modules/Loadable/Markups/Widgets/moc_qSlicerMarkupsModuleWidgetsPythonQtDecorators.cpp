/****************************************************************************
** Meta object code from reading C++ file 'qSlicerMarkupsModuleWidgetsPythonQtDecorators.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qSlicerMarkupsModuleWidgetsPythonQtDecorators.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerMarkupsModuleWidgetsPythonQtDecorators.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerMarkupsModuleWidgetsPythonQtDecorators_t {
    QByteArrayData data[8];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerMarkupsModuleWidgetsPythonQtDecorators_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerMarkupsModuleWidgetsPythonQtDecorators_t qt_meta_stringdata_qSlicerMarkupsModuleWidgetsPythonQtDecorators = {
    {
QT_MOC_LITERAL(0, 0, 45), // "qSlicerMarkupsModuleWidgetsPy..."
QT_MOC_LITERAL(1, 46, 49), // "static_qMRMLMarkupsOptionsWid..."
QT_MOC_LITERAL(2, 96, 34), // "qMRMLMarkupsOptionsWidgetsFac..."
QT_MOC_LITERAL(3, 131, 0), // ""
QT_MOC_LITERAL(4, 132, 21), // "registerOptionsWidget"
QT_MOC_LITERAL(5, 154, 7), // "factory"
QT_MOC_LITERAL(6, 162, 62), // "PythonQtPassOwnershipToCPP<qM..."
QT_MOC_LITERAL(7, 225, 6) // "plugin"

    },
    "qSlicerMarkupsModuleWidgetsPythonQtDecorators\0"
    "static_qMRMLMarkupsOptionsWidgetsFactory_instance\0"
    "qMRMLMarkupsOptionsWidgetsFactory*\0\0"
    "registerOptionsWidget\0factory\0"
    "PythonQtPassOwnershipToCPP<qMRMLMarkupsAbstractOptionsWidget*>\0"
    "plugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerMarkupsModuleWidgetsPythonQtDecorators[] = {

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
       1,    0,   24,    3, 0x0a /* Public */,
       4,    2,   25,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 6,    5,    7,

       0        // eod
};

void qSlicerMarkupsModuleWidgetsPythonQtDecorators::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerMarkupsModuleWidgetsPythonQtDecorators *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLMarkupsOptionsWidgetsFactory* _r = _t->static_qMRMLMarkupsOptionsWidgetsFactory_instance();
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsOptionsWidgetsFactory**>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->registerOptionsWidget((*reinterpret_cast< qMRMLMarkupsOptionsWidgetsFactory*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<qMRMLMarkupsAbstractOptionsWidget*>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLMarkupsOptionsWidgetsFactory* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerMarkupsModuleWidgetsPythonQtDecorators::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerMarkupsModuleWidgetsPythonQtDecorators.data,
    qt_meta_data_qSlicerMarkupsModuleWidgetsPythonQtDecorators,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerMarkupsModuleWidgetsPythonQtDecorators::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerMarkupsModuleWidgetsPythonQtDecorators::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerMarkupsModuleWidgetsPythonQtDecorators.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerMarkupsModuleWidgetsPythonQtDecorators::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
