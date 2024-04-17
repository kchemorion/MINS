/****************************************************************************
** Meta object code from reading C++ file 'qSlicerPresetComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/VolumeRendering/Widgets/qSlicerPresetComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerPresetComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerPresetComboBox_t {
    QByteArrayData data[14];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerPresetComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerPresetComboBox_t qt_meta_stringdata_qSlicerPresetComboBox = {
    {
QT_MOC_LITERAL(0, 0, 21), // "qSlicerPresetComboBox"
QT_MOC_LITERAL(1, 22, 15), // "setIconToPreset"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 52, 10), // "presetNode"
QT_MOC_LITERAL(5, 63, 12), // "setShowIcons"
QT_MOC_LITERAL(6, 76, 4), // "show"
QT_MOC_LITERAL(7, 81, 20), // "setShowLabelsInPopup"
QT_MOC_LITERAL(8, 102, 18), // "setIconSizeInPopup"
QT_MOC_LITERAL(9, 121, 4), // "size"
QT_MOC_LITERAL(10, 126, 26), // "updateComboBoxTitleAndIcon"
QT_MOC_LITERAL(11, 153, 9), // "showIcons"
QT_MOC_LITERAL(12, 163, 17), // "showLabelsInPopup"
QT_MOC_LITERAL(13, 181, 15) // "iconSizeInPopup"

    },
    "qSlicerPresetComboBox\0setIconToPreset\0"
    "\0vtkMRMLNode*\0presetNode\0setShowIcons\0"
    "show\0setShowLabelsInPopup\0setIconSizeInPopup\0"
    "size\0updateComboBoxTitleAndIcon\0"
    "showIcons\0showLabelsInPopup\0iconSizeInPopup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerPresetComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       7,    1,   45,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x0a /* Public */,
      10,    1,   51,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QSize,    9,
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
      11, QMetaType::Bool, 0x00095103,
      12, QMetaType::Bool, 0x00095103,
      13, QMetaType::QSize, 0x00095103,

       0        // eod
};

void qSlicerPresetComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerPresetComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setIconToPreset((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->setShowIcons((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setShowLabelsInPopup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setIconSizeInPopup((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 4: _t->updateComboBoxTitleAndIcon((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerPresetComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->showIcons(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->showLabelsInPopup(); break;
        case 2: *reinterpret_cast< QSize*>(_v) = _t->iconSizeInPopup(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerPresetComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShowIcons(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setShowLabelsInPopup(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setIconSizeInPopup(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerPresetComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLNodeComboBox::staticMetaObject>(),
    qt_meta_stringdata_qSlicerPresetComboBox.data,
    qt_meta_data_qSlicerPresetComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerPresetComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerPresetComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerPresetComboBox.stringdata0))
        return static_cast<void*>(this);
    return qMRMLNodeComboBox::qt_metacast(_clname);
}

int qSlicerPresetComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLNodeComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
