/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSliceWidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLSliceWidget_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSliceWidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSliceWidgetPrivate_t {
    QByteArrayData data[9];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSliceWidgetPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSliceWidgetPrivate_t qt_meta_stringdata_qMRMLSliceWidgetPrivate = {
    {
QT_MOC_LITERAL(0, 0, 23), // "qMRMLSliceWidgetPrivate"
QT_MOC_LITERAL(1, 24, 16), // "setSliceViewSize"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "size"
QT_MOC_LITERAL(4, 47, 18), // "resetSliceViewSize"
QT_MOC_LITERAL(5, 66, 13), // "endProcessing"
QT_MOC_LITERAL(6, 80, 22), // "setImageDataConnection"
QT_MOC_LITERAL(7, 103, 19), // "vtkAlgorithmOutput*"
QT_MOC_LITERAL(8, 123, 19) // "imageDataConnection"

    },
    "qMRMLSliceWidgetPrivate\0setSliceViewSize\0"
    "\0size\0resetSliceViewSize\0endProcessing\0"
    "setImageDataConnection\0vtkAlgorithmOutput*\0"
    "imageDataConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSliceWidgetPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    0,   37,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    1,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QSize,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void qMRMLSliceWidgetPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSliceWidgetPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setSliceViewSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 1: _t->resetSliceViewSize(); break;
        case 2: _t->endProcessing(); break;
        case 3: _t->setImageDataConnection((*reinterpret_cast< vtkAlgorithmOutput*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSliceWidgetPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSliceWidgetPrivate.data,
    qt_meta_data_qMRMLSliceWidgetPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSliceWidgetPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSliceWidgetPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSliceWidgetPrivate.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_qMRMLSliceWidget"))
        return static_cast< Ui_qMRMLSliceWidget*>(this);
    return QObject::qt_metacast(_clname);
}

int qMRMLSliceWidgetPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
