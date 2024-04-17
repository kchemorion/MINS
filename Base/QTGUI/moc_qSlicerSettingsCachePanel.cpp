/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSettingsCachePanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerSettingsCachePanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSettingsCachePanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSettingsCachePanel_t {
    QByteArrayData data[11];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSettingsCachePanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSettingsCachePanel_t qt_meta_stringdata_qSlicerSettingsCachePanel = {
    {
QT_MOC_LITERAL(0, 0, 25), // "qSlicerSettingsCachePanel"
QT_MOC_LITERAL(1, 26, 12), // "setCachePath"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 4), // "path"
QT_MOC_LITERAL(4, 45, 12), // "setCacheSize"
QT_MOC_LITERAL(5, 58, 8), // "sizeInMB"
QT_MOC_LITERAL(6, 67, 22), // "setCacheFreeBufferSize"
QT_MOC_LITERAL(7, 90, 18), // "setForceRedownload"
QT_MOC_LITERAL(8, 109, 5), // "force"
QT_MOC_LITERAL(9, 115, 10), // "clearCache"
QT_MOC_LITERAL(10, 126, 22) // "updateFromCacheManager"

    },
    "qSlicerSettingsCachePanel\0setCachePath\0"
    "\0path\0setCacheSize\0sizeInMB\0"
    "setCacheFreeBufferSize\0setForceRedownload\0"
    "force\0clearCache\0updateFromCacheManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSettingsCachePanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x0a /* Public */,
       7,    1,   53,    2, 0x0a /* Public */,
       9,    0,   56,    2, 0x0a /* Public */,
      10,    0,   57,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qSlicerSettingsCachePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSettingsCachePanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setCachePath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setCacheSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setCacheFreeBufferSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setForceRedownload((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->clearCache(); break;
        case 5: _t->updateFromCacheManager(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSettingsCachePanel::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkSettingsPanel::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSettingsCachePanel.data,
    qt_meta_data_qSlicerSettingsCachePanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSettingsCachePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSettingsCachePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSettingsCachePanel.stringdata0))
        return static_cast<void*>(this);
    return ctkSettingsPanel::qt_metacast(_clname);
}

int qSlicerSettingsCachePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkSettingsPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
