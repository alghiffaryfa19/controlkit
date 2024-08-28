/****************************************************************************
** Meta object code from reading C++ file 'jmediasettool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/jmediasettool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jmediasettool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JMediaSetTool_t {
    QByteArrayData data[11];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JMediaSetTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JMediaSetTool_t qt_meta_stringdata_JMediaSetTool = {
    {
QT_MOC_LITERAL(0, 0, 13), // "JMediaSetTool"
QT_MOC_LITERAL(1, 14, 10), // "formatTime"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "time"
QT_MOC_LITERAL(4, 31, 10), // "hideCursor"
QT_MOC_LITERAL(5, 42, 10), // "showCursor"
QT_MOC_LITERAL(6, 53, 11), // "writeVolume"
QT_MOC_LITERAL(7, 65, 6), // "volume"
QT_MOC_LITERAL(8, 72, 10), // "readVolume"
QT_MOC_LITERAL(9, 83, 10), // "setInhibit"
QT_MOC_LITERAL(10, 94, 1) // "v"

    },
    "JMediaSetTool\0formatTime\0\0time\0"
    "hideCursor\0showCursor\0writeVolume\0"
    "volume\0readVolume\0setInhibit\0v"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JMediaSetTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x02 /* Public */,
       4,    0,   47,    2, 0x02 /* Public */,
       5,    0,   48,    2, 0x02 /* Public */,
       6,    1,   49,    2, 0x02 /* Public */,
       8,    0,   52,    2, 0x02 /* Public */,
       9,    1,   53,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void JMediaSetTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JMediaSetTool *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->formatTime((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->hideCursor(); break;
        case 2: _t->showCursor(); break;
        case 3: _t->writeVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: { int _r = _t->readVolume();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setInhibit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JMediaSetTool::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_JMediaSetTool.data,
    qt_meta_data_JMediaSetTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JMediaSetTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JMediaSetTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JMediaSetTool.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JMediaSetTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
