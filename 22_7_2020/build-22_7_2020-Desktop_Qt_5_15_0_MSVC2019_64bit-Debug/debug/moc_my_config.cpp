/****************************************************************************
** Meta object code from reading C++ file 'my_config.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../22_7_2020/my_config.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'my_config.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_My_config_t {
    QByteArrayData data[11];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_My_config_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_My_config_t qt_meta_stringdata_My_config = {
    {
QT_MOC_LITERAL(0, 0, 9), // "My_config"
QT_MOC_LITERAL(1, 10, 11), // "increaseOne"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 2), // "ms"
QT_MOC_LITERAL(4, 26, 9), // "send_dial"
QT_MOC_LITERAL(5, 36, 5), // "value"
QT_MOC_LITERAL(6, 42, 11), // "send_button"
QT_MOC_LITERAL(7, 54, 11), // "send_switch"
QT_MOC_LITERAL(8, 66, 10), // "send_slide"
QT_MOC_LITERAL(9, 77, 9), // "send_port"
QT_MOC_LITERAL(10, 87, 4) // "text"

    },
    "My_config\0increaseOne\0\0ms\0send_dial\0"
    "value\0send_button\0send_switch\0send_slide\0"
    "send_port\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_My_config[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   47,    2, 0x0a /* Public */,
       6,    0,   50,    2, 0x0a /* Public */,
       7,    1,   51,    2, 0x0a /* Public */,
       8,    1,   54,    2, 0x0a /* Public */,
       9,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void My_config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<My_config *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->increaseOne((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->send_dial((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->send_button(); break;
        case 3: _t->send_switch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->send_slide((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->send_port((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (My_config::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&My_config::increaseOne)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject My_config::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_My_config.data,
    qt_meta_data_My_config,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *My_config::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *My_config::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_My_config.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int My_config::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void My_config::increaseOne(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
