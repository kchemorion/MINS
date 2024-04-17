/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSliceInformationWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLSliceInformationWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSliceInformationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSliceInformationWidget_t {
    QByteArrayData data[22];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSliceInformationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSliceInformationWidget_t qt_meta_stringdata_qMRMLSliceInformationWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "qMRMLSliceInformationWidget"
QT_MOC_LITERAL(1, 28, 16), // "setMRMLSliceNode"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 59, 7), // "newNode"
QT_MOC_LITERAL(5, 67, 17), // "vtkMRMLSliceNode*"
QT_MOC_LITERAL(6, 85, 12), // "newSliceNode"
QT_MOC_LITERAL(7, 98, 19), // "setSliceOrientation"
QT_MOC_LITERAL(8, 118, 11), // "orientation"
QT_MOC_LITERAL(9, 130, 15), // "setSliceVisible"
QT_MOC_LITERAL(10, 146, 7), // "visible"
QT_MOC_LITERAL(11, 154, 16), // "setWidgetVisible"
QT_MOC_LITERAL(12, 171, 12), // "setViewGroup"
QT_MOC_LITERAL(13, 184, 9), // "viewGroup"
QT_MOC_LITERAL(14, 194, 21), // "setLightboxLayoutRows"
QT_MOC_LITERAL(15, 216, 8), // "rowCount"
QT_MOC_LITERAL(16, 225, 24), // "setLightboxLayoutColumns"
QT_MOC_LITERAL(17, 250, 11), // "columnCount"
QT_MOC_LITERAL(18, 262, 19), // "setSliceSpacingMode"
QT_MOC_LITERAL(19, 282, 11), // "spacingMode"
QT_MOC_LITERAL(20, 294, 25), // "setPrescribedSliceSpacing"
QT_MOC_LITERAL(21, 320, 7) // "spacing"

    },
    "qMRMLSliceInformationWidget\0"
    "setMRMLSliceNode\0\0vtkMRMLNode*\0newNode\0"
    "vtkMRMLSliceNode*\0newSliceNode\0"
    "setSliceOrientation\0orientation\0"
    "setSliceVisible\0visible\0setWidgetVisible\0"
    "setViewGroup\0viewGroup\0setLightboxLayoutRows\0"
    "rowCount\0setLightboxLayoutColumns\0"
    "columnCount\0setSliceSpacingMode\0"
    "spacingMode\0setPrescribedSliceSpacing\0"
    "spacing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSliceInformationWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       1,    1,   67,    2, 0x0a /* Public */,
       7,    1,   70,    2, 0x0a /* Public */,
       9,    1,   73,    2, 0x0a /* Public */,
      11,    1,   76,    2, 0x0a /* Public */,
      12,    1,   79,    2, 0x0a /* Public */,
      14,    1,   82,    2, 0x0a /* Public */,
      16,    1,   85,    2, 0x0a /* Public */,
      18,    1,   88,    2, 0x0a /* Public */,
      20,    1,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Double,   21,

       0        // eod
};

void qMRMLSliceInformationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSliceInformationWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLSliceNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLSliceNode((*reinterpret_cast< vtkMRMLSliceNode*(*)>(_a[1]))); break;
        case 2: _t->setSliceOrientation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setSliceVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setWidgetVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setViewGroup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setLightboxLayoutRows((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setLightboxLayoutColumns((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setSliceSpacingMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setPrescribedSliceSpacing((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSliceInformationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSliceInformationWidget.data,
    qt_meta_data_qMRMLSliceInformationWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSliceInformationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSliceInformationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSliceInformationWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLSliceInformationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
