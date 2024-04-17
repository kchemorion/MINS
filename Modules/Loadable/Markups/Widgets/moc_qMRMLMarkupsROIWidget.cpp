/****************************************************************************
** Meta object code from reading C++ file 'qMRMLMarkupsROIWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Markups/Widgets/qMRMLMarkupsROIWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLMarkupsROIWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLMarkupsROIWidget_t {
    QByteArrayData data[18];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLMarkupsROIWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLMarkupsROIWidget_t qt_meta_stringdata_qMRMLMarkupsROIWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "qMRMLMarkupsROIWidget"
QT_MOC_LITERAL(1, 22, 25), // "displayClippingBoxChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 21), // "setDisplayClippingBox"
QT_MOC_LITERAL(4, 71, 7), // "visible"
QT_MOC_LITERAL(5, 79, 18), // "setInteractiveMode"
QT_MOC_LITERAL(6, 98, 11), // "interactive"
QT_MOC_LITERAL(7, 110, 12), // "setInsideOut"
QT_MOC_LITERAL(8, 123, 9), // "insideOut"
QT_MOC_LITERAL(9, 133, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(10, 154, 18), // "setMRMLMarkupsNode"
QT_MOC_LITERAL(11, 173, 19), // "vtkMRMLMarkupsNode*"
QT_MOC_LITERAL(12, 193, 4), // "node"
QT_MOC_LITERAL(13, 198, 14), // "createInstance"
QT_MOC_LITERAL(14, 213, 34), // "qMRMLMarkupsAbstractOptionsWi..."
QT_MOC_LITERAL(15, 248, 9), // "updateROI"
QT_MOC_LITERAL(16, 258, 25), // "onMRMLDisplayNodeModified"
QT_MOC_LITERAL(17, 284, 25) // "onROITypeParameterChanged"

    },
    "qMRMLMarkupsROIWidget\0displayClippingBoxChanged\0"
    "\0setDisplayClippingBox\0visible\0"
    "setInteractiveMode\0interactive\0"
    "setInsideOut\0insideOut\0updateWidgetFromMRML\0"
    "setMRMLMarkupsNode\0vtkMRMLMarkupsNode*\0"
    "node\0createInstance\0"
    "qMRMLMarkupsAbstractOptionsWidget*\0"
    "updateROI\0onMRMLDisplayNodeModified\0"
    "onROITypeParameterChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLMarkupsROIWidget[] = {

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
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   67,    2, 0x0a /* Public */,
       5,    1,   70,    2, 0x0a /* Public */,
       7,    1,   73,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    1,   77,    2, 0x0a /* Public */,
      13,    0,   80,    2, 0x0a /* Public */,
      15,    0,   81,    2, 0x09 /* Protected */,
      16,    0,   82,    2, 0x09 /* Protected */,
      17,    0,   83,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    0x80000000 | 14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qMRMLMarkupsROIWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLMarkupsROIWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->displayClippingBoxChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setDisplayClippingBox((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setInteractiveMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setInsideOut((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateWidgetFromMRML(); break;
        case 5: _t->setMRMLMarkupsNode((*reinterpret_cast< vtkMRMLMarkupsNode*(*)>(_a[1]))); break;
        case 6: { qMRMLMarkupsAbstractOptionsWidget* _r = _t->createInstance();
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsAbstractOptionsWidget**>(_a[0]) = std::move(_r); }  break;
        case 7: _t->updateROI(); break;
        case 8: _t->onMRMLDisplayNodeModified(); break;
        case 9: _t->onROITypeParameterChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLMarkupsROIWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLMarkupsROIWidget::displayClippingBoxChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLMarkupsROIWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLMarkupsAbstractOptionsWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLMarkupsROIWidget.data,
    qt_meta_data_qMRMLMarkupsROIWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLMarkupsROIWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLMarkupsROIWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLMarkupsROIWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLMarkupsAbstractOptionsWidget::qt_metacast(_clname);
}

int qMRMLMarkupsROIWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLMarkupsAbstractOptionsWidget::qt_metacall(_c, _id, _a);
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
void qMRMLMarkupsROIWidget::displayClippingBoxChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
