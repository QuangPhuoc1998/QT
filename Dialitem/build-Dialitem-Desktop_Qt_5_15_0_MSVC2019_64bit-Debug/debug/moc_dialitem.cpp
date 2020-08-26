/****************************************************************************
** Meta object code from reading C++ file 'dialitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Dialitem/dialitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialItem_t {
    QByteArrayData data[10];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialItem_t qt_meta_stringdata_DialItem = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DialItem"
QT_MOC_LITERAL(1, 9, 17), // "startAngleChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "spanAngleChanged"
QT_MOC_LITERAL(4, 45, 16), // "dialWidthChanged"
QT_MOC_LITERAL(5, 62, 16), // "dialColorChanged"
QT_MOC_LITERAL(6, 79, 10), // "startAngle"
QT_MOC_LITERAL(7, 90, 9), // "spanAngle"
QT_MOC_LITERAL(8, 100, 9), // "dialWidth"
QT_MOC_LITERAL(9, 110, 9) // "dialColor"

    },
    "DialItem\0startAngleChanged\0\0"
    "spanAngleChanged\0dialWidthChanged\0"
    "dialColorChanged\0startAngle\0spanAngle\0"
    "dialWidth\0dialColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00495103,
       7, QMetaType::QReal, 0x00495103,
       8, QMetaType::Int, 0x00495103,
       9, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void DialItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startAngleChanged(); break;
        case 1: _t->spanAngleChanged(); break;
        case 2: _t->dialWidthChanged(); break;
        case 3: _t->dialColorChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DialItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialItem::startAngleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DialItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialItem::spanAngleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DialItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialItem::dialWidthChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DialItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialItem::dialColorChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DialItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getStartAngle(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->getSpanAngle(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getDialWidth(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getDialColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DialItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStartAngle(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setSpanAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setDialWidth(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setDialColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DialItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickPaintedItem::staticMetaObject>(),
    qt_meta_stringdata_DialItem.data,
    qt_meta_data_DialItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DialItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialItem.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int DialItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DialItem::startAngleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DialItem::spanAngleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DialItem::dialWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DialItem::dialColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
