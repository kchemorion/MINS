/****************************************************************************
** Meta object code from reading C++ file 'qMRMLScalarsDisplayWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLScalarsDisplayWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLScalarsDisplayWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLScalarsDisplayWidget_t {
    QByteArrayData data[29];
    char stringdata0[497];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLScalarsDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLScalarsDisplayWidget_t qt_meta_stringdata_qMRMLScalarsDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "qMRMLScalarsDisplayWidget"
QT_MOC_LITERAL(1, 26, 27), // "scalarRangeModeValueChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 39), // "vtkMRMLDisplayNode::ScalarRan..."
QT_MOC_LITERAL(4, 95, 4), // "mode"
QT_MOC_LITERAL(5, 100, 18), // "displayNodeChanged"
QT_MOC_LITERAL(6, 119, 18), // "setMRMLDisplayNode"
QT_MOC_LITERAL(7, 138, 19), // "vtkMRMLDisplayNode*"
QT_MOC_LITERAL(8, 158, 4), // "node"
QT_MOC_LITERAL(9, 163, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(10, 176, 19), // "setMRMLDisplayNodes"
QT_MOC_LITERAL(11, 196, 26), // "QList<vtkMRMLDisplayNode*>"
QT_MOC_LITERAL(12, 223, 12), // "displayNodes"
QT_MOC_LITERAL(13, 236, 20), // "setScalarsVisibility"
QT_MOC_LITERAL(14, 257, 19), // "setActiveScalarName"
QT_MOC_LITERAL(15, 277, 19), // "setScalarsColorNode"
QT_MOC_LITERAL(16, 297, 17), // "vtkMRMLColorNode*"
QT_MOC_LITERAL(17, 315, 22), // "setScalarsDisplayRange"
QT_MOC_LITERAL(18, 338, 3), // "min"
QT_MOC_LITERAL(19, 342, 3), // "max"
QT_MOC_LITERAL(20, 346, 18), // "setTresholdEnabled"
QT_MOC_LITERAL(21, 365, 1), // "b"
QT_MOC_LITERAL(22, 367, 17), // "setThresholdRange"
QT_MOC_LITERAL(23, 385, 18), // "setScalarRangeMode"
QT_MOC_LITERAL(24, 404, 15), // "scalarRangeMode"
QT_MOC_LITERAL(25, 420, 15), // "setMinimumValue"
QT_MOC_LITERAL(26, 436, 15), // "setMaximumValue"
QT_MOC_LITERAL(27, 452, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(28, 473, 23) // "onCurrentArrayActivated"

    },
    "qMRMLScalarsDisplayWidget\0"
    "scalarRangeModeValueChanged\0\0"
    "vtkMRMLDisplayNode::ScalarRangeFlagType\0"
    "mode\0displayNodeChanged\0setMRMLDisplayNode\0"
    "vtkMRMLDisplayNode*\0node\0vtkMRMLNode*\0"
    "setMRMLDisplayNodes\0QList<vtkMRMLDisplayNode*>\0"
    "displayNodes\0setScalarsVisibility\0"
    "setActiveScalarName\0setScalarsColorNode\0"
    "vtkMRMLColorNode*\0setScalarsDisplayRange\0"
    "min\0max\0setTresholdEnabled\0b\0"
    "setThresholdRange\0setScalarRangeMode\0"
    "scalarRangeMode\0setMinimumValue\0"
    "setMaximumValue\0updateWidgetFromMRML\0"
    "onCurrentArrayActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLScalarsDisplayWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       1,  148, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       5,    0,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  103,    2, 0x0a /* Public */,
       6,    1,  106,    2, 0x0a /* Public */,
      10,    1,  109,    2, 0x0a /* Public */,
      13,    1,  112,    2, 0x0a /* Public */,
      14,    1,  115,    2, 0x0a /* Public */,
      15,    1,  118,    2, 0x0a /* Public */,
      15,    1,  121,    2, 0x0a /* Public */,
      17,    2,  124,    2, 0x0a /* Public */,
      20,    1,  129,    2, 0x0a /* Public */,
      22,    2,  132,    2, 0x0a /* Public */,
      23,    1,  137,    2, 0x0a /* Public */,
      25,    1,  140,    2, 0x0a /* Public */,
      26,    1,  143,    2, 0x0a /* Public */,
      27,    0,  146,    2, 0x09 /* Protected */,
      28,    0,  147,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 9,    8,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   18,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   18,   19,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, QMetaType::Double,   19,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      24, 0x80000000 | 3, 0x0009510b,

       0        // eod
};

void qMRMLScalarsDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLScalarsDisplayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scalarRangeModeValueChanged((*reinterpret_cast< vtkMRMLDisplayNode::ScalarRangeFlagType(*)>(_a[1]))); break;
        case 1: _t->displayNodeChanged(); break;
        case 2: _t->setMRMLDisplayNode((*reinterpret_cast< vtkMRMLDisplayNode*(*)>(_a[1]))); break;
        case 3: _t->setMRMLDisplayNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 4: _t->setMRMLDisplayNodes((*reinterpret_cast< QList<vtkMRMLDisplayNode*>(*)>(_a[1]))); break;
        case 5: _t->setScalarsVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setActiveScalarName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setScalarsColorNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 8: _t->setScalarsColorNode((*reinterpret_cast< vtkMRMLColorNode*(*)>(_a[1]))); break;
        case 9: _t->setScalarsDisplayRange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 10: _t->setTresholdEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setThresholdRange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 12: _t->setScalarRangeMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setMinimumValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->setMaximumValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->updateWidgetFromMRML(); break;
        case 16: _t->onCurrentArrayActivated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLScalarsDisplayWidget::*)(vtkMRMLDisplayNode::ScalarRangeFlagType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLScalarsDisplayWidget::scalarRangeModeValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLScalarsDisplayWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLScalarsDisplayWidget::displayNodeChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLScalarsDisplayWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< vtkMRMLDisplayNode::ScalarRangeFlagType*>(_v) = _t->scalarRangeMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLScalarsDisplayWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setScalarRangeMode(*reinterpret_cast< vtkMRMLDisplayNode::ScalarRangeFlagType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLScalarsDisplayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLScalarsDisplayWidget.data,
    qt_meta_data_qMRMLScalarsDisplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLScalarsDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLScalarsDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLScalarsDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLScalarsDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
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
void qMRMLScalarsDisplayWidget::scalarRangeModeValueChanged(vtkMRMLDisplayNode::ScalarRangeFlagType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLScalarsDisplayWidget::displayNodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
