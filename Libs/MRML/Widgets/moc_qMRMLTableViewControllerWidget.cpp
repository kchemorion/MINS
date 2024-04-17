/****************************************************************************
** Meta object code from reading C++ file 'qMRMLTableViewControllerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLTableViewControllerWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLTableViewControllerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLTableViewControllerWidget_t {
    QByteArrayData data[14];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLTableViewControllerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLTableViewControllerWidget_t qt_meta_stringdata_qMRMLTableViewControllerWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "qMRMLTableViewControllerWidget"
QT_MOC_LITERAL(1, 31, 12), // "setMRMLScene"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(4, 59, 8), // "newScene"
QT_MOC_LITERAL(5, 68, 12), // "setTableView"
QT_MOC_LITERAL(6, 81, 15), // "qMRMLTableView*"
QT_MOC_LITERAL(7, 97, 9), // "TableView"
QT_MOC_LITERAL(8, 107, 20), // "setMRMLTableViewNode"
QT_MOC_LITERAL(9, 128, 21), // "vtkMRMLTableViewNode*"
QT_MOC_LITERAL(10, 150, 13), // "tableViewNode"
QT_MOC_LITERAL(11, 164, 24), // "updateWidgetFromMRMLView"
QT_MOC_LITERAL(12, 189, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(13, 210, 17) // "mrmlTableViewNode"

    },
    "qMRMLTableViewControllerWidget\0"
    "setMRMLScene\0\0vtkMRMLScene*\0newScene\0"
    "setTableView\0qMRMLTableView*\0TableView\0"
    "setMRMLTableViewNode\0vtkMRMLTableViewNode*\0"
    "tableViewNode\0updateWidgetFromMRMLView\0"
    "updateWidgetFromMRML\0mrmlTableViewNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLTableViewControllerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       8,    1,   50,    2, 0x0a /* Public */,
      11,    0,   53,    2, 0x09 /* Protected */,
      12,    0,   54,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      13,    0,   55,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 9,

       0        // eod
};

void qMRMLTableViewControllerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLTableViewControllerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 1: _t->setTableView((*reinterpret_cast< qMRMLTableView*(*)>(_a[1]))); break;
        case 2: _t->setMRMLTableViewNode((*reinterpret_cast< vtkMRMLTableViewNode*(*)>(_a[1]))); break;
        case 3: _t->updateWidgetFromMRMLView(); break;
        case 4: _t->updateWidgetFromMRML(); break;
        case 5: { vtkMRMLTableViewNode* _r = _t->mrmlTableViewNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLTableViewNode**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLTableViewControllerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLViewControllerBar::staticMetaObject>(),
    qt_meta_stringdata_qMRMLTableViewControllerWidget.data,
    qt_meta_data_qMRMLTableViewControllerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLTableViewControllerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLTableViewControllerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLTableViewControllerWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLViewControllerBar::qt_metacast(_clname);
}

int qMRMLTableViewControllerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLViewControllerBar::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
