/****************************************************************************
** Meta object code from reading C++ file 'qSlicerUnitsSettingsPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/Units/qSlicerUnitsSettingsPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerUnitsSettingsPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerUnitsSettingsPanel_t {
    QByteArrayData data[8];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerUnitsSettingsPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerUnitsSettingsPanel_t qt_meta_stringdata_qSlicerUnitsSettingsPanel = {
    {
QT_MOC_LITERAL(0, 0, 25), // "qSlicerUnitsSettingsPanel"
QT_MOC_LITERAL(1, 26, 17), // "quantitiesChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 20), // "onUnitsLogicModified"
QT_MOC_LITERAL(4, 66, 13), // "setQuantities"
QT_MOC_LITERAL(5, 80, 10), // "quantities"
QT_MOC_LITERAL(6, 91, 23), // "updateFromSelectionNode"
QT_MOC_LITERAL(7, 115, 7) // "showAll"

    },
    "qSlicerUnitsSettingsPanel\0quantitiesChanged\0"
    "\0onUnitsLogicModified\0setQuantities\0"
    "quantities\0updateFromSelectionNode\0"
    "showAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerUnitsSettingsPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   42,    2, 0x09 /* Protected */,
       4,    1,   43,    2, 0x09 /* Protected */,
       6,    0,   46,    2, 0x09 /* Protected */,
       7,    1,   47,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

 // properties: name, type, flags
       5, QMetaType::QStringList, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void qSlicerUnitsSettingsPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerUnitsSettingsPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->quantitiesChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->onUnitsLogicModified(); break;
        case 2: _t->setQuantities((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->updateFromSelectionNode(); break;
        case 4: _t->showAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qSlicerUnitsSettingsPanel::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerUnitsSettingsPanel::quantitiesChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerUnitsSettingsPanel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->quantities(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerUnitsSettingsPanel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setQuantities(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerUnitsSettingsPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkSettingsPanel::staticMetaObject>(),
    qt_meta_stringdata_qSlicerUnitsSettingsPanel.data,
    qt_meta_data_qSlicerUnitsSettingsPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerUnitsSettingsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerUnitsSettingsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerUnitsSettingsPanel.stringdata0))
        return static_cast<void*>(this);
    return ctkSettingsPanel::qt_metacast(_clname);
}

int qSlicerUnitsSettingsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void qSlicerUnitsSettingsPanel::quantitiesChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
