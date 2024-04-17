/****************************************************************************
** Meta object code from reading C++ file 'qSlicerCommandOptions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerCommandOptions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerCommandOptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerCommandOptions_t {
    QByteArrayData data[7];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerCommandOptions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerCommandOptions_t qt_meta_stringdata_qSlicerCommandOptions = {
    {
QT_MOC_LITERAL(0, 0, 21), // "qSlicerCommandOptions"
QT_MOC_LITERAL(1, 22, 8), // "noSplash"
QT_MOC_LITERAL(2, 31, 15), // "disableToolTips"
QT_MOC_LITERAL(3, 47, 12), // "noMainWindow"
QT_MOC_LITERAL(4, 60, 17), // "showPythonConsole"
QT_MOC_LITERAL(5, 78, 15), // "enableQtTesting"
QT_MOC_LITERAL(6, 94, 16) // "exitAfterStartup"

    },
    "qSlicerCommandOptions\0noSplash\0"
    "disableToolTips\0noMainWindow\0"
    "showPythonConsole\0enableQtTesting\0"
    "exitAfterStartup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerCommandOptions[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095401,
       2, QMetaType::Bool, 0x00095401,
       3, QMetaType::Bool, 0x00095401,
       4, QMetaType::Bool, 0x00095401,
       5, QMetaType::Bool, 0x00095401,
       6, QMetaType::Bool, 0x00095401,

       0        // eod
};

void qSlicerCommandOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerCommandOptions *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->noSplash(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->disableToolTips(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->noMainWindow(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->showPythonConsole(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->enableQtTesting(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->exitAfterStartup(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject qSlicerCommandOptions::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerCoreCommandOptions::staticMetaObject>(),
    qt_meta_stringdata_qSlicerCommandOptions.data,
    qt_meta_data_qSlicerCommandOptions,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerCommandOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerCommandOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerCommandOptions.stringdata0))
        return static_cast<void*>(this);
    return qSlicerCoreCommandOptions::qt_metacast(_clname);
}

int qSlicerCommandOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerCoreCommandOptions::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
