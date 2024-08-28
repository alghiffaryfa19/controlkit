/****************************************************************************
** Meta object code from reading C++ file 'jresizehandle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/ImagePreview/jresizehandle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jresizehandle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JResizeHandle_t {
    QByteArrayData data[23];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JResizeHandle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JResizeHandle_t qt_meta_stringdata_JResizeHandle = {
    {
QT_MOC_LITERAL(0, 0, 13), // "JResizeHandle"
QT_MOC_LITERAL(1, 14, 19), // "resizeCornerChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 20), // "resizeBlockedChanged"
QT_MOC_LITERAL(4, 56, 16), // "rectangleChanged"
QT_MOC_LITERAL(5, 73, 10), // "onReleased"
QT_MOC_LITERAL(6, 84, 15), // "moveRectChanged"
QT_MOC_LITERAL(7, 100, 16), // "isPressedChanged"
QT_MOC_LITERAL(8, 117, 12), // "resizeCorner"
QT_MOC_LITERAL(9, 130, 6), // "Corner"
QT_MOC_LITERAL(10, 137, 13), // "resizeBlocked"
QT_MOC_LITERAL(11, 151, 9), // "rectangle"
QT_MOC_LITERAL(12, 161, 11), // "QQuickItem*"
QT_MOC_LITERAL(13, 173, 12), // "moveAreaRect"
QT_MOC_LITERAL(14, 186, 9), // "isPressed"
QT_MOC_LITERAL(15, 196, 4), // "Left"
QT_MOC_LITERAL(16, 201, 7), // "TopLeft"
QT_MOC_LITERAL(17, 209, 3), // "Top"
QT_MOC_LITERAL(18, 213, 8), // "TopRight"
QT_MOC_LITERAL(19, 222, 5), // "Right"
QT_MOC_LITERAL(20, 228, 11), // "BottomRight"
QT_MOC_LITERAL(21, 240, 6), // "Bottom"
QT_MOC_LITERAL(22, 247, 10) // "BottomLeft"

    },
    "JResizeHandle\0resizeCornerChanged\0\0"
    "resizeBlockedChanged\0rectangleChanged\0"
    "onReleased\0moveRectChanged\0isPressedChanged\0"
    "resizeCorner\0Corner\0resizeBlocked\0"
    "rectangle\0QQuickItem*\0moveAreaRect\0"
    "isPressed\0Left\0TopLeft\0Top\0TopRight\0"
    "Right\0BottomRight\0Bottom\0BottomLeft"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JResizeHandle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   50, // properties
       1,   70, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x0049500b,
      10, QMetaType::Bool, 0x00495001,
      11, 0x80000000 | 12, 0x0049510b,
      13, QMetaType::QRectF, 0x00495103,
      14, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       4,
       5,

 // enums: name, alias, flags, count, data
       9,    9, 0x0,    8,   75,

 // enum data: key, value
      15, uint(JResizeHandle::Left),
      16, uint(JResizeHandle::TopLeft),
      17, uint(JResizeHandle::Top),
      18, uint(JResizeHandle::TopRight),
      19, uint(JResizeHandle::Right),
      20, uint(JResizeHandle::BottomRight),
      21, uint(JResizeHandle::Bottom),
      22, uint(JResizeHandle::BottomLeft),

       0        // eod
};

void JResizeHandle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JResizeHandle *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resizeCornerChanged(); break;
        case 1: _t->resizeBlockedChanged(); break;
        case 2: _t->rectangleChanged(); break;
        case 3: _t->onReleased(); break;
        case 4: _t->moveRectChanged(); break;
        case 5: _t->isPressedChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JResizeHandle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JResizeHandle::resizeCornerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JResizeHandle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JResizeHandle::resizeBlockedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JResizeHandle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JResizeHandle::rectangleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JResizeHandle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JResizeHandle::onReleased)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (JResizeHandle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JResizeHandle::moveRectChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (JResizeHandle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JResizeHandle::isPressedChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<JResizeHandle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Corner*>(_v) = _t->m_resizeCorner; break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->resizeBlocked(); break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->rectangle(); break;
        case 3: *reinterpret_cast< QRectF*>(_v) = _t->moveAreaRect(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isPressed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<JResizeHandle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_resizeCorner != *reinterpret_cast< Corner*>(_v)) {
                _t->m_resizeCorner = *reinterpret_cast< Corner*>(_v);
                Q_EMIT _t->resizeCornerChanged();
            }
            break;
        case 2: _t->setRectangle(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 3: _t->setMoveAreaRect(*reinterpret_cast< QRectF*>(_v)); break;
        case 4: _t->setIsPressed(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject JResizeHandle::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_JResizeHandle.data,
    qt_meta_data_JResizeHandle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JResizeHandle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JResizeHandle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JResizeHandle.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int JResizeHandle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void JResizeHandle::resizeCornerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void JResizeHandle::resizeBlockedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void JResizeHandle::rectangleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void JResizeHandle::onReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void JResizeHandle::moveRectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void JResizeHandle::isPressedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
