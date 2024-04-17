/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSequenceBrowserPlayWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Sequences/Widgets/qMRMLSequenceBrowserPlayWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSequenceBrowserPlayWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSequenceBrowserPlayWidget_t {
    QByteArrayData data[23];
    char stringdata0[382];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSequenceBrowserPlayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSequenceBrowserPlayWidget_t qt_meta_stringdata_qMRMLSequenceBrowserPlayWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "qMRMLSequenceBrowserPlayWidget"
QT_MOC_LITERAL(1, 31, 26), // "setMRMLSequenceBrowserNode"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 27), // "vtkMRMLSequenceBrowserNode*"
QT_MOC_LITERAL(4, 87, 11), // "browserNode"
QT_MOC_LITERAL(5, 99, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 112, 18), // "setPlaybackEnabled"
QT_MOC_LITERAL(7, 131, 4), // "play"
QT_MOC_LITERAL(8, 136, 19), // "setRecordingEnabled"
QT_MOC_LITERAL(9, 156, 18), // "setPlaybackRateFps"
QT_MOC_LITERAL(10, 175, 15), // "playbackRateFps"
QT_MOC_LITERAL(11, 191, 22), // "setPlaybackLoopEnabled"
QT_MOC_LITERAL(12, 214, 11), // "loopEnabled"
QT_MOC_LITERAL(13, 226, 27), // "setRecordingControlsVisible"
QT_MOC_LITERAL(14, 254, 4), // "show"
QT_MOC_LITERAL(15, 259, 10), // "onVcrFirst"
QT_MOC_LITERAL(16, 270, 13), // "onVcrPrevious"
QT_MOC_LITERAL(17, 284, 9), // "onVcrNext"
QT_MOC_LITERAL(18, 294, 9), // "onVcrLast"
QT_MOC_LITERAL(19, 304, 14), // "onVcrPlayPause"
QT_MOC_LITERAL(20, 319, 16), // "onRecordSnapshot"
QT_MOC_LITERAL(21, 336, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(22, 357, 24) // "RecordingControlsVisible"

    },
    "qMRMLSequenceBrowserPlayWidget\0"
    "setMRMLSequenceBrowserNode\0\0"
    "vtkMRMLSequenceBrowserNode*\0browserNode\0"
    "vtkMRMLNode*\0setPlaybackEnabled\0play\0"
    "setRecordingEnabled\0setPlaybackRateFps\0"
    "playbackRateFps\0setPlaybackLoopEnabled\0"
    "loopEnabled\0setRecordingControlsVisible\0"
    "show\0onVcrFirst\0onVcrPrevious\0onVcrNext\0"
    "onVcrLast\0onVcrPlayPause\0onRecordSnapshot\0"
    "updateWidgetFromMRML\0RecordingControlsVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSequenceBrowserPlayWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       1,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x0a /* Public */,
       1,    1,   87,    2, 0x0a /* Public */,
       6,    1,   90,    2, 0x0a /* Public */,
       8,    1,   93,    2, 0x0a /* Public */,
       9,    1,   96,    2, 0x0a /* Public */,
      11,    1,   99,    2, 0x0a /* Public */,
      13,    1,  102,    2, 0x0a /* Public */,
      15,    0,  105,    2, 0x0a /* Public */,
      16,    0,  106,    2, 0x0a /* Public */,
      17,    0,  107,    2, 0x0a /* Public */,
      18,    0,  108,    2, 0x0a /* Public */,
      19,    0,  109,    2, 0x0a /* Public */,
      20,    0,  110,    2, 0x0a /* Public */,
      21,    0,  111,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      22, QMetaType::Bool, 0x00095103,

       0        // eod
};

void qMRMLSequenceBrowserPlayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSequenceBrowserPlayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLSequenceBrowserNode((*reinterpret_cast< vtkMRMLSequenceBrowserNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLSequenceBrowserNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->setPlaybackEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setRecordingEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setPlaybackRateFps((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setPlaybackLoopEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setRecordingControlsVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onVcrFirst(); break;
        case 8: _t->onVcrPrevious(); break;
        case 9: _t->onVcrNext(); break;
        case 10: _t->onVcrLast(); break;
        case 11: _t->onVcrPlayPause(); break;
        case 12: _t->onRecordSnapshot(); break;
        case 13: _t->updateWidgetFromMRML(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSequenceBrowserPlayWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->recordingControlsVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSequenceBrowserPlayWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRecordingControlsVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSequenceBrowserPlayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSequenceBrowserPlayWidget.data,
    qt_meta_data_qMRMLSequenceBrowserPlayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSequenceBrowserPlayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSequenceBrowserPlayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSequenceBrowserPlayWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLSequenceBrowserPlayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
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
