/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSegmentationConversionParametersWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Segmentations/Widgets/qMRMLSegmentationConversionParametersWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSegmentationConversionParametersWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSegmentationConversionParametersWidget_t {
    QByteArrayData data[16];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSegmentationConversionParametersWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSegmentationConversionParametersWidget_t qt_meta_stringdata_qMRMLSegmentationConversionParametersWidget = {
    {
QT_MOC_LITERAL(0, 0, 43), // "qMRMLSegmentationConversionPa..."
QT_MOC_LITERAL(1, 44, 14), // "conversionDone"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 19), // "setSegmentationNode"
QT_MOC_LITERAL(4, 80, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(5, 93, 4), // "node"
QT_MOC_LITERAL(6, 98, 27), // "setTargetRepresentationName"
QT_MOC_LITERAL(7, 126, 18), // "representationName"
QT_MOC_LITERAL(8, 145, 18), // "populatePathsTable"
QT_MOC_LITERAL(9, 164, 23), // "populateParametersTable"
QT_MOC_LITERAL(10, 188, 18), // "onParameterChanged"
QT_MOC_LITERAL(11, 207, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(12, 225, 11), // "changedItem"
QT_MOC_LITERAL(13, 237, 30), // "onSpecifyGeometryButtonClicked"
QT_MOC_LITERAL(14, 268, 15), // "applyConversion"
QT_MOC_LITERAL(15, 284, 24) // "targetRepresentationName"

    },
    "qMRMLSegmentationConversionParametersWidget\0"
    "conversionDone\0\0setSegmentationNode\0"
    "vtkMRMLNode*\0node\0setTargetRepresentationName\0"
    "representationName\0populatePathsTable\0"
    "populateParametersTable\0onParameterChanged\0"
    "QTableWidgetItem*\0changedItem\0"
    "onSpecifyGeometryButtonClicked\0"
    "applyConversion\0targetRepresentationName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSegmentationConversionParametersWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a /* Public */,
       6,    1,   58,    2, 0x0a /* Public */,
       8,    0,   61,    2, 0x09 /* Protected */,
       9,    0,   62,    2, 0x09 /* Protected */,
      10,    1,   63,    2, 0x09 /* Protected */,
      13,    0,   66,    2, 0x09 /* Protected */,
      14,    0,   67,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::QString, 0x00095103,

       0        // eod
};

void qMRMLSegmentationConversionParametersWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSegmentationConversionParametersWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->conversionDone(); break;
        case 1: _t->setSegmentationNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->setTargetRepresentationName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->populatePathsTable(); break;
        case 4: _t->populateParametersTable(); break;
        case 5: _t->onParameterChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->onSpecifyGeometryButtonClicked(); break;
        case 7: _t->applyConversion(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLSegmentationConversionParametersWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLSegmentationConversionParametersWidget::conversionDone)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qMRMLSegmentationConversionParametersWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->targetRepresentationName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qMRMLSegmentationConversionParametersWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTargetRepresentationName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSegmentationConversionParametersWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSegmentationConversionParametersWidget.data,
    qt_meta_data_qMRMLSegmentationConversionParametersWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSegmentationConversionParametersWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSegmentationConversionParametersWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSegmentationConversionParametersWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qMRMLSegmentationConversionParametersWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void qMRMLSegmentationConversionParametersWidget::conversionDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
