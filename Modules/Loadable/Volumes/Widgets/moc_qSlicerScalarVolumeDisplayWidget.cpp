/****************************************************************************
** Meta object code from reading C++ file 'qSlicerScalarVolumeDisplayWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Volumes/Widgets/qSlicerScalarVolumeDisplayWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerScalarVolumeDisplayWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerScalarVolumeDisplayWidget_t {
    QByteArrayData data[21];
    char stringdata0[366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerScalarVolumeDisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerScalarVolumeDisplayWidget_t qt_meta_stringdata_qSlicerScalarVolumeDisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "qSlicerScalarVolumeDisplayWidget"
QT_MOC_LITERAL(1, 33, 17), // "setMRMLVolumeNode"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 24), // "vtkMRMLScalarVolumeNode*"
QT_MOC_LITERAL(4, 77, 10), // "volumeNode"
QT_MOC_LITERAL(5, 88, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(6, 101, 4), // "node"
QT_MOC_LITERAL(7, 106, 14), // "setInterpolate"
QT_MOC_LITERAL(8, 121, 11), // "interpolate"
QT_MOC_LITERAL(9, 133, 12), // "setColorNode"
QT_MOC_LITERAL(10, 146, 9), // "colorNode"
QT_MOC_LITERAL(11, 156, 9), // "setPreset"
QT_MOC_LITERAL(12, 166, 10), // "presetName"
QT_MOC_LITERAL(13, 177, 20), // "updateWidgetFromMRML"
QT_MOC_LITERAL(14, 198, 15), // "updateHistogram"
QT_MOC_LITERAL(15, 214, 21), // "onPresetButtonClicked"
QT_MOC_LITERAL(16, 236, 26), // "onHistogramSectionExpanded"
QT_MOC_LITERAL(17, 263, 17), // "volumeDisplayNode"
QT_MOC_LITERAL(18, 281, 31), // "vtkMRMLScalarVolumeDisplayNode*"
QT_MOC_LITERAL(19, 313, 24), // "enableColorTableComboBox"
QT_MOC_LITERAL(20, 338, 27) // "enableMRMLWindowLevelWidget"

    },
    "qSlicerScalarVolumeDisplayWidget\0"
    "setMRMLVolumeNode\0\0vtkMRMLScalarVolumeNode*\0"
    "volumeNode\0vtkMRMLNode*\0node\0"
    "setInterpolate\0interpolate\0setColorNode\0"
    "colorNode\0setPreset\0presetName\0"
    "updateWidgetFromMRML\0updateHistogram\0"
    "onPresetButtonClicked\0onHistogramSectionExpanded\0"
    "volumeDisplayNode\0vtkMRMLScalarVolumeDisplayNode*\0"
    "enableColorTableComboBox\0"
    "enableMRMLWindowLevelWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerScalarVolumeDisplayWidget[] = {

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
       1,    1,   69,    2, 0x0a /* Public */,
       1,    1,   72,    2, 0x0a /* Public */,
       7,    1,   75,    2, 0x0a /* Public */,
       9,    1,   78,    2, 0x0a /* Public */,
      11,    1,   81,    2, 0x0a /* Public */,
      13,    0,   84,    2, 0x09 /* Protected */,
      14,    0,   85,    2, 0x09 /* Protected */,
      15,    0,   86,    2, 0x09 /* Protected */,
      16,    1,   87,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   90,    2, 0x02 /* Public */,
      17,    0,   91,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // methods: parameters
    0x80000000 | 3,
    0x80000000 | 18,

 // properties: name, type, flags
      19, QMetaType::Bool, 0x00095003,
      20, QMetaType::Bool, 0x00095003,

       0        // eod
};

void qSlicerScalarVolumeDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerScalarVolumeDisplayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMRMLVolumeNode((*reinterpret_cast< vtkMRMLScalarVolumeNode*(*)>(_a[1]))); break;
        case 1: _t->setMRMLVolumeNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 2: _t->setInterpolate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setColorNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 4: _t->setPreset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->updateWidgetFromMRML(); break;
        case 6: _t->updateHistogram(); break;
        case 7: _t->onPresetButtonClicked(); break;
        case 8: _t->onHistogramSectionExpanded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: { vtkMRMLScalarVolumeNode* _r = _t->volumeNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLScalarVolumeNode**>(_a[0]) = std::move(_r); }  break;
        case 10: { vtkMRMLScalarVolumeDisplayNode* _r = _t->volumeDisplayNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLScalarVolumeDisplayNode**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerScalarVolumeDisplayWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isColorTableComboBoxEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isMRMLWindowLevelWidgetEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerScalarVolumeDisplayWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColorTableComboBoxEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setMRMLWindowLevelWidgetEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerScalarVolumeDisplayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerScalarVolumeDisplayWidget.data,
    qt_meta_data_qSlicerScalarVolumeDisplayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerScalarVolumeDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerScalarVolumeDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerScalarVolumeDisplayWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerWidget::qt_metacast(_clname);
}

int qSlicerScalarVolumeDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerWidget::qt_metacall(_c, _id, _a);
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
