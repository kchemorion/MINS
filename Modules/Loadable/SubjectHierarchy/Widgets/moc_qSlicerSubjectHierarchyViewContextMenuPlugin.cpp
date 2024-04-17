/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSubjectHierarchyViewContextMenuPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/SubjectHierarchy/Widgets/qSlicerSubjectHierarchyViewContextMenuPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSubjectHierarchyViewContextMenuPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSubjectHierarchyViewContextMenuPlugin_t {
    QByteArrayData data[16];
    char stringdata0[338];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSubjectHierarchyViewContextMenuPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSubjectHierarchyViewContextMenuPlugin_t qt_meta_stringdata_qSlicerSubjectHierarchyViewContextMenuPlugin = {
    {
QT_MOC_LITERAL(0, 0, 44), // "qSlicerSubjectHierarchyViewCo..."
QT_MOC_LITERAL(1, 45, 18), // "setInteractionMode"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 4), // "mode"
QT_MOC_LITERAL(4, 70, 14), // "saveScreenshot"
QT_MOC_LITERAL(5, 85, 35), // "configureSliceViewAnnotations..."
QT_MOC_LITERAL(6, 121, 12), // "maximizeView"
QT_MOC_LITERAL(7, 134, 12), // "fitSliceView"
QT_MOC_LITERAL(8, 147, 16), // "centerThreeDView"
QT_MOC_LITERAL(9, 164, 13), // "refocusCamera"
QT_MOC_LITERAL(10, 178, 17), // "refocusAllCameras"
QT_MOC_LITERAL(11, 196, 14), // "toggleTiltLock"
QT_MOC_LITERAL(12, 211, 28), // "setIntersectingSlicesVisible"
QT_MOC_LITERAL(13, 240, 35), // "setIntersectingSlicesHandlesV..."
QT_MOC_LITERAL(14, 276, 28), // "setSlabReconstructionEnabled"
QT_MOC_LITERAL(15, 305, 32) // "setSlabReconstructionInteractive"

    },
    "qSlicerSubjectHierarchyViewContextMenuPlugin\0"
    "setInteractionMode\0\0mode\0saveScreenshot\0"
    "configureSliceViewAnnotationsAction\0"
    "maximizeView\0fitSliceView\0centerThreeDView\0"
    "refocusCamera\0refocusAllCameras\0"
    "toggleTiltLock\0setIntersectingSlicesVisible\0"
    "setIntersectingSlicesHandlesVisible\0"
    "setSlabReconstructionEnabled\0"
    "setSlabReconstructionInteractive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSubjectHierarchyViewContextMenuPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x09 /* Protected */,
       4,    0,   82,    2, 0x09 /* Protected */,
       5,    0,   83,    2, 0x09 /* Protected */,
       6,    0,   84,    2, 0x09 /* Protected */,
       7,    0,   85,    2, 0x09 /* Protected */,
       8,    0,   86,    2, 0x09 /* Protected */,
       9,    0,   87,    2, 0x09 /* Protected */,
      10,    0,   88,    2, 0x09 /* Protected */,
      11,    0,   89,    2, 0x09 /* Protected */,
      12,    1,   90,    2, 0x09 /* Protected */,
      13,    1,   93,    2, 0x09 /* Protected */,
      14,    1,   96,    2, 0x09 /* Protected */,
      15,    1,   99,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void qSlicerSubjectHierarchyViewContextMenuPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSubjectHierarchyViewContextMenuPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setInteractionMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->saveScreenshot(); break;
        case 2: _t->configureSliceViewAnnotationsAction(); break;
        case 3: _t->maximizeView(); break;
        case 4: _t->fitSliceView(); break;
        case 5: _t->centerThreeDView(); break;
        case 6: _t->refocusCamera(); break;
        case 7: _t->refocusAllCameras(); break;
        case 8: _t->toggleTiltLock(); break;
        case 9: _t->setIntersectingSlicesVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setIntersectingSlicesHandlesVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setSlabReconstructionEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setSlabReconstructionInteractive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSubjectHierarchyViewContextMenuPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerSubjectHierarchyAbstractPlugin::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSubjectHierarchyViewContextMenuPlugin.data,
    qt_meta_data_qSlicerSubjectHierarchyViewContextMenuPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSubjectHierarchyViewContextMenuPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSubjectHierarchyViewContextMenuPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSubjectHierarchyViewContextMenuPlugin.stringdata0))
        return static_cast<void*>(this);
    return qSlicerSubjectHierarchyAbstractPlugin::qt_metacast(_clname);
}

int qSlicerSubjectHierarchyViewContextMenuPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerSubjectHierarchyAbstractPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
