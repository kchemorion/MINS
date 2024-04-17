/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSingletonViewFactory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerSingletonViewFactory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSingletonViewFactory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSingletonViewFactory_t {
    QByteArrayData data[11];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSingletonViewFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSingletonViewFactory_t qt_meta_stringdata_qSlicerSingletonViewFactory = {
    {
QT_MOC_LITERAL(0, 0, 27), // "qSlicerSingletonViewFactory"
QT_MOC_LITERAL(1, 28, 17), // "onWidgetDestroyed"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 9), // "setWidget"
QT_MOC_LITERAL(4, 57, 8), // "QWidget*"
QT_MOC_LITERAL(5, 66, 6), // "widget"
QT_MOC_LITERAL(6, 73, 10), // "setTagName"
QT_MOC_LITERAL(7, 84, 7), // "tagName"
QT_MOC_LITERAL(8, 92, 17), // "createViewFromXML"
QT_MOC_LITERAL(9, 110, 11), // "QDomElement"
QT_MOC_LITERAL(10, 122, 13) // "layoutElement"

    },
    "qSlicerSingletonViewFactory\0"
    "onWidgetDestroyed\0\0setWidget\0QWidget*\0"
    "widget\0setTagName\0tagName\0createViewFromXML\0"
    "QDomElement\0layoutElement"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSingletonViewFactory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x02 /* Public */,
       5,    0,   48,    2, 0x02 /* Public */,
       6,    1,   49,    2, 0x02 /* Public */,
       7,    0,   52,    2, 0x02 /* Public */,
       8,    1,   53,    2, 0x01 /* Protected */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    0x80000000 | 4,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::QString,
    0x80000000 | 4, 0x80000000 | 9,   10,

       0        // eod
};

void qSlicerSingletonViewFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSingletonViewFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onWidgetDestroyed(); break;
        case 1: _t->setWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: { QWidget* _r = _t->widget();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setTagName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: { QString _r = _t->tagName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QWidget* _r = _t->createViewFromXML((*reinterpret_cast< QDomElement(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSingletonViewFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkLayoutViewFactory::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSingletonViewFactory.data,
    qt_meta_data_qSlicerSingletonViewFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSingletonViewFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSingletonViewFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSingletonViewFactory.stringdata0))
        return static_cast<void*>(this);
    return ctkLayoutViewFactory::qt_metacast(_clname);
}

int qSlicerSingletonViewFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkLayoutViewFactory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
