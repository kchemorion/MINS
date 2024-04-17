/****************************************************************************
** Meta object code from reading C++ file 'qMRMLAbstractViewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLAbstractViewWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLAbstractViewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLAbstractViewWidget_t {
    QByteArrayData data[22];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLAbstractViewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLAbstractViewWidget_t qt_meta_stringdata_qMRMLAbstractViewWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "qMRMLAbstractViewWidget"
QT_MOC_LITERAL(1, 24, 23), // "setMRMLAbstractViewNode"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 24), // "vtkMRMLAbstractViewNode*"
QT_MOC_LITERAL(4, 74, 11), // "newViewNode"
QT_MOC_LITERAL(5, 86, 15), // "setRenderPaused"
QT_MOC_LITERAL(6, 102, 5), // "pause"
QT_MOC_LITERAL(7, 108, 11), // "pauseRender"
QT_MOC_LITERAL(8, 120, 12), // "resumeRender"
QT_MOC_LITERAL(9, 133, 16), // "controllerWidget"
QT_MOC_LITERAL(10, 150, 23), // "qMRMLViewControllerBar*"
QT_MOC_LITERAL(11, 174, 20), // "mrmlAbstractViewNode"
QT_MOC_LITERAL(12, 195, 5), // "logic"
QT_MOC_LITERAL(13, 201, 21), // "vtkMRMLAbstractLogic*"
QT_MOC_LITERAL(14, 223, 10), // "viewWidget"
QT_MOC_LITERAL(15, 234, 8), // "QWidget*"
QT_MOC_LITERAL(16, 243, 9), // "viewLabel"
QT_MOC_LITERAL(17, 253, 12), // "setViewLabel"
QT_MOC_LITERAL(18, 266, 12), // "newViewLabel"
QT_MOC_LITERAL(19, 279, 9), // "viewColor"
QT_MOC_LITERAL(20, 289, 12), // "setViewColor"
QT_MOC_LITERAL(21, 302, 12) // "newViewColor"

    },
    "qMRMLAbstractViewWidget\0setMRMLAbstractViewNode\0"
    "\0vtkMRMLAbstractViewNode*\0newViewNode\0"
    "setRenderPaused\0pause\0pauseRender\0"
    "resumeRender\0controllerWidget\0"
    "qMRMLViewControllerBar*\0mrmlAbstractViewNode\0"
    "logic\0vtkMRMLAbstractLogic*\0viewWidget\0"
    "QWidget*\0viewLabel\0setViewLabel\0"
    "newViewLabel\0viewColor\0setViewColor\0"
    "newViewColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLAbstractViewWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       2,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       5,    1,   77,    2, 0x0a /* Public */,
       7,    0,   80,    2, 0x0a /* Public */,
       8,    0,   81,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   82,    2, 0x02 /* Public */,
      11,    0,   83,    2, 0x02 /* Public */,
      12,    0,   84,    2, 0x02 /* Public */,
      14,    0,   85,    2, 0x02 /* Public */,
      16,    0,   86,    2, 0x02 /* Public */,
      17,    1,   87,    2, 0x02 /* Public */,
      19,    0,   90,    2, 0x02 /* Public */,
      20,    1,   91,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 10,
    0x80000000 | 3,
    0x80000000 | 13,
    0x80000000 | 15,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::QColor,
    QMetaType::Void, QMetaType::QColor,   21,

 // properties: name, type, flags
      16, QMetaType::QString, 0x00095103,
      19, QMetaType::QColor, 0x00095103,

       0        // eod
};

void qMRMLAbstractViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLAbstractViewWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLAbstractViewNode((*reinterpret_cast< vtkMRMLAbstractViewNode*(*)>(_a[1]))); break;
        case 1: _t->setRenderPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->pauseRender(); break;
        case 3: _t->resumeRender(); break;
        case 4: { qMRMLViewControllerBar* _r = _t->controllerWidget();
            if (_a[0]) *reinterpret_cast< qMRMLViewControllerBar**>(_a[0]) = std::move(_r); }  break;
        case 5: { vtkMRMLAbstractViewNode* _r = _t->mrmlAbstractViewNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLAbstractViewNode**>(_a[0]) = std::move(_r); }  break;
        case 6: { vtkMRMLAbstractLogic* _r = _t->logic();
            if (_a[0]) *reinterpret_cast< vtkMRMLAbstractLogic**>(_a[0]) = std::move(_r); }  break;
        case 7: { QWidget* _r = _t->viewWidget();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->viewLabel();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setViewLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: { QColor _r = _t->viewColor();
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setViewColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLAbstractViewWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->viewLabel(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->viewColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLAbstractViewWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setViewLabel(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setViewColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLAbstractViewWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLAbstractViewWidget.data,
    qt_meta_data_qMRMLAbstractViewWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLAbstractViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLAbstractViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLAbstractViewWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLAbstractViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
