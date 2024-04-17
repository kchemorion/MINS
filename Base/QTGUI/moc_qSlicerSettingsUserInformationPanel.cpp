/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSettingsUserInformationPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerSettingsUserInformationPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSettingsUserInformationPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSettingsUserInformationPanel_t {
    QByteArrayData data[15];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSettingsUserInformationPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSettingsUserInformationPanel_t qt_meta_stringdata_qSlicerSettingsUserInformationPanel = {
    {
QT_MOC_LITERAL(0, 0, 35), // "qSlicerSettingsUserInformatio..."
QT_MOC_LITERAL(1, 36, 13), // "resetSettings"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 13), // "applySettings"
QT_MOC_LITERAL(4, 65, 25), // "updateFromUserInformation"
QT_MOC_LITERAL(5, 91, 13), // "onNameChanged"
QT_MOC_LITERAL(6, 105, 14), // "onLoginChanged"
QT_MOC_LITERAL(7, 120, 14), // "onEmailChanged"
QT_MOC_LITERAL(8, 135, 5), // "value"
QT_MOC_LITERAL(9, 141, 21), // "onOrganizationChanged"
QT_MOC_LITERAL(10, 163, 25), // "onOrganizationRoleChanged"
QT_MOC_LITERAL(11, 189, 22), // "onProcedureRoleChanged"
QT_MOC_LITERAL(12, 212, 18), // "setUserInformation"
QT_MOC_LITERAL(13, 231, 21), // "vtkPersonInformation*"
QT_MOC_LITERAL(14, 253, 8) // "userInfo"

    },
    "qSlicerSettingsUserInformationPanel\0"
    "resetSettings\0\0applySettings\0"
    "updateFromUserInformation\0onNameChanged\0"
    "onLoginChanged\0onEmailChanged\0value\0"
    "onOrganizationChanged\0onOrganizationRoleChanged\0"
    "onProcedureRoleChanged\0setUserInformation\0"
    "vtkPersonInformation*\0userInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSettingsUserInformationPanel[] = {

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
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    1,   69,    2, 0x0a /* Public */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x0a /* Public */,
      11,    0,   74,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    1,   75,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void qSlicerSettingsUserInformationPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSettingsUserInformationPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resetSettings(); break;
        case 1: _t->applySettings(); break;
        case 2: _t->updateFromUserInformation(); break;
        case 3: _t->onNameChanged(); break;
        case 4: _t->onLoginChanged(); break;
        case 5: _t->onEmailChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onOrganizationChanged(); break;
        case 7: _t->onOrganizationRoleChanged(); break;
        case 8: _t->onProcedureRoleChanged(); break;
        case 9: _t->setUserInformation((*reinterpret_cast< vtkPersonInformation*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSettingsUserInformationPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkSettingsPanel::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSettingsUserInformationPanel.data,
    qt_meta_data_qSlicerSettingsUserInformationPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSettingsUserInformationPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSettingsUserInformationPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSettingsUserInformationPanel.stringdata0))
        return static_cast<void*>(this);
    return ctkSettingsPanel::qt_metacast(_clname);
}

int qSlicerSettingsUserInformationPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkSettingsPanel::qt_metacall(_c, _id, _a);
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
