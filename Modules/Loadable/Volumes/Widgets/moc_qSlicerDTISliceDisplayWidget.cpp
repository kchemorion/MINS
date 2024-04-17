/****************************************************************************
** Meta object code from reading C++ file 'qSlicerDTISliceDisplayWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Volumes/Widgets/qSlicerDTISliceDisplayWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerDTISliceDisplayWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerDTISliceDisplayWidget_t {
    QByteArrayData data[19];
    char stringdata0[338];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerDTISliceDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerDTISliceDisplayWidget_t qt_meta_stringdata_qSlicerDTISliceDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "qSlicerDTISliceDisplayWidget"
QT_MOC_LITERAL(1, 29, 26), // "setMRMLDTISliceDisplayNode"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 45), // "vtkMRMLDiffusionTensorVolumeS..."
QT_MOC_LITERAL(4, 103, 11), // "displayNode"
QT_MOC_LITERAL(5, 115, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 128, 15), // "setColorGlyphBy"
QT_MOC_LITERAL(7, 144, 11), // "setColorMap"
QT_MOC_LITERAL(8, 156, 9), // "colorNode"
QT_MOC_LITERAL(9, 166, 10), // "setOpacity"
QT_MOC_LITERAL(10, 177, 13), // "setVisibility"
QT_MOC_LITERAL(11, 191, 20), // "setManualScalarRange"
QT_MOC_LITERAL(12, 212, 14), // "setScalarRange"
QT_MOC_LITERAL(13, 227, 16), // "setGlyphGeometry"
QT_MOC_LITERAL(14, 244, 19), // "setGlyphScaleFactor"
QT_MOC_LITERAL(15, 264, 15), // "setGlyphSpacing"
QT_MOC_LITERAL(16, 280, 19), // "setGlyphEigenVector"
QT_MOC_LITERAL(17, 300, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(18, 321, 16) // "visibilityHidden"

    },
    "qSlicerDTISliceDisplayWidget\0"
    "setMRMLDTISliceDisplayNode\0\0"
    "vtkMRMLDiffusionTensorVolumeSliceDisplayNode*\0"
    "displayNode\0vtkMRMLNode*\0setColorGlyphBy\0"
    "setColorMap\0colorNode\0setOpacity\0"
    "setVisibility\0setManualScalarRange\0"
    "setScalarRange\0setGlyphGeometry\0"
    "setGlyphScaleFactor\0setGlyphSpacing\0"
    "setGlyphEigenVector\0updateWidgetFromMRML\0"
    "visibilityHidden"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerDTISliceDisplayWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       1,  118, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       1,    1,   82,    2, 0x0a /* Public */,
       6,    1,   85,    2, 0x0a /* Public */,
       7,    1,   88,    2, 0x0a /* Public */,
       9,    1,   91,    2, 0x0a /* Public */,
      10,    1,   94,    2, 0x0a /* Public */,
      11,    1,   97,    2, 0x0a /* Public */,
      12,    2,  100,    2, 0x0a /* Public */,
      13,    1,  105,    2, 0x0a /* Public */,
      14,    1,  108,    2, 0x0a /* Public */,
      15,    1,  111,    2, 0x0a /* Public */,
      16,    1,  114,    2, 0x0a /* Public */,
      17,    0,  117,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    4,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 5,    8,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qSlicerDTISliceDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerDTISliceDisplayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLDTISliceDisplayNode((*reinterpret_cast< vtkMRMLDiffusionTensorVolumeSliceDisplayNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLDTISliceDisplayNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->setColorGlyphBy((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setColorMap((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 4: _t->setOpacity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setManualScalarRange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setScalarRange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 8: _t->setGlyphGeometry((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setGlyphScaleFactor((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->setGlyphSpacing((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->setGlyphEigenVector((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->updateWidgetFromMRML(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerDTISliceDisplayWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isVisibilityHidden(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerDTISliceDisplayWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVisibilityHidden(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerDTISliceDisplayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerDTISliceDisplayWidget.data,
    qt_meta_data_qSlicerDTISliceDisplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerDTISliceDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerDTISliceDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerDTISliceDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerWidget::qt_metacast(_clname);
}

int qSlicerDTISliceDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
