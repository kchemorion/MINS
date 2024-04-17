/****************************************************************************
** Meta object code from reading C++ file 'qSlicerModuleSelectorToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerModuleSelectorToolBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerModuleSelectorToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerModuleSelectorToolBar_t {
    QByteArrayData data[22];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerModuleSelectorToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerModuleSelectorToolBar_t qt_meta_stringdata_qSlicerModuleSelectorToolBar = {
    {
QT_MOC_LITERAL(0, 0, 28), // "qSlicerModuleSelectorToolBar"
QT_MOC_LITERAL(1, 29, 14), // "moduleSelected"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 4), // "name"
QT_MOC_LITERAL(4, 50, 16), // "setModuleManager"
QT_MOC_LITERAL(5, 67, 21), // "qSlicerModuleManager*"
QT_MOC_LITERAL(6, 89, 13), // "moduleManager"
QT_MOC_LITERAL(7, 103, 12), // "selectModule"
QT_MOC_LITERAL(8, 116, 10), // "moduleName"
QT_MOC_LITERAL(9, 127, 16), // "selectNextModule"
QT_MOC_LITERAL(10, 144, 20), // "selectPreviousModule"
QT_MOC_LITERAL(11, 165, 16), // "showModuleFinder"
QT_MOC_LITERAL(12, 182, 13), // "moduleRemoved"
QT_MOC_LITERAL(13, 196, 16), // "onModuleSelected"
QT_MOC_LITERAL(14, 213, 14), // "actionSelected"
QT_MOC_LITERAL(15, 228, 8), // "QAction*"
QT_MOC_LITERAL(16, 237, 6), // "action"
QT_MOC_LITERAL(17, 244, 11), // "modulesMenu"
QT_MOC_LITERAL(18, 256, 19), // "qSlicerModulesMenu*"
QT_MOC_LITERAL(19, 276, 19), // "modulesMenuComboBox"
QT_MOC_LITERAL(20, 296, 16), // "ctkMenuComboBox*"
QT_MOC_LITERAL(21, 313, 14) // "selectedModule"

    },
    "qSlicerModuleSelectorToolBar\0"
    "moduleSelected\0\0name\0setModuleManager\0"
    "qSlicerModuleManager*\0moduleManager\0"
    "selectModule\0moduleName\0selectNextModule\0"
    "selectPreviousModule\0showModuleFinder\0"
    "moduleRemoved\0onModuleSelected\0"
    "actionSelected\0QAction*\0action\0"
    "modulesMenu\0qSlicerModulesMenu*\0"
    "modulesMenuComboBox\0ctkMenuComboBox*\0"
    "selectedModule"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerModuleSelectorToolBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       1,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   72,    2, 0x0a /* Public */,
       7,    1,   75,    2, 0x0a /* Public */,
       9,    0,   78,    2, 0x0a /* Public */,
      10,    0,   79,    2, 0x0a /* Public */,
      11,    0,   80,    2, 0x0a /* Public */,
      12,    1,   81,    2, 0x09 /* Protected */,
      13,    1,   84,    2, 0x09 /* Protected */,
      14,    1,   87,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      17,    0,   90,    2, 0x02 /* Public */,
      19,    0,   91,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 15,   16,

 // methods: parameters
    0x80000000 | 18,
    0x80000000 | 20,

 // properties: name, type, flags
      21, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void qSlicerModuleSelectorToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerModuleSelectorToolBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moduleSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setModuleManager((*reinterpret_cast< qSlicerModuleManager*(*)>(_a[1]))); break;
        case 2: _t->selectModule((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->selectNextModule(); break;
        case 4: _t->selectPreviousModule(); break;
        case 5: _t->showModuleFinder(); break;
        case 6: _t->moduleRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onModuleSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->actionSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 9: { qSlicerModulesMenu* _r = _t->modulesMenu();
            if (_a[0]) *reinterpret_cast< qSlicerModulesMenu**>(_a[0]) = std::move(_r); }  break;
        case 10: { ctkMenuComboBox* _r = _t->modulesMenuComboBox();
            if (_a[0]) *reinterpret_cast< ctkMenuComboBox**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qSlicerModuleSelectorToolBar::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerModuleSelectorToolBar::moduleSelected)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerModuleSelectorToolBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->selectedModule(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerModuleSelectorToolBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->selectModule(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerModuleSelectorToolBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolBar::staticMetaObject>(),
    qt_meta_stringdata_qSlicerModuleSelectorToolBar.data,
    qt_meta_data_qSlicerModuleSelectorToolBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerModuleSelectorToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerModuleSelectorToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerModuleSelectorToolBar.stringdata0))
        return static_cast<void*>(this);
    return QToolBar::qt_metacast(_clname);
}

int qSlicerModuleSelectorToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
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
void qSlicerModuleSelectorToolBar::moduleSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
