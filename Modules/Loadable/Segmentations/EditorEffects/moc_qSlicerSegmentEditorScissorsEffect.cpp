/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSegmentEditorScissorsEffect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Segmentations/EditorEffects/qSlicerSegmentEditorScissorsEffect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSegmentEditorScissorsEffect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSegmentEditorScissorsEffect_t {
    QByteArrayData data[18];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSegmentEditorScissorsEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSegmentEditorScissorsEffect_t qt_meta_stringdata_qSlicerSegmentEditorScissorsEffect = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qSlicerSegmentEditorScissorsE..."
QT_MOC_LITERAL(1, 35, 17), // "updateGUIFromMRML"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 17), // "updateMRMLFromGUI"
QT_MOC_LITERAL(4, 72, 12), // "setOperation"
QT_MOC_LITERAL(5, 85, 14), // "operationIndex"
QT_MOC_LITERAL(6, 100, 8), // "setShape"
QT_MOC_LITERAL(7, 109, 10), // "shapeIndex"
QT_MOC_LITERAL(8, 120, 20), // "setShapeDrawCentered"
QT_MOC_LITERAL(9, 141, 10), // "checkState"
QT_MOC_LITERAL(10, 152, 15), // "setSliceCutMode"
QT_MOC_LITERAL(11, 168, 17), // "sliceCutModeIndex"
QT_MOC_LITERAL(12, 186, 22), // "onSliceCutDepthChanged"
QT_MOC_LITERAL(13, 209, 5), // "value"
QT_MOC_LITERAL(14, 215, 8), // "helpText"
QT_MOC_LITERAL(15, 224, 10), // "deactivate"
QT_MOC_LITERAL(16, 235, 20), // "setDebugOutputFolder"
QT_MOC_LITERAL(17, 256, 6) // "folder"

    },
    "qSlicerSegmentEditorScissorsEffect\0"
    "updateGUIFromMRML\0\0updateMRMLFromGUI\0"
    "setOperation\0operationIndex\0setShape\0"
    "shapeIndex\0setShapeDrawCentered\0"
    "checkState\0setSliceCutMode\0sliceCutModeIndex\0"
    "onSliceCutDepthChanged\0value\0helpText\0"
    "deactivate\0setDebugOutputFolder\0folder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSegmentEditorScissorsEffect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    1,   66,    2, 0x0a /* Public */,
       6,    1,   69,    2, 0x0a /* Public */,
       8,    1,   72,    2, 0x0a /* Public */,
      10,    1,   75,    2, 0x0a /* Public */,
      12,    1,   78,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    0,   81,    2, 0x02 /* Public */,
      15,    0,   82,    2, 0x02 /* Public */,
      16,    1,   83,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Double,   13,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void qSlicerSegmentEditorScissorsEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSegmentEditorScissorsEffect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateGUIFromMRML(); break;
        case 1: _t->updateMRMLFromGUI(); break;
        case 2: _t->setOperation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setShape((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setShapeDrawCentered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setSliceCutMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onSliceCutDepthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: { QString _r = _t->helpText();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->deactivate(); break;
        case 9: _t->setDebugOutputFolder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSegmentEditorScissorsEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerSegmentEditorAbstractLabelEffect::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSegmentEditorScissorsEffect.data,
    qt_meta_data_qSlicerSegmentEditorScissorsEffect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSegmentEditorScissorsEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSegmentEditorScissorsEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSegmentEditorScissorsEffect.stringdata0))
        return static_cast<void*>(this);
    return qSlicerSegmentEditorAbstractLabelEffect::qt_metacast(_clname);
}

int qSlicerSegmentEditorScissorsEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerSegmentEditorAbstractLabelEffect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
