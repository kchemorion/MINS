/****************************************************************************
** Meta object code from reading C++ file 'qSlicerTransformsModuleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/Transforms/qSlicerTransformsModuleWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerTransformsModuleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerTransformsModuleWidget_t {
    QByteArrayData data[22];
    char stringdata0[354];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerTransformsModuleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerTransformsModuleWidget_t qt_meta_stringdata_qSlicerTransformsModuleWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "qSlicerTransformsModuleWidget"
QT_MOC_LITERAL(1, 30, 8), // "identity"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 6), // "invert"
QT_MOC_LITERAL(4, 47, 5), // "split"
QT_MOC_LITERAL(5, 53, 29), // "onTranslateFirstButtonPressed"
QT_MOC_LITERAL(6, 83, 7), // "checked"
QT_MOC_LITERAL(7, 91, 14), // "onNodeSelected"
QT_MOC_LITERAL(8, 106, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(9, 119, 4), // "node"
QT_MOC_LITERAL(10, 124, 27), // "onMRMLTransformNodeModified"
QT_MOC_LITERAL(11, 152, 10), // "vtkObject*"
QT_MOC_LITERAL(12, 163, 6), // "caller"
QT_MOC_LITERAL(13, 170, 13), // "copyTransform"
QT_MOC_LITERAL(14, 184, 14), // "pasteTransform"
QT_MOC_LITERAL(15, 199, 22), // "transformSelectedNodes"
QT_MOC_LITERAL(16, 222, 24), // "untransformSelectedNodes"
QT_MOC_LITERAL(17, 247, 19), // "hardenSelectedNodes"
QT_MOC_LITERAL(18, 267, 23), // "onDisplaySectionClicked"
QT_MOC_LITERAL(19, 291, 29), // "onTransformableSectionClicked"
QT_MOC_LITERAL(20, 321, 24), // "updateConvertButtonState"
QT_MOC_LITERAL(21, 346, 7) // "convert"

    },
    "qSlicerTransformsModuleWidget\0identity\0"
    "\0invert\0split\0onTranslateFirstButtonPressed\0"
    "checked\0onNodeSelected\0vtkMRMLNode*\0"
    "node\0onMRMLTransformNodeModified\0"
    "vtkObject*\0caller\0copyTransform\0"
    "pasteTransform\0transformSelectedNodes\0"
    "untransformSelectedNodes\0hardenSelectedNodes\0"
    "onDisplaySectionClicked\0"
    "onTransformableSectionClicked\0"
    "updateConvertButtonState\0convert"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerTransformsModuleWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    1,   92,    2, 0x09 /* Protected */,
       7,    1,   95,    2, 0x09 /* Protected */,
      10,    1,   98,    2, 0x09 /* Protected */,
      13,    0,  101,    2, 0x09 /* Protected */,
      14,    0,  102,    2, 0x09 /* Protected */,
      15,    0,  103,    2, 0x09 /* Protected */,
      16,    0,  104,    2, 0x09 /* Protected */,
      17,    0,  105,    2, 0x09 /* Protected */,
      18,    1,  106,    2, 0x09 /* Protected */,
      19,    1,  109,    2, 0x09 /* Protected */,
      20,    0,  112,    2, 0x09 /* Protected */,
      21,    0,  113,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qSlicerTransformsModuleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerTransformsModuleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->identity(); break;
        case 1: _t->invert(); break;
        case 2: _t->split(); break;
        case 3: _t->onTranslateFirstButtonPressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onNodeSelected((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 5: _t->onMRMLTransformNodeModified((*reinterpret_cast< vtkObject*(*)>(_a[1]))); break;
        case 6: _t->copyTransform(); break;
        case 7: _t->pasteTransform(); break;
        case 8: _t->transformSelectedNodes(); break;
        case 9: _t->untransformSelectedNodes(); break;
        case 10: _t->hardenSelectedNodes(); break;
        case 11: _t->onDisplaySectionClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->onTransformableSectionClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->updateConvertButtonState(); break;
        case 14: _t->convert(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerTransformsModuleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerAbstractModuleWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerTransformsModuleWidget.data,
    qt_meta_data_qSlicerTransformsModuleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerTransformsModuleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerTransformsModuleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerTransformsModuleWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerAbstractModuleWidget::qt_metacast(_clname);
}

int qSlicerTransformsModuleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerAbstractModuleWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
