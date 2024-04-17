/****************************************************************************
** Meta object code from reading C++ file 'qMRMLClipNodeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLClipNodeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLClipNodeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLClipNodeWidget_t {
    QByteArrayData data[12];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLClipNodeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLClipNodeWidget_t qt_meta_stringdata_qMRMLClipNodeWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "qMRMLClipNodeWidget"
QT_MOC_LITERAL(1, 20, 15), // "setMRMLClipNode"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 22), // "vtkMRMLClipModelsNode*"
QT_MOC_LITERAL(4, 60, 4), // "node"
QT_MOC_LITERAL(5, 65, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 78, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(7, 99, 18), // "updateNodeClipType"
QT_MOC_LITERAL(8, 118, 22), // "updateNodeRedClipState"
QT_MOC_LITERAL(9, 141, 25), // "updateNodeYellowClipState"
QT_MOC_LITERAL(10, 167, 24), // "updateNodeGreenClipState"
QT_MOC_LITERAL(11, 192, 24) // "updateNodeClippingMethod"

    },
    "qMRMLClipNodeWidget\0setMRMLClipNode\0"
    "\0vtkMRMLClipModelsNode*\0node\0vtkMRMLNode*\0"
    "updateWidgetFromMRML\0updateNodeClipType\0"
    "updateNodeRedClipState\0updateNodeYellowClipState\0"
    "updateNodeGreenClipState\0"
    "updateNodeClippingMethod"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLClipNodeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       1,    1,   57,    2, 0x0a /* Public */,
       6,    0,   60,    2, 0x09 /* Protected */,
       7,    0,   61,    2, 0x09 /* Protected */,
       8,    0,   62,    2, 0x09 /* Protected */,
       9,    0,   63,    2, 0x09 /* Protected */,
      10,    0,   64,    2, 0x09 /* Protected */,
      11,    0,   65,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qMRMLClipNodeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLClipNodeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLClipNode((*reinterpret_cast< vtkMRMLClipModelsNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLClipNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->updateWidgetFromMRML(); break;
        case 3: _t->updateNodeClipType(); break;
        case 4: _t->updateNodeRedClipState(); break;
        case 5: _t->updateNodeYellowClipState(); break;
        case 6: _t->updateNodeGreenClipState(); break;
        case 7: _t->updateNodeClippingMethod(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLClipNodeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLClipNodeWidget.data,
    qt_meta_data_qMRMLClipNodeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLClipNodeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLClipNodeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLClipNodeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qMRMLClipNodeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
