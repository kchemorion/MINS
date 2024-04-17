/****************************************************************************
** Meta object code from reading C++ file 'qSlicerDICOMLibModuleWidgetsPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../slicersources-src/Modules/Scripted/DICOMLib/Widgets/DesignerPlugins/qSlicerDICOMLibModuleWidgetsPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qSlicerDICOMLibModuleWidgetsPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qSlicerDICOMLibModuleWidgetsPlugin_t {
    QByteArrayData data[1];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qSlicerDICOMLibModuleWidgetsPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qSlicerDICOMLibModuleWidgetsPlugin_t qt_meta_stringdata_qSlicerDICOMLibModuleWidgetsPlugin = {
    {
QT_MOC_LITERAL(0, 0, 34) // "qSlicerDICOMLibModuleWidgetsP..."

    },
    "qSlicerDICOMLibModuleWidgetsPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qSlicerDICOMLibModuleWidgetsPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void qSlicerDICOMLibModuleWidgetsPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject qSlicerDICOMLibModuleWidgetsPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qSlicerDICOMLibModuleWidgetsPlugin.data,
    qt_meta_data_qSlicerDICOMLibModuleWidgetsPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qSlicerDICOMLibModuleWidgetsPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qSlicerDICOMLibModuleWidgetsPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qSlicerDICOMLibModuleWidgetsPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDesignerCustomWidgetCollectionInterface"))
        return static_cast< QDesignerCustomWidgetCollectionInterface*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QDesignerCustomWidgetCollectionInterface"))
        return static_cast< QDesignerCustomWidgetCollectionInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int qSlicerDICOMLibModuleWidgetsPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x3a,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'Q',  't',  '.',  'Q',  'D',  'e', 
    's',  'i',  'g',  'n',  'e',  'r',  'C',  'u', 
    's',  't',  'o',  'm',  'W',  'i',  'd',  'g', 
    'e',  't',  'C',  'o',  'l',  'l',  'e',  'c', 
    't',  'i',  'o',  'n',  'I',  'n',  't',  'e', 
    'r',  'f',  'a',  'c',  'e', 
    // "className"
    0x03,  0x78,  0x22,  'q',  'S',  'l',  'i',  'c', 
    'e',  'r',  'D',  'I',  'C',  'O',  'M',  'L', 
    'i',  'b',  'M',  'o',  'd',  'u',  'l',  'e', 
    'W',  'i',  'd',  'g',  'e',  't',  's',  'P', 
    'l',  'u',  'g',  'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(qSlicerDICOMLibModuleWidgetsPlugin, qSlicerDICOMLibModuleWidgetsPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
