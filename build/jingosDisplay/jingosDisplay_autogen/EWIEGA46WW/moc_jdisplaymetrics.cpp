/****************************************************************************
** Meta object code from reading C++ file 'jdisplaymetrics.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../jingosDisplay/jdisplaymetrics.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jdisplaymetrics.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JDisplayMetrics_t {
    QByteArrayData data[15];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JDisplayMetrics_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JDisplayMetrics_t qt_meta_stringdata_JDisplayMetrics = {
    {
QT_MOC_LITERAL(0, 0, 15), // "JDisplayMetrics"
QT_MOC_LITERAL(1, 16, 10), // "dpiChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "fontScaleChanged"
QT_MOC_LITERAL(4, 45, 17), // "fontFamilyChanged"
QT_MOC_LITERAL(5, 63, 15), // "fontSizeChanged"
QT_MOC_LITERAL(6, 79, 22), // "defaultFontSizeChanged"
QT_MOC_LITERAL(7, 102, 13), // "setSystemFont"
QT_MOC_LITERAL(8, 116, 10), // "fontFamily"
QT_MOC_LITERAL(9, 127, 8), // "fontSize"
QT_MOC_LITERAL(10, 136, 3), // "dpi"
QT_MOC_LITERAL(11, 140, 9), // "fontScale"
QT_MOC_LITERAL(12, 150, 15), // "defaultFontSize"
QT_MOC_LITERAL(13, 166, 15), // "fontFamilyModel"
QT_MOC_LITERAL(14, 182, 19) // "QAbstractItemModel*"

    },
    "JDisplayMetrics\0dpiChanged\0\0"
    "fontScaleChanged\0fontFamilyChanged\0"
    "fontSizeChanged\0defaultFontSizeChanged\0"
    "setSystemFont\0fontFamily\0fontSize\0dpi\0"
    "fontScale\0defaultFontSize\0fontFamilyModel\0"
    "QAbstractItemModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JDisplayMetrics[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    2,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    8,    9,

 // properties: name, type, flags
      10, QMetaType::QReal, 0x00495103,
      11, QMetaType::QReal, 0x00495103,
       9, QMetaType::Int, 0x00495103,
      12, QMetaType::Int, 0x00495103,
       8, QMetaType::QString, 0x00495001,
      13, 0x80000000 | 14, 0x00095409,

 // properties: notify_signal_id
       0,
       1,
       3,
       4,
       2,
       0,

       0        // eod
};

void JDisplayMetrics::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JDisplayMetrics *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dpiChanged(); break;
        case 1: _t->fontScaleChanged(); break;
        case 2: _t->fontFamilyChanged(); break;
        case 3: _t->fontSizeChanged(); break;
        case 4: _t->defaultFontSizeChanged(); break;
        case 5: _t->setSystemFont((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JDisplayMetrics::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JDisplayMetrics::dpiChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JDisplayMetrics::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JDisplayMetrics::fontScaleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JDisplayMetrics::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JDisplayMetrics::fontFamilyChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JDisplayMetrics::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JDisplayMetrics::fontSizeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (JDisplayMetrics::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JDisplayMetrics::defaultFontSizeChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<JDisplayMetrics *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->dpi(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->fontScale(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->fontSize(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->defaultFontSize(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->fontFamily(); break;
        case 5: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->fontFamilyModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<JDisplayMetrics *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDpi(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setFontScale(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setFontSize(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setDefaultFontSize(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject JDisplayMetrics::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_JDisplayMetrics.data,
    qt_meta_data_JDisplayMetrics,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JDisplayMetrics::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JDisplayMetrics::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JDisplayMetrics.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JDisplayMetrics::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void JDisplayMetrics::dpiChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void JDisplayMetrics::fontScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void JDisplayMetrics::fontFamilyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void JDisplayMetrics::fontSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void JDisplayMetrics::defaultFontSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
