/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSaveDataDialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTGUI/qSlicerSaveDataDialog_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSaveDataDialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSaveDataDialogPrivate_t {
    QByteArrayData data[20];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSaveDataDialogPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSaveDataDialogPrivate_t qt_meta_stringdata_qSlicerSaveDataDialogPrivate = {
    {
QT_MOC_LITERAL(0, 0, 28), // "qSlicerSaveDataDialogPrivate"
QT_MOC_LITERAL(1, 29, 12), // "setDirectory"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 12), // "newDirectory"
QT_MOC_LITERAL(4, 56, 23), // "selectModifiedSceneData"
QT_MOC_LITERAL(5, 80, 18), // "selectModifiedData"
QT_MOC_LITERAL(6, 99, 4), // "save"
QT_MOC_LITERAL(7, 104, 6), // "accept"
QT_MOC_LITERAL(8, 111, 13), // "formatChanged"
QT_MOC_LITERAL(9, 125, 9), // "saveScene"
QT_MOC_LITERAL(10, 135, 9), // "saveNodes"
QT_MOC_LITERAL(11, 145, 9), // "sceneFile"
QT_MOC_LITERAL(12, 155, 9), // "QFileInfo"
QT_MOC_LITERAL(13, 165, 15), // "showMoreColumns"
QT_MOC_LITERAL(14, 181, 10), // "updateSize"
QT_MOC_LITERAL(15, 192, 20), // "onSceneFormatChanged"
QT_MOC_LITERAL(16, 213, 11), // "enableNodes"
QT_MOC_LITERAL(17, 225, 21), // "saveSceneAsDataBundle"
QT_MOC_LITERAL(18, 247, 13), // "onItemChanged"
QT_MOC_LITERAL(19, 261, 17) // "QTableWidgetItem*"

    },
    "qSlicerSaveDataDialogPrivate\0setDirectory\0"
    "\0newDirectory\0selectModifiedSceneData\0"
    "selectModifiedData\0save\0accept\0"
    "formatChanged\0saveScene\0saveNodes\0"
    "sceneFile\0QFileInfo\0showMoreColumns\0"
    "updateSize\0onSceneFormatChanged\0"
    "enableNodes\0saveSceneAsDataBundle\0"
    "onItemChanged\0QTableWidgetItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSaveDataDialogPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x0a /* Public */,
       4,    0,   92,    2, 0x0a /* Public */,
       5,    0,   93,    2, 0x0a /* Public */,
       6,    0,   94,    2, 0x0a /* Public */,
       7,    0,   95,    2, 0x0a /* Public */,
       8,    0,   96,    2, 0x09 /* Protected */,
       9,    0,   97,    2, 0x09 /* Protected */,
      10,    0,   98,    2, 0x09 /* Protected */,
      11,    0,   99,    2, 0x09 /* Protected */,
      13,    1,  100,    2, 0x09 /* Protected */,
      14,    0,  103,    2, 0x09 /* Protected */,
      15,    0,  104,    2, 0x09 /* Protected */,
      16,    1,  105,    2, 0x09 /* Protected */,
      17,    0,  108,    2, 0x09 /* Protected */,
      18,    1,  109,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    0x80000000 | 12,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,    2,

       0        // eod
};

void qSlicerSaveDataDialogPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSaveDataDialogPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->selectModifiedSceneData(); break;
        case 2: _t->selectModifiedData(); break;
        case 3: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->accept(); break;
        case 5: _t->formatChanged(); break;
        case 6: { bool _r = _t->saveScene();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->saveNodes();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { QFileInfo _r = _t->sceneFile();
            if (_a[0]) *reinterpret_cast< QFileInfo*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->showMoreColumns((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->updateSize(); break;
        case 11: _t->onSceneFormatChanged(); break;
        case 12: _t->enableNodes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->saveSceneAsDataBundle(); break;
        case 14: _t->onItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSaveDataDialogPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSaveDataDialogPrivate.data,
    qt_meta_data_qSlicerSaveDataDialogPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSaveDataDialogPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSaveDataDialogPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSaveDataDialogPrivate.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_qSlicerSaveDataDialog"))
        return static_cast< Ui_qSlicerSaveDataDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int qSlicerSaveDataDialogPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
