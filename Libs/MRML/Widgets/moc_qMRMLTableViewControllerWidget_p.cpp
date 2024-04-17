/****************************************************************************
** Meta object code from reading C++ file 'qMRMLTableViewControllerWidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLTableViewControllerWidget_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLTableViewControllerWidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLTableViewControllerWidgetPrivate_t {
    QByteArrayData data[16];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLTableViewControllerWidgetPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLTableViewControllerWidgetPrivate_t qt_meta_stringdata_qMRMLTableViewControllerWidgetPrivate = {
    {
QT_MOC_LITERAL(0, 0, 37), // "qMRMLTableViewControllerWidge..."
QT_MOC_LITERAL(1, 38, 19), // "onTableNodeSelected"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 72, 4), // "node"
QT_MOC_LITERAL(5, 77, 24), // "onLockTableButtonClicked"
QT_MOC_LITERAL(6, 102, 12), // "insertColumn"
QT_MOC_LITERAL(7, 115, 12), // "deleteColumn"
QT_MOC_LITERAL(8, 128, 9), // "insertRow"
QT_MOC_LITERAL(9, 138, 9), // "deleteRow"
QT_MOC_LITERAL(10, 148, 17), // "setFirstRowLocked"
QT_MOC_LITERAL(11, 166, 6), // "locked"
QT_MOC_LITERAL(12, 173, 20), // "setFirstColumnLocked"
QT_MOC_LITERAL(13, 194, 13), // "copySelection"
QT_MOC_LITERAL(14, 208, 14), // "pasteSelection"
QT_MOC_LITERAL(15, 223, 13) // "plotSelection"

    },
    "qMRMLTableViewControllerWidgetPrivate\0"
    "onTableNodeSelected\0\0vtkMRMLNode*\0"
    "node\0onLockTableButtonClicked\0"
    "insertColumn\0deleteColumn\0insertRow\0"
    "deleteRow\0setFirstRowLocked\0locked\0"
    "setFirstColumnLocked\0copySelection\0"
    "pasteSelection\0plotSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLTableViewControllerWidgetPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    1,   77,    2, 0x0a /* Public */,
      12,    1,   80,    2, 0x0a /* Public */,
      13,    0,   83,    2, 0x0a /* Public */,
      14,    0,   84,    2, 0x0a /* Public */,
      15,    0,   85,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qMRMLTableViewControllerWidgetPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLTableViewControllerWidgetPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onTableNodeSelected((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->onLockTableButtonClicked(); break;
        case 2: _t->insertColumn(); break;
        case 3: _t->deleteColumn(); break;
        case 4: _t->insertRow(); break;
        case 5: _t->deleteRow(); break;
        case 6: _t->setFirstRowLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setFirstColumnLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->copySelection(); break;
        case 9: _t->pasteSelection(); break;
        case 10: _t->plotSelection(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLTableViewControllerWidgetPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLViewControllerBarPrivate::staticMetaObject>(),
    qt_meta_stringdata_qMRMLTableViewControllerWidgetPrivate.data,
    qt_meta_data_qMRMLTableViewControllerWidgetPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLTableViewControllerWidgetPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLTableViewControllerWidgetPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLTableViewControllerWidgetPrivate.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_qMRMLTableViewControllerWidget"))
        return static_cast< Ui_qMRMLTableViewControllerWidget*>(this);
    return qMRMLViewControllerBarPrivate::qt_metacast(_clname);
}

int qMRMLTableViewControllerWidgetPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLViewControllerBarPrivate::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
