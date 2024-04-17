/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSubjectHierarchySegmentsPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Segmentations/SubjectHierarchyPlugins/qSlicerSubjectHierarchySegmentsPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSubjectHierarchySegmentsPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSubjectHierarchySegmentsPlugin_t {
    QByteArrayData data[9];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSubjectHierarchySegmentsPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSubjectHierarchySegmentsPlugin_t qt_meta_stringdata_qSlicerSubjectHierarchySegmentsPlugin = {
    {
QT_MOC_LITERAL(0, 0, 37), // "qSlicerSubjectHierarchySegmen..."
QT_MOC_LITERAL(1, 38, 22), // "showOnlyCurrentSegment"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 15), // "showAllSegments"
QT_MOC_LITERAL(4, 78, 10), // "jumpSlices"
QT_MOC_LITERAL(5, 89, 12), // "cloneSegment"
QT_MOC_LITERAL(6, 102, 24), // "setOpacityForCurrentItem"
QT_MOC_LITERAL(7, 127, 7), // "opacity"
QT_MOC_LITERAL(8, 135, 13) // "roleForPlugin"

    },
    "qSlicerSubjectHierarchySegmentsPlugin\0"
    "showOnlyCurrentSegment\0\0showAllSegments\0"
    "jumpSlices\0cloneSegment\0"
    "setOpacityForCurrentItem\0opacity\0"
    "roleForPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSubjectHierarchySegmentsPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x09 /* Protected */,
       3,    0,   45,    2, 0x09 /* Protected */,
       4,    0,   46,    2, 0x09 /* Protected */,
       5,    0,   47,    2, 0x09 /* Protected */,
       6,    1,   48,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   51,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    7,

 // methods: parameters
    QMetaType::QString,

       0        // eod
};

void qSlicerSubjectHierarchySegmentsPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSubjectHierarchySegmentsPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showOnlyCurrentSegment(); break;
        case 1: _t->showAllSegments(); break;
        case 2: _t->jumpSlices(); break;
        case 3: _t->cloneSegment(); break;
        case 4: _t->setOpacityForCurrentItem((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: { QString _r = _t->roleForPlugin();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSubjectHierarchySegmentsPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerSubjectHierarchyAbstractPlugin::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSubjectHierarchySegmentsPlugin.data,
    qt_meta_data_qSlicerSubjectHierarchySegmentsPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSubjectHierarchySegmentsPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSubjectHierarchySegmentsPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSubjectHierarchySegmentsPlugin.stringdata0))
        return static_cast<void*>(this);
    return qSlicerSubjectHierarchyAbstractPlugin::qt_metacast(_clname);
}

int qSlicerSubjectHierarchySegmentsPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerSubjectHierarchyAbstractPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
