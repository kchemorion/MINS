/****************************************************************************
** Meta object code from reading C++ file 'qMRMLViewControllerBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLViewControllerBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLViewControllerBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLViewControllerBar_t {
    QByteArrayData data[18];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLViewControllerBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLViewControllerBar_t qt_meta_stringdata_qMRMLViewControllerBar = {
    {
QT_MOC_LITERAL(0, 0, 22), // "qMRMLViewControllerBar"
QT_MOC_LITERAL(1, 23, 12), // "maximizeView"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 25), // "setShowMaximizeViewButton"
QT_MOC_LITERAL(4, 63, 4), // "show"
QT_MOC_LITERAL(5, 68, 24), // "updateWidgetFromMRMLView"
QT_MOC_LITERAL(6, 93, 17), // "setLayoutBehavior"
QT_MOC_LITERAL(7, 111, 14), // "LayoutBehavior"
QT_MOC_LITERAL(8, 126, 8), // "behavior"
QT_MOC_LITERAL(9, 135, 9), // "barLayout"
QT_MOC_LITERAL(10, 145, 8), // "QLayout*"
QT_MOC_LITERAL(11, 154, 9), // "barWidget"
QT_MOC_LITERAL(12, 164, 8), // "QWidget*"
QT_MOC_LITERAL(13, 173, 9), // "pinButton"
QT_MOC_LITERAL(14, 183, 12), // "QToolButton*"
QT_MOC_LITERAL(15, 196, 9), // "viewLabel"
QT_MOC_LITERAL(16, 206, 7), // "QLabel*"
QT_MOC_LITERAL(17, 214, 22) // "showMaximizeViewButton"

    },
    "qMRMLViewControllerBar\0maximizeView\0"
    "\0setShowMaximizeViewButton\0show\0"
    "updateWidgetFromMRMLView\0setLayoutBehavior\0"
    "LayoutBehavior\0behavior\0barLayout\0"
    "QLayout*\0barWidget\0QWidget*\0pinButton\0"
    "QToolButton*\0viewLabel\0QLabel*\0"
    "showMaximizeViewButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLViewControllerBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    1,   55,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   59,    2, 0x02 /* Public */,
       9,    0,   62,    2, 0x02 /* Public */,
      11,    0,   63,    2, 0x02 /* Public */,
      13,    0,   64,    2, 0x02 /* Public */,
      15,    0,   65,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    0x80000000 | 10,
    0x80000000 | 12,
    0x80000000 | 14,
    0x80000000 | 16,

 // properties: name, type, flags
      17, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qMRMLViewControllerBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLViewControllerBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->maximizeView(); break;
        case 1: _t->setShowMaximizeViewButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateWidgetFromMRMLView(); break;
        case 3: _t->setLayoutBehavior((*reinterpret_cast< LayoutBehavior(*)>(_a[1]))); break;
        case 4: { QLayout* _r = _t->barLayout();
            if (_a[0]) *reinterpret_cast< QLayout**>(_a[0]) = std::move(_r); }  break;
        case 5: { QWidget* _r = _t->barWidget();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        case 6: { QToolButton* _r = _t->pinButton();
            if (_a[0]) *reinterpret_cast< QToolButton**>(_a[0]) = std::move(_r); }  break;
        case 7: { QLabel* _r = _t->viewLabel();
            if (_a[0]) *reinterpret_cast< QLabel**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLViewControllerBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->showMaximizeViewButton(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLViewControllerBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShowMaximizeViewButton(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLViewControllerBar::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLViewControllerBar.data,
    qt_meta_data_qMRMLViewControllerBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLViewControllerBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLViewControllerBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLViewControllerBar.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLViewControllerBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
