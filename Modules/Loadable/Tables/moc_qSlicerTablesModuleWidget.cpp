/****************************************************************************
** Meta object code from reading C++ file 'qSlicerTablesModuleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/Tables/qSlicerTablesModuleWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerTablesModuleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerTablesModuleWidget_t {
    QByteArrayData data[10];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerTablesModuleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerTablesModuleWidget_t qt_meta_stringdata_qSlicerTablesModuleWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "qSlicerTablesModuleWidget"
QT_MOC_LITERAL(1, 26, 19), // "setCurrentTableNode"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 60, 23), // "onMRMLTableNodeModified"
QT_MOC_LITERAL(5, 84, 10), // "vtkObject*"
QT_MOC_LITERAL(6, 95, 6), // "caller"
QT_MOC_LITERAL(7, 102, 14), // "onNodeSelected"
QT_MOC_LITERAL(8, 117, 4), // "node"
QT_MOC_LITERAL(9, 122, 24) // "onLockTableButtonClicked"

    },
    "qSlicerTablesModuleWidget\0setCurrentTableNode\0"
    "\0vtkMRMLNode*\0onMRMLTableNodeModified\0"
    "vtkObject*\0caller\0onNodeSelected\0node\0"
    "onLockTableButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerTablesModuleWidget[] = {

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
       4,    1,   37,    2, 0x09 /* Protected */,
       7,    1,   40,    2, 0x09 /* Protected */,
       9,    0,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void,

       0        // eod
};

void qSlicerTablesModuleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerTablesModuleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setCurrentTableNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->onMRMLTableNodeModified((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 2: _t->onNodeSelected((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->onLockTableButtonClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerTablesModuleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerAbstractModuleWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerTablesModuleWidget.data,
    qt_meta_data_qSlicerTablesModuleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerTablesModuleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerTablesModuleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerTablesModuleWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerAbstractModuleWidget::qt_metacast(_clname);
}

int qSlicerTablesModuleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerAbstractModuleWidget::qt_metacall(_c, _id, _a);
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
