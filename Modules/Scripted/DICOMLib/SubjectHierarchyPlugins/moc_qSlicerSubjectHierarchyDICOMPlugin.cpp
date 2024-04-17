/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSubjectHierarchyDICOMPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Scripted/DICOMLib/SubjectHierarchyPlugins/qSlicerSubjectHierarchyDICOMPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSubjectHierarchyDICOMPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSubjectHierarchyDICOMPlugin_t {
    QByteArrayData data[11];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSubjectHierarchyDICOMPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSubjectHierarchyDICOMPlugin_t qt_meta_stringdata_qSlicerSubjectHierarchyDICOMPlugin = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qSlicerSubjectHierarchyDICOMP..."
QT_MOC_LITERAL(1, 35, 17), // "createSubjectItem"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 32), // "createChildStudyUnderCurrentItem"
QT_MOC_LITERAL(4, 87, 27), // "convertCurrentItemToPatient"
QT_MOC_LITERAL(5, 115, 25), // "convertCurrentItemToStudy"
QT_MOC_LITERAL(6, 141, 21), // "openDICOMExportDialog"
QT_MOC_LITERAL(7, 163, 13), // "roleForPlugin"
QT_MOC_LITERAL(8, 177, 24), // "createDefaultPatientItem"
QT_MOC_LITERAL(9, 202, 9), // "vtkIdType"
QT_MOC_LITERAL(10, 212, 22) // "createDefaultStudyItem"

    },
    "qSlicerSubjectHierarchyDICOMPlugin\0"
    "createSubjectItem\0\0createChildStudyUnderCurrentItem\0"
    "convertCurrentItemToPatient\0"
    "convertCurrentItemToStudy\0"
    "openDICOMExportDialog\0roleForPlugin\0"
    "createDefaultPatientItem\0vtkIdType\0"
    "createDefaultStudyItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSubjectHierarchyDICOMPlugin[] = {

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
       1,    0,   54,    2, 0x09 /* Protected */,
       3,    0,   55,    2, 0x09 /* Protected */,
       4,    0,   56,    2, 0x09 /* Protected */,
       5,    0,   57,    2, 0x09 /* Protected */,
       6,    0,   58,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   59,    2, 0x02 /* Public */,
       8,    0,   60,    2, 0x02 /* Public */,
      10,    0,   61,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString,
    0x80000000 | 9,
    0x80000000 | 9,

       0        // eod
};

void qSlicerSubjectHierarchyDICOMPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSubjectHierarchyDICOMPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createSubjectItem(); break;
        case 1: _t->createChildStudyUnderCurrentItem(); break;
        case 2: _t->convertCurrentItemToPatient(); break;
        case 3: _t->convertCurrentItemToStudy(); break;
        case 4: _t->openDICOMExportDialog(); break;
        case 5: { QString _r = _t->roleForPlugin();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { vtkIdType _r = _t->createDefaultPatientItem();
            if (_a[0]) *reinterpret_cast< vtkIdType*>(_a[0]) = std::move(_r); }  break;
        case 7: { vtkIdType _r = _t->createDefaultStudyItem();
            if (_a[0]) *reinterpret_cast< vtkIdType*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSubjectHierarchyDICOMPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerSubjectHierarchyFolderPlugin::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSubjectHierarchyDICOMPlugin.data,
    qt_meta_data_qSlicerSubjectHierarchyDICOMPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSubjectHierarchyDICOMPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSubjectHierarchyDICOMPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSubjectHierarchyDICOMPlugin.stringdata0))
        return static_cast<void*>(this);
    return qSlicerSubjectHierarchyFolderPlugin::qt_metacast(_clname);
}

int qSlicerSubjectHierarchyDICOMPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerSubjectHierarchyFolderPlugin::qt_metacall(_c, _id, _a);
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
