/****************************************************************************
** Meta object code from reading C++ file 'qMRMLScalarInvariantComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLScalarInvariantComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLScalarInvariantComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLScalarInvariantComboBox_t {
    QByteArrayData data[13];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLScalarInvariantComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLScalarInvariantComboBox_t qt_meta_stringdata_qMRMLScalarInvariantComboBox = {
    {
QT_MOC_LITERAL(0, 0, 28), // "qMRMLScalarInvariantComboBox"
QT_MOC_LITERAL(1, 29, 22), // "scalarInvariantChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 15), // "scalarInvariant"
QT_MOC_LITERAL(4, 69, 24), // "setDisplayPropertiesNode"
QT_MOC_LITERAL(5, 94, 44), // "vtkMRMLDiffusionTensorDisplay..."
QT_MOC_LITERAL(6, 139, 4), // "node"
QT_MOC_LITERAL(7, 144, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(8, 157, 18), // "setScalarInvariant"
QT_MOC_LITERAL(9, 176, 5), // "value"
QT_MOC_LITERAL(10, 182, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(11, 203, 31), // "onCurrentScalarInvariantChanged"
QT_MOC_LITERAL(12, 235, 5) // "index"

    },
    "qMRMLScalarInvariantComboBox\0"
    "scalarInvariantChanged\0\0scalarInvariant\0"
    "setDisplayPropertiesNode\0"
    "vtkMRMLDiffusionTensorDisplayPropertiesNode*\0"
    "node\0vtkMRMLNode*\0setScalarInvariant\0"
    "value\0updateWidgetFromMRML\0"
    "onCurrentScalarInvariantChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLScalarInvariantComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   47,    2, 0x0a /* Public */,
       4,    1,   50,    2, 0x0a /* Public */,
       8,    1,   53,    2, 0x0a /* Public */,
      10,    0,   56,    2, 0x09 /* Protected */,
      11,    1,   57,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 7,    6,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00095103,

       0        // eod
};

void qMRMLScalarInvariantComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLScalarInvariantComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scalarInvariantChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setDisplayPropertiesNode((*reinterpret_cast< vtkMRMLDiffusionTensorDisplayPropertiesNode*(*)>(_a[1]))); break;
        case 2: _t->setDisplayPropertiesNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 3: _t->setScalarInvariant((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateWidgetFromMRML(); break;
        case 5: _t->onCurrentScalarInvariantChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLScalarInvariantComboBox::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLScalarInvariantComboBox::scalarInvariantChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLScalarInvariantComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->scalarInvariant(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLScalarInvariantComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setScalarInvariant(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLScalarInvariantComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLScalarInvariantComboBox.data,
    qt_meta_data_qMRMLScalarInvariantComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLScalarInvariantComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLScalarInvariantComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLScalarInvariantComboBox.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qMRMLScalarInvariantComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qMRMLScalarInvariantComboBox::scalarInvariantChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
