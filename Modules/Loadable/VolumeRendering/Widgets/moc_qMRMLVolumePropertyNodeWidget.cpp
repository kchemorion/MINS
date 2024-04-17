/****************************************************************************
** Meta object code from reading C++ file 'qMRMLVolumePropertyNodeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/VolumeRendering/Widgets/qMRMLVolumePropertyNodeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLVolumePropertyNodeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLVolumePropertyNodeWidget_t {
    QByteArrayData data[25];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLVolumePropertyNodeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLVolumePropertyNodeWidget_t qt_meta_stringdata_qMRMLVolumePropertyNodeWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "qMRMLVolumePropertyNodeWidget"
QT_MOC_LITERAL(1, 30, 16), // "thresholdChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 7), // "enabled"
QT_MOC_LITERAL(4, 56, 21), // "volumePropertyChanged"
QT_MOC_LITERAL(5, 78, 19), // "chartsExtentChanged"
QT_MOC_LITERAL(6, 98, 25), // "setMRMLVolumePropertyNode"
QT_MOC_LITERAL(7, 124, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(8, 137, 4), // "node"
QT_MOC_LITERAL(9, 142, 26), // "vtkMRMLVolumePropertyNode*"
QT_MOC_LITERAL(10, 169, 18), // "volumePropertyNode"
QT_MOC_LITERAL(11, 188, 13), // "moveAllPoints"
QT_MOC_LITERAL(12, 202, 1), // "x"
QT_MOC_LITERAL(13, 204, 1), // "y"
QT_MOC_LITERAL(14, 206, 20), // "dontMoveFirstAndLast"
QT_MOC_LITERAL(15, 227, 15), // "spreadAllPoints"
QT_MOC_LITERAL(16, 243, 6), // "factor"
QT_MOC_LITERAL(17, 250, 22), // "dontSpreadFirstAndLast"
QT_MOC_LITERAL(18, 273, 15), // "setChartsExtent"
QT_MOC_LITERAL(19, 289, 9), // "double[2]"
QT_MOC_LITERAL(20, 299, 6), // "extent"
QT_MOC_LITERAL(21, 306, 3), // "min"
QT_MOC_LITERAL(22, 310, 3), // "max"
QT_MOC_LITERAL(23, 314, 28), // "updateFromVolumePropertyNode"
QT_MOC_LITERAL(24, 343, 9) // "threshold"

    },
    "qMRMLVolumePropertyNodeWidget\0"
    "thresholdChanged\0\0enabled\0"
    "volumePropertyChanged\0chartsExtentChanged\0"
    "setMRMLVolumePropertyNode\0vtkMRMLNode*\0"
    "node\0vtkMRMLVolumePropertyNode*\0"
    "volumePropertyNode\0moveAllPoints\0x\0y\0"
    "dontMoveFirstAndLast\0spreadAllPoints\0"
    "factor\0dontSpreadFirstAndLast\0"
    "setChartsExtent\0double[2]\0extent\0min\0"
    "max\0updateFromVolumePropertyNode\0"
    "threshold"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLVolumePropertyNodeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       1,  122, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    0,   82,    2, 0x06 /* Public */,
       5,    0,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   84,    2, 0x0a /* Public */,
       6,    1,   87,    2, 0x0a /* Public */,
      11,    3,   90,    2, 0x0a /* Public */,
      11,    2,   97,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  102,    2, 0x2a /* Public | MethodCloned */,
      15,    2,  105,    2, 0x0a /* Public */,
      15,    1,  110,    2, 0x2a /* Public | MethodCloned */,
      18,    1,  113,    2, 0x0a /* Public */,
      18,    2,  116,    2, 0x0a /* Public */,
      23,    0,  121,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Bool,   12,   13,   14,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   12,   13,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,   16,   17,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   21,   22,
    QMetaType::Void,

 // properties: name, type, flags
      24, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qMRMLVolumePropertyNodeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLVolumePropertyNodeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->thresholdChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->volumePropertyChanged(); break;
        case 2: _t->chartsExtentChanged(); break;
        case 3: _t->setMRMLVolumePropertyNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 4: _t->setMRMLVolumePropertyNode((*reinterpret_cast< vtkMRMLVolumePropertyNode*(*)>(_a[1]))); break;
        case 5: _t->moveAllPoints((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->moveAllPoints((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 7: _t->moveAllPoints((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->spreadAllPoints((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->spreadAllPoints((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->setChartsExtent((*reinterpret_cast< double(*)[2]>(_a[1]))); break;
        case 11: _t->setChartsExtent((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 12: _t->updateFromVolumePropertyNode(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLVolumePropertyNodeWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLVolumePropertyNodeWidget::thresholdChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLVolumePropertyNodeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLVolumePropertyNodeWidget::volumePropertyChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qMRMLVolumePropertyNodeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLVolumePropertyNodeWidget::chartsExtentChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLVolumePropertyNodeWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hasThreshold(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLVolumePropertyNodeWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setThreshold(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLVolumePropertyNodeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLVolumePropertyNodeWidget.data,
    qt_meta_data_qMRMLVolumePropertyNodeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLVolumePropertyNodeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLVolumePropertyNodeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLVolumePropertyNodeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qMRMLVolumePropertyNodeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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
void qMRMLVolumePropertyNodeWidget::thresholdChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLVolumePropertyNodeWidget::volumePropertyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void qMRMLVolumePropertyNodeWidget::chartsExtentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
