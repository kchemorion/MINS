/****************************************************************************
** Meta object code from reading C++ file 'qSlicerCLIModuleWidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTCLI/qSlicerCLIModuleWidget_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerCLIModuleWidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerCLIModuleWidgetPrivate_t {
    QByteArrayData data[11];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerCLIModuleWidgetPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerCLIModuleWidgetPrivate_t qt_meta_stringdata_qSlicerCLIModuleWidgetPrivate = {
    {
QT_MOC_LITERAL(0, 0, 29), // "qSlicerCLIModuleWidgetPrivate"
QT_MOC_LITERAL(1, 30, 33), // "updateUiFromCommandLineModule..."
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 10), // "vtkObject*"
QT_MOC_LITERAL(4, 76, 21), // "commandLineModuleNode"
QT_MOC_LITERAL(5, 98, 33), // "updateCommandLineModuleNodeFr..."
QT_MOC_LITERAL(6, 132, 19), // "setDefaultNodeValue"
QT_MOC_LITERAL(7, 152, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(8, 165, 14), // "onValueChanged"
QT_MOC_LITERAL(9, 180, 4), // "name"
QT_MOC_LITERAL(10, 185, 4) // "type"

    },
    "qSlicerCLIModuleWidgetPrivate\0"
    "updateUiFromCommandLineModuleNode\0\0"
    "vtkObject*\0commandLineModuleNode\0"
    "updateCommandLineModuleNodeFromUi\0"
    "setDefaultNodeValue\0vtkMRMLNode*\0"
    "onValueChanged\0name\0type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerCLIModuleWidgetPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,
       6,    1,   40,    2, 0x0a /* Public */,
       8,    2,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    9,   10,

       0        // eod
};

void qSlicerCLIModuleWidgetPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerCLIModuleWidgetPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateUiFromCommandLineModuleNode((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 1: _t->updateCommandLineModuleNodeFromUi((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 2: _t->setDefaultNodeValue((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->onValueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerCLIModuleWidgetPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerCLIModuleWidgetPrivate.data,
    qt_meta_data_qSlicerCLIModuleWidgetPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerCLIModuleWidgetPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerCLIModuleWidgetPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerCLIModuleWidgetPrivate.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_qSlicerCLIModuleWidget"))
        return static_cast< Ui_qSlicerCLIModuleWidget*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerCLIModuleWidgetPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
