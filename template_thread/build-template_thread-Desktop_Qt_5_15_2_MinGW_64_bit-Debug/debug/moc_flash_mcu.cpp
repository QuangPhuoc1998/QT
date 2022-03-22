/****************************************************************************
** Meta object code from reading C++ file 'flash_mcu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../template_thread/flash_mcu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flash_mcu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_flash_mcu_t {
    QByteArrayData data[11];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_flash_mcu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_flash_mcu_t qt_meta_stringdata_flash_mcu = {
    {
QT_MOC_LITERAL(0, 0, 9), // "flash_mcu"
QT_MOC_LITERAL(1, 10, 12), // "current_load"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "value"
QT_MOC_LITERAL(4, 30, 12), // "flash_status"
QT_MOC_LITERAL(5, 43, 4), // "flag"
QT_MOC_LITERAL(6, 48, 10), // "flash_send"
QT_MOC_LITERAL(7, 59, 8), // "uint8_t*"
QT_MOC_LITERAL(8, 68, 4), // "data"
QT_MOC_LITERAL(9, 73, 3), // "len"
QT_MOC_LITERAL(10, 77, 8) // "set_flag"

    },
    "flash_mcu\0current_load\0\0value\0"
    "flash_status\0flag\0flash_send\0uint8_t*\0"
    "data\0len\0set_flag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_flash_mcu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    2,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void flash_mcu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<flash_mcu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->current_load((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->flash_status((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->flash_send((*reinterpret_cast< uint8_t*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->set_flag((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (flash_mcu::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&flash_mcu::current_load)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (flash_mcu::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&flash_mcu::flash_status)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (flash_mcu::*)(uint8_t * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&flash_mcu::flash_send)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject flash_mcu::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_flash_mcu.data,
    qt_meta_data_flash_mcu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *flash_mcu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *flash_mcu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_flash_mcu.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int flash_mcu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void flash_mcu::current_load(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void flash_mcu::flash_status(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void flash_mcu::flash_send(uint8_t * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
