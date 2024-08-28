/****************************************************************************
** Meta object code from reading C++ file 'jwallpapersettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/ImagePreview/jwallpapersettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jwallpapersettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JWallPaperSettings_t {
    QByteArrayData data[14];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JWallPaperSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JWallPaperSettings_t qt_meta_stringdata_JWallPaperSettings = {
    {
QT_MOC_LITERAL(0, 0, 18), // "JWallPaperSettings"
QT_MOC_LITERAL(1, 19, 23), // "sigSetWallPaperFinished"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 7), // "success"
QT_MOC_LITERAL(4, 52, 17), // "localeNameChanged"
QT_MOC_LITERAL(5, 70, 16), // "getWallPaperPath"
QT_MOC_LITERAL(6, 87, 10), // "originPath"
QT_MOC_LITERAL(7, 98, 12), // "setWallPaper"
QT_MOC_LITERAL(8, 111, 13), // "WallPaperType"
QT_MOC_LITERAL(9, 125, 4), // "type"
QT_MOC_LITERAL(10, 130, 4), // "path"
QT_MOC_LITERAL(11, 135, 4), // "Both"
QT_MOC_LITERAL(12, 140, 10), // "HomeScreen"
QT_MOC_LITERAL(13, 151, 10) // "LockScreen"

    },
    "JWallPaperSettings\0sigSetWallPaperFinished\0"
    "\0success\0localeNameChanged\0getWallPaperPath\0"
    "originPath\0setWallPaper\0WallPaperType\0"
    "type\0path\0Both\0HomeScreen\0LockScreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JWallPaperSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       1,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   38,    2, 0x02 /* Public */,
       7,    2,   41,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   10,

 // enums: name, alias, flags, count, data
       8,    8, 0x0,    3,   51,

 // enum data: key, value
      11, uint(JWallPaperSettings::Both),
      12, uint(JWallPaperSettings::HomeScreen),
      13, uint(JWallPaperSettings::LockScreen),

       0        // eod
};

void JWallPaperSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JWallPaperSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sigSetWallPaperFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->localeNameChanged(); break;
        case 2: { QString _r = _t->getWallPaperPath((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setWallPaper((*reinterpret_cast< WallPaperType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JWallPaperSettings::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JWallPaperSettings::sigSetWallPaperFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JWallPaperSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JWallPaperSettings::localeNameChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JWallPaperSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_JWallPaperSettings.data,
    qt_meta_data_JWallPaperSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JWallPaperSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JWallPaperSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JWallPaperSettings.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JWallPaperSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void JWallPaperSettings::sigSetWallPaperFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JWallPaperSettings::localeNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
