/****************************************************************************
** Meta object code from reading C++ file 'qMRMLNodeAttributeTableView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLNodeAttributeTableView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLNodeAttributeTableView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLNodeAttributeTableView_t {
    QByteArrayData data[14];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLNodeAttributeTableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLNodeAttributeTableView_t qt_meta_stringdata_qMRMLNodeAttributeTableView = {
    {
QT_MOC_LITERAL(0, 0, 27), // "qMRMLNodeAttributeTableView"
QT_MOC_LITERAL(1, 28, 12), // "addAttribute"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 24), // "removeSelectedAttributes"
QT_MOC_LITERAL(4, 67, 12), // "setAttribute"
QT_MOC_LITERAL(5, 80, 13), // "attributeName"
QT_MOC_LITERAL(6, 94, 14), // "attributeValue"
QT_MOC_LITERAL(7, 109, 15), // "renameAttribute"
QT_MOC_LITERAL(8, 125, 7), // "oldName"
QT_MOC_LITERAL(9, 133, 7), // "newName"
QT_MOC_LITERAL(10, 141, 22), // "populateAttributeTable"
QT_MOC_LITERAL(11, 164, 18), // "onAttributeChanged"
QT_MOC_LITERAL(12, 183, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(13, 201, 11) // "changedItem"

    },
    "qMRMLNodeAttributeTableView\0addAttribute\0"
    "\0removeSelectedAttributes\0setAttribute\0"
    "attributeName\0attributeValue\0"
    "renameAttribute\0oldName\0newName\0"
    "populateAttributeTable\0onAttributeChanged\0"
    "QTableWidgetItem*\0changedItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLNodeAttributeTableView[] = {

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
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    2,   46,    2, 0x0a /* Public */,
       7,    2,   51,    2, 0x0a /* Public */,
      10,    0,   56,    2, 0x09 /* Protected */,
      11,    1,   57,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void qMRMLNodeAttributeTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLNodeAttributeTableView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addAttribute(); break;
        case 1: _t->removeSelectedAttributes(); break;
        case 2: _t->setAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->renameAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->populateAttributeTable(); break;
        case 5: _t->onAttributeChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLNodeAttributeTableView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLNodeAttributeTableView.data,
    qt_meta_data_qMRMLNodeAttributeTableView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLNodeAttributeTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLNodeAttributeTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLNodeAttributeTableView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qMRMLNodeAttributeTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
