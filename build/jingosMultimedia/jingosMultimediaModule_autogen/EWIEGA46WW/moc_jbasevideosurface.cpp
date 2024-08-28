/****************************************************************************
** Meta object code from reading C++ file 'jbasevideosurface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../jingosMultimedia/jbasevideosurface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jbasevideosurface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JBaseVideoSurface_t {
    QByteArrayData data[7];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JBaseVideoSurface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JBaseVideoSurface_t qt_meta_stringdata_JBaseVideoSurface = {
    {
QT_MOC_LITERAL(0, 0, 17), // "JBaseVideoSurface"
QT_MOC_LITERAL(1, 18, 16), // "updateRenderInfo"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "addRenderItem"
QT_MOC_LITERAL(4, 50, 11), // "QQuickItem*"
QT_MOC_LITERAL(5, 62, 4), // "item"
QT_MOC_LITERAL(6, 67, 15) // "clearRenderItem"

    },
    "JBaseVideoSurface\0updateRenderInfo\0\0"
    "addRenderItem\0QQuickItem*\0item\0"
    "clearRenderItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JBaseVideoSurface[] = {

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
       1,    0,   29,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x02 /* Public */,
       6,    1,   33,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void JBaseVideoSurface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JBaseVideoSurface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateRenderInfo(); break;
        case 1: _t->addRenderItem((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 2: _t->clearRenderItem((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JBaseVideoSurface::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractVideoSurface::staticMetaObject>(),
    qt_meta_stringdata_JBaseVideoSurface.data,
    qt_meta_data_JBaseVideoSurface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JBaseVideoSurface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JBaseVideoSurface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JBaseVideoSurface.stringdata0))
        return static_cast<void*>(this);
    return QAbstractVideoSurface::qt_metacast(_clname);
}

int JBaseVideoSurface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractVideoSurface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
