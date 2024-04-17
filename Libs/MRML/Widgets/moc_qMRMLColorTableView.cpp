/****************************************************************************
** Meta object code from reading C++ file 'qMRMLColorTableView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLColorTableView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLColorTableView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLColorTableView_t {
    QByteArrayData data[17];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLColorTableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLColorTableView_t qt_meta_stringdata_qMRMLColorTableView = {
    {
QT_MOC_LITERAL(0, 0, 19), // "qMRMLColorTableView"
QT_MOC_LITERAL(1, 20, 16), // "setMRMLColorNode"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 17), // "vtkMRMLColorNode*"
QT_MOC_LITERAL(4, 56, 9), // "colorNode"
QT_MOC_LITERAL(5, 66, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 79, 22), // "setShowOnlyNamedColors"
QT_MOC_LITERAL(7, 102, 13), // "mrmlColorNode"
QT_MOC_LITERAL(8, 116, 10), // "colorModel"
QT_MOC_LITERAL(9, 127, 16), // "qMRMLColorModel*"
QT_MOC_LITERAL(10, 144, 20), // "sortFilterProxyModel"
QT_MOC_LITERAL(11, 165, 22), // "QSortFilterProxyModel*"
QT_MOC_LITERAL(12, 188, 16), // "rowFromColorName"
QT_MOC_LITERAL(13, 205, 9), // "colorName"
QT_MOC_LITERAL(14, 215, 17), // "rowFromColorIndex"
QT_MOC_LITERAL(15, 233, 10), // "colorIndex"
QT_MOC_LITERAL(16, 244, 19) // "showOnlyNamedColors"

    },
    "qMRMLColorTableView\0setMRMLColorNode\0"
    "\0vtkMRMLColorNode*\0colorNode\0vtkMRMLNode*\0"
    "setShowOnlyNamedColors\0mrmlColorNode\0"
    "colorModel\0qMRMLColorModel*\0"
    "sortFilterProxyModel\0QSortFilterProxyModel*\0"
    "rowFromColorName\0colorName\0rowFromColorIndex\0"
    "colorIndex\0showOnlyNamedColors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLColorTableView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       1,    1,   57,    2, 0x0a /* Public */,
       6,    1,   60,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   63,    2, 0x02 /* Public */,
       8,    0,   64,    2, 0x02 /* Public */,
      10,    0,   65,    2, 0x02 /* Public */,
      12,    1,   66,    2, 0x02 /* Public */,
      14,    1,   69,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    4,
    QMetaType::Void, QMetaType::Bool,    2,

 // methods: parameters
    0x80000000 | 3,
    0x80000000 | 9,
    0x80000000 | 11,
    QMetaType::Int, QMetaType::QString,   13,
    QMetaType::Int, QMetaType::Int,   15,

 // properties: name, type, flags
      16, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qMRMLColorTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLColorTableView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLColorNode((*reinterpret_cast< vtkMRMLColorNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLColorNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->setShowOnlyNamedColors((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: { vtkMRMLColorNode* _r = _t->mrmlColorNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLColorNode**>(_a[0]) = std::move(_r); }  break;
        case 4: { qMRMLColorModel* _r = _t->colorModel();
            if (_a[0]) *reinterpret_cast< qMRMLColorModel**>(_a[0]) = std::move(_r); }  break;
        case 5: { QSortFilterProxyModel* _r = _t->sortFilterProxyModel();
            if (_a[0]) *reinterpret_cast< QSortFilterProxyModel**>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->rowFromColorName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->rowFromColorIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLColorTableView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->showOnlyNamedColors(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLColorTableView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShowOnlyNamedColors(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLColorTableView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableView::staticMetaObject>(),
    qt_meta_stringdata_qMRMLColorTableView.data,
    qt_meta_data_qMRMLColorTableView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLColorTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLColorTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLColorTableView.stringdata0))
        return static_cast<void*>(this);
    return QTableView::qt_metacast(_clname);
}

int qMRMLColorTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
