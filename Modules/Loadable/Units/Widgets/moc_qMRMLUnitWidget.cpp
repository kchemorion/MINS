/****************************************************************************
** Meta object code from reading C++ file 'qMRMLUnitWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Units/Widgets/qMRMLUnitWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLUnitWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLUnitWidget_t {
    QByteArrayData data[55];
    char stringdata0[637];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLUnitWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLUnitWidget_t qt_meta_stringdata_qMRMLUnitWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "qMRMLUnitWidget"
QT_MOC_LITERAL(1, 16, 11), // "nameChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "quantityChanged"
QT_MOC_LITERAL(4, 45, 13), // "prefixChanged"
QT_MOC_LITERAL(5, 59, 13), // "suffixChanged"
QT_MOC_LITERAL(6, 73, 16), // "precisionChanged"
QT_MOC_LITERAL(7, 90, 14), // "minimumChanged"
QT_MOC_LITERAL(8, 105, 14), // "maximumChanged"
QT_MOC_LITERAL(9, 120, 18), // "coefficientChanged"
QT_MOC_LITERAL(10, 139, 13), // "offsetChanged"
QT_MOC_LITERAL(11, 153, 14), // "setCurrentNode"
QT_MOC_LITERAL(12, 168, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(13, 181, 8), // "unitNode"
QT_MOC_LITERAL(14, 190, 7), // "setName"
QT_MOC_LITERAL(15, 198, 11), // "setQuantity"
QT_MOC_LITERAL(16, 210, 9), // "setPrefix"
QT_MOC_LITERAL(17, 220, 9), // "setSuffix"
QT_MOC_LITERAL(18, 230, 12), // "setPrecision"
QT_MOC_LITERAL(19, 243, 10), // "setMinimum"
QT_MOC_LITERAL(20, 254, 10), // "setMaximum"
QT_MOC_LITERAL(21, 265, 14), // "setCoefficient"
QT_MOC_LITERAL(22, 280, 9), // "setOffset"
QT_MOC_LITERAL(23, 290, 17), // "setUnitFromPreset"
QT_MOC_LITERAL(24, 308, 10), // "presetNode"
QT_MOC_LITERAL(25, 319, 22), // "setDisplayedProperties"
QT_MOC_LITERAL(26, 342, 14), // "UnitProperties"
QT_MOC_LITERAL(27, 357, 10), // "properties"
QT_MOC_LITERAL(28, 368, 21), // "setEditableProperties"
QT_MOC_LITERAL(29, 390, 20), // "updateWidgetFromNode"
QT_MOC_LITERAL(30, 411, 11), // "currentNode"
QT_MOC_LITERAL(31, 423, 4), // "name"
QT_MOC_LITERAL(32, 428, 8), // "quantity"
QT_MOC_LITERAL(33, 437, 6), // "prefix"
QT_MOC_LITERAL(34, 444, 6), // "suffix"
QT_MOC_LITERAL(35, 451, 9), // "precision"
QT_MOC_LITERAL(36, 461, 7), // "minimum"
QT_MOC_LITERAL(37, 469, 7), // "maximum"
QT_MOC_LITERAL(38, 477, 11), // "coefficient"
QT_MOC_LITERAL(39, 489, 6), // "offset"
QT_MOC_LITERAL(40, 496, 19), // "displayedProperties"
QT_MOC_LITERAL(41, 516, 18), // "editableProperties"
QT_MOC_LITERAL(42, 535, 12), // "UnitProperty"
QT_MOC_LITERAL(43, 548, 4), // "None"
QT_MOC_LITERAL(44, 553, 6), // "Preset"
QT_MOC_LITERAL(45, 560, 4), // "Name"
QT_MOC_LITERAL(46, 565, 8), // "Quantity"
QT_MOC_LITERAL(47, 574, 9), // "Precision"
QT_MOC_LITERAL(48, 584, 6), // "Prefix"
QT_MOC_LITERAL(49, 591, 6), // "Suffix"
QT_MOC_LITERAL(50, 598, 7), // "Minimum"
QT_MOC_LITERAL(51, 606, 7), // "Maximum"
QT_MOC_LITERAL(52, 614, 11), // "Coefficient"
QT_MOC_LITERAL(53, 626, 6), // "Offset"
QT_MOC_LITERAL(54, 633, 3) // "All"

    },
    "qMRMLUnitWidget\0nameChanged\0\0"
    "quantityChanged\0prefixChanged\0"
    "suffixChanged\0precisionChanged\0"
    "minimumChanged\0maximumChanged\0"
    "coefficientChanged\0offsetChanged\0"
    "setCurrentNode\0vtkMRMLNode*\0unitNode\0"
    "setName\0setQuantity\0setPrefix\0setSuffix\0"
    "setPrecision\0setMinimum\0setMaximum\0"
    "setCoefficient\0setOffset\0setUnitFromPreset\0"
    "presetNode\0setDisplayedProperties\0"
    "UnitProperties\0properties\0"
    "setEditableProperties\0updateWidgetFromNode\0"
    "currentNode\0name\0quantity\0prefix\0"
    "suffix\0precision\0minimum\0maximum\0"
    "coefficient\0offset\0displayedProperties\0"
    "editableProperties\0UnitProperty\0None\0"
    "Preset\0Name\0Quantity\0Precision\0Prefix\0"
    "Suffix\0Minimum\0Maximum\0Coefficient\0"
    "Offset\0All"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLUnitWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
      11,  202, // properties
       2,  246, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  134,    2, 0x06 /* Public */,
       3,    1,  137,    2, 0x06 /* Public */,
       4,    1,  140,    2, 0x06 /* Public */,
       5,    1,  143,    2, 0x06 /* Public */,
       6,    1,  146,    2, 0x06 /* Public */,
       7,    1,  149,    2, 0x06 /* Public */,
       8,    1,  152,    2, 0x06 /* Public */,
       9,    1,  155,    2, 0x06 /* Public */,
      10,    1,  158,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  161,    2, 0x0a /* Public */,
      14,    1,  164,    2, 0x0a /* Public */,
      15,    1,  167,    2, 0x0a /* Public */,
      16,    1,  170,    2, 0x0a /* Public */,
      17,    1,  173,    2, 0x0a /* Public */,
      18,    1,  176,    2, 0x0a /* Public */,
      19,    1,  179,    2, 0x0a /* Public */,
      20,    1,  182,    2, 0x0a /* Public */,
      21,    1,  185,    2, 0x0a /* Public */,
      22,    1,  188,    2, 0x0a /* Public */,
      23,    1,  191,    2, 0x0a /* Public */,
      25,    1,  194,    2, 0x0a /* Public */,
      28,    1,  197,    2, 0x0a /* Public */,
      29,    0,  200,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      30,    0,  201,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, 0x80000000 | 12,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 12,

 // properties: name, type, flags
      31, QMetaType::QString, 0x00495103,
      32, QMetaType::QString, 0x00495103,
      33, QMetaType::QString, 0x00495103,
      34, QMetaType::QString, 0x00495103,
      35, QMetaType::Int, 0x00495103,
      36, QMetaType::Double, 0x00495103,
      37, QMetaType::Double, 0x00495103,
      38, QMetaType::Double, 0x00495103,
      39, QMetaType::Double, 0x00495103,
      40, 0x80000000 | 26, 0x0009510b,
      41, 0x80000000 | 26, 0x0009510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       0,
       0,

 // enums: name, alias, flags, count, data
      42,   42, 0x1,   12,  256,
      26,   42, 0x1,   12,  280,

 // enum data: key, value
      43, uint(qMRMLUnitWidget::None),
      44, uint(qMRMLUnitWidget::Preset),
      45, uint(qMRMLUnitWidget::Name),
      46, uint(qMRMLUnitWidget::Quantity),
      47, uint(qMRMLUnitWidget::Precision),
      48, uint(qMRMLUnitWidget::Prefix),
      49, uint(qMRMLUnitWidget::Suffix),
      50, uint(qMRMLUnitWidget::Minimum),
      51, uint(qMRMLUnitWidget::Maximum),
      52, uint(qMRMLUnitWidget::Coefficient),
      53, uint(qMRMLUnitWidget::Offset),
      54, uint(qMRMLUnitWidget::All),
      43, uint(qMRMLUnitWidget::None),
      44, uint(qMRMLUnitWidget::Preset),
      45, uint(qMRMLUnitWidget::Name),
      46, uint(qMRMLUnitWidget::Quantity),
      47, uint(qMRMLUnitWidget::Precision),
      48, uint(qMRMLUnitWidget::Prefix),
      49, uint(qMRMLUnitWidget::Suffix),
      50, uint(qMRMLUnitWidget::Minimum),
      51, uint(qMRMLUnitWidget::Maximum),
      52, uint(qMRMLUnitWidget::Coefficient),
      53, uint(qMRMLUnitWidget::Offset),
      54, uint(qMRMLUnitWidget::All),

       0        // eod
};

void qMRMLUnitWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLUnitWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->quantityChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->prefixChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->suffixChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->precisionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->minimumChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->maximumChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->coefficientChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->offsetChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->setCurrentNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 10: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->setQuantity((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->setPrefix((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->setSuffix((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->setPrecision((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setMinimum((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->setMaximum((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->setCoefficient((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->setOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->setUnitFromPreset((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 20: _t->setDisplayedProperties((*reinterpret_cast< UnitProperties(*)>(_a[1]))); break;
        case 21: _t->setEditableProperties((*reinterpret_cast< UnitProperties(*)>(_a[1]))); break;
        case 22: _t->updateWidgetFromNode(); break;
        case 23: { vtkMRMLNode* _r = _t->currentNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLNode**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLUnitWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLUnitWidget::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLUnitWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLUnitWidget::quantityChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qMRMLUnitWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLUnitWidget::prefixChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (qMRMLUnitWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLUnitWidget::suffixChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (qMRMLUnitWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLUnitWidget::precisionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (qMRMLUnitWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLUnitWidget::minimumChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (qMRMLUnitWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLUnitWidget::maximumChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (qMRMLUnitWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLUnitWidget::coefficientChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (qMRMLUnitWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLUnitWidget::offsetChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLUnitWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->quantity(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->prefix(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->suffix(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->precision(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->minimum(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->maximum(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->coefficient(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->offset(); break;
        case 9: *reinterpret_cast<int*>(_v) = QFlag(_t->displayedProperties()); break;
        case 10: *reinterpret_cast<int*>(_v) = QFlag(_t->editableProperties()); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLUnitWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setQuantity(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPrefix(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSuffix(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setPrecision(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setCoefficient(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->setOffset(*reinterpret_cast< double*>(_v)); break;
        case 9: _t->setDisplayedProperties(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 10: _t->setEditableProperties(QFlag(*reinterpret_cast<int*>(_v))); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLUnitWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLUnitWidget.data,
    qt_meta_data_qMRMLUnitWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLUnitWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLUnitWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLUnitWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLUnitWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 24;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qMRMLUnitWidget::nameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLUnitWidget::quantityChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qMRMLUnitWidget::prefixChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qMRMLUnitWidget::suffixChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void qMRMLUnitWidget::precisionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void qMRMLUnitWidget::minimumChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void qMRMLUnitWidget::maximumChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void qMRMLUnitWidget::coefficientChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void qMRMLUnitWidget::offsetChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
