/****************************************************************************
** Meta object code from reading C++ file 'osm_qSlicerModelsModuleWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "osm_qSlicerModelsModuleWidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osm_qSlicerModelsModuleWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythonQtWrapper_qMRMLModelDisplayNodeWidget_t {
    QByteArrayData data[8];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_qMRMLModelDisplayNodeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_qMRMLModelDisplayNodeWidget_t qt_meta_stringdata_PythonQtWrapper_qMRMLModelDisplayNodeWidget = {
    {
QT_MOC_LITERAL(0, 0, 43), // "PythonQtWrapper_qMRMLModelDis..."
QT_MOC_LITERAL(1, 44, 31), // "new_qMRMLModelDisplayNodeWidget"
QT_MOC_LITERAL(2, 76, 28), // "qMRMLModelDisplayNodeWidget*"
QT_MOC_LITERAL(3, 105, 0), // ""
QT_MOC_LITERAL(4, 106, 8), // "QWidget*"
QT_MOC_LITERAL(5, 115, 6), // "parent"
QT_MOC_LITERAL(6, 122, 34), // "delete_qMRMLModelDisplayNodeW..."
QT_MOC_LITERAL(7, 157, 3) // "obj"

    },
    "PythonQtWrapper_qMRMLModelDisplayNodeWidget\0"
    "new_qMRMLModelDisplayNodeWidget\0"
    "qMRMLModelDisplayNodeWidget*\0\0QWidget*\0"
    "parent\0delete_qMRMLModelDisplayNodeWidget\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_qMRMLModelDisplayNodeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_qMRMLModelDisplayNodeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonQtWrapper_qMRMLModelDisplayNodeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { qMRMLModelDisplayNodeWidget* _r = _t->new_qMRMLModelDisplayNodeWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLModelDisplayNodeWidget**>(_a[0]) = std::move(_r); }  break;
        case 1: { qMRMLModelDisplayNodeWidget* _r = _t->new_qMRMLModelDisplayNodeWidget();
            if (_a[0]) *reinterpret_cast< qMRMLModelDisplayNodeWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->delete_qMRMLModelDisplayNodeWidget((*reinterpret_cast< qMRMLModelDisplayNodeWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLModelDisplayNodeWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythonQtWrapper_qMRMLModelDisplayNodeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PythonQtWrapper_qMRMLModelDisplayNodeWidget.data,
    qt_meta_data_PythonQtWrapper_qMRMLModelDisplayNodeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythonQtWrapper_qMRMLModelDisplayNodeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_qMRMLModelDisplayNodeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_qMRMLModelDisplayNodeWidget.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_qMRMLModelDisplayNodeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
