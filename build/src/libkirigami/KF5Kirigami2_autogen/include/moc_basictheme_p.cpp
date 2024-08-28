/****************************************************************************
** Meta object code from reading C++ file 'basictheme_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/libkirigami/basictheme_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'basictheme_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Kirigami__BasicTheme_t {
    QByteArrayData data[10];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Kirigami__BasicTheme_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Kirigami__BasicTheme_t qt_meta_stringdata_Kirigami__BasicTheme = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Kirigami::BasicTheme"
QT_MOC_LITERAL(1, 21, 13), // "colorsChanged"
QT_MOC_LITERAL(2, 35, 15), // "buttonTextColor"
QT_MOC_LITERAL(3, 51, 21), // "buttonBackgroundColor"
QT_MOC_LITERAL(4, 73, 16), // "buttonHoverColor"
QT_MOC_LITERAL(5, 90, 16), // "buttonFocusColor"
QT_MOC_LITERAL(6, 107, 13), // "viewTextColor"
QT_MOC_LITERAL(7, 121, 19), // "viewBackgroundColor"
QT_MOC_LITERAL(8, 141, 14), // "viewHoverColor"
QT_MOC_LITERAL(9, 156, 14) // "viewFocusColor"

    },
    "Kirigami::BasicTheme\0colorsChanged\0"
    "buttonTextColor\0buttonBackgroundColor\0"
    "buttonHoverColor\0buttonFocusColor\0"
    "viewTextColor\0viewBackgroundColor\0"
    "viewHoverColor\0viewFocusColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Kirigami__BasicTheme[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       2, QMetaType::QColor, 0x00495001,
       3, QMetaType::QColor, 0x00495001,
       4, QMetaType::QColor, 0x00495001,
       5, QMetaType::QColor, 0x00495001,
       6, QMetaType::QColor, 0x00495001,
       7, QMetaType::QColor, 0x00495001,
       8, QMetaType::QColor, 0x00495001,
       9, QMetaType::QColor, 0x00495001,

 // properties: notify_signal_id
    1879048193,
    1879048193,
    1879048193,
    1879048193,
    1879048193,
    1879048193,
    1879048193,
    1879048193,

       0        // eod
};

void Kirigami::BasicTheme::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BasicTheme *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->buttonTextColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->buttonBackgroundColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->buttonHoverColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->buttonFocusColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->viewTextColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->viewBackgroundColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->viewHoverColor(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->viewFocusColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Kirigami::BasicTheme::staticMetaObject = { {
    QMetaObject::SuperData::link<PlatformTheme::staticMetaObject>(),
    qt_meta_stringdata_Kirigami__BasicTheme.data,
    qt_meta_data_Kirigami__BasicTheme,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Kirigami::BasicTheme::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Kirigami::BasicTheme::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Kirigami__BasicTheme.stringdata0))
        return static_cast<void*>(this);
    return PlatformTheme::qt_metacast(_clname);
}

int Kirigami::BasicTheme::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlatformTheme::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
// If you get a compile error in this function it can be because either
//     a) You are using a NOTIFY signal that does not exist. Fix it.
//     b) You are using a NOTIFY signal that does exist (in a parent class) but has a non-empty parameter list. This is a moc limitation.
Q_DECL_UNUSED static void checkNotifySignalValidity_Kirigami__BasicTheme(Kirigami::BasicTheme *t) {
    t->colorsChanged();
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
