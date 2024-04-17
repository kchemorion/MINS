/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSubjectHierarchyFolderPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/SubjectHierarchy/Widgets/qSlicerSubjectHierarchyFolderPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSubjectHierarchyFolderPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSubjectHierarchyFolderPlugin_t {
    QByteArrayData data[11];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSubjectHierarchyFolderPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSubjectHierarchyFolderPlugin_t qt_meta_stringdata_qSlicerSubjectHierarchyFolderPlugin = {
    {
QT_MOC_LITERAL(0, 0, 35), // "qSlicerSubjectHierarchyFolder..."
QT_MOC_LITERAL(1, 36, 22), // "createFolderUnderScene"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 28), // "createFolderUnderCurrentNode"
QT_MOC_LITERAL(4, 89, 27), // "onApplyColorToBranchToggled"
QT_MOC_LITERAL(5, 117, 25), // "onShowEmptyFoldersToggled"
QT_MOC_LITERAL(6, 143, 13), // "roleForPlugin"
QT_MOC_LITERAL(7, 157, 21), // "createFolderUnderItem"
QT_MOC_LITERAL(8, 179, 9), // "vtkIdType"
QT_MOC_LITERAL(9, 189, 12), // "parentItemID"
QT_MOC_LITERAL(10, 202, 22) // "colorItemAttributeName"

    },
    "qSlicerSubjectHierarchyFolderPlugin\0"
    "createFolderUnderScene\0\0"
    "createFolderUnderCurrentNode\0"
    "onApplyColorToBranchToggled\0"
    "onShowEmptyFoldersToggled\0roleForPlugin\0"
    "createFolderUnderItem\0vtkIdType\0"
    "parentItemID\0colorItemAttributeName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSubjectHierarchyFolderPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x09 /* Protected */,
       3,    0,   50,    2, 0x09 /* Protected */,
       4,    1,   51,    2, 0x09 /* Protected */,
       5,    1,   54,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   57,    2, 0x02 /* Public */,
       7,    1,   58,    2, 0x02 /* Public */,
      10,    0,   61,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // methods: parameters
    QMetaType::QString,
    0x80000000 | 8, 0x80000000 | 8,    9,
    QMetaType::QString,

       0        // eod
};

void qSlicerSubjectHierarchyFolderPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSubjectHierarchyFolderPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createFolderUnderScene(); break;
        case 1: _t->createFolderUnderCurrentNode(); break;
        case 2: _t->onApplyColorToBranchToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onShowEmptyFoldersToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { QString _r = _t->roleForPlugin();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { vtkIdType _r = _t->createFolderUnderItem((*reinterpret_cast< vtkIdType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< vtkIdType*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->colorItemAttributeName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSubjectHierarchyFolderPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerSubjectHierarchyAbstractPlugin::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSubjectHierarchyFolderPlugin.data,
    qt_meta_data_qSlicerSubjectHierarchyFolderPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSubjectHierarchyFolderPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSubjectHierarchyFolderPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSubjectHierarchyFolderPlugin.stringdata0))
        return static_cast<void*>(this);
    return qSlicerSubjectHierarchyAbstractPlugin::qt_metacast(_clname);
}

int qSlicerSubjectHierarchyFolderPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerSubjectHierarchyAbstractPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
