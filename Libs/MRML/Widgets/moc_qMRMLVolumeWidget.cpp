/****************************************************************************
** Meta object code from reading C++ file 'qMRMLVolumeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLVolumeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLVolumeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLVolumeWidget_t {
    QByteArrayData data[10];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLVolumeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLVolumeWidget_t qt_meta_stringdata_qMRMLVolumeWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "qMRMLVolumeWidget"
QT_MOC_LITERAL(1, 18, 17), // "setMRMLVolumeNode"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 24), // "vtkMRMLScalarVolumeNode*"
QT_MOC_LITERAL(4, 62, 11), // "displayNode"
QT_MOC_LITERAL(5, 74, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 87, 4), // "node"
QT_MOC_LITERAL(7, 92, 30), // "updateWidgetFromMRMLVolumeNode"
QT_MOC_LITERAL(8, 123, 31), // "updateWidgetFromMRMLDisplayNode"
QT_MOC_LITERAL(9, 155, 14) // "mrmlVolumeNode"

    },
    "qMRMLVolumeWidget\0setMRMLVolumeNode\0"
    "\0vtkMRMLScalarVolumeNode*\0displayNode\0"
    "vtkMRMLNode*\0node\0updateWidgetFromMRMLVolumeNode\0"
    "updateWidgetFromMRMLDisplayNode\0"
    "mrmlVolumeNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLVolumeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       1,    1,   42,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x09 /* Protected */,
       8,    0,   46,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   47,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 3,

       0        // eod
};

void qMRMLVolumeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLVolumeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLVolumeNode((*reinterpret_cast< vtkMRMLScalarVolumeNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLVolumeNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->updateWidgetFromMRMLVolumeNode(); break;
        case 3: _t->updateWidgetFromMRMLDisplayNode(); break;
        case 4: { vtkMRMLScalarVolumeNode* _r = _t->mrmlVolumeNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLScalarVolumeNode**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLVolumeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLVolumeWidget.data,
    qt_meta_data_qMRMLVolumeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLVolumeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLVolumeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLVolumeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qMRMLVolumeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
