/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSegmentationsSettingsPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Modules/Loadable/Segmentations/qSlicerSegmentationsSettingsPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSegmentationsSettingsPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSegmentationsSettingsPanel_t {
    QByteArrayData data[13];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSegmentationsSettingsPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSegmentationsSettingsPanel_t qt_meta_stringdata_qSlicerSegmentationsSettingsPanel = {
    {
QT_MOC_LITERAL(0, 0, 33), // "qSlicerSegmentationsSettingsP..."
QT_MOC_LITERAL(1, 34, 30), // "defaultTerminologyEntryChanged"
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 14), // "terminologyStr"
QT_MOC_LITERAL(4, 81, 16), // "setAutoOpacities"
QT_MOC_LITERAL(5, 98, 2), // "on"
QT_MOC_LITERAL(6, 101, 26), // "setDefaultSurfaceSmoothing"
QT_MOC_LITERAL(7, 128, 29), // "onEditDefaultTerminologyEntry"
QT_MOC_LITERAL(8, 158, 26), // "setDefaultTerminologyEntry"
QT_MOC_LITERAL(9, 185, 39), // "updateDefaultSegmentationNode..."
QT_MOC_LITERAL(10, 225, 23), // "setDefaultOverwriteMode"
QT_MOC_LITERAL(11, 249, 36), // "updateDefaultOverwriteModeFro..."
QT_MOC_LITERAL(12, 286, 23) // "defaultTerminologyEntry"

    },
    "qSlicerSegmentationsSettingsPanel\0"
    "defaultTerminologyEntryChanged\0\0"
    "terminologyStr\0setAutoOpacities\0on\0"
    "setDefaultSurfaceSmoothing\0"
    "onEditDefaultTerminologyEntry\0"
    "setDefaultTerminologyEntry\0"
    "updateDefaultSegmentationNodeFromWidget\0"
    "setDefaultOverwriteMode\0"
    "updateDefaultOverwriteModeFromWidget\0"
    "defaultTerminologyEntry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSegmentationsSettingsPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   57,    2, 0x09 /* Protected */,
       6,    1,   60,    2, 0x09 /* Protected */,
       7,    0,   63,    2, 0x09 /* Protected */,
       8,    1,   64,    2, 0x09 /* Protected */,
       9,    0,   67,    2, 0x09 /* Protected */,
      10,    1,   68,    2, 0x09 /* Protected */,
      11,    0,   71,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00095103,

       0        // eod
};

void qSlicerSegmentationsSettingsPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSegmentationsSettingsPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->defaultTerminologyEntryChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setAutoOpacities((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setDefaultSurfaceSmoothing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onEditDefaultTerminologyEntry(); break;
        case 4: _t->setDefaultTerminologyEntry((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->updateDefaultSegmentationNodeFromWidget(); break;
        case 6: _t->setDefaultOverwriteMode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->updateDefaultOverwriteModeFromWidget(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qSlicerSegmentationsSettingsPanel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerSegmentationsSettingsPanel::defaultTerminologyEntryChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerSegmentationsSettingsPanel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->defaultTerminologyEntry(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerSegmentationsSettingsPanel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDefaultTerminologyEntry(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSegmentationsSettingsPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkSettingsPanel::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSegmentationsSettingsPanel.data,
    qt_meta_data_qSlicerSegmentationsSettingsPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSegmentationsSettingsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSegmentationsSettingsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSegmentationsSettingsPanel.stringdata0))
        return static_cast<void*>(this);
    return ctkSettingsPanel::qt_metacast(_clname);
}

int qSlicerSegmentationsSettingsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkSettingsPanel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void qSlicerSegmentationsSettingsPanel::defaultTerminologyEntryChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
