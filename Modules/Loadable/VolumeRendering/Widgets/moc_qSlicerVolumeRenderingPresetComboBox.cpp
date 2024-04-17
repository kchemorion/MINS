/****************************************************************************
** Meta object code from reading C++ file 'qSlicerVolumeRenderingPresetComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/VolumeRendering/Widgets/qSlicerVolumeRenderingPresetComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerVolumeRenderingPresetComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerVolumeRenderingPresetComboBox_t {
    QByteArrayData data[29];
    char stringdata0[443];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerVolumeRenderingPresetComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerVolumeRenderingPresetComboBox_t qt_meta_stringdata_qSlicerVolumeRenderingPresetComboBox = {
    {
QT_MOC_LITERAL(0, 0, 36), // "qSlicerVolumeRenderingPresetC..."
QT_MOC_LITERAL(1, 37, 18), // "currentNodeChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 70, 4), // "node"
QT_MOC_LITERAL(5, 75, 20), // "currentNodeIDChanged"
QT_MOC_LITERAL(6, 96, 2), // "id"
QT_MOC_LITERAL(7, 99, 19), // "presetOffsetChanged"
QT_MOC_LITERAL(8, 119, 7), // "xOffset"
QT_MOC_LITERAL(9, 127, 7), // "yOffset"
QT_MOC_LITERAL(10, 135, 20), // "dontMoveFirstAndLast"
QT_MOC_LITERAL(11, 156, 14), // "setCurrentNode"
QT_MOC_LITERAL(12, 171, 16), // "setCurrentNodeID"
QT_MOC_LITERAL(13, 188, 6), // "nodeID"
QT_MOC_LITERAL(14, 195, 25), // "setMRMLVolumePropertyNode"
QT_MOC_LITERAL(15, 221, 23), // "updatePresetSliderRange"
QT_MOC_LITERAL(16, 245, 11), // "applyPreset"
QT_MOC_LITERAL(17, 257, 18), // "volumePropertyNode"
QT_MOC_LITERAL(18, 276, 16), // "startInteraction"
QT_MOC_LITERAL(19, 293, 14), // "endInteraction"
QT_MOC_LITERAL(20, 308, 11), // "interaction"
QT_MOC_LITERAL(21, 320, 12), // "offsetPreset"
QT_MOC_LITERAL(22, 333, 11), // "newPosition"
QT_MOC_LITERAL(23, 345, 11), // "resetOffset"
QT_MOC_LITERAL(24, 357, 11), // "currentNode"
QT_MOC_LITERAL(25, 369, 13), // "currentNodeID"
QT_MOC_LITERAL(26, 383, 22), // "mrmlVolumePropertyNode"
QT_MOC_LITERAL(27, 406, 26), // "vtkMRMLVolumePropertyNode*"
QT_MOC_LITERAL(28, 433, 9) // "showIcons"

    },
    "qSlicerVolumeRenderingPresetComboBox\0"
    "currentNodeChanged\0\0vtkMRMLNode*\0node\0"
    "currentNodeIDChanged\0id\0presetOffsetChanged\0"
    "xOffset\0yOffset\0dontMoveFirstAndLast\0"
    "setCurrentNode\0setCurrentNodeID\0nodeID\0"
    "setMRMLVolumePropertyNode\0"
    "updatePresetSliderRange\0applyPreset\0"
    "volumePropertyNode\0startInteraction\0"
    "endInteraction\0interaction\0offsetPreset\0"
    "newPosition\0resetOffset\0currentNode\0"
    "currentNodeID\0mrmlVolumePropertyNode\0"
    "vtkMRMLVolumePropertyNode*\0showIcons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerVolumeRenderingPresetComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       1,  130, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       5,    1,   97,    2, 0x06 /* Public */,
       7,    3,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  107,    2, 0x0a /* Public */,
      12,    1,  110,    2, 0x0a /* Public */,
      14,    1,  113,    2, 0x0a /* Public */,
      15,    0,  116,    2, 0x0a /* Public */,
      16,    1,  117,    2, 0x0a /* Public */,
      18,    0,  120,    2, 0x09 /* Protected */,
      19,    0,  121,    2, 0x09 /* Protected */,
      20,    0,  122,    2, 0x09 /* Protected */,
      21,    1,  123,    2, 0x09 /* Protected */,
      23,    0,  126,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      24,    0,  127,    2, 0x02 /* Public */,
      25,    0,  128,    2, 0x02 /* Public */,
      26,    0,  129,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Bool,    8,    9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 3,
    QMetaType::QString,
    0x80000000 | 27,

 // properties: name, type, flags
      28, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qSlicerVolumeRenderingPresetComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerVolumeRenderingPresetComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->currentNodeIDChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->presetOffsetChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->setCurrentNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 4: _t->setCurrentNodeID((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setMRMLVolumePropertyNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 6: _t->updatePresetSliderRange(); break;
        case 7: _t->applyPreset((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 8: _t->startInteraction(); break;
        case 9: _t->endInteraction(); break;
        case 10: _t->interaction(); break;
        case 11: _t->offsetPreset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->resetOffset(); break;
        case 13: { vtkMRMLNode* _r = _t->currentNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLNode**>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->currentNodeID();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: { vtkMRMLVolumePropertyNode* _r = _t->mrmlVolumePropertyNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLVolumePropertyNode**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qSlicerVolumeRenderingPresetComboBox::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerVolumeRenderingPresetComboBox::currentNodeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qSlicerVolumeRenderingPresetComboBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerVolumeRenderingPresetComboBox::currentNodeIDChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qSlicerVolumeRenderingPresetComboBox::*)(double , double , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerVolumeRenderingPresetComboBox::presetOffsetChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerVolumeRenderingPresetComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->showIcons(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerVolumeRenderingPresetComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShowIcons(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerVolumeRenderingPresetComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerVolumeRenderingPresetComboBox.data,
    qt_meta_data_qSlicerVolumeRenderingPresetComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerVolumeRenderingPresetComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerVolumeRenderingPresetComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerVolumeRenderingPresetComboBox.stringdata0))
        return static_cast<void*>(this);
    return qSlicerWidget::qt_metacast(_clname);
}

int qSlicerVolumeRenderingPresetComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
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
void qSlicerVolumeRenderingPresetComboBox::currentNodeChanged(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qSlicerVolumeRenderingPresetComboBox::currentNodeIDChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qSlicerVolumeRenderingPresetComboBox::presetOffsetChanged(double _t1, double _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
