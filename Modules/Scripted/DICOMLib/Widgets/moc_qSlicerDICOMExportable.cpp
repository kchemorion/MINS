/****************************************************************************
** Meta object code from reading C++ file 'qSlicerDICOMExportable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Scripted/DICOMLib/Widgets/qSlicerDICOMExportable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerDICOMExportable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerDICOMExportable_t {
    QByteArrayData data[19];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerDICOMExportable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerDICOMExportable_t qt_meta_stringdata_qSlicerDICOMExportable = {
    {
QT_MOC_LITERAL(0, 0, 22), // "qSlicerDICOMExportable"
QT_MOC_LITERAL(1, 23, 3), // "tag"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "tagName"
QT_MOC_LITERAL(4, 36, 6), // "setTag"
QT_MOC_LITERAL(5, 43, 8), // "tagValue"
QT_MOC_LITERAL(6, 52, 19), // "copyToVtkExportable"
QT_MOC_LITERAL(7, 72, 25), // "vtkSlicerDICOMExportable*"
QT_MOC_LITERAL(8, 98, 13), // "vtkExportable"
QT_MOC_LITERAL(9, 112, 21), // "copyFromVtkExportable"
QT_MOC_LITERAL(10, 134, 4), // "name"
QT_MOC_LITERAL(11, 139, 7), // "tooltip"
QT_MOC_LITERAL(12, 147, 22), // "subjectHierarchyItemID"
QT_MOC_LITERAL(13, 170, 9), // "vtkIdType"
QT_MOC_LITERAL(14, 180, 11), // "pluginClass"
QT_MOC_LITERAL(15, 192, 9), // "directory"
QT_MOC_LITERAL(16, 202, 10), // "confidence"
QT_MOC_LITERAL(17, 213, 4), // "tags"
QT_MOC_LITERAL(18, 218, 7) // "TagsMap"

    },
    "qSlicerDICOMExportable\0tag\0\0tagName\0"
    "setTag\0tagValue\0copyToVtkExportable\0"
    "vtkSlicerDICOMExportable*\0vtkExportable\0"
    "copyFromVtkExportable\0name\0tooltip\0"
    "subjectHierarchyItemID\0vtkIdType\0"
    "pluginClass\0directory\0confidence\0tags\0"
    "TagsMap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerDICOMExportable[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       7,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x02 /* Public */,
       4,    2,   37,    2, 0x02 /* Public */,
       6,    1,   42,    2, 0x02 /* Public */,
       9,    1,   45,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::QString, 0x00095103,
      12, 0x80000000 | 13, 0x0009510b,
      14, QMetaType::QString, 0x00095103,
      15, QMetaType::QString, 0x00095103,
      16, QMetaType::Double, 0x00095103,
      17, 0x80000000 | 18, 0x0009510b,

       0        // eod
};

void qSlicerDICOMExportable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerDICOMExportable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->tag((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->setTag((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->copyToVtkExportable((*reinterpret_cast< vtkSlicerDICOMExportable*(*)>(_a[1]))); break;
        case 3: _t->copyFromVtkExportable((*reinterpret_cast< vtkSlicerDICOMExportable*(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerDICOMExportable *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->tooltip(); break;
        case 2: *reinterpret_cast< vtkIdType*>(_v) = _t->subjectHierarchyItemID(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->pluginClass(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->directory(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->confidence(); break;
        case 6: *reinterpret_cast< TagsMap*>(_v) = _t->tags(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerDICOMExportable *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setTooltip(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setSubjectHierarchyItemID(*reinterpret_cast< vtkIdType*>(_v)); break;
        case 3: _t->setPluginClass(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setDirectory(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setConfidence(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setTags(*reinterpret_cast< TagsMap*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerDICOMExportable::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerDICOMExportable.data,
    qt_meta_data_qSlicerDICOMExportable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerDICOMExportable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerDICOMExportable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerDICOMExportable.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerDICOMExportable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
