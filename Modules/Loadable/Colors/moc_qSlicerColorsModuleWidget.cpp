/****************************************************************************
** Meta object code from reading C++ file 'qSlicerColorsModuleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/Colors/qSlicerColorsModuleWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerColorsModuleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerColorsModuleWidget_t {
    QByteArrayData data[16];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerColorsModuleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerColorsModuleWidget_t qt_meta_stringdata_qSlicerColorsModuleWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "qSlicerColorsModuleWidget"
QT_MOC_LITERAL(1, 26, 19), // "setCurrentColorNode"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 60, 20), // "updateNumberOfColors"
QT_MOC_LITERAL(5, 81, 19), // "setLookupTableRange"
QT_MOC_LITERAL(6, 101, 3), // "min"
QT_MOC_LITERAL(7, 105, 3), // "max"
QT_MOC_LITERAL(8, 109, 20), // "copyCurrentColorNode"
QT_MOC_LITERAL(9, 130, 24), // "onDisplayableNodeChanged"
QT_MOC_LITERAL(10, 155, 17), // "createColorLegend"
QT_MOC_LITERAL(11, 173, 17), // "deleteColorLegend"
QT_MOC_LITERAL(12, 191, 30), // "useCurrentColorsForColorLegend"
QT_MOC_LITERAL(13, 222, 22), // "onMRMLColorNodeChanged"
QT_MOC_LITERAL(14, 245, 12), // "newColorNode"
QT_MOC_LITERAL(15, 258, 25) // "updateColorLegendFromMRML"

    },
    "qSlicerColorsModuleWidget\0setCurrentColorNode\0"
    "\0vtkMRMLNode*\0updateNumberOfColors\0"
    "setLookupTableRange\0min\0max\0"
    "copyCurrentColorNode\0onDisplayableNodeChanged\0"
    "createColorLegend\0deleteColorLegend\0"
    "useCurrentColorsForColorLegend\0"
    "onMRMLColorNodeChanged\0newColorNode\0"
    "updateColorLegendFromMRML"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerColorsModuleWidget[] = {

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
       4,    0,   67,    2, 0x0a /* Public */,
       5,    2,   68,    2, 0x0a /* Public */,
       8,    0,   73,    2, 0x0a /* Public */,
       9,    1,   74,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,
      13,    1,   80,    2, 0x09 /* Protected */,
      15,    0,   83,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   14,
    QMetaType::Void,

       0        // eod
};

void qSlicerColorsModuleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerColorsModuleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setCurrentColorNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->updateNumberOfColors(); break;
        case 2: _t->setLookupTableRange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->copyCurrentColorNode(); break;
        case 4: _t->onDisplayableNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 5: _t->createColorLegend(); break;
        case 6: _t->deleteColorLegend(); break;
        case 7: _t->useCurrentColorsForColorLegend(); break;
        case 8: _t->onMRMLColorNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 9: _t->updateColorLegendFromMRML(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerColorsModuleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerAbstractModuleWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerColorsModuleWidget.data,
    qt_meta_data_qSlicerColorsModuleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerColorsModuleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerColorsModuleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerColorsModuleWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerAbstractModuleWidget::qt_metacast(_clname);
}

int qSlicerColorsModuleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerAbstractModuleWidget::qt_metacall(_c, _id, _a);
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
