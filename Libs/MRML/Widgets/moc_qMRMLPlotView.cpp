/****************************************************************************
** Meta object code from reading C++ file 'qMRMLPlotView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../slicersources-src/Libs/MRML/Widgets/qMRMLPlotView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLPlotView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLPlotView_t {
    QByteArrayData data[19];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLPlotView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLPlotView_t qt_meta_stringdata_qMRMLPlotView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "qMRMLPlotView"
QT_MOC_LITERAL(1, 14, 16), // "mrmlSceneChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(4, 46, 12), // "dataSelected"
QT_MOC_LITERAL(5, 59, 15), // "vtkStringArray*"
QT_MOC_LITERAL(6, 75, 17), // "mrmlPlotSeriesIDs"
QT_MOC_LITERAL(7, 93, 14), // "vtkCollection*"
QT_MOC_LITERAL(8, 108, 12), // "selectionCol"
QT_MOC_LITERAL(9, 121, 12), // "setMRMLScene"
QT_MOC_LITERAL(10, 134, 8), // "newScene"
QT_MOC_LITERAL(11, 143, 19), // "setMRMLPlotViewNode"
QT_MOC_LITERAL(12, 163, 20), // "vtkMRMLPlotViewNode*"
QT_MOC_LITERAL(13, 184, 15), // "newPlotViewNode"
QT_MOC_LITERAL(14, 200, 12), // "fitToContent"
QT_MOC_LITERAL(15, 213, 20), // "RemovePlotSelections"
QT_MOC_LITERAL(16, 234, 9), // "saveAsSVG"
QT_MOC_LITERAL(17, 244, 8), // "fileName"
QT_MOC_LITERAL(18, 253, 34) // "updateMRMLChartAxisRangeFromW..."

    },
    "qMRMLPlotView\0mrmlSceneChanged\0\0"
    "vtkMRMLScene*\0dataSelected\0vtkStringArray*\0"
    "mrmlPlotSeriesIDs\0vtkCollection*\0"
    "selectionCol\0setMRMLScene\0newScene\0"
    "setMRMLPlotViewNode\0vtkMRMLPlotViewNode*\0"
    "newPlotViewNode\0fitToContent\0"
    "RemovePlotSelections\0saveAsSVG\0fileName\0"
    "updateMRMLChartAxisRangeFromWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLPlotView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    2,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   62,    2, 0x0a /* Public */,
      11,    1,   65,    2, 0x0a /* Public */,
      14,    0,   68,    2, 0x0a /* Public */,
      15,    0,   69,    2, 0x0a /* Public */,
      16,    1,   70,    2, 0x0a /* Public */,
      18,    0,   73,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,

       0        // eod
};

void qMRMLPlotView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLPlotView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mrmlSceneChanged((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 1: _t->dataSelected((*reinterpret_cast< vtkStringArray*(*)>(_a[1])),(*reinterpret_cast< vtkCollection*(*)>(_a[2]))); break;
        case 2: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 3: _t->setMRMLPlotViewNode((*reinterpret_cast< vtkMRMLPlotViewNode*(*)>(_a[1]))); break;
        case 4: _t->fitToContent(); break;
        case 5: _t->RemovePlotSelections(); break;
        case 6: _t->saveAsSVG((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->updateMRMLChartAxisRangeFromWidget(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qMRMLPlotView::*)(vtkMRMLScene * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLPlotView::mrmlSceneChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qMRMLPlotView::*)(vtkStringArray * , vtkCollection * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qMRMLPlotView::dataSelected)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLPlotView::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkVTKChartView::staticMetaObject>(),
    qt_meta_stringdata_qMRMLPlotView.data,
    qt_meta_data_qMRMLPlotView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLPlotView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLPlotView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLPlotView.stringdata0))
        return static_cast<void*>(this);
    return ctkVTKChartView::qt_metacast(_clname);
}

int qMRMLPlotView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkVTKChartView::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void qMRMLPlotView::mrmlSceneChanged(vtkMRMLScene * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qMRMLPlotView::dataSelected(vtkStringArray * _t1, vtkCollection * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
