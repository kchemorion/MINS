/****************************************************************************
** Meta object code from reading C++ file 'qMRMLVolumeInfoWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLVolumeInfoWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLVolumeInfoWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLVolumeInfoWidget_t {
    QByteArrayData data[19];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLVolumeInfoWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLVolumeInfoWidget_t qt_meta_stringdata_qMRMLVolumeInfoWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "qMRMLVolumeInfoWidget"
QT_MOC_LITERAL(1, 22, 13), // "setVolumeNode"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 50, 4), // "node"
QT_MOC_LITERAL(5, 55, 18), // "vtkMRMLVolumeNode*"
QT_MOC_LITERAL(6, 74, 19), // "setDataTypeEditable"
QT_MOC_LITERAL(7, 94, 6), // "enable"
QT_MOC_LITERAL(8, 101, 15), // "setImageSpacing"
QT_MOC_LITERAL(9, 117, 7), // "double*"
QT_MOC_LITERAL(10, 125, 14), // "setImageOrigin"
QT_MOC_LITERAL(11, 140, 6), // "center"
QT_MOC_LITERAL(12, 147, 12), // "setScanOrder"
QT_MOC_LITERAL(13, 160, 18), // "setNumberOfScalars"
QT_MOC_LITERAL(14, 179, 13), // "setScalarType"
QT_MOC_LITERAL(15, 193, 24), // "setWindowLevelFromPreset"
QT_MOC_LITERAL(16, 218, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(17, 235, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(18, 256, 16) // "dataTypeEditable"

    },
    "qMRMLVolumeInfoWidget\0setVolumeNode\0"
    "\0vtkMRMLNode*\0node\0vtkMRMLVolumeNode*\0"
    "setDataTypeEditable\0enable\0setImageSpacing\0"
    "double*\0setImageOrigin\0center\0"
    "setScanOrder\0setNumberOfScalars\0"
    "setScalarType\0setWindowLevelFromPreset\0"
    "QListWidgetItem*\0updateWidgetFromMRML\0"
    "dataTypeEditable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLVolumeInfoWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       1,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       1,    1,   72,    2, 0x0a /* Public */,
       6,    1,   75,    2, 0x0a /* Public */,
       8,    1,   78,    2, 0x0a /* Public */,
      10,    1,   81,    2, 0x0a /* Public */,
      11,    0,   84,    2, 0x0a /* Public */,
      12,    1,   85,    2, 0x0a /* Public */,
      13,    1,   88,    2, 0x0a /* Public */,
      14,    1,   91,    2, 0x0a /* Public */,
      15,    1,   94,    2, 0x0a /* Public */,
      17,    0,   97,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qMRMLVolumeInfoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLVolumeInfoWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setVolumeNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->setVolumeNode((*reinterpret_cast< vtkMRMLVolumeNode*(*)>(_a[1]))); break;
        case 2: _t->setDataTypeEditable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setImageSpacing((*reinterpret_cast< double*(*)>(_a[1]))); break;
        case 4: _t->setImageOrigin((*reinterpret_cast< double*(*)>(_a[1]))); break;
        case 5: _t->center(); break;
        case 6: _t->setScanOrder((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setNumberOfScalars((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setScalarType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setWindowLevelFromPreset((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->updateWidgetFromMRML(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLVolumeInfoWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isDataTypeEditable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLVolumeInfoWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDataTypeEditable(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLVolumeInfoWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLVolumeInfoWidget.data,
    qt_meta_data_qMRMLVolumeInfoWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLVolumeInfoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLVolumeInfoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLVolumeInfoWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLVolumeInfoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
