/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSettingsGeneralPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerSettingsGeneralPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSettingsGeneralPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSettingsGeneralPanel_t {
    QByteArrayData data[6];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSettingsGeneralPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSettingsGeneralPanel_t qt_meta_stringdata_qSlicerSettingsGeneralPanel = {
    {
QT_MOC_LITERAL(0, 0, 27), // "qSlicerSettingsGeneralPanel"
QT_MOC_LITERAL(1, 28, 19), // "setDefaultScenePath"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 4), // "path"
QT_MOC_LITERAL(4, 54, 16), // "openSlicerRCFile"
QT_MOC_LITERAL(5, 71, 38) // "updateAutoUpdateApplicationFr..."

    },
    "qSlicerSettingsGeneralPanel\0"
    "setDefaultScenePath\0\0path\0openSlicerRCFile\0"
    "updateAutoUpdateApplicationFromManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSettingsGeneralPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    0,   32,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qSlicerSettingsGeneralPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSettingsGeneralPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setDefaultScenePath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->openSlicerRCFile(); break;
        case 2: _t->updateAutoUpdateApplicationFromManager(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSettingsGeneralPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkSettingsPanel::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSettingsGeneralPanel.data,
    qt_meta_data_qSlicerSettingsGeneralPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSettingsGeneralPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSettingsGeneralPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSettingsGeneralPanel.stringdata0))
        return static_cast<void*>(this);
    return ctkSettingsPanel::qt_metacast(_clname);
}

int qSlicerSettingsGeneralPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkSettingsPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE