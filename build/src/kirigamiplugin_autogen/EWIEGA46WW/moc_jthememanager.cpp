/****************************************************************************
** Meta object code from reading C++ file 'jthememanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/jthememanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jthememanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JThemeManager_t {
    QByteArrayData data[12];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JThemeManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JThemeManager_t qt_meta_stringdata_JThemeManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "JThemeManager"
QT_MOC_LITERAL(1, 14, 19), // "themePackageChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "themeNameChanged"
QT_MOC_LITERAL(4, 52, 9), // "loadModel"
QT_MOC_LITERAL(5, 62, 9), // "saveTheme"
QT_MOC_LITERAL(6, 72, 11), // "pluginIndex"
QT_MOC_LITERAL(7, 84, 10), // "pluginName"
QT_MOC_LITERAL(8, 95, 11), // "reloadModel"
QT_MOC_LITERAL(9, 107, 10), // "themeModel"
QT_MOC_LITERAL(10, 118, 19), // "QStandardItemModel*"
QT_MOC_LITERAL(11, 138, 9) // "themeName"

    },
    "JThemeManager\0themePackageChanged\0\0"
    "themeNameChanged\0loadModel\0saveTheme\0"
    "pluginIndex\0pluginName\0reloadModel\0"
    "themeModel\0QStandardItemModel*\0themeName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JThemeManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x02 /* Public */,
       5,    0,   47,    2, 0x02 /* Public */,
       6,    1,   48,    2, 0x02 /* Public */,
       8,    0,   51,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,    7,
    QMetaType::Void,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x00095409,
      11, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void JThemeManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JThemeManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->themePackageChanged(); break;
        case 1: _t->themeNameChanged(); break;
        case 2: _t->loadModel(); break;
        case 3: _t->saveTheme(); break;
        case 4: { int _r = _t->pluginIndex((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->reloadModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JThemeManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JThemeManager::themePackageChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JThemeManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JThemeManager::themeNameChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<JThemeManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStandardItemModel**>(_v) = _t->themeModel(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->themeName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<JThemeManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setThemeName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject JThemeManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_JThemeManager.data,
    qt_meta_data_JThemeManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JThemeManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JThemeManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JThemeManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JThemeManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void JThemeManager::themePackageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void JThemeManager::themeNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
