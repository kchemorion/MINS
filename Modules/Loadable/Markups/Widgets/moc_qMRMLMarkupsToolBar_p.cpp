/****************************************************************************
** Meta object code from reading C++ file 'qMRMLMarkupsToolBar_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Markups/Widgets/qMRMLMarkupsToolBar_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLMarkupsToolBar_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLMarkupsToolBarPrivate_t {
    QByteArrayData data[9];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLMarkupsToolBarPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLMarkupsToolBarPrivate_t qt_meta_stringdata_qMRMLMarkupsToolBarPrivate = {
    {
QT_MOC_LITERAL(0, 0, 26), // "qMRMLMarkupsToolBarPrivate"
QT_MOC_LITERAL(1, 27, 28), // "onMRMLSceneStartBatchProcess"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 26), // "onMRMLSceneEndBatchProcess"
QT_MOC_LITERAL(4, 84, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(5, 105, 38), // "onActivePlaceNodeClassNameCha..."
QT_MOC_LITERAL(6, 144, 37), // "onPlaceNodeClassNameListModif..."
QT_MOC_LITERAL(7, 182, 11), // "onSetModule"
QT_MOC_LITERAL(8, 194, 10) // "moduleName"

    },
    "qMRMLMarkupsToolBarPrivate\0"
    "onMRMLSceneStartBatchProcess\0\0"
    "onMRMLSceneEndBatchProcess\0"
    "updateWidgetFromMRML\0"
    "onActivePlaceNodeClassNameChangedEvent\0"
    "onPlaceNodeClassNameListModifiedEvent\0"
    "onSetModule\0moduleName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLMarkupsToolBarPrivate[] = {

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
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void qMRMLMarkupsToolBarPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLMarkupsToolBarPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onMRMLSceneStartBatchProcess(); break;
        case 1: _t->onMRMLSceneEndBatchProcess(); break;
        case 2: _t->updateWidgetFromMRML(); break;
        case 3: _t->onActivePlaceNodeClassNameChangedEvent(); break;
        case 4: _t->onPlaceNodeClassNameListModifiedEvent(); break;
        case 5: _t->onSetModule((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLMarkupsToolBarPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qMRMLMarkupsToolBarPrivate.data,
    qt_meta_data_qMRMLMarkupsToolBarPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLMarkupsToolBarPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLMarkupsToolBarPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLMarkupsToolBarPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qMRMLMarkupsToolBarPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
