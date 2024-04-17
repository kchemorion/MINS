/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSequenceBrowserSeekWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Sequences/Widgets/qMRMLSequenceBrowserSeekWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSequenceBrowserSeekWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSequenceBrowserSeekWidget_t {
    QByteArrayData data[12];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSequenceBrowserSeekWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSequenceBrowserSeekWidget_t qt_meta_stringdata_qMRMLSequenceBrowserSeekWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "qMRMLSequenceBrowserSeekWidget"
QT_MOC_LITERAL(1, 31, 26), // "setMRMLSequenceBrowserNode"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 72, 11), // "browserNode"
QT_MOC_LITERAL(5, 84, 27), // "vtkMRMLSequenceBrowserNode*"
QT_MOC_LITERAL(6, 112, 21), // "setSelectedItemNumber"
QT_MOC_LITERAL(7, 134, 10), // "itemNumber"
QT_MOC_LITERAL(8, 145, 28), // "onIndexDisplayFormatModified"
QT_MOC_LITERAL(9, 174, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(10, 195, 6), // "slider"
QT_MOC_LITERAL(11, 202, 8) // "QSlider*"

    },
    "qMRMLSequenceBrowserSeekWidget\0"
    "setMRMLSequenceBrowserNode\0\0vtkMRMLNode*\0"
    "browserNode\0vtkMRMLSequenceBrowserNode*\0"
    "setSelectedItemNumber\0itemNumber\0"
    "onIndexDisplayFormatModified\0"
    "updateWidgetFromMRML\0slider\0QSlider*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSequenceBrowserSeekWidget[] = {

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
       1,    1,   44,    2, 0x0a /* Public */,
       1,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x0a /* Public */,
       8,    0,   53,    2, 0x09 /* Protected */,
       9,    0,   54,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   55,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 11,

       0        // eod
};

void qMRMLSequenceBrowserSeekWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSequenceBrowserSeekWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLSequenceBrowserNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLSequenceBrowserNode((*reinterpret_cast< vtkMRMLSequenceBrowserNode*(*)>(_a[1]))); break;
        case 2: _t->setSelectedItemNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onIndexDisplayFormatModified(); break;
        case 4: _t->updateWidgetFromMRML(); break;
        case 5: { QSlider* _r = _t->slider();
            if (_a[0]) *reinterpret_cast< QSlider**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSequenceBrowserSeekWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSequenceBrowserSeekWidget.data,
    qt_meta_data_qMRMLSequenceBrowserSeekWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSequenceBrowserSeekWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSequenceBrowserSeekWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSequenceBrowserSeekWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLSequenceBrowserSeekWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
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
