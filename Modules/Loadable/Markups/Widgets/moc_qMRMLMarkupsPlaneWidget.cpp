/****************************************************************************
** Meta object code from reading C++ file 'qMRMLMarkupsPlaneWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Markups/Widgets/qMRMLMarkupsPlaneWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLMarkupsPlaneWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLMarkupsPlaneWidget_t {
    QByteArrayData data[14];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLMarkupsPlaneWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLMarkupsPlaneWidget_t qt_meta_stringdata_qMRMLMarkupsPlaneWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "qMRMLMarkupsPlaneWidget"
QT_MOC_LITERAL(1, 24, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 18), // "setMRMLMarkupsNode"
QT_MOC_LITERAL(4, 65, 19), // "vtkMRMLMarkupsNode*"
QT_MOC_LITERAL(5, 85, 4), // "node"
QT_MOC_LITERAL(6, 90, 14), // "createInstance"
QT_MOC_LITERAL(7, 105, 34), // "qMRMLMarkupsAbstractOptionsWi..."
QT_MOC_LITERAL(8, 140, 23), // "onPlaneTypeIndexChanged"
QT_MOC_LITERAL(9, 164, 27), // "onPlaneSizeModeIndexChanged"
QT_MOC_LITERAL(10, 192, 25), // "onPlaneSizeSpinBoxChanged"
QT_MOC_LITERAL(11, 218, 27), // "onPlaneBoundsSpinBoxChanged"
QT_MOC_LITERAL(12, 246, 33), // "onNormalVisibilityCheckBoxCha..."
QT_MOC_LITERAL(13, 280, 28) // "onNormalOpacitySliderChanged"

    },
    "qMRMLMarkupsPlaneWidget\0updateWidgetFromMRML\0"
    "\0setMRMLMarkupsNode\0vtkMRMLMarkupsNode*\0"
    "node\0createInstance\0"
    "qMRMLMarkupsAbstractOptionsWidget*\0"
    "onPlaneTypeIndexChanged\0"
    "onPlaneSizeModeIndexChanged\0"
    "onPlaneSizeSpinBoxChanged\0"
    "onPlaneBoundsSpinBoxChanged\0"
    "onNormalVisibilityCheckBoxChanged\0"
    "onNormalOpacitySliderChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLMarkupsPlaneWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    1,   60,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       8,    0,   64,    2, 0x09 /* Protected */,
       9,    0,   65,    2, 0x09 /* Protected */,
      10,    0,   66,    2, 0x09 /* Protected */,
      11,    0,   67,    2, 0x09 /* Protected */,
      12,    0,   68,    2, 0x09 /* Protected */,
      13,    0,   69,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    0x80000000 | 7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qMRMLMarkupsPlaneWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLMarkupsPlaneWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateWidgetFromMRML(); break;
        case 1: _t->setMRMLMarkupsNode((*reinterpret_cast< vtkMRMLMarkupsNode*(*)>(_a[1]))); break;
        case 2: { qMRMLMarkupsAbstractOptionsWidget* _r = _t->createInstance();
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsAbstractOptionsWidget**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->onPlaneTypeIndexChanged(); break;
        case 4: _t->onPlaneSizeModeIndexChanged(); break;
        case 5: _t->onPlaneSizeSpinBoxChanged(); break;
        case 6: _t->onPlaneBoundsSpinBoxChanged(); break;
        case 7: _t->onNormalVisibilityCheckBoxChanged(); break;
        case 8: _t->onNormalOpacitySliderChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLMarkupsPlaneWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLMarkupsAbstractOptionsWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLMarkupsPlaneWidget.data,
    qt_meta_data_qMRMLMarkupsPlaneWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLMarkupsPlaneWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLMarkupsPlaneWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLMarkupsPlaneWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLMarkupsAbstractOptionsWidget::qt_metacast(_clname);
}

int qMRMLMarkupsPlaneWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLMarkupsAbstractOptionsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
