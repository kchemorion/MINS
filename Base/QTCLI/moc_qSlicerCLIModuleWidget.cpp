/****************************************************************************
** Meta object code from reading C++ file 'qSlicerCLIModuleWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../slicersources-src/Base/QTCLI/qSlicerCLIModuleWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerCLIModuleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerCLIModuleWidget_t {
    QByteArrayData data[17];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerCLIModuleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerCLIModuleWidget_t qt_meta_stringdata_qSlicerCLIModuleWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "qSlicerCLIModuleWidget"
QT_MOC_LITERAL(1, 23, 31), // "setCurrentCommandLineModuleNode"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 69, 21), // "commandLineModuleNode"
QT_MOC_LITERAL(5, 91, 5), // "apply"
QT_MOC_LITERAL(6, 97, 4), // "wait"
QT_MOC_LITERAL(7, 102, 6), // "cancel"
QT_MOC_LITERAL(8, 109, 5), // "reset"
QT_MOC_LITERAL(9, 115, 10), // "setAutoRun"
QT_MOC_LITERAL(10, 126, 6), // "enable"
QT_MOC_LITERAL(11, 133, 30), // "setAutoRunWhenParameterChanged"
QT_MOC_LITERAL(12, 164, 27), // "setAutoRunWhenInputModified"
QT_MOC_LITERAL(13, 192, 28), // "setAutoRunOnOtherInputEvents"
QT_MOC_LITERAL(14, 221, 31), // "setAutoRunCancelsRunningProcess"
QT_MOC_LITERAL(15, 253, 28), // "currentCommandLineModuleNode"
QT_MOC_LITERAL(16, 282, 29) // "vtkMRMLCommandLineModuleNode*"

    },
    "qSlicerCLIModuleWidget\0"
    "setCurrentCommandLineModuleNode\0\0"
    "vtkMRMLNode*\0commandLineModuleNode\0"
    "apply\0wait\0cancel\0reset\0setAutoRun\0"
    "enable\0setAutoRunWhenParameterChanged\0"
    "setAutoRunWhenInputModified\0"
    "setAutoRunOnOtherInputEvents\0"
    "setAutoRunCancelsRunningProcess\0"
    "currentCommandLineModuleNode\0"
    "vtkMRMLCommandLineModuleNode*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerCLIModuleWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       5,    1,   72,    2, 0x0a /* Public */,
       5,    0,   75,    2, 0x2a /* Public | MethodCloned */,
       7,    0,   76,    2, 0x0a /* Public */,
       8,    0,   77,    2, 0x0a /* Public */,
       9,    1,   78,    2, 0x0a /* Public */,
      11,    1,   81,    2, 0x0a /* Public */,
      12,    1,   84,    2, 0x0a /* Public */,
      13,    1,   87,    2, 0x0a /* Public */,
      14,    1,   90,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      15,    0,   93,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,

 // methods: parameters
    0x80000000 | 16,

       0        // eod
};

void qSlicerCLIModuleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerCLIModuleWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setCurrentCommandLineModuleNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->apply((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->apply(); break;
        case 3: _t->cancel(); break;
        case 4: _t->reset(); break;
        case 5: _t->setAutoRun((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setAutoRunWhenParameterChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setAutoRunWhenInputModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setAutoRunOnOtherInputEvents((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setAutoRunCancelsRunningProcess((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: { vtkMRMLCommandLineModuleNode* _r = _t->currentCommandLineModuleNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLCommandLineModuleNode**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qSlicerCLIModuleWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerAbstractModuleWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerCLIModuleWidget.data,
    qt_meta_data_qSlicerCLIModuleWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerCLIModuleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerCLIModuleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerCLIModuleWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerAbstractModuleWidget::qt_metacast(_clname);
}

int qSlicerCLIModuleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerAbstractModuleWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
