/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSegmentEditorPaintEffect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Segmentations/EditorEffects/qSlicerSegmentEditorPaintEffect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSegmentEditorPaintEffect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSegmentEditorPaintEffect_t {
    QByteArrayData data[22];
    char stringdata0[342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSegmentEditorPaintEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSegmentEditorPaintEffect_t qt_meta_stringdata_qSlicerSegmentEditorPaintEffect = {
    {
QT_MOC_LITERAL(0, 0, 31), // "qSlicerSegmentEditorPaintEffect"
QT_MOC_LITERAL(1, 32, 17), // "updateGUIFromMRML"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 17), // "updateMRMLFromGUI"
QT_MOC_LITERAL(4, 69, 28), // "setMinimumPaintPointDistance"
QT_MOC_LITERAL(5, 98, 4), // "dist"
QT_MOC_LITERAL(6, 103, 15), // "setDelayedPaint"
QT_MOC_LITERAL(7, 119, 7), // "delayed"
QT_MOC_LITERAL(8, 127, 25), // "minimumPaintPointDistance"
QT_MOC_LITERAL(9, 153, 12), // "delayedPaint"
QT_MOC_LITERAL(10, 166, 24), // "paintBrushesIntoLabelmap"
QT_MOC_LITERAL(11, 191, 10), // "QList<int>"
QT_MOC_LITERAL(12, 202, 21), // "vtkOrientedImageData*"
QT_MOC_LITERAL(13, 224, 8), // "labelmap"
QT_MOC_LITERAL(14, 233, 12), // "qMRMLWidget*"
QT_MOC_LITERAL(15, 246, 10), // "viewWidget"
QT_MOC_LITERAL(16, 257, 12), // "clearBrushes"
QT_MOC_LITERAL(17, 270, 17), // "paintOptionsFrame"
QT_MOC_LITERAL(18, 288, 7), // "QFrame*"
QT_MOC_LITERAL(19, 296, 29), // "setColorSmudgeCheckboxVisible"
QT_MOC_LITERAL(20, 326, 4), // "show"
QT_MOC_LITERAL(21, 331, 10) // "paintApply"

    },
    "qSlicerSegmentEditorPaintEffect\0"
    "updateGUIFromMRML\0\0updateMRMLFromGUI\0"
    "setMinimumPaintPointDistance\0dist\0"
    "setDelayedPaint\0delayed\0"
    "minimumPaintPointDistance\0delayedPaint\0"
    "paintBrushesIntoLabelmap\0QList<int>\0"
    "vtkOrientedImageData*\0labelmap\0"
    "qMRMLWidget*\0viewWidget\0clearBrushes\0"
    "paintOptionsFrame\0QFrame*\0"
    "setColorSmudgeCheckboxVisible\0show\0"
    "paintApply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSegmentEditorPaintEffect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       2,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    1,   71,    2, 0x0a /* Public */,
       6,    1,   74,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   77,    2, 0x02 /* Public */,
       9,    0,   78,    2, 0x02 /* Public */,
      10,    2,   79,    2, 0x02 /* Public */,
      16,    0,   84,    2, 0x02 /* Public */,
      17,    0,   85,    2, 0x02 /* Public */,
      19,    1,   86,    2, 0x02 /* Public */,
      21,    1,   89,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Bool,    7,

 // methods: parameters
    QMetaType::Double,
    QMetaType::Bool,
    0x80000000 | 11, 0x80000000 | 12, 0x80000000 | 14,   13,   15,
    QMetaType::Void,
    0x80000000 | 18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, 0x80000000 | 14,   15,

 // properties: name, type, flags
       8, QMetaType::Double, 0x00095103,
       9, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qSlicerSegmentEditorPaintEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSegmentEditorPaintEffect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateGUIFromMRML(); break;
        case 1: _t->updateMRMLFromGUI(); break;
        case 2: _t->setMinimumPaintPointDistance((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setDelayedPaint((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { double _r = _t->minimumPaintPointDistance();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->delayedPaint();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { QList<int> _r = _t->paintBrushesIntoLabelmap((*reinterpret_cast< vtkOrientedImageData*(*)>(_a[1])),(*reinterpret_cast< qMRMLWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->clearBrushes(); break;
        case 8: { QFrame* _r = _t->paintOptionsFrame();
            if (_a[0]) *reinterpret_cast< QFrame**>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setColorSmudgeCheckboxVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->paintApply((*reinterpret_cast< qMRMLWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerSegmentEditorPaintEffect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->minimumPaintPointDistance(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->delayedPaint(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerSegmentEditorPaintEffect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinimumPaintPointDistance(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setDelayedPaint(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSegmentEditorPaintEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerSegmentEditorAbstractLabelEffect::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSegmentEditorPaintEffect.data,
    qt_meta_data_qSlicerSegmentEditorPaintEffect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSegmentEditorPaintEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSegmentEditorPaintEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSegmentEditorPaintEffect.stringdata0))
        return static_cast<void*>(this);
    return qSlicerSegmentEditorAbstractLabelEffect::qt_metacast(_clname);
}

int qSlicerSegmentEditorPaintEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerSegmentEditorAbstractLabelEffect::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
