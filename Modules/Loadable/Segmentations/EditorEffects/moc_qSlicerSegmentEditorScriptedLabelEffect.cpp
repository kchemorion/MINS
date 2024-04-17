/****************************************************************************
** Meta object code from reading C++ file 'qSlicerSegmentEditorScriptedLabelEffect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Segmentations/EditorEffects/qSlicerSegmentEditorScriptedLabelEffect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerSegmentEditorScriptedLabelEffect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerSegmentEditorScriptedLabelEffect_t {
    QByteArrayData data[9];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerSegmentEditorScriptedLabelEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerSegmentEditorScriptedLabelEffect_t qt_meta_stringdata_qSlicerSegmentEditorScriptedLabelEffect = {
    {
QT_MOC_LITERAL(0, 0, 39), // "qSlicerSegmentEditorScriptedL..."
QT_MOC_LITERAL(1, 40, 17), // "updateGUIFromMRML"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 17), // "updateMRMLFromGUI"
QT_MOC_LITERAL(4, 77, 12), // "pythonSource"
QT_MOC_LITERAL(5, 90, 15), // "setPythonSource"
QT_MOC_LITERAL(6, 106, 8), // "filePath"
QT_MOC_LITERAL(7, 115, 4), // "self"
QT_MOC_LITERAL(8, 120, 9) // "PyObject*"

    },
    "qSlicerSegmentEditorScriptedLabelEffect\0"
    "updateGUIFromMRML\0\0updateMRMLFromGUI\0"
    "pythonSource\0setPythonSource\0filePath\0"
    "self\0PyObject*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerSegmentEditorScriptedLabelEffect[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x02 /* Public */,
       5,    1,   42,    2, 0x02 /* Public */,
       7,    0,   45,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,    6,
    0x80000000 | 8,

       0        // eod
};

void qSlicerSegmentEditorScriptedLabelEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerSegmentEditorScriptedLabelEffect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateGUIFromMRML(); break;
        case 1: _t->updateMRMLFromGUI(); break;
        case 2: { QString _r = _t->pythonSource();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->setPythonSource((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { PyObject* _r = _t->self();
            if (_a[0]) *reinterpret_cast< PyObject**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerSegmentEditorScriptedLabelEffect::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerSegmentEditorAbstractLabelEffect::staticMetaObject>(),
    qt_meta_stringdata_qSlicerSegmentEditorScriptedLabelEffect.data,
    qt_meta_data_qSlicerSegmentEditorScriptedLabelEffect,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerSegmentEditorScriptedLabelEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerSegmentEditorScriptedLabelEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerSegmentEditorScriptedLabelEffect.stringdata0))
        return static_cast<void*>(this);
    return qSlicerSegmentEditorAbstractLabelEffect::qt_metacast(_clname);
}

int qSlicerSegmentEditorScriptedLabelEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerSegmentEditorAbstractLabelEffect::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
