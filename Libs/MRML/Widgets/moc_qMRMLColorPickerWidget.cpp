/****************************************************************************
** Meta object code from reading C++ file 'qMRMLColorPickerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLColorPickerWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLColorPickerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLColorPickerWidget_t {
    QByteArrayData data[24];
    char stringdata0[354];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLColorPickerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLColorPickerWidget_t qt_meta_stringdata_qMRMLColorPickerWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "qMRMLColorPickerWidget"
QT_MOC_LITERAL(1, 23, 23), // "currentColorNodeChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 61, 4), // "node"
QT_MOC_LITERAL(5, 66, 18), // "colorEntrySelected"
QT_MOC_LITERAL(6, 85, 5), // "index"
QT_MOC_LITERAL(7, 91, 13), // "colorSelected"
QT_MOC_LITERAL(8, 105, 5), // "color"
QT_MOC_LITERAL(9, 111, 17), // "colorNameSelected"
QT_MOC_LITERAL(10, 129, 4), // "name"
QT_MOC_LITERAL(11, 134, 19), // "setCurrentColorNode"
QT_MOC_LITERAL(12, 154, 28), // "setCurrentColorNodeToDefault"
QT_MOC_LITERAL(13, 183, 11), // "onNodeAdded"
QT_MOC_LITERAL(14, 195, 10), // "vtkObject*"
QT_MOC_LITERAL(15, 206, 25), // "onCurrentColorNodeChanged"
QT_MOC_LITERAL(16, 232, 13), // "onTextChanged"
QT_MOC_LITERAL(17, 246, 9), // "colorText"
QT_MOC_LITERAL(18, 256, 17), // "setMRMLColorLogic"
QT_MOC_LITERAL(19, 274, 18), // "vtkMRMLColorLogic*"
QT_MOC_LITERAL(20, 293, 10), // "colorLogic"
QT_MOC_LITERAL(21, 304, 14), // "mrmlColorLogic"
QT_MOC_LITERAL(22, 319, 16), // "currentColorNode"
QT_MOC_LITERAL(23, 336, 17) // "vtkMRMLColorNode*"

    },
    "qMRMLColorPickerWidget\0currentColorNodeChanged\0"
    "\0vtkMRMLNode*\0node\0colorEntrySelected\0"
    "index\0colorSelected\0color\0colorNameSelected\0"
    "name\0setCurrentColorNode\0"
    "setCurrentColorNodeToDefault\0onNodeAdded\0"
    "vtkObject*\0onCurrentColorNodeChanged\0"
    "onTextChanged\0colorText\0setMRMLColorLogic\0"
    "vtkMRMLColorLogic*\0colorLogic\0"
    "mrmlColorLogic\0currentColorNode\0"
    "vtkMRMLColorNode*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLColorPickerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       7,    1,   80,    2, 0x06 /* Public */,
       9,    1,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   86,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    2,   90,    2, 0x09 /* Protected */,
      15,    1,   95,    2, 0x09 /* Protected */,
      16,    1,   98,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      18,    1,  101,    2, 0x02 /* Public */,
      21,    0,  104,    2, 0x02 /* Public */,
      22,    0,  105,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QColor,    8,
    QMetaType::Void, QMetaType::QString,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,   17,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 19,   20,
    0x80000000 | 19,
    0x80000000 | 23,

       0        // eod
};

void qMRMLColorPickerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLColorPickerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentColorNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->colorEntrySelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->colorSelected((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->colorNameSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setCurrentColorNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 5: _t->setCurrentColorNodeToDefault(); break;
        case 6: _t->onNodeAdded((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        case 7: _t->onCurrentColorNodeChanged((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 8: _t->onTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setMRMLColorLogic((*reinterpret_cast< vtkMRMLColorLogic*(*)>(_a[1]))); break;
        case 10: { vtkMRMLColorLogic* _r = _t->mrmlColorLogic();
            if (_a[0]) *reinterpret_cast< vtkMRMLColorLogic**>(_a[0]) = std::move(_r); }  break;
        case 11: { vtkMRMLColorNode* _r = _t->currentColorNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLColorNode**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLColorPickerWidget::*)(vtkMRMLNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLColorPickerWidget::currentColorNodeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLColorPickerWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLColorPickerWidget::colorEntrySelected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qMRMLColorPickerWidget::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLColorPickerWidget::colorSelected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (qMRMLColorPickerWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLColorPickerWidget::colorNameSelected)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLColorPickerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLColorPickerWidget.data,
    qt_meta_data_qMRMLColorPickerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLColorPickerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLColorPickerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLColorPickerWidget.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLColorPickerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void qMRMLColorPickerWidget::currentColorNodeChanged(vtkMRMLNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLColorPickerWidget::colorEntrySelected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qMRMLColorPickerWidget::colorSelected(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qMRMLColorPickerWidget::colorNameSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
