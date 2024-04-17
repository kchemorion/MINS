/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSettingsModulesPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerSettingsModulesPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSettingsModulesPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSettingsModulesPanel_t {
    QByteArrayData data[15];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSettingsModulesPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSettingsModulesPanel_t qt_meta_stringdata_qSlicerSettingsModulesPanel = {
    {
QT_MOC_LITERAL(0, 0, 27), // "qSlicerSettingsModulesPanel"
QT_MOC_LITERAL(1, 28, 28), // "modulesToAlwaysIgnoreChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 12), // "modulesNames"
QT_MOC_LITERAL(4, 71, 22), // "favoriteModulesChanged"
QT_MOC_LITERAL(5, 94, 24), // "setModulesToAlwaysIgnore"
QT_MOC_LITERAL(6, 119, 19), // "onHomeModuleChanged"
QT_MOC_LITERAL(7, 139, 10), // "moduleName"
QT_MOC_LITERAL(8, 150, 22), // "onTemporaryPathChanged"
QT_MOC_LITERAL(9, 173, 4), // "path"
QT_MOC_LITERAL(10, 178, 26), // "onShowHiddenModulesChanged"
QT_MOC_LITERAL(11, 205, 30), // "onAdditionalModulePathsChanged"
QT_MOC_LITERAL(12, 236, 33), // "onAddModulesAdditionalPathCli..."
QT_MOC_LITERAL(13, 270, 36), // "onRemoveModulesAdditionalPath..."
QT_MOC_LITERAL(14, 307, 21) // "modulesToAlwaysIgnore"

    },
    "qSlicerSettingsModulesPanel\0"
    "modulesToAlwaysIgnoreChanged\0\0"
    "modulesNames\0favoriteModulesChanged\0"
    "setModulesToAlwaysIgnore\0onHomeModuleChanged\0"
    "moduleName\0onTemporaryPathChanged\0"
    "path\0onShowHiddenModulesChanged\0"
    "onAdditionalModulePathsChanged\0"
    "onAddModulesAdditionalPathClicked\0"
    "onRemoveModulesAdditionalPathClicked\0"
    "modulesToAlwaysIgnore"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSettingsModulesPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   63,    2, 0x0a /* Public */,
       6,    1,   66,    2, 0x09 /* Protected */,
       8,    1,   69,    2, 0x09 /* Protected */,
      10,    1,   72,    2, 0x09 /* Protected */,
      11,    0,   75,    2, 0x09 /* Protected */,
      12,    0,   76,    2, 0x09 /* Protected */,
      13,    0,   77,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::QStringList, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void qSlicerSettingsModulesPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSettingsModulesPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->modulesToAlwaysIgnoreChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->favoriteModulesChanged(); break;
        case 2: _t->setModulesToAlwaysIgnore((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->onHomeModuleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onTemporaryPathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onShowHiddenModulesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onAdditionalModulePathsChanged(); break;
        case 7: _t->onAddModulesAdditionalPathClicked(); break;
        case 8: _t->onRemoveModulesAdditionalPathClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qSlicerSettingsModulesPanel::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerSettingsModulesPanel::modulesToAlwaysIgnoreChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qSlicerSettingsModulesPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerSettingsModulesPanel::favoriteModulesChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerSettingsModulesPanel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->modulesToAlwaysIgnore(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerSettingsModulesPanel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setModulesToAlwaysIgnore(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSettingsModulesPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkSettingsPanel::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSettingsModulesPanel.data,
    qt_meta_data_qSlicerSettingsModulesPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSettingsModulesPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSettingsModulesPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSettingsModulesPanel.stringdata0))
        return static_cast<void*>(this);
    return ctkSettingsPanel::qt_metacast(_clname);
}

int qSlicerSettingsModulesPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkSettingsPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void qSlicerSettingsModulesPanel::modulesToAlwaysIgnoreChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qSlicerSettingsModulesPanel::favoriteModulesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
