/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSubjectHierarchySettingsPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/SubjectHierarchy/qSlicerSubjectHierarchySettingsPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSubjectHierarchySettingsPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSubjectHierarchySettingsPanel_t {
    QByteArrayData data[8];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSubjectHierarchySettingsPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSubjectHierarchySettingsPanel_t qt_meta_stringdata_qSlicerSubjectHierarchySettingsPanel = {
    {
QT_MOC_LITERAL(0, 0, 36), // "qSlicerSubjectHierarchySettin..."
QT_MOC_LITERAL(1, 37, 44), // "setAutoDeleteSubjectHierarchy..."
QT_MOC_LITERAL(2, 82, 0), // ""
QT_MOC_LITERAL(3, 83, 2), // "on"
QT_MOC_LITERAL(4, 86, 26), // "setDisplayPatientIDEnabled"
QT_MOC_LITERAL(5, 113, 33), // "setDisplayPatientBirthDateEna..."
QT_MOC_LITERAL(6, 147, 24), // "setDisplayStudyIDEnabled"
QT_MOC_LITERAL(7, 172, 26) // "setDisplayStudyDateEnabled"

    },
    "qSlicerSubjectHierarchySettingsPanel\0"
    "setAutoDeleteSubjectHierarchyChildrenEnabled\0"
    "\0on\0setDisplayPatientIDEnabled\0"
    "setDisplayPatientBirthDateEnabled\0"
    "setDisplayStudyIDEnabled\0"
    "setDisplayStudyDateEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSubjectHierarchySettingsPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x09 /* Protected */,
       4,    1,   42,    2, 0x09 /* Protected */,
       5,    1,   45,    2, 0x09 /* Protected */,
       6,    1,   48,    2, 0x09 /* Protected */,
       7,    1,   51,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void qSlicerSubjectHierarchySettingsPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSubjectHierarchySettingsPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setAutoDeleteSubjectHierarchyChildrenEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setDisplayPatientIDEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setDisplayPatientBirthDateEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setDisplayStudyIDEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setDisplayStudyDateEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSubjectHierarchySettingsPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkSettingsPanel::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSubjectHierarchySettingsPanel.data,
    qt_meta_data_qSlicerSubjectHierarchySettingsPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSubjectHierarchySettingsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSubjectHierarchySettingsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSubjectHierarchySettingsPanel.stringdata0))
        return static_cast<void*>(this);
    return ctkSettingsPanel::qt_metacast(_clname);
}

int qSlicerSubjectHierarchySettingsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkSettingsPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
