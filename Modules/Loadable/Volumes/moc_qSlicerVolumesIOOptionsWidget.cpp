/****************************************************************************
** Meta object code from reading C++ file 'qSlicerVolumesIOOptionsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/Volumes/qSlicerVolumesIOOptionsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerVolumesIOOptionsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerVolumesIOOptionsWidget_t {
    QByteArrayData data[8];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerVolumesIOOptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerVolumesIOOptionsWidget_t qt_meta_stringdata_qSlicerVolumesIOOptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "qSlicerVolumesIOOptionsWidget"
QT_MOC_LITERAL(1, 30, 11), // "setFileName"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 8), // "fileName"
QT_MOC_LITERAL(4, 52, 12), // "setFileNames"
QT_MOC_LITERAL(5, 65, 9), // "fileNames"
QT_MOC_LITERAL(6, 75, 16), // "updateProperties"
QT_MOC_LITERAL(7, 92, 19) // "updateColorSelector"

    },
    "qSlicerVolumesIOOptionsWidget\0setFileName\0"
    "\0fileName\0setFileNames\0fileNames\0"
    "updateProperties\0updateColorSelector"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerVolumesIOOptionsWidget[] = {

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
       4,    1,   37,    2, 0x0a /* Public */,
       6,    0,   40,    2, 0x09 /* Protected */,
       7,    0,   41,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qSlicerVolumesIOOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerVolumesIOOptionsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setFileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setFileNames((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->updateProperties(); break;
        case 3: _t->updateColorSelector(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerVolumesIOOptionsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerIOOptionsWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerVolumesIOOptionsWidget.data,
    qt_meta_data_qSlicerVolumesIOOptionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerVolumesIOOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerVolumesIOOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerVolumesIOOptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerIOOptionsWidget::qt_metacast(_clname);
}

int qSlicerVolumesIOOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerIOOptionsWidget::qt_metacall(_c, _id, _a);
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
