/****************************************************************************
** Meta object code from reading C++ file 'qSlicerDataModuleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/Data/qSlicerDataModuleWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerDataModuleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerDataModuleWidget_t {
    QByteArrayData data[23];
    char stringdata0[428];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerDataModuleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerDataModuleWidget_t qt_meta_stringdata_qSlicerDataModuleWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "qSlicerDataModuleWidget"
QT_MOC_LITERAL(1, 24, 12), // "setMRMLScene"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(4, 52, 5), // "scene"
QT_MOC_LITERAL(5, 58, 17), // "setMRMLIDsVisible"
QT_MOC_LITERAL(6, 76, 7), // "visible"
QT_MOC_LITERAL(7, 84, 20), // "setTransformsVisible"
QT_MOC_LITERAL(8, 105, 35), // "setDataNodeFromSubjectHierarc..."
QT_MOC_LITERAL(9, 141, 9), // "vtkIdType"
QT_MOC_LITERAL(10, 151, 6), // "itemID"
QT_MOC_LITERAL(11, 158, 36), // "setInfoLabelFromSubjectHierar..."
QT_MOC_LITERAL(12, 195, 30), // "onSubjectHierarchyItemModified"
QT_MOC_LITERAL(13, 226, 19), // "insertTransformNode"
QT_MOC_LITERAL(14, 246, 28), // "hardenTransformOnCurrentNode"
QT_MOC_LITERAL(15, 275, 20), // "onCurrentNodeChanged"
QT_MOC_LITERAL(16, 296, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(17, 309, 14), // "newCurrentNode"
QT_MOC_LITERAL(18, 324, 19), // "onCurrentTabChanged"
QT_MOC_LITERAL(19, 344, 8), // "tabIndex"
QT_MOC_LITERAL(20, 353, 19), // "onHelpButtonClicked"
QT_MOC_LITERAL(21, 373, 26), // "subjectHierarchySceneModel"
QT_MOC_LITERAL(22, 400, 27) // "qMRMLSubjectHierarchyModel*"

    },
    "qSlicerDataModuleWidget\0setMRMLScene\0"
    "\0vtkMRMLScene*\0scene\0setMRMLIDsVisible\0"
    "visible\0setTransformsVisible\0"
    "setDataNodeFromSubjectHierarchyItem\0"
    "vtkIdType\0itemID\0setInfoLabelFromSubjectHierarchyItem\0"
    "onSubjectHierarchyItemModified\0"
    "insertTransformNode\0hardenTransformOnCurrentNode\0"
    "onCurrentNodeChanged\0vtkMRMLNode*\0"
    "newCurrentNode\0onCurrentTabChanged\0"
    "tabIndex\0onHelpButtonClicked\0"
    "subjectHierarchySceneModel\0"
    "qMRMLSubjectHierarchyModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerDataModuleWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       5,    1,   77,    2, 0x0a /* Public */,
       7,    1,   80,    2, 0x0a /* Public */,
       8,    1,   83,    2, 0x0a /* Public */,
      11,    1,   86,    2, 0x0a /* Public */,
      12,    1,   89,    2, 0x0a /* Public */,
      13,    0,   92,    2, 0x0a /* Public */,
      14,    0,   93,    2, 0x0a /* Public */,
      15,    1,   94,    2, 0x09 /* Protected */,
      18,    1,   97,    2, 0x09 /* Protected */,
      20,    0,  100,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      21,    0,  101,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 22,

       0        // eod
};

void qSlicerDataModuleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerDataModuleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 1: _t->setMRMLIDsVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setTransformsVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setDataNodeFromSubjectHierarchyItem((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 4: _t->setInfoLabelFromSubjectHierarchyItem((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 5: _t->onSubjectHierarchyItemModified((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 6: _t->insertTransformNode(); break;
        case 7: _t->hardenTransformOnCurrentNode(); break;
        case 8: _t->onCurrentNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 9: _t->onCurrentTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->onHelpButtonClicked(); break;
        case 11: { qMRMLSubjectHierarchyModel* _r = _t->subjectHierarchySceneModel();
            if (_a[0]) *reinterpret_cast< qMRMLSubjectHierarchyModel**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerDataModuleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerAbstractModuleWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerDataModuleWidget.data,
    qt_meta_data_qSlicerDataModuleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerDataModuleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerDataModuleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerDataModuleWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerAbstractModuleWidget::qt_metacast(_clname);
}

int qSlicerDataModuleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerAbstractModuleWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
