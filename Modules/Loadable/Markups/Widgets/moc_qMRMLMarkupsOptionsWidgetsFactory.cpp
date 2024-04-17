/****************************************************************************
** Meta object code from reading C++ file 'qMRMLMarkupsOptionsWidgetsFactory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Markups/Widgets/qMRMLMarkupsOptionsWidgetsFactory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLMarkupsOptionsWidgetsFactory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLMarkupsOptionsWidgetsFactory_t {
    QByteArrayData data[16];
    char stringdata0[320];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLMarkupsOptionsWidgetsFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLMarkupsOptionsWidgetsFactory_t qt_meta_stringdata_qMRMLMarkupsOptionsWidgetsFactory = {
    {
QT_MOC_LITERAL(0, 0, 33), // "qMRMLMarkupsOptionsWidgetsFac..."
QT_MOC_LITERAL(1, 34, 23), // "optionsWidgetRegistered"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 25), // "optionsWidgetUnregistered"
QT_MOC_LITERAL(4, 85, 8), // "instance"
QT_MOC_LITERAL(5, 94, 34), // "qMRMLMarkupsOptionsWidgetsFac..."
QT_MOC_LITERAL(6, 129, 21), // "registerOptionsWidget"
QT_MOC_LITERAL(7, 151, 34), // "qMRMLMarkupsAbstractOptionsWi..."
QT_MOC_LITERAL(8, 186, 6), // "widget"
QT_MOC_LITERAL(9, 193, 23), // "unregisterOptionsWidget"
QT_MOC_LITERAL(10, 217, 9), // "className"
QT_MOC_LITERAL(11, 227, 13), // "unregisterAll"
QT_MOC_LITERAL(12, 241, 34), // "registeredOptionsWidgetsClass..."
QT_MOC_LITERAL(13, 276, 14), // "QList<QString>"
QT_MOC_LITERAL(14, 291, 12), // "createWidget"
QT_MOC_LITERAL(15, 304, 15) // "widgetClassName"

    },
    "qMRMLMarkupsOptionsWidgetsFactory\0"
    "optionsWidgetRegistered\0\0"
    "optionsWidgetUnregistered\0instance\0"
    "qMRMLMarkupsOptionsWidgetsFactory*\0"
    "registerOptionsWidget\0"
    "qMRMLMarkupsAbstractOptionsWidget*\0"
    "widget\0unregisterOptionsWidget\0className\0"
    "unregisterAll\0registeredOptionsWidgetsClassNames\0"
    "QList<QString>\0createWidget\0widgetClassName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLMarkupsOptionsWidgetsFactory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   61,    2, 0x02 /* Public */,
       6,    1,   62,    2, 0x02 /* Public */,
       9,    1,   65,    2, 0x02 /* Public */,
       9,    1,   68,    2, 0x02 /* Public */,
      11,    0,   71,    2, 0x02 /* Public */,
      12,    0,   72,    2, 0x02 /* Public */,
      14,    1,   73,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 5,
    QMetaType::Bool, 0x80000000 | 7,    8,
    QMetaType::Bool, QMetaType::QString,   10,
    QMetaType::Bool, 0x80000000 | 7,    8,
    QMetaType::Void,
    0x80000000 | 13,
    0x80000000 | 7, QMetaType::QString,   15,

       0        // eod
};

void qMRMLMarkupsOptionsWidgetsFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLMarkupsOptionsWidgetsFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->optionsWidgetRegistered(); break;
        case 1: _t->optionsWidgetUnregistered(); break;
        case 2: { qMRMLMarkupsOptionsWidgetsFactory* _r = _t->instance();
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsOptionsWidgetsFactory**>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->registerOptionsWidget((*reinterpret_cast< qMRMLMarkupsAbstractOptionsWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->unregisterOptionsWidget((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->unregisterOptionsWidget((*reinterpret_cast< qMRMLMarkupsAbstractOptionsWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->unregisterAll(); break;
        case 7: { QList<QString> _r = _t->registeredOptionsWidgetsClassNames();
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 8: { qMRMLMarkupsAbstractOptionsWidget* _r = _t->createWidget((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qMRMLMarkupsAbstractOptionsWidget**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLMarkupsAbstractOptionsWidget* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qMRMLMarkupsAbstractOptionsWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLMarkupsOptionsWidgetsFactory::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLMarkupsOptionsWidgetsFactory::optionsWidgetRegistered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLMarkupsOptionsWidgetsFactory::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLMarkupsOptionsWidgetsFactory::optionsWidgetUnregistered)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLMarkupsOptionsWidgetsFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qMRMLMarkupsOptionsWidgetsFactory.data,
    qt_meta_data_qMRMLMarkupsOptionsWidgetsFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLMarkupsOptionsWidgetsFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLMarkupsOptionsWidgetsFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLMarkupsOptionsWidgetsFactory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qMRMLMarkupsOptionsWidgetsFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void qMRMLMarkupsOptionsWidgetsFactory::optionsWidgetRegistered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void qMRMLMarkupsOptionsWidgetsFactory::optionsWidgetUnregistered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
