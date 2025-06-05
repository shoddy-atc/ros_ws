/****************************************************************************
** Meta object code from reading C++ file 'SwitchPanel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/ignition_plugin_lecture/src/switch_panel/SwitchPanel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SwitchPanel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_iginition_plugin_lecture__SwitchPanel_t {
    QByteArrayData data[5];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_iginition_plugin_lecture__SwitchPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_iginition_plugin_lecture__SwitchPanel_t qt_meta_stringdata_iginition_plugin_lecture__SwitchPanel = {
    {
QT_MOC_LITERAL(0, 0, 37), // "iginition_plugin_lecture::Swi..."
QT_MOC_LITERAL(1, 38, 15), // "OnForwardButton"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 12), // "OnStopButton"
QT_MOC_LITERAL(4, 68, 15) // "OnReverseButton"

    },
    "iginition_plugin_lecture::SwitchPanel\0"
    "OnForwardButton\0\0OnStopButton\0"
    "OnReverseButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_iginition_plugin_lecture__SwitchPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x09 /* Protected */,
       3,    0,   30,    2, 0x09 /* Protected */,
       4,    0,   31,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void iginition_plugin_lecture::SwitchPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SwitchPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->OnForwardButton(); break;
        case 1: _t->OnStopButton(); break;
        case 2: _t->OnReverseButton(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject iginition_plugin_lecture::SwitchPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<ignition::gui::Plugin::staticMetaObject>(),
    qt_meta_stringdata_iginition_plugin_lecture__SwitchPanel.data,
    qt_meta_data_iginition_plugin_lecture__SwitchPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *iginition_plugin_lecture::SwitchPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *iginition_plugin_lecture::SwitchPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_iginition_plugin_lecture__SwitchPanel.stringdata0))
        return static_cast<void*>(this);
    return ignition::gui::Plugin::qt_metacast(_clname);
}

int iginition_plugin_lecture::SwitchPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ignition::gui::Plugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
