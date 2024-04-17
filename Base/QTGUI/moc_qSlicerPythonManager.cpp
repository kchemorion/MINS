/****************************************************************************
** Meta object code from reading C++ file 'qSlicerPythonManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerPythonManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerPythonManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerPythonManager_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerPythonManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerPythonManager_t qt_meta_stringdata_qSlicerPythonManager = {
    {
QT_MOC_LITERAL(0, 0, 20) // "qSlicerPythonManager"

    },
    "qSlicerPythonManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerPythonManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void qSlicerPythonManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject qSlicerPythonManager::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerCorePythonManager::staticMetaObject>(),
    qt_meta_stringdata_qSlicerPythonManager.data,
    qt_meta_data_qSlicerPythonManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerPythonManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerPythonManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerPythonManager.stringdata0))
        return static_cast<void*>(this);
    return qSlicerCorePythonManager::qt_metacast(_clname);
}

int qSlicerPythonManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerCorePythonManager::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
