/****************************************************************************
** Meta object code from reading C++ file 'qSlicerMarkupsPlaceWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../slicersources-src/Modules/Loadable/Markups/Widgets/qSlicerMarkupsPlaceWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerMarkupsPlaceWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerMarkupsPlaceWidget_t {
    QByteArrayData data[70];
    char stringdata0[1419];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerMarkupsPlaceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerMarkupsPlaceWidget_t qt_meta_stringdata_qSlicerMarkupsPlaceWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "qSlicerMarkupsPlaceWidget"
QT_MOC_LITERAL(1, 26, 29), // "activeMarkupsPlaceModeChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 7), // "enabled"
QT_MOC_LITERAL(4, 65, 37), // "activeMarkupsFiducialPlaceMod..."
QT_MOC_LITERAL(5, 103, 12), // "setMRMLScene"
QT_MOC_LITERAL(6, 116, 13), // "vtkMRMLScene*"
QT_MOC_LITERAL(7, 130, 5), // "scene"
QT_MOC_LITERAL(8, 136, 14), // "setCurrentNode"
QT_MOC_LITERAL(9, 151, 12), // "vtkMRMLNode*"
QT_MOC_LITERAL(10, 164, 11), // "currentNode"
QT_MOC_LITERAL(11, 176, 20), // "setCurrentNodeActive"
QT_MOC_LITERAL(12, 197, 6), // "active"
QT_MOC_LITERAL(13, 204, 18), // "setInteractionNode"
QT_MOC_LITERAL(14, 223, 23), // "vtkMRMLInteractionNode*"
QT_MOC_LITERAL(15, 247, 15), // "interactionNode"
QT_MOC_LITERAL(16, 263, 16), // "setSelectionNode"
QT_MOC_LITERAL(17, 280, 21), // "vtkMRMLSelectionNode*"
QT_MOC_LITERAL(18, 302, 13), // "selectionNode"
QT_MOC_LITERAL(19, 316, 19), // "setDefaultNodeColor"
QT_MOC_LITERAL(20, 336, 5), // "color"
QT_MOC_LITERAL(21, 342, 12), // "setNodeColor"
QT_MOC_LITERAL(22, 355, 19), // "setPlaceModeEnabled"
QT_MOC_LITERAL(23, 375, 6), // "enable"
QT_MOC_LITERAL(24, 382, 23), // "setPlaceMultipleMarkups"
QT_MOC_LITERAL(25, 406, 24), // "PlaceMultipleMarkupsType"
QT_MOC_LITERAL(26, 431, 6), // "option"
QT_MOC_LITERAL(27, 438, 17), // "setButtonsVisible"
QT_MOC_LITERAL(28, 456, 7), // "visible"
QT_MOC_LITERAL(29, 464, 38), // "setDeleteAllControlPointsOpti..."
QT_MOC_LITERAL(30, 503, 37), // "setUnsetLastControlPointOptio..."
QT_MOC_LITERAL(31, 541, 37), // "setUnsetAllControlPointsOptio..."
QT_MOC_LITERAL(32, 579, 23), // "setPlaceModePersistency"
QT_MOC_LITERAL(33, 603, 15), // "modifyLastPoint"
QT_MOC_LITERAL(34, 619, 15), // "deleteLastPoint"
QT_MOC_LITERAL(35, 635, 15), // "deleteAllPoints"
QT_MOC_LITERAL(36, 651, 21), // "unsetLastDefinedPoint"
QT_MOC_LITERAL(37, 673, 14), // "unsetAllPoints"
QT_MOC_LITERAL(38, 688, 16), // "deleteLastMarkup"
QT_MOC_LITERAL(39, 705, 16), // "deleteAllMarkups"
QT_MOC_LITERAL(40, 722, 32), // "setDeleteAllMarkupsOptionVisible"
QT_MOC_LITERAL(41, 755, 12), // "updateWidget"
QT_MOC_LITERAL(42, 768, 18), // "updateDeleteButton"
QT_MOC_LITERAL(43, 787, 20), // "onColorButtonChanged"
QT_MOC_LITERAL(44, 808, 25), // "onVisibilityButtonClicked"
QT_MOC_LITERAL(45, 834, 21), // "onLockedButtonClicked"
QT_MOC_LITERAL(46, 856, 41), // "onFixedNumberOfControlPointsB..."
QT_MOC_LITERAL(47, 898, 22), // "onPlacePersistentPoint"
QT_MOC_LITERAL(48, 921, 26), // "currentMarkupsFiducialNode"
QT_MOC_LITERAL(49, 948, 27), // "vtkMRMLMarkupsFiducialNode*"
QT_MOC_LITERAL(50, 976, 18), // "currentMarkupsNode"
QT_MOC_LITERAL(51, 995, 19), // "vtkMRMLMarkupsNode*"
QT_MOC_LITERAL(52, 1015, 11), // "placeButton"
QT_MOC_LITERAL(53, 1027, 12), // "QToolButton*"
QT_MOC_LITERAL(54, 1040, 12), // "deleteButton"
QT_MOC_LITERAL(55, 1053, 14), // "buttonsVisible"
QT_MOC_LITERAL(56, 1068, 35), // "deleteAllControlPointsOptionV..."
QT_MOC_LITERAL(57, 1104, 34), // "unsetLastControlPointOptionVi..."
QT_MOC_LITERAL(58, 1139, 34), // "unsetAllControlPointsOptionVi..."
QT_MOC_LITERAL(59, 1174, 20), // "placeMultipleMarkups"
QT_MOC_LITERAL(60, 1195, 9), // "nodeColor"
QT_MOC_LITERAL(61, 1205, 16), // "defaultNodeColor"
QT_MOC_LITERAL(62, 1222, 17), // "currentNodeActive"
QT_MOC_LITERAL(63, 1240, 16), // "placeModeEnabled"
QT_MOC_LITERAL(64, 1257, 20), // "placeModePersistency"
QT_MOC_LITERAL(65, 1278, 29), // "deleteAllMarkupsOptionVisible"
QT_MOC_LITERAL(66, 1308, 30), // "ShowPlaceMultipleMarkupsOption"
QT_MOC_LITERAL(67, 1339, 30), // "HidePlaceMultipleMarkupsOption"
QT_MOC_LITERAL(68, 1370, 22), // "ForcePlaceSingleMarkup"
QT_MOC_LITERAL(69, 1393, 25) // "ForcePlaceMultipleMarkups"

    },
    "qSlicerMarkupsPlaceWidget\0"
    "activeMarkupsPlaceModeChanged\0\0enabled\0"
    "activeMarkupsFiducialPlaceModeChanged\0"
    "setMRMLScene\0vtkMRMLScene*\0scene\0"
    "setCurrentNode\0vtkMRMLNode*\0currentNode\0"
    "setCurrentNodeActive\0active\0"
    "setInteractionNode\0vtkMRMLInteractionNode*\0"
    "interactionNode\0setSelectionNode\0"
    "vtkMRMLSelectionNode*\0selectionNode\0"
    "setDefaultNodeColor\0color\0setNodeColor\0"
    "setPlaceModeEnabled\0enable\0"
    "setPlaceMultipleMarkups\0"
    "PlaceMultipleMarkupsType\0option\0"
    "setButtonsVisible\0visible\0"
    "setDeleteAllControlPointsOptionVisible\0"
    "setUnsetLastControlPointOptionVisible\0"
    "setUnsetAllControlPointsOptionVisible\0"
    "setPlaceModePersistency\0modifyLastPoint\0"
    "deleteLastPoint\0deleteAllPoints\0"
    "unsetLastDefinedPoint\0unsetAllPoints\0"
    "deleteLastMarkup\0deleteAllMarkups\0"
    "setDeleteAllMarkupsOptionVisible\0"
    "updateWidget\0updateDeleteButton\0"
    "onColorButtonChanged\0onVisibilityButtonClicked\0"
    "onLockedButtonClicked\0"
    "onFixedNumberOfControlPointsButtonClicked\0"
    "onPlacePersistentPoint\0"
    "currentMarkupsFiducialNode\0"
    "vtkMRMLMarkupsFiducialNode*\0"
    "currentMarkupsNode\0vtkMRMLMarkupsNode*\0"
    "placeButton\0QToolButton*\0deleteButton\0"
    "buttonsVisible\0deleteAllControlPointsOptionVisible\0"
    "unsetLastControlPointOptionVisible\0"
    "unsetAllControlPointsOptionVisible\0"
    "placeMultipleMarkups\0nodeColor\0"
    "defaultNodeColor\0currentNodeActive\0"
    "placeModeEnabled\0placeModePersistency\0"
    "deleteAllMarkupsOptionVisible\0"
    "ShowPlaceMultipleMarkupsOption\0"
    "HidePlaceMultipleMarkupsOption\0"
    "ForcePlaceSingleMarkup\0ForcePlaceMultipleMarkups"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerMarkupsPlaceWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
      11,  280, // properties
       1,  313, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  204,    2, 0x06 /* Public */,
       4,    1,  207,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  210,    2, 0x0a /* Public */,
       8,    1,  213,    2, 0x0a /* Public */,
      11,    1,  216,    2, 0x0a /* Public */,
      13,    1,  219,    2, 0x0a /* Public */,
      16,    1,  222,    2, 0x0a /* Public */,
      19,    1,  225,    2, 0x0a /* Public */,
      21,    1,  228,    2, 0x0a /* Public */,
      22,    1,  231,    2, 0x0a /* Public */,
      24,    1,  234,    2, 0x0a /* Public */,
      27,    1,  237,    2, 0x0a /* Public */,
      29,    1,  240,    2, 0x0a /* Public */,
      30,    1,  243,    2, 0x0a /* Public */,
      31,    1,  246,    2, 0x0a /* Public */,
      32,    1,  249,    2, 0x0a /* Public */,
      33,    0,  252,    2, 0x0a /* Public */,
      34,    0,  253,    2, 0x0a /* Public */,
      35,    0,  254,    2, 0x0a /* Public */,
      36,    0,  255,    2, 0x0a /* Public */,
      37,    0,  256,    2, 0x0a /* Public */,
      38,    0,  257,    2, 0x0a /* Public */,
      39,    0,  258,    2, 0x0a /* Public */,
      40,    1,  259,    2, 0x0a /* Public */,
      41,    0,  262,    2, 0x09 /* Protected */,
      42,    0,  263,    2, 0x09 /* Protected */,
      43,    1,  264,    2, 0x09 /* Protected */,
      44,    0,  267,    2, 0x09 /* Protected */,
      45,    0,  268,    2, 0x09 /* Protected */,
      46,    0,  269,    2, 0x09 /* Protected */,
      47,    1,  270,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      10,    0,  273,    2, 0x02 /* Public */,
      48,    0,  274,    2, 0x02 /* Public */,
      50,    0,  275,    2, 0x02 /* Public */,
      15,    0,  276,    2, 0x02 /* Public */,
      18,    0,  277,    2, 0x02 /* Public */,
      52,    0,  278,    2, 0x02 /* Public */,
      54,    0,  279,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::QColor,   20,
    QMetaType::Void, QMetaType::QColor,   20,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,

 // methods: parameters
    0x80000000 | 9,
    0x80000000 | 49,
    0x80000000 | 51,
    0x80000000 | 14,
    0x80000000 | 17,
    0x80000000 | 53,
    0x80000000 | 53,

 // properties: name, type, flags
      55, QMetaType::Bool, 0x00095103,
      56, QMetaType::Bool, 0x00095103,
      57, QMetaType::Bool, 0x00095103,
      58, QMetaType::Bool, 0x00095103,
      59, 0x80000000 | 25, 0x0009510b,
      60, QMetaType::QColor, 0x00095103,
      61, QMetaType::QColor, 0x00095103,
      62, QMetaType::Bool, 0x00095103,
      63, QMetaType::Bool, 0x00095103,
      64, QMetaType::Bool, 0x00095103,
      65, QMetaType::Bool, 0x00095103,

 // enums: name, alias, flags, count, data
      25,   25, 0x0,    4,  318,

 // enum data: key, value
      66, uint(qSlicerMarkupsPlaceWidget::ShowPlaceMultipleMarkupsOption),
      67, uint(qSlicerMarkupsPlaceWidget::HidePlaceMultipleMarkupsOption),
      68, uint(qSlicerMarkupsPlaceWidget::ForcePlaceSingleMarkup),
      69, uint(qSlicerMarkupsPlaceWidget::ForcePlaceMultipleMarkups),

       0        // eod
};

void qSlicerMarkupsPlaceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qSlicerMarkupsPlaceWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activeMarkupsPlaceModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->activeMarkupsFiducialPlaceModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setMRMLScene((*reinterpret_cast< vtkMRMLScene*(*)>(_a[1]))); break;
        case 3: _t->setCurrentNode((*reinterpret_cast< vtkMRMLNode*(*)>(_a[1]))); break;
        case 4: _t->setCurrentNodeActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setInteractionNode((*reinterpret_cast< vtkMRMLInteractionNode*(*)>(_a[1]))); break;
        case 6: _t->setSelectionNode((*reinterpret_cast< vtkMRMLSelectionNode*(*)>(_a[1]))); break;
        case 7: _t->setDefaultNodeColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 8: _t->setNodeColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 9: _t->setPlaceModeEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setPlaceMultipleMarkups((*reinterpret_cast< PlaceMultipleMarkupsType(*)>(_a[1]))); break;
        case 11: _t->setButtonsVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setDeleteAllControlPointsOptionVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setUnsetLastControlPointOptionVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setUnsetAllControlPointsOptionVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setPlaceModePersistency((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->modifyLastPoint(); break;
        case 17: _t->deleteLastPoint(); break;
        case 18: _t->deleteAllPoints(); break;
        case 19: _t->unsetLastDefinedPoint(); break;
        case 20: _t->unsetAllPoints(); break;
        case 21: _t->deleteLastMarkup(); break;
        case 22: _t->deleteAllMarkups(); break;
        case 23: _t->setDeleteAllMarkupsOptionVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->updateWidget(); break;
        case 25: _t->updateDeleteButton(); break;
        case 26: _t->onColorButtonChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 27: _t->onVisibilityButtonClicked(); break;
        case 28: _t->onLockedButtonClicked(); break;
        case 29: _t->onFixedNumberOfControlPointsButtonClicked(); break;
        case 30: _t->onPlacePersistentPoint((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: { vtkMRMLNode* _r = _t->currentNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLNode**>(_a[0]) = std::move(_r); }  break;
        case 32: { vtkMRMLMarkupsFiducialNode* _r = _t->currentMarkupsFiducialNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLMarkupsFiducialNode**>(_a[0]) = std::move(_r); }  break;
        case 33: { vtkMRMLMarkupsNode* _r = _t->currentMarkupsNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLMarkupsNode**>(_a[0]) = std::move(_r); }  break;
        case 34: { vtkMRMLInteractionNode* _r = _t->interactionNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLInteractionNode**>(_a[0]) = std::move(_r); }  break;
        case 35: { vtkMRMLSelectionNode* _r = _t->selectionNode();
            if (_a[0]) *reinterpret_cast< vtkMRMLSelectionNode**>(_a[0]) = std::move(_r); }  break;
        case 36: { QToolButton* _r = _t->placeButton();
            if (_a[0]) *reinterpret_cast< QToolButton**>(_a[0]) = std::move(_r); }  break;
        case 37: { QToolButton* _r = _t->deleteButton();
            if (_a[0]) *reinterpret_cast< QToolButton**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qSlicerMarkupsPlaceWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerMarkupsPlaceWidget::activeMarkupsPlaceModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qSlicerMarkupsPlaceWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qSlicerMarkupsPlaceWidget::activeMarkupsFiducialPlaceModeChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qSlicerMarkupsPlaceWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->buttonsVisible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->deleteAllControlPointsOptionVisible(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->unsetLastControlPointOptionVisible(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->unsetAllControlPointsOptionVisible(); break;
        case 4: *reinterpret_cast< PlaceMultipleMarkupsType*>(_v) = _t->placeMultipleMarkups(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->nodeColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->defaultNodeColor(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->currentNodeActive(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->placeModeEnabled(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->placeModePersistency(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->deleteAllMarkupsOptionVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qSlicerMarkupsPlaceWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setButtonsVisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDeleteAllControlPointsOptionVisible(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setUnsetLastControlPointOptionVisible(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setUnsetAllControlPointsOptionVisible(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setPlaceMultipleMarkups(*reinterpret_cast< PlaceMultipleMarkupsType*>(_v)); break;
        case 5: _t->setNodeColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setDefaultNodeColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: _t->setCurrentNodeActive(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setPlaceModeEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setPlaceModePersistency(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setDeleteAllMarkupsOptionVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qSlicerMarkupsPlaceWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<qSlicerWidget::staticMetaObject>(),
    qt_meta_stringdata_qSlicerMarkupsPlaceWidget.data,
    qt_meta_data_qSlicerMarkupsPlaceWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerMarkupsPlaceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerMarkupsPlaceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerMarkupsPlaceWidget.stringdata0))
        return static_cast<void*>(this);
    return qSlicerWidget::qt_metacast(_clname);
}

int qSlicerMarkupsPlaceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qSlicerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 38;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qSlicerMarkupsPlaceWidget::activeMarkupsPlaceModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qSlicerMarkupsPlaceWidget::activeMarkupsFiducialPlaceModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
