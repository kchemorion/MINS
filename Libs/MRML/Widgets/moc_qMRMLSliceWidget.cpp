/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSliceWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLSliceWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSliceWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSliceWidget_t {
    QByteArrayData data[52];
    char stringdata0[921];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSliceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSliceWidget_t qt_meta_stringdata_qMRMLSliceWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "qMRMLSliceWidget"
QT_MOC_LITERAL(1, 17, 19), // "nodeAboutToBeEdited"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 51, 4), // "node"
QT_MOC_LITERAL(5, 56, 12), // "setMRMLScene"
QT_MOC_LITERAL(6, 69, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(7, 83, 8), // "newScene"
QT_MOC_LITERAL(8, 92, 16), // "setMRMLSliceNode"
QT_MOC_LITERAL(9, 109, 17), // "vtkMRMLSliceNode*"
QT_MOC_LITERAL(10, 127, 12), // "newSliceNode"
QT_MOC_LITERAL(11, 140, 23), // "setMRMLAbstractViewNode"
QT_MOC_LITERAL(12, 164, 24), // "vtkMRMLAbstractViewNode*"
QT_MOC_LITERAL(13, 189, 22), // "setImageDataConnection"
QT_MOC_LITERAL(14, 212, 19), // "vtkAlgorithmOutput*"
QT_MOC_LITERAL(15, 232, 22), // "newImageDataConnection"
QT_MOC_LITERAL(16, 255, 19), // "setSliceOrientation"
QT_MOC_LITERAL(17, 275, 11), // "orientation"
QT_MOC_LITERAL(18, 287, 20), // "fitSliceToBackground"
QT_MOC_LITERAL(19, 308, 31), // "setSliceOffsetSliderOrientation"
QT_MOC_LITERAL(20, 340, 15), // "Qt::Orientation"
QT_MOC_LITERAL(21, 356, 15), // "sliceController"
QT_MOC_LITERAL(22, 372, 27), // "qMRMLSliceControllerWidget*"
QT_MOC_LITERAL(23, 400, 16), // "controllerWidget"
QT_MOC_LITERAL(24, 417, 23), // "qMRMLViewControllerBar*"
QT_MOC_LITERAL(25, 441, 23), // "sliceVerticalController"
QT_MOC_LITERAL(26, 465, 35), // "qMRMLSliceVerticalControllerW..."
QT_MOC_LITERAL(27, 501, 13), // "mrmlSliceNode"
QT_MOC_LITERAL(28, 515, 20), // "mrmlAbstractViewNode"
QT_MOC_LITERAL(29, 536, 10), // "sliceLogic"
QT_MOC_LITERAL(30, 547, 18), // "vtkMRMLSliceLogic*"
QT_MOC_LITERAL(31, 566, 5), // "logic"
QT_MOC_LITERAL(32, 572, 21), // "vtkMRMLAbstractLogic*"
QT_MOC_LITERAL(33, 594, 16), // "sliceOrientation"
QT_MOC_LITERAL(34, 611, 19), // "imageDataConnection"
QT_MOC_LITERAL(35, 631, 22), // "mrmlSliceCompositeNode"
QT_MOC_LITERAL(36, 654, 26), // "vtkMRMLSliceCompositeNode*"
QT_MOC_LITERAL(37, 681, 15), // "interactorStyle"
QT_MOC_LITERAL(38, 697, 22), // "vtkInteractorObserver*"
QT_MOC_LITERAL(39, 720, 23), // "overlayCornerAnnotation"
QT_MOC_LITERAL(40, 744, 20), // "vtkCornerAnnotation*"
QT_MOC_LITERAL(41, 765, 14), // "setSliceLogics"
QT_MOC_LITERAL(42, 780, 14), // "vtkCollection*"
QT_MOC_LITERAL(43, 795, 6), // "logics"
QT_MOC_LITERAL(44, 802, 9), // "sliceView"
QT_MOC_LITERAL(45, 812, 15), // "qMRMLSliceView*"
QT_MOC_LITERAL(46, 828, 10), // "viewWidget"
QT_MOC_LITERAL(47, 839, 8), // "QWidget*"
QT_MOC_LITERAL(48, 848, 13), // "sliceViewName"
QT_MOC_LITERAL(49, 862, 14), // "sliceViewLabel"
QT_MOC_LITERAL(50, 877, 14), // "sliceViewColor"
QT_MOC_LITERAL(51, 892, 28) // "sliceOffsetSliderOrientation"

    },
    "qMRMLSliceWidget\0nodeAboutToBeEdited\0"
    "\0vtkMRMLNode*\0node\0setMRMLScene\0"
    "vtkMRMLScene*\0newScene\0setMRMLSliceNode\0"
    "vtkMRMLSliceNode*\0newSliceNode\0"
    "setMRMLAbstractViewNode\0"
    "vtkMRMLAbstractViewNode*\0"
    "setImageDataConnection\0vtkAlgorithmOutput*\0"
    "newImageDataConnection\0setSliceOrientation\0"
    "orientation\0fitSliceToBackground\0"
    "setSliceOffsetSliderOrientation\0"
    "Qt::Orientation\0sliceController\0"
    "qMRMLSliceControllerWidget*\0"
    "controllerWidget\0qMRMLViewControllerBar*\0"
    "sliceVerticalController\0"
    "qMRMLSliceVerticalControllerWidget*\0"
    "mrmlSliceNode\0mrmlAbstractViewNode\0"
    "sliceLogic\0vtkMRMLSliceLogic*\0logic\0"
    "vtkMRMLAbstractLogic*\0sliceOrientation\0"
    "imageDataConnection\0mrmlSliceCompositeNode\0"
    "vtkMRMLSliceCompositeNode*\0interactorStyle\0"
    "vtkInteractorObserver*\0overlayCornerAnnotation\0"
    "vtkCornerAnnotation*\0setSliceLogics\0"
    "vtkCollection*\0logics\0sliceView\0"
    "qMRMLSliceView*\0viewWidget\0QWidget*\0"
    "sliceViewName\0sliceViewLabel\0"
    "sliceViewColor\0sliceOffsetSliderOrientation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSliceWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       5,  168, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  132,    2, 0x0a /* Public */,
       8,    1,  135,    2, 0x0a /* Public */,
      11,    1,  138,    2, 0x0a /* Public */,
      13,    1,  141,    2, 0x0a /* Public */,
      16,    1,  144,    2, 0x0a /* Public */,
      18,    0,  147,    2, 0x0a /* Public */,
      19,    1,  148,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      21,    0,  151,    2, 0x02 /* Public */,
      23,    0,  152,    2, 0x02 /* Public */,
      25,    0,  153,    2, 0x02 /* Public */,
      27,    0,  154,    2, 0x02 /* Public */,
      28,    0,  155,    2, 0x02 /* Public */,
      29,    0,  156,    2, 0x02 /* Public */,
      31,    0,  157,    2, 0x02 /* Public */,
      33,    0,  158,    2, 0x02 /* Public */,
      34,    0,  159,    2, 0x02 /* Public */,
      35,    0,  160,    2, 0x02 /* Public */,
      37,    0,  161,    2, 0x02 /* Public */,
      39,    0,  162,    2, 0x02 /* Public */,
      41,    1,  163,    2, 0x02 /* Public */,
      44,    0,  166,    2, 0x02 /* Public */,
      46,    0,  167,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   10,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   17,

 // methods: parameters
    0x80000000 | 22,
    0x80000000 | 24,
    0x80000000 | 26,
    0x80000000 | 9,
    0x80000000 | 12,
    0x80000000 | 30,
    0x80000000 | 32,
    QMetaType::QString,
    0x80000000 | 14,
    0x80000000 | 36,
    0x80000000 | 38,
    0x80000000 | 40,
    QMetaType::Void, 0x80000000 | 42,   43,
    0x80000000 | 45,
    0x80000000 | 47,

 // properties: name, type, flags
      33, QMetaType::QString, 0x00095103,
      48, QMetaType::QString, 0x00095103,
      49, QMetaType::QString, 0x00095103,
      50, QMetaType::QColor, 0x00095103,
      51, 0x80000000 | 20, 0x0009510b,

       0        // eod
};

void qMRMLSliceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSliceWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nodeAboutToBeEdited((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 2: _t->setMRMLSliceNode((*reinterpret_cast< vtkMRMLSliceNode*(*)>(_a[1]))); break;
        case 3: _t->setMRMLAbstractViewNode((*reinterpret_cast< vtkMRMLAbstractViewNode*(*)>(_a[1]))); break;
        case 4: _t->setImageDataConnection((*reinterpret_cast< vtkAlgorithmOutput*(*)>(_a[1]))); break;
        case 5: _t->setSliceOrientation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->fitSliceToBackground(); break;
        case 7: _t->setSliceOffsetSliderOrientation((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 8: { qMRMLSliceControllerWidget* _r = _t->sliceController();
            if (_a[0]) *reinterpret_cast< qMRMLSliceControllerWidget**>(_a[0]) = std::move(_r); }  break;
        case 9: { qMRMLViewControllerBar* _r = _t->controllerWidget();
            if (_a[0]) *reinterpret_cast< qMRMLViewControllerBar**>(_a[0]) = std::move(_r); }  break;
        case 10: { qMRMLSliceVerticalControllerWidget* _r = _t->sliceVerticalController();
            if (_a[0]) *reinterpret_cast< qMRMLSliceVerticalControllerWidget**>(_a[0]) = std::move(_r); }  break;
        case 11: { vtkMRMLSliceNode* _r = _t->mrmlSliceNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLSliceNode**>(_a[0]) = std::move(_r); }  break;
        case 12: { vtkMRMLAbstractViewNode* _r = _t->mrmlAbstractViewNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLAbstractViewNode**>(_a[0]) = std::move(_r); }  break;
        case 13: { vtkMRMLSliceLogic* _r = _t->sliceLogic();
            if (_a[0]) *reinterpret_cast< vtkMRMLSliceLogic**>(_a[0]) = std::move(_r); }  break;
        case 14: { vtkMRMLAbstractLogic* _r = _t->logic();
            if (_a[0]) *reinterpret_cast< vtkMRMLAbstractLogic**>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->sliceOrientation();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { vtkAlgorithmOutput* _r = _t->imageDataConnection();
            if (_a[0]) *reinterpret_cast< vtkAlgorithmOutput**>(_a[0]) = std::move(_r); }  break;
        case 17: { vtkMRMLSliceCompositeNode* _r = _t->mrmlSliceCompositeNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLSliceCompositeNode**>(_a[0]) = std::move(_r); }  break;
        case 18: { vtkInteractorObserver* _r = _t->interactorStyle();
            if (_a[0]) *reinterpret_cast< vtkInteractorObserver**>(_a[0]) = std::move(_r); }  break;
        case 19: { vtkCornerAnnotation* _r = _t->overlayCornerAnnotation();
            if (_a[0]) *reinterpret_cast< vtkCornerAnnotation**>(_a[0]) = std::move(_r); }  break;
        case 20: _t->setSliceLogics((*reinterpret_cast< vtkCollection*(*)>(_a[1]))); break;
        case 21: { qMRMLSliceView* _r = _t->sliceView();
            if (_a[0]) *reinterpret_cast< qMRMLSliceView**>(_a[0]) = std::move(_r); }  break;
        case 22: { QWidget* _r = _t->viewWidget();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLSliceWidget::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSliceWidget::nodeAboutToBeEdited)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSliceWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->sliceOrientation(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->sliceViewName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->sliceViewLabel(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->sliceViewColor(); break;
        case 4: *reinterpret_cast< Qt::Orientation*>(_v) = _t->sliceOffsetSliderOrientation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSliceWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSliceOrientation(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSliceViewName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setSliceViewLabel(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSliceViewColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setSliceOffsetSliderOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSliceWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLAbstractViewWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSliceWidget.data,
    qt_meta_data_qMRMLSliceWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSliceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSliceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSliceWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLAbstractViewWidget::qt_metacast(_clname);
}

int qMRMLSliceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLAbstractViewWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qMRMLSliceWidget::nodeAboutToBeEdited(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
