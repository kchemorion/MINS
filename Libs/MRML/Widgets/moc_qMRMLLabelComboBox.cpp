/****************************************************************************
** Meta object code from reading C++ file 'qMRMLLabelComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLLabelComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLLabelComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLLabelComboBox_t {
    QByteArrayData data[19];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLLabelComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLLabelComboBox_t qt_meta_stringdata_qMRMLLabelComboBox = {
    {
QT_MOC_LITERAL(0, 0, 18), // "qMRMLLabelComboBox"
QT_MOC_LITERAL(1, 19, 19), // "currentColorChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "color"
QT_MOC_LITERAL(4, 46, 4), // "name"
QT_MOC_LITERAL(5, 51, 5), // "index"
QT_MOC_LITERAL(6, 57, 16), // "setMRMLColorNode"
QT_MOC_LITERAL(7, 74, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(8, 87, 16), // "newMRMLColorNode"
QT_MOC_LITERAL(9, 104, 15), // "setCurrentColor"
QT_MOC_LITERAL(10, 120, 9), // "colorName"
QT_MOC_LITERAL(11, 130, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(12, 151, 21), // "onCurrentIndexChanged"
QT_MOC_LITERAL(13, 173, 11), // "noneEnabled"
QT_MOC_LITERAL(14, 185, 12), // "currentColor"
QT_MOC_LITERAL(15, 198, 16), // "currentColorName"
QT_MOC_LITERAL(16, 215, 17), // "maximumColorCount"
QT_MOC_LITERAL(17, 233, 16), // "colorNameVisible"
QT_MOC_LITERAL(18, 250, 17) // "labelValueVisible"

    },
    "qMRMLLabelComboBox\0currentColorChanged\0"
    "\0color\0name\0index\0setMRMLColorNode\0"
    "vtkMRMLNode*\0newMRMLColorNode\0"
    "setCurrentColor\0colorName\0"
    "updateWidgetFromMRML\0onCurrentIndexChanged\0"
    "noneEnabled\0currentColor\0currentColorName\0"
    "maximumColorCount\0colorNameVisible\0"
    "labelValueVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLLabelComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       6,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       1,    1,   57,    2, 0x06 /* Public */,
       1,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   63,    2, 0x0a /* Public */,
       9,    1,   66,    2, 0x0a /* Public */,
       9,    1,   69,    2, 0x0a /* Public */,
      11,    0,   72,    2, 0x0a /* Public */,
      12,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00095103,
      14, QMetaType::Int, 0x00595103,
      15, QMetaType::QString, 0x00485003,
      16, QMetaType::Int, 0x00095103,
      17, QMetaType::Bool, 0x00095103,
      18, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void qMRMLLabelComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLLabelComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->currentColorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->currentColorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setMRMLColorNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 4: _t->setCurrentColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setCurrentColor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->updateWidgetFromMRML(); break;
        case 7: _t->onCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLLabelComboBox::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLLabelComboBox::currentColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLLabelComboBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLLabelComboBox::currentColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (qMRMLLabelComboBox::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLLabelComboBox::currentColorChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLLabelComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->noneEnabled(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->currentColor(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->currentColorName(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->maximumColorCount(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->colorNameVisible(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->labelValueVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLLabelComboBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNoneEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setCurrentColor(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setCurrentColor(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setMaximumColorCount(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setColorNameVisible(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setLabelValueVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLLabelComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<qMRMLWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLLabelComboBox.data,
    qt_meta_data_qMRMLLabelComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLLabelComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLLabelComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLLabelComboBox.stringdata0))
        return static_cast<void*>(this);
    return qMRMLWidget::qt_metacast(_clname);
}

int qMRMLLabelComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qMRMLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qMRMLLabelComboBox::currentColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLLabelComboBox::currentColorChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qMRMLLabelComboBox::currentColorChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
