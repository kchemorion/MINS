/****************************************************************************
** Meta object code from reading C++ file 'qMRMLCheckableNodeComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLCheckableNodeComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLCheckableNodeComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLCheckableNodeComboBox_t {
    QByteArrayData data[17];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLCheckableNodeComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLCheckableNodeComboBox_t qt_meta_stringdata_qMRMLCheckableNodeComboBox = {
    {
QT_MOC_LITERAL(0, 0, 26), // "qMRMLCheckableNodeComboBox"
QT_MOC_LITERAL(1, 27, 19), // "checkedNodesChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "check"
QT_MOC_LITERAL(4, 54, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(5, 67, 4), // "node"
QT_MOC_LITERAL(6, 72, 7), // "uncheck"
QT_MOC_LITERAL(7, 80, 12), // "checkedNodes"
QT_MOC_LITERAL(8, 93, 19), // "QList<vtkMRMLNode*>"
QT_MOC_LITERAL(9, 113, 14), // "uncheckedNodes"
QT_MOC_LITERAL(10, 128, 10), // "allChecked"
QT_MOC_LITERAL(11, 139, 11), // "noneChecked"
QT_MOC_LITERAL(12, 151, 10), // "checkState"
QT_MOC_LITERAL(13, 162, 14), // "Qt::CheckState"
QT_MOC_LITERAL(14, 177, 13), // "setCheckState"
QT_MOC_LITERAL(15, 191, 16), // "setUserCheckable"
QT_MOC_LITERAL(16, 208, 13) // "userCheckable"

    },
    "qMRMLCheckableNodeComboBox\0"
    "checkedNodesChanged\0\0check\0vtkMRMLNode*\0"
    "node\0uncheck\0checkedNodes\0QList<vtkMRMLNode*>\0"
    "uncheckedNodes\0allChecked\0noneChecked\0"
    "checkState\0Qt::CheckState\0setCheckState\0"
    "setUserCheckable\0userCheckable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLCheckableNodeComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   65,    2, 0x0a /* Public */,
       6,    1,   68,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   71,    2, 0x02 /* Public */,
       9,    0,   72,    2, 0x02 /* Public */,
      10,    0,   73,    2, 0x02 /* Public */,
      11,    0,   74,    2, 0x02 /* Public */,
      12,    1,   75,    2, 0x02 /* Public */,
      14,    2,   78,    2, 0x02 /* Public */,
      15,    2,   83,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

 // methods: parameters
    0x80000000 | 8,
    0x80000000 | 8,
    QMetaType::Bool,
    QMetaType::Bool,
    0x80000000 | 13, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 13,    5,    3,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,    5,   16,

       0        // eod
};

void qMRMLCheckableNodeComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLCheckableNodeComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->checkedNodesChanged(); break;
        case 1: _t->check((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->uncheck((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: { QList<vtkMRMLNode*> _r = _t->checkedNodes();
            if (_a[0]) *reinterpret_cast< QList<vtkMRMLNode*>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QList<vtkMRMLNode*> _r = _t->uncheckedNodes();
            if (_a[0]) *reinterpret_cast< QList<vtkMRMLNode*>*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->allChecked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->noneChecked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { Qt::CheckState _r = _t->checkState((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::CheckState*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setCheckState((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1])),(*reinterpret_cast< Qt::CheckState(*)>(_a[2]))); break;
        case 9: _t->setUserCheckable((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLCheckableNodeComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLCheckableNodeComboBox::checkedNodesChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLCheckableNodeComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLNodeComboBox::staticMetaObject>(),
    qt_meta_stringdata_qMRMLCheckableNodeComboBox.data,
    qt_meta_data_qMRMLCheckableNodeComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLCheckableNodeComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLCheckableNodeComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLCheckableNodeComboBox.stringdata0))
        return static_cast<void*>(this);
    return qMRMLNodeComboBox::qt_metacast(_clname);
}

int qMRMLCheckableNodeComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLNodeComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void qMRMLCheckableNodeComboBox::checkedNodesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
