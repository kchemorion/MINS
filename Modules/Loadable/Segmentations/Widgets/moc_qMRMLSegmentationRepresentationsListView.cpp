/****************************************************************************
** Meta object code from reading C++ file 'qMRMLSegmentationRepresentationsListView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Segmentations/Widgets/qMRMLSegmentationRepresentationsListView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qMRMLSegmentationRepresentationsListView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qMRMLSegmentationRepresentationsListView_t {
    QByteArrayData data[10];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qMRMLSegmentationRepresentationsListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qMRMLSegmentationRepresentationsListView_t qt_meta_stringdata_qMRMLSegmentationRepresentationsListView = {
    {
QT_MOC_LITERAL(0, 0, 40), // "qMRMLSegmentationRepresentati..."
QT_MOC_LITERAL(1, 41, 19), // "setSegmentationNode"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(4, 75, 4), // "node"
QT_MOC_LITERAL(5, 80, 27), // "populateRepresentationsList"
QT_MOC_LITERAL(6, 108, 27), // "createRepresentationDefault"
QT_MOC_LITERAL(7, 136, 28), // "createRepresentationAdvanced"
QT_MOC_LITERAL(8, 165, 20), // "removeRepresentation"
QT_MOC_LITERAL(9, 186, 10) // "makeSource"

    },
    "qMRMLSegmentationRepresentationsListView\0"
    "setSegmentationNode\0\0vtkMRMLNode*\0"
    "node\0populateRepresentationsList\0"
    "createRepresentationDefault\0"
    "createRepresentationAdvanced\0"
    "removeRepresentation\0makeSource"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qMRMLSegmentationRepresentationsListView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x09 /* Protected */,
       6,    0,   48,    2, 0x09 /* Protected */,
       7,    0,   49,    2, 0x09 /* Protected */,
       8,    0,   50,    2, 0x09 /* Protected */,
       9,    0,   51,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qMRMLSegmentationRepresentationsListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qMRMLSegmentationRepresentationsListView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setSegmentationNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 1: _t->populateRepresentationsList(); break;
        case 2: _t->createRepresentationDefault(); break;
        case 3: _t->createRepresentationAdvanced(); break;
        case 4: _t->removeRepresentation(); break;
        case 5: _t->makeSource(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qMRMLSegmentationRepresentationsListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_qMRMLSegmentationRepresentationsListView.data,
    qt_meta_data_qMRMLSegmentationRepresentationsListView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qMRMLSegmentationRepresentationsListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qMRMLSegmentationRepresentationsListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qMRMLSegmentationRepresentationsListView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int qMRMLSegmentationRepresentationsListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
