/****************************************************************************
** Meta object code from reading C++ file 'qMRMLEventLogger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLEventLogger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLEventLogger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLEventLogger_t {
    QByteArrayData data[41];
    char stringdata0[923];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLEventLogger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLEventLogger_t qt_meta_stringdata_qMRMLEventLogger = {
    {
QT_MOC_LITERAL(0, 0, 16), // "qMRMLEventLogger"
QT_MOC_LITERAL(1, 17, 20), // "signalNodeAddedEvent"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 10), // "vtkObject*"
QT_MOC_LITERAL(4, 50, 6), // "caller"
QT_MOC_LITERAL(5, 57, 9), // "call_data"
QT_MOC_LITERAL(6, 67, 22), // "signalNodeRemovedEvent"
QT_MOC_LITERAL(7, 90, 19), // "signalNewSceneEvent"
QT_MOC_LITERAL(8, 110, 22), // "signalSceneClosedEvent"
QT_MOC_LITERAL(9, 133, 31), // "signalSceneAboutToBeClosedEvent"
QT_MOC_LITERAL(10, 165, 24), // "signalMetadataAddedEvent"
QT_MOC_LITERAL(11, 190, 33), // "signalImportProgressFeedbackE..."
QT_MOC_LITERAL(12, 224, 31), // "signalSaveProgressFeedbackEvent"
QT_MOC_LITERAL(13, 256, 33), // "signalSceneAboutToBeImportedE..."
QT_MOC_LITERAL(14, 290, 24), // "signalSceneImportedEvent"
QT_MOC_LITERAL(15, 315, 24), // "signalSceneRestoredEvent"
QT_MOC_LITERAL(16, 340, 20), // "listenNodeAddedEvent"
QT_MOC_LITERAL(17, 361, 6), // "listen"
QT_MOC_LITERAL(18, 368, 22), // "listenNodeRemovedEvent"
QT_MOC_LITERAL(19, 391, 19), // "listenNewSceneEvent"
QT_MOC_LITERAL(20, 411, 22), // "listenSceneClosedEvent"
QT_MOC_LITERAL(21, 434, 31), // "listenSceneAboutToBeClosedEvent"
QT_MOC_LITERAL(22, 466, 24), // "listenMetadataAddedEvent"
QT_MOC_LITERAL(23, 491, 33), // "listenImportProgressFeedbackE..."
QT_MOC_LITERAL(24, 525, 31), // "listenSaveProgressFeedbackEvent"
QT_MOC_LITERAL(25, 557, 33), // "listenSceneAboutToBeImportedE..."
QT_MOC_LITERAL(26, 591, 24), // "listenSceneImportedEvent"
QT_MOC_LITERAL(27, 616, 24), // "listenSceneRestoredEvent"
QT_MOC_LITERAL(28, 641, 16), // "onNodeAddedEvent"
QT_MOC_LITERAL(29, 658, 18), // "onNodeRemovedEvent"
QT_MOC_LITERAL(30, 677, 15), // "onNewSceneEvent"
QT_MOC_LITERAL(31, 693, 18), // "onSceneClosedEvent"
QT_MOC_LITERAL(32, 712, 27), // "onSceneAboutToBeClosedEvent"
QT_MOC_LITERAL(33, 740, 20), // "onMetadataAddedEvent"
QT_MOC_LITERAL(34, 761, 29), // "onImportProgressFeedbackEvent"
QT_MOC_LITERAL(35, 791, 27), // "onSaveProgressFeedbackEvent"
QT_MOC_LITERAL(36, 819, 29), // "onSceneAboutToBeImportedEvent"
QT_MOC_LITERAL(37, 849, 20), // "onSceneImportedEvent"
QT_MOC_LITERAL(38, 870, 20), // "onSceneRestoredEvent"
QT_MOC_LITERAL(39, 891, 23), // "setConsoleOutputEnabled"
QT_MOC_LITERAL(40, 915, 7) // "enabled"

    },
    "qMRMLEventLogger\0signalNodeAddedEvent\0"
    "\0vtkObject*\0caller\0call_data\0"
    "signalNodeRemovedEvent\0signalNewSceneEvent\0"
    "signalSceneClosedEvent\0"
    "signalSceneAboutToBeClosedEvent\0"
    "signalMetadataAddedEvent\0"
    "signalImportProgressFeedbackEvent\0"
    "signalSaveProgressFeedbackEvent\0"
    "signalSceneAboutToBeImportedEvent\0"
    "signalSceneImportedEvent\0"
    "signalSceneRestoredEvent\0listenNodeAddedEvent\0"
    "listen\0listenNodeRemovedEvent\0"
    "listenNewSceneEvent\0listenSceneClosedEvent\0"
    "listenSceneAboutToBeClosedEvent\0"
    "listenMetadataAddedEvent\0"
    "listenImportProgressFeedbackEvent\0"
    "listenSaveProgressFeedbackEvent\0"
    "listenSceneAboutToBeImportedEvent\0"
    "listenSceneImportedEvent\0"
    "listenSceneRestoredEvent\0onNodeAddedEvent\0"
    "onNodeRemovedEvent\0onNewSceneEvent\0"
    "onSceneClosedEvent\0onSceneAboutToBeClosedEvent\0"
    "onMetadataAddedEvent\0onImportProgressFeedbackEvent\0"
    "onSaveProgressFeedbackEvent\0"
    "onSceneAboutToBeImportedEvent\0"
    "onSceneImportedEvent\0onSceneRestoredEvent\0"
    "setConsoleOutputEnabled\0enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLEventLogger[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  184,    2, 0x06 /* Public */,
       6,    2,  189,    2, 0x06 /* Public */,
       7,    0,  194,    2, 0x06 /* Public */,
       8,    0,  195,    2, 0x06 /* Public */,
       9,    0,  196,    2, 0x06 /* Public */,
      10,    0,  197,    2, 0x06 /* Public */,
      11,    0,  198,    2, 0x06 /* Public */,
      12,    0,  199,    2, 0x06 /* Public */,
      13,    0,  200,    2, 0x06 /* Public */,
      14,    0,  201,    2, 0x06 /* Public */,
      15,    0,  202,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  203,    2, 0x0a /* Public */,
      18,    1,  206,    2, 0x0a /* Public */,
      19,    1,  209,    2, 0x0a /* Public */,
      20,    1,  212,    2, 0x0a /* Public */,
      21,    1,  215,    2, 0x0a /* Public */,
      22,    1,  218,    2, 0x0a /* Public */,
      23,    1,  221,    2, 0x0a /* Public */,
      24,    1,  224,    2, 0x0a /* Public */,
      25,    1,  227,    2, 0x0a /* Public */,
      26,    1,  230,    2, 0x0a /* Public */,
      27,    1,  233,    2, 0x0a /* Public */,
      28,    2,  236,    2, 0x0a /* Public */,
      29,    2,  241,    2, 0x0a /* Public */,
      30,    0,  246,    2, 0x0a /* Public */,
      31,    0,  247,    2, 0x0a /* Public */,
      32,    0,  248,    2, 0x0a /* Public */,
      33,    0,  249,    2, 0x0a /* Public */,
      34,    0,  250,    2, 0x0a /* Public */,
      35,    0,  251,    2, 0x0a /* Public */,
      36,    0,  252,    2, 0x0a /* Public */,
      37,    0,  253,    2, 0x0a /* Public */,
      38,    0,  254,    2, 0x0a /* Public */,
      39,    1,  255,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   40,

       0        // eod
};

void qMRMLEventLogger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLEventLogger *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalNodeAddedEvent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        case 1: _t->signalNodeRemovedEvent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        case 2: _t->signalNewSceneEvent(); break;
        case 3: _t->signalSceneClosedEvent(); break;
        case 4: _t->signalSceneAboutToBeClosedEvent(); break;
        case 5: _t->signalMetadataAddedEvent(); break;
        case 6: _t->signalImportProgressFeedbackEvent(); break;
        case 7: _t->signalSaveProgressFeedbackEvent(); break;
        case 8: _t->signalSceneAboutToBeImportedEvent(); break;
        case 9: _t->signalSceneImportedEvent(); break;
        case 10: _t->signalSceneRestoredEvent(); break;
        case 11: _t->listenNodeAddedEvent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->listenNodeRemovedEvent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->listenNewSceneEvent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->listenSceneClosedEvent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->listenSceneAboutToBeClosedEvent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->listenMetadataAddedEvent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->listenImportProgressFeedbackEvent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->listenSaveProgressFeedbackEvent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->listenSceneAboutToBeImportedEvent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->listenSceneImportedEvent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->listenSceneRestoredEvent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->onNodeAddedEvent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        case 23: _t->onNodeRemovedEvent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        case 24: _t->onNewSceneEvent(); break;
        case 25: _t->onSceneClosedEvent(); break;
        case 26: _t->onSceneAboutToBeClosedEvent(); break;
        case 27: _t->onMetadataAddedEvent(); break;
        case 28: _t->onImportProgressFeedbackEvent(); break;
        case 29: _t->onSaveProgressFeedbackEvent(); break;
        case 30: _t->onSceneAboutToBeImportedEvent(); break;
        case 31: _t->onSceneImportedEvent(); break;
        case 32: _t->onSceneRestoredEvent(); break;
        case 33: _t->setConsoleOutputEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLEventLogger::*)(vtkObject * , vtkObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLEventLogger::signalNodeAddedEvent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLEventLogger::*)(vtkObject * , vtkObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLEventLogger::signalNodeRemovedEvent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qMRMLEventLogger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLEventLogger::signalNewSceneEvent)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (qMRMLEventLogger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLEventLogger::signalSceneClosedEvent)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (qMRMLEventLogger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLEventLogger::signalSceneAboutToBeClosedEvent)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (qMRMLEventLogger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLEventLogger::signalMetadataAddedEvent)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (qMRMLEventLogger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLEventLogger::signalImportProgressFeedbackEvent)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (qMRMLEventLogger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLEventLogger::signalSaveProgressFeedbackEvent)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (qMRMLEventLogger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLEventLogger::signalSceneAboutToBeImportedEvent)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (qMRMLEventLogger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLEventLogger::signalSceneImportedEvent)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (qMRMLEventLogger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLEventLogger::signalSceneRestoredEvent)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLEventLogger::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qMRMLEventLogger.data,
    qt_meta_data_qMRMLEventLogger,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLEventLogger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLEventLogger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLEventLogger.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qMRMLEventLogger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void qMRMLEventLogger::signalNodeAddedEvent(vtkObject * _t1, vtkObject * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLEventLogger::signalNodeRemovedEvent(vtkObject * _t1, vtkObject * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qMRMLEventLogger::signalNewSceneEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void qMRMLEventLogger::signalSceneClosedEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void qMRMLEventLogger::signalSceneAboutToBeClosedEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void qMRMLEventLogger::signalMetadataAddedEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void qMRMLEventLogger::signalImportProgressFeedbackEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void qMRMLEventLogger::signalSaveProgressFeedbackEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void qMRMLEventLogger::signalSceneAboutToBeImportedEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void qMRMLEventLogger::signalSceneImportedEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void qMRMLEventLogger::signalSceneRestoredEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
