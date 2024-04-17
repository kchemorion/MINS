/****************************************************************************
** Meta object code from reading C++ file 'qSlicerModulesMenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerModulesMenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerModulesMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerModulesMenu_t {
    QByteArrayData data[22];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerModulesMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerModulesMenu_t qt_meta_stringdata_qSlicerModulesMenu = {
    {
QT_MOC_LITERAL(0, 0, 18), // "qSlicerModulesMenu"
QT_MOC_LITERAL(1, 19, 20), // "currentModuleChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "name"
QT_MOC_LITERAL(4, 46, 9), // "addModule"
QT_MOC_LITERAL(5, 56, 10), // "moduleName"
QT_MOC_LITERAL(6, 67, 12), // "removeModule"
QT_MOC_LITERAL(7, 80, 23), // "setCurrentModuleByTitle"
QT_MOC_LITERAL(8, 104, 5), // "title"
QT_MOC_LITERAL(9, 110, 16), // "setCurrentModule"
QT_MOC_LITERAL(10, 127, 26), // "qSlicerAbstractCoreModule*"
QT_MOC_LITERAL(11, 154, 17), // "onActionTriggered"
QT_MOC_LITERAL(12, 172, 14), // "actionSelected"
QT_MOC_LITERAL(13, 187, 8), // "QAction*"
QT_MOC_LITERAL(14, 196, 6), // "action"
QT_MOC_LITERAL(15, 203, 12), // "moduleAction"
QT_MOC_LITERAL(16, 216, 14), // "removeCategory"
QT_MOC_LITERAL(17, 231, 12), // "categoryName"
QT_MOC_LITERAL(18, 244, 13), // "currentModule"
QT_MOC_LITERAL(19, 258, 16), // "duplicateActions"
QT_MOC_LITERAL(20, 275, 17), // "showHiddenModules"
QT_MOC_LITERAL(21, 293, 21) // "topLevelCategoryOrder"

    },
    "qSlicerModulesMenu\0currentModuleChanged\0"
    "\0name\0addModule\0moduleName\0removeModule\0"
    "setCurrentModuleByTitle\0title\0"
    "setCurrentModule\0qSlicerAbstractCoreModule*\0"
    "onActionTriggered\0actionSelected\0"
    "QAction*\0action\0moduleAction\0"
    "removeCategory\0categoryName\0currentModule\0"
    "duplicateActions\0showHiddenModules\0"
    "topLevelCategoryOrder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerModulesMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       4,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   72,    2, 0x0a /* Public */,
       6,    1,   75,    2, 0x0a /* Public */,
       7,    1,   78,    2, 0x0a /* Public */,
       9,    1,   81,    2, 0x0a /* Public */,
       4,    1,   84,    2, 0x0a /* Public */,
       6,    1,   87,    2, 0x0a /* Public */,
      11,    0,   90,    2, 0x09 /* Protected */,
      12,    1,   91,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      15,    1,   94,    2, 0x02 /* Public */,
      16,    1,   97,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Bool, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Bool, 0x80000000 | 10,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

 // methods: parameters
    0x80000000 | 13, QMetaType::QString,    5,
    QMetaType::Bool, QMetaType::QString,   17,

 // properties: name, type, flags
      18, QMetaType::QString, 0x00495103,
      19, QMetaType::Bool, 0x00095103,
      20, QMetaType::Bool, 0x00095103,
      21, QMetaType::QStringList, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void qSlicerModulesMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerModulesMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentModuleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->addModule((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { bool _r = _t->removeModule((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setCurrentModuleByTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setCurrentModule((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->addModule((*reinterpret_cast< qSlicerAbstractCoreModule*(*)>(_a[1]))); break;
        case 6: { bool _r = _t->removeModule((*reinterpret_cast< qSlicerAbstractCoreModule*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->onActionTriggered(); break;
        case 8: _t->actionSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 9: { QAction* _r = _t->moduleAction((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->removeCategory((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qSlicerModulesMenu::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerModulesMenu::currentModuleChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerModulesMenu *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentModule(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->duplicateActions(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->showHiddenModules(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->topLevelCategoryOrder(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerModulesMenu *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentModule(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDuplicateActions(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setShowHiddenModules(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setTopLevelCategoryOrder(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerModulesMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_qSlicerModulesMenu.data,
    qt_meta_data_qSlicerModulesMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerModulesMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerModulesMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerModulesMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int qSlicerModulesMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qSlicerModulesMenu::currentModuleChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
