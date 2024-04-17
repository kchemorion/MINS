/****************************************************************************
** Meta object code from reading C++ file 'qSlicerModelsModuleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/Models/qSlicerModelsModuleWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerModelsModuleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerModelsModuleWidget_t {
    QByteArrayData data[24];
    char stringdata0[424];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerModelsModuleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerModelsModuleWidget_t qt_meta_stringdata_qSlicerModelsModuleWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "qSlicerModelsModuleWidget"
QT_MOC_LITERAL(1, 26, 12), // "setMRMLScene"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(4, 54, 5), // "scene"
QT_MOC_LITERAL(5, 60, 44), // "setDisplaySelectionFromSubjec..."
QT_MOC_LITERAL(6, 105, 16), // "QList<vtkIdType>"
QT_MOC_LITERAL(7, 122, 7), // "itemIDs"
QT_MOC_LITERAL(8, 130, 36), // "onClippingConfigurationButton..."
QT_MOC_LITERAL(9, 167, 20), // "onDisplayNodeChanged"
QT_MOC_LITERAL(10, 188, 26), // "onClipSelectedModelToggled"
QT_MOC_LITERAL(11, 215, 39), // "onColorLegendCollapsibleGroup..."
QT_MOC_LITERAL(12, 255, 16), // "onMRMLSceneEvent"
QT_MOC_LITERAL(13, 272, 10), // "vtkObject*"
QT_MOC_LITERAL(14, 283, 7), // "vtk_obj"
QT_MOC_LITERAL(15, 291, 5), // "event"
QT_MOC_LITERAL(16, 297, 11), // "client_data"
QT_MOC_LITERAL(17, 309, 9), // "call_data"
QT_MOC_LITERAL(18, 319, 13), // "hideAllModels"
QT_MOC_LITERAL(19, 333, 13), // "showAllModels"
QT_MOC_LITERAL(20, 347, 30), // "onSubjectHierarchyItemModified"
QT_MOC_LITERAL(21, 378, 6), // "caller"
QT_MOC_LITERAL(22, 385, 8), // "callData"
QT_MOC_LITERAL(23, 394, 29) // "onInformationSectionCollapsed"

    },
    "qSlicerModelsModuleWidget\0setMRMLScene\0"
    "\0vtkMRMLScene*\0scene\0"
    "setDisplaySelectionFromSubjectHierarchyItems\0"
    "QList<vtkIdType>\0itemIDs\0"
    "onClippingConfigurationButtonClicked\0"
    "onDisplayNodeChanged\0onClipSelectedModelToggled\0"
    "onColorLegendCollapsibleGroupBoxToggled\0"
    "onMRMLSceneEvent\0vtkObject*\0vtk_obj\0"
    "event\0client_data\0call_data\0hideAllModels\0"
    "showAllModels\0onSubjectHierarchyItemModified\0"
    "caller\0callData\0onInformationSectionCollapsed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerModelsModuleWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       5,    1,   72,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    1,   77,    2, 0x0a /* Public */,
      11,    1,   80,    2, 0x0a /* Public */,
      12,    4,   83,    2, 0x0a /* Public */,
      18,    0,   92,    2, 0x0a /* Public */,
      19,    0,   93,    2, 0x0a /* Public */,
      20,    2,   94,    2, 0x09 /* Protected */,
      23,    1,   99,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 13, QMetaType::ULong, QMetaType::VoidStar, QMetaType::VoidStar,   14,   15,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::VoidStar,   21,   22,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void qSlicerModelsModuleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerModelsModuleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 1: _t->setDisplaySelectionFromSubjectHierarchyItems((*reinterpret_cast< QList<vtkIdType>(*)>(_a[1]))); break;
        case 2: _t->onClippingConfigurationButtonClicked(); break;
        case 3: _t->onDisplayNodeChanged(); break;
        case 4: _t->onClipSelectedModelToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onColorLegendCollapsibleGroupBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onMRMLSceneEvent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 7: _t->hideAllModels(); break;
        case 8: _t->showAllModels(); break;
        case 9: _t->onSubjectHierarchyItemModified((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 10: _t->onInformationSectionCollapsed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerModelsModuleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerAbstractModuleWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerModelsModuleWidget.data,
    qt_meta_data_qSlicerModelsModuleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerModelsModuleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerModelsModuleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerModelsModuleWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerAbstractModuleWidget::qt_metacast(_clname);
}

int qSlicerModelsModuleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerAbstractModuleWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
