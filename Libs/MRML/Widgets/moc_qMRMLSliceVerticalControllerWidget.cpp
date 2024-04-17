/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSliceVerticalControllerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLSliceVerticalControllerWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSliceVerticalControllerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSliceVerticalControllerWidget_t {
    QByteArrayData data[26];
    char stringdata0[408];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSliceVerticalControllerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSliceVerticalControllerWidget_t qt_meta_stringdata_qMRMLSliceVerticalControllerWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qMRMLSliceVerticalControllerW..."
QT_MOC_LITERAL(1, 35, 15), // "renderRequested"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 12), // "setMRMLScene"
QT_MOC_LITERAL(4, 65, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(5, 79, 8), // "newScene"
QT_MOC_LITERAL(6, 88, 16), // "setMRMLSliceNode"
QT_MOC_LITERAL(7, 105, 17), // "vtkMRMLSliceNode*"
QT_MOC_LITERAL(8, 123, 12), // "newSliceNode"
QT_MOC_LITERAL(9, 136, 24), // "setShowSliceOffsetSlider"
QT_MOC_LITERAL(10, 161, 4), // "show"
QT_MOC_LITERAL(11, 166, 19), // "setSliceOffsetValue"
QT_MOC_LITERAL(12, 186, 6), // "offset"
QT_MOC_LITERAL(13, 193, 21), // "trackSliceOffsetValue"
QT_MOC_LITERAL(14, 215, 25), // "onSliceLogicModifiedEvent"
QT_MOC_LITERAL(15, 241, 13), // "mrmlSliceNode"
QT_MOC_LITERAL(16, 255, 19), // "setSliceOffsetRange"
QT_MOC_LITERAL(17, 275, 3), // "min"
QT_MOC_LITERAL(18, 279, 3), // "max"
QT_MOC_LITERAL(19, 283, 10), // "sliceLogic"
QT_MOC_LITERAL(20, 294, 18), // "vtkMRMLSliceLogic*"
QT_MOC_LITERAL(21, 313, 13), // "setSliceLogic"
QT_MOC_LITERAL(22, 327, 13), // "newSliceLogic"
QT_MOC_LITERAL(23, 341, 25), // "sliceVerticalOffsetSlider"
QT_MOC_LITERAL(24, 367, 18), // "qMRMLSliderWidget*"
QT_MOC_LITERAL(25, 386, 21) // "showSliceOffsetSlider"

    },
    "qMRMLSliceVerticalControllerWidget\0"
    "renderRequested\0\0setMRMLScene\0"
    "vtkMRMLScene*\0newScene\0setMRMLSliceNode\0"
    "vtkMRMLSliceNode*\0newSliceNode\0"
    "setShowSliceOffsetSlider\0show\0"
    "setSliceOffsetValue\0offset\0"
    "trackSliceOffsetValue\0onSliceLogicModifiedEvent\0"
    "mrmlSliceNode\0setSliceOffsetRange\0min\0"
    "max\0sliceLogic\0vtkMRMLSliceLogic*\0"
    "setSliceLogic\0newSliceLogic\0"
    "sliceVerticalOffsetSlider\0qMRMLSliderWidget*\0"
    "showSliceOffsetSlider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSliceVerticalControllerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   75,    2, 0x0a /* Public */,
       6,    1,   78,    2, 0x0a /* Public */,
       9,    1,   81,    2, 0x0a /* Public */,
      11,    1,   84,    2, 0x0a /* Public */,
      13,    1,   87,    2, 0x0a /* Public */,
      14,    0,   90,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      15,    0,   91,    2, 0x02 /* Public */,
      16,    2,   92,    2, 0x02 /* Public */,
      19,    0,   97,    2, 0x02 /* Public */,
      21,    1,   98,    2, 0x02 /* Public */,
      23,    0,  101,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 7,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   17,   18,
    0x80000000 | 20,
    QMetaType::Void, 0x80000000 | 20,   22,
    0x80000000 | 24,

 // properties: name, type, flags
      25, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qMRMLSliceVerticalControllerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSliceVerticalControllerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->renderRequested(); break;
        case 1: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 2: _t->setMRMLSliceNode((*reinterpret_cast< vtkMRMLSliceNode*(*)>(_a[1]))); break;
        case 3: _t->setShowSliceOffsetSlider((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setSliceOffsetValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->trackSliceOffsetValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->onSliceLogicModifiedEvent(); break;
        case 7: { vtkMRMLSliceNode* _r = _t->mrmlSliceNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLSliceNode**>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setSliceOffsetRange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 9: { vtkMRMLSliceLogic* _r = _t->sliceLogic();
            if (_a[0]) *reinterpret_cast< vtkMRMLSliceLogic**>(_a[0]) = std::move(_r); }  break;
        case 10: _t->setSliceLogic((*reinterpret_cast< vtkMRMLSliceLogic*(*)>(_a[1]))); break;
        case 11: { qMRMLSliderWidget* _r = _t->sliceVerticalOffsetSlider();
            if (_a[0]) *reinterpret_cast< qMRMLSliderWidget**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLSliceVerticalControllerWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSliceVerticalControllerWidget::renderRequested)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSliceVerticalControllerWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->showSliceOffsetSlider(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSliceVerticalControllerWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShowSliceOffsetSlider(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSliceVerticalControllerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSliceVerticalControllerWidget.data,
    qt_meta_data_qMRMLSliceVerticalControllerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSliceVerticalControllerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSliceVerticalControllerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSliceVerticalControllerWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLSliceVerticalControllerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
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
void qMRMLSliceVerticalControllerWidget::renderRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
