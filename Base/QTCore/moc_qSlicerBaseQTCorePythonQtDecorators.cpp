/****************************************************************************
** Meta object code from reading C++ file 'qSlicerBaseQTCorePythonQtDecorators.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qSlicerBaseQTCorePythonQtDecorators.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerBaseQTCorePythonQtDecorators.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerBaseQTBasePythonQtDecorators_t {
    QByteArrayData data[15];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerBaseQTBasePythonQtDecorators_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerBaseQTBasePythonQtDecorators_t qt_meta_stringdata_qSlicerBaseQTBasePythonQtDecorators = {
    {
QT_MOC_LITERAL(0, 0, 35), // "qSlicerBaseQTBasePythonQtDeco..."
QT_MOC_LITERAL(1, 36, 44), // "static_qSlicerCoreApplication..."
QT_MOC_LITERAL(2, 81, 0), // ""
QT_MOC_LITERAL(3, 82, 9), // "sendEvent"
QT_MOC_LITERAL(4, 92, 23), // "qSlicerCoreApplication*"
QT_MOC_LITERAL(5, 116, 3), // "app"
QT_MOC_LITERAL(6, 120, 9), // "_receiver"
QT_MOC_LITERAL(7, 130, 7), // "QEvent*"
QT_MOC_LITERAL(8, 138, 6), // "_event"
QT_MOC_LITERAL(9, 145, 13), // "processEvents"
QT_MOC_LITERAL(10, 159, 41), // "static_qSlicerUtils_replaceWi..."
QT_MOC_LITERAL(11, 201, 4), // "text"
QT_MOC_LITERAL(12, 206, 7), // "version"
QT_MOC_LITERAL(13, 214, 50), // "static_qSlicerUtils_replaceDo..."
QT_MOC_LITERAL(14, 265, 8) // "hostname"

    },
    "qSlicerBaseQTBasePythonQtDecorators\0"
    "static_qSlicerCoreApplication_testingEnabled\0"
    "\0sendEvent\0qSlicerCoreApplication*\0"
    "app\0_receiver\0QEvent*\0_event\0processEvents\0"
    "static_qSlicerUtils_replaceWikiUrlVersion\0"
    "text\0version\0"
    "static_qSlicerUtils_replaceDocumentationUrlVersion\0"
    "hostname"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerBaseQTBasePythonQtDecorators[] = {

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
       1,    0,   39,    2, 0x0a /* Public */,
       3,    3,   40,    2, 0x0a /* Public */,
       9,    1,   47,    2, 0x0a /* Public */,
      10,    2,   50,    2, 0x0a /* Public */,
      13,    3,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QObjectStar, 0x80000000 | 7,    5,    6,    8,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   14,   12,

       0        // eod
};

void qSlicerBaseQTBasePythonQtDecorators::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerBaseQTBasePythonQtDecorators *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->static_qSlicerCoreApplication_testingEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->sendEvent((*reinterpret_cast< qSlicerCoreApplication*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3]))); break;
        case 2: _t->processEvents((*reinterpret_cast< qSlicerCoreApplication*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->static_qSlicerUtils_replaceWikiUrlVersion((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->static_qSlicerUtils_replaceDocumentationUrlVersion((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerCoreApplication* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qSlicerCoreApplication* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerBaseQTBasePythonQtDecorators::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerBaseQTBasePythonQtDecorators.data,
    qt_meta_data_qSlicerBaseQTBasePythonQtDecorators,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerBaseQTBasePythonQtDecorators::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerBaseQTBasePythonQtDecorators::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerBaseQTBasePythonQtDecorators.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerBaseQTBasePythonQtDecorators::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
