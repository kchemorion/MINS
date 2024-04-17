/****************************************************************************
** Meta object code from reading C++ file 'qMRMLMarkupsFiducialProjectionPropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Markups/Widgets/qMRMLMarkupsFiducialProjectionPropertyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLMarkupsFiducialProjectionPropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLMarkupsFiducialProjectionPropertyWidget_t {
    QByteArrayData data[19];
    char stringdata0[373];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLMarkupsFiducialProjectionPropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLMarkupsFiducialProjectionPropertyWidget_t qt_meta_stringdata_qMRMLMarkupsFiducialProjectionPropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 44), // "qMRMLMarkupsFiducialProjectio..."
QT_MOC_LITERAL(1, 45, 18), // "setMRMLMarkupsNode"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 19), // "vtkMRMLMarkupsNode*"
QT_MOC_LITERAL(4, 85, 11), // "markupsNode"
QT_MOC_LITERAL(5, 97, 25), // "setMRMLMarkupsDisplayNode"
QT_MOC_LITERAL(6, 123, 26), // "vtkMRMLMarkupsDisplayNode*"
QT_MOC_LITERAL(7, 150, 18), // "markupsDisplayNode"
QT_MOC_LITERAL(8, 169, 23), // "setProjectionVisibility"
QT_MOC_LITERAL(9, 193, 14), // "showProjection"
QT_MOC_LITERAL(10, 208, 18), // "setProjectionColor"
QT_MOC_LITERAL(11, 227, 8), // "newColor"
QT_MOC_LITERAL(12, 236, 19), // "setUseFiducialColor"
QT_MOC_LITERAL(13, 256, 16), // "useFiducialColor"
QT_MOC_LITERAL(14, 273, 27), // "setOutlinedBehindSlicePlane"
QT_MOC_LITERAL(15, 301, 14), // "outlinedBehind"
QT_MOC_LITERAL(16, 316, 20), // "setProjectionOpacity"
QT_MOC_LITERAL(17, 337, 7), // "opacity"
QT_MOC_LITERAL(18, 345, 27) // "updateWidgetFromDisplayNode"

    },
    "qMRMLMarkupsFiducialProjectionPropertyWidget\0"
    "setMRMLMarkupsNode\0\0vtkMRMLMarkupsNode*\0"
    "markupsNode\0setMRMLMarkupsDisplayNode\0"
    "vtkMRMLMarkupsDisplayNode*\0"
    "markupsDisplayNode\0setProjectionVisibility\0"
    "showProjection\0setProjectionColor\0"
    "newColor\0setUseFiducialColor\0"
    "useFiducialColor\0setOutlinedBehindSlicePlane\0"
    "outlinedBehind\0setProjectionOpacity\0"
    "opacity\0updateWidgetFromDisplayNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLMarkupsFiducialProjectionPropertyWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       8,    1,   60,    2, 0x0a /* Public */,
      10,    1,   63,    2, 0x0a /* Public */,
      12,    1,   66,    2, 0x0a /* Public */,
      14,    1,   69,    2, 0x0a /* Public */,
      16,    1,   72,    2, 0x0a /* Public */,
      18,    0,   75,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QColor,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void,

       0        // eod
};

void qMRMLMarkupsFiducialProjectionPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLMarkupsFiducialProjectionPropertyWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLMarkupsNode((*reinterpret_cast< vtkMRMLMarkupsNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLMarkupsDisplayNode((*reinterpret_cast< vtkMRMLMarkupsDisplayNode*(*)>(_a[1]))); break;
        case 2: _t->setProjectionVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setProjectionColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: _t->setUseFiducialColor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setOutlinedBehindSlicePlane((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setProjectionOpacity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->updateWidgetFromDisplayNode(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLMarkupsFiducialProjectionPropertyWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLMarkupsFiducialProjectionPropertyWidget.data,
    qt_meta_data_qMRMLMarkupsFiducialProjectionPropertyWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLMarkupsFiducialProjectionPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLMarkupsFiducialProjectionPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLMarkupsFiducialProjectionPropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLMarkupsFiducialProjectionPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
