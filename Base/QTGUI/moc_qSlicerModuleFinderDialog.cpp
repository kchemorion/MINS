/****************************************************************************
** Meta object code from reading C++ file 'qSlicerModuleFinderDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerModuleFinderDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerModuleFinderDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerModuleFinderDialog_t {
    QByteArrayData data[19];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerModuleFinderDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerModuleFinderDialog_t qt_meta_stringdata_qSlicerModuleFinderDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "qSlicerModuleFinderDialog"
QT_MOC_LITERAL(1, 26, 17), // "setFactoryManager"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 36), // "qSlicerAbstractModuleFactoryM..."
QT_MOC_LITERAL(4, 82, 7), // "manager"
QT_MOC_LITERAL(5, 90, 24), // "setModuleTitleFilterText"
QT_MOC_LITERAL(6, 115, 4), // "text"
QT_MOC_LITERAL(7, 120, 18), // "setSearchInAllText"
QT_MOC_LITERAL(8, 139, 9), // "searchAll"
QT_MOC_LITERAL(9, 149, 21), // "setShowBuiltInModules"
QT_MOC_LITERAL(10, 171, 4), // "show"
QT_MOC_LITERAL(11, 176, 21), // "setShowTestingModules"
QT_MOC_LITERAL(12, 198, 18), // "onSelectionChanged"
QT_MOC_LITERAL(13, 217, 14), // "QItemSelection"
QT_MOC_LITERAL(14, 232, 8), // "selected"
QT_MOC_LITERAL(15, 241, 10), // "deselected"
QT_MOC_LITERAL(16, 252, 30), // "onModuleTitleFilterTextChanged"
QT_MOC_LITERAL(17, 283, 27), // "setFocusToModuleTitleFilter"
QT_MOC_LITERAL(18, 311, 17) // "currentModuleName"

    },
    "qSlicerModuleFinderDialog\0setFactoryManager\0"
    "\0qSlicerAbstractModuleFactoryManager*\0"
    "manager\0setModuleTitleFilterText\0text\0"
    "setSearchInAllText\0searchAll\0"
    "setShowBuiltInModules\0show\0"
    "setShowTestingModules\0onSelectionChanged\0"
    "QItemSelection\0selected\0deselected\0"
    "onModuleTitleFilterTextChanged\0"
    "setFocusToModuleTitleFilter\0"
    "currentModuleName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerModuleFinderDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       7,    1,   60,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x0a /* Public */,
      11,    1,   66,    2, 0x0a /* Public */,
      12,    2,   69,    2, 0x09 /* Protected */,
      16,    0,   74,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      17,    0,   75,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,   14,   15,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::QString, 0x00095001,

       0        // eod
};

void qSlicerModuleFinderDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerModuleFinderDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setFactoryManager((*reinterpret_cast< qSlicerAbstractModuleFactoryManager*(*)>(_a[1]))); break;
        case 1: _t->setModuleTitleFilterText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setSearchInAllText((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setShowBuiltInModules((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setShowTestingModules((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 6: _t->onModuleTitleFilterTextChanged(); break;
        case 7: _t->setFocusToModuleTitleFilter(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerModuleFinderDialog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentModuleName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerModuleFinderDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qSlicerModuleFinderDialog.data,
    qt_meta_data_qSlicerModuleFinderDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerModuleFinderDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerModuleFinderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerModuleFinderDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qSlicerModuleFinderDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
