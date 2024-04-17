/****************************************************************************
** Meta object code from reading C++ file 'qMRMLEventBrokerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLEventBrokerWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLEventBrokerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLEventBrokerWidget_t {
    QByteArrayData data[13];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLEventBrokerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLEventBrokerWidget_t qt_meta_stringdata_qMRMLEventBrokerWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "qMRMLEventBrokerWidget"
QT_MOC_LITERAL(1, 23, 20), // "currentObjectChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 10), // "vtkObject*"
QT_MOC_LITERAL(4, 56, 7), // "refresh"
QT_MOC_LITERAL(5, 64, 17), // "resetElapsedTimes"
QT_MOC_LITERAL(6, 82, 22), // "expandElapsedTimeItems"
QT_MOC_LITERAL(7, 105, 13), // "onItemChanged"
QT_MOC_LITERAL(8, 119, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(9, 136, 4), // "item"
QT_MOC_LITERAL(10, 141, 6), // "column"
QT_MOC_LITERAL(11, 148, 20), // "onCurrentItemChanged"
QT_MOC_LITERAL(12, 169, 11) // "currentItem"

    },
    "qMRMLEventBrokerWidget\0currentObjectChanged\0"
    "\0vtkObject*\0refresh\0resetElapsedTimes\0"
    "expandElapsedTimeItems\0onItemChanged\0"
    "QTreeWidgetItem*\0item\0column\0"
    "onCurrentItemChanged\0currentItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLEventBrokerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a /* Public */,
       5,    0,   48,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    2,   50,    2, 0x09 /* Protected */,
      11,    1,   55,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,   10,
    QMetaType::Void, 0x80000000 | 8,   12,

       0        // eod
};

void qMRMLEventBrokerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLEventBrokerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentObjectChanged((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 1: _t->refresh(); break;
        case 2: _t->resetElapsedTimes(); break;
        case 3: _t->expandElapsedTimeItems(); break;
        case 4: _t->onItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->onCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLEventBrokerWidget::*)(vtkObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLEventBrokerWidget::currentObjectChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLEventBrokerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLEventBrokerWidget.data,
    qt_meta_data_qMRMLEventBrokerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLEventBrokerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLEventBrokerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLEventBrokerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qMRMLEventBrokerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void qMRMLEventBrokerWidget::currentObjectChanged(vtkObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
