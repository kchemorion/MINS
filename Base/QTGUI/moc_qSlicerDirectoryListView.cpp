/****************************************************************************
** Meta object code from reading C++ file 'qSlicerDirectoryListView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerDirectoryListView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerDirectoryListView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerDirectoryListView_t {
    QByteArrayData data[12];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerDirectoryListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerDirectoryListView_t qt_meta_stringdata_qSlicerDirectoryListView = {
    {
QT_MOC_LITERAL(0, 0, 24), // "qSlicerDirectoryListView"
QT_MOC_LITERAL(1, 25, 20), // "directoryListChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 12), // "addDirectory"
QT_MOC_LITERAL(4, 60, 4), // "path"
QT_MOC_LITERAL(5, 65, 16), // "setDirectoryList"
QT_MOC_LITERAL(6, 82, 5), // "paths"
QT_MOC_LITERAL(7, 88, 15), // "removeDirectory"
QT_MOC_LITERAL(8, 104, 25), // "removeSelectedDirectories"
QT_MOC_LITERAL(9, 130, 20), // "selectAllDirectories"
QT_MOC_LITERAL(10, 151, 23), // "clearDirectorySelection"
QT_MOC_LITERAL(11, 175, 13) // "directoryList"

    },
    "qSlicerDirectoryListView\0directoryListChanged\0"
    "\0addDirectory\0path\0setDirectoryList\0"
    "paths\0removeDirectory\0removeSelectedDirectories\0"
    "selectAllDirectories\0clearDirectorySelection\0"
    "directoryList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerDirectoryListView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       8,    0,   59,    2, 0x0a /* Public */,
       9,    0,   60,    2, 0x0a /* Public */,
      10,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::QStringList, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void qSlicerDirectoryListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerDirectoryListView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->directoryListChanged(); break;
        case 1: _t->addDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setDirectoryList((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->removeDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->removeSelectedDirectories(); break;
        case 5: _t->selectAllDirectories(); break;
        case 6: _t->clearDirectorySelection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qSlicerDirectoryListView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerDirectoryListView::directoryListChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerDirectoryListView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->directoryList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerDirectoryListView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDirectoryList(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerDirectoryListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerDirectoryListView.data,
    qt_meta_data_qSlicerDirectoryListView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerDirectoryListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerDirectoryListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerDirectoryListView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qSlicerDirectoryListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void qSlicerDirectoryListView::directoryListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
