/****************************************************************************
** Meta object code from reading C++ file 'qMRMLEventLoggerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLEventLoggerWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLEventLoggerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLEventLoggerWidget_t {
    QByteArrayData data[21];
    char stringdata0[367];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLEventLoggerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLEventLoggerWidget_t qt_meta_stringdata_qMRMLEventLoggerWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "qMRMLEventLoggerWidget"
QT_MOC_LITERAL(1, 23, 12), // "setMRMLScene"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(4, 51, 5), // "scene"
QT_MOC_LITERAL(5, 57, 23), // "setConsoleOutputEnabled"
QT_MOC_LITERAL(6, 81, 7), // "enabled"
QT_MOC_LITERAL(7, 89, 16), // "onNodeAddedEvent"
QT_MOC_LITERAL(8, 106, 10), // "vtkObject*"
QT_MOC_LITERAL(9, 117, 6), // "caller"
QT_MOC_LITERAL(10, 124, 9), // "call_data"
QT_MOC_LITERAL(11, 134, 18), // "onNodeRemovedEvent"
QT_MOC_LITERAL(12, 153, 15), // "onNewSceneEvent"
QT_MOC_LITERAL(13, 169, 18), // "onSceneClosedEvent"
QT_MOC_LITERAL(14, 188, 27), // "onSceneAboutToBeClosedEvent"
QT_MOC_LITERAL(15, 216, 20), // "onMetadataAddedEvent"
QT_MOC_LITERAL(16, 237, 29), // "onImportProgressFeedbackEvent"
QT_MOC_LITERAL(17, 267, 27), // "onSaveProgressFeedbackEvent"
QT_MOC_LITERAL(18, 295, 29), // "onSceneAboutToBeImportedEvent"
QT_MOC_LITERAL(19, 325, 20), // "onSceneImportedEvent"
QT_MOC_LITERAL(20, 346, 20) // "onSceneRestoredEvent"

    },
    "qMRMLEventLoggerWidget\0setMRMLScene\0"
    "\0vtkMRMLScene*\0scene\0setConsoleOutputEnabled\0"
    "enabled\0onNodeAddedEvent\0vtkObject*\0"
    "caller\0call_data\0onNodeRemovedEvent\0"
    "onNewSceneEvent\0onSceneClosedEvent\0"
    "onSceneAboutToBeClosedEvent\0"
    "onMetadataAddedEvent\0onImportProgressFeedbackEvent\0"
    "onSaveProgressFeedbackEvent\0"
    "onSceneAboutToBeImportedEvent\0"
    "onSceneImportedEvent\0onSceneRestoredEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLEventLoggerWidget[] = {

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
       1,    1,   79,    2, 0x0a /* Public */,
       5,    1,   82,    2, 0x0a /* Public */,
       7,    2,   85,    2, 0x09 /* Protected */,
      11,    2,   90,    2, 0x09 /* Protected */,
      12,    0,   95,    2, 0x09 /* Protected */,
      13,    0,   96,    2, 0x09 /* Protected */,
      14,    0,   97,    2, 0x09 /* Protected */,
      15,    0,   98,    2, 0x09 /* Protected */,
      16,    0,   99,    2, 0x09 /* Protected */,
      17,    0,  100,    2, 0x09 /* Protected */,
      18,    0,  101,    2, 0x09 /* Protected */,
      19,    0,  102,    2, 0x09 /* Protected */,
      20,    0,  103,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qMRMLEventLoggerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLEventLoggerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 1: _t->setConsoleOutputEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onNodeAddedEvent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        case 3: _t->onNodeRemovedEvent((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        case 4: _t->onNewSceneEvent(); break;
        case 5: _t->onSceneClosedEvent(); break;
        case 6: _t->onSceneAboutToBeClosedEvent(); break;
        case 7: _t->onMetadataAddedEvent(); break;
        case 8: _t->onImportProgressFeedbackEvent(); break;
        case 9: _t->onSaveProgressFeedbackEvent(); break;
        case 10: _t->onSceneAboutToBeImportedEvent(); break;
        case 11: _t->onSceneImportedEvent(); break;
        case 12: _t->onSceneRestoredEvent(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLEventLoggerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLEventLoggerWidget.data,
    qt_meta_data_qMRMLEventLoggerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLEventLoggerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLEventLoggerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLEventLoggerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qMRMLEventLoggerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
