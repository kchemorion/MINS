/****************************************************************************
** Meta object code from reading C++ file 'qSlicerDICOMExportDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Scripted/DICOMLib/Widgets/qSlicerDICOMExportDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerDICOMExportDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerDICOMExportDialog_t {
    QByteArrayData data[18];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerDICOMExportDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerDICOMExportDialog_t qt_meta_stringdata_qSlicerDICOMExportDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "qSlicerDICOMExportDialog"
QT_MOC_LITERAL(1, 25, 20), // "makeDialogSelections"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 20), // "onCurrentItemChanged"
QT_MOC_LITERAL(4, 68, 9), // "vtkIdType"
QT_MOC_LITERAL(5, 78, 6), // "itemID"
QT_MOC_LITERAL(6, 85, 19), // "examineSelectedItem"
QT_MOC_LITERAL(7, 105, 25), // "onExportableSelectedAtRow"
QT_MOC_LITERAL(8, 131, 11), // "onTagEdited"
QT_MOC_LITERAL(9, 143, 8), // "onExport"
QT_MOC_LITERAL(10, 152, 25), // "onSaveTagsCheckBoxToggled"
QT_MOC_LITERAL(11, 178, 31), // "onExportToFolderCheckBoxToggled"
QT_MOC_LITERAL(12, 210, 12), // "setMRMLScene"
QT_MOC_LITERAL(13, 223, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(14, 237, 5), // "scene"
QT_MOC_LITERAL(15, 243, 10), // "execDialog"
QT_MOC_LITERAL(16, 254, 12), // "itemToSelect"
QT_MOC_LITERAL(17, 267, 23) // "showUpdatedDICOMBrowser"

    },
    "qSlicerDICOMExportDialog\0makeDialogSelections\0"
    "\0onCurrentItemChanged\0vtkIdType\0itemID\0"
    "examineSelectedItem\0onExportableSelectedAtRow\0"
    "onTagEdited\0onExport\0onSaveTagsCheckBoxToggled\0"
    "onExportToFolderCheckBoxToggled\0"
    "setMRMLScene\0vtkMRMLScene*\0scene\0"
    "execDialog\0itemToSelect\0showUpdatedDICOMBrowser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerDICOMExportDialog[] = {

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
       1,    0,   74,    2, 0x09 /* Protected */,
       3,    1,   75,    2, 0x09 /* Protected */,
       6,    0,   78,    2, 0x09 /* Protected */,
       7,    1,   79,    2, 0x09 /* Protected */,
       8,    0,   82,    2, 0x09 /* Protected */,
       9,    0,   83,    2, 0x09 /* Protected */,
      10,    1,   84,    2, 0x09 /* Protected */,
      11,    1,   87,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      12,    1,   90,    2, 0x02 /* Public */,
      15,    1,   93,    2, 0x02 /* Public */,
      15,    0,   96,    2, 0x22 /* Public | MethodCloned */,
      17,    0,   97,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Bool, 0x80000000 | 4,   16,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void qSlicerDICOMExportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerDICOMExportDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->makeDialogSelections(); break;
        case 1: _t->onCurrentItemChanged((*reinterpret_cast< vtkIdType(*)>(_a[1]))); break;
        case 2: _t->examineSelectedItem(); break;
        case 3: _t->onExportableSelectedAtRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onTagEdited(); break;
        case 5: _t->onExport(); break;
        case 6: _t->onSaveTagsCheckBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onExportToFolderCheckBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 9: { bool _r = _t->execDialog((*reinterpret_cast< vtkIdType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->execDialog();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->showUpdatedDICOMBrowser(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerDICOMExportDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerDICOMExportDialog.data,
    qt_meta_data_qSlicerDICOMExportDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerDICOMExportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerDICOMExportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerDICOMExportDialog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerDICOMExportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
