/****************************************************************************
** Meta object code from reading C++ file 'jgstmediainfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../jingosMultimedia/jgstmediainfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jgstmediainfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JGstMediaInfo_t {
    QByteArrayData data[12];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JGstMediaInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JGstMediaInfo_t qt_meta_stringdata_JGstMediaInfo = {
    {
QT_MOC_LITERAL(0, 0, 13), // "JGstMediaInfo"
QT_MOC_LITERAL(1, 14, 13), // "getProperties"
QT_MOC_LITERAL(2, 28, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(3, 50, 0), // ""
QT_MOC_LITERAL(4, 51, 18), // "getAudioStreamInfo"
QT_MOC_LITERAL(5, 70, 18), // "getVideoStreamInfo"
QT_MOC_LITERAL(6, 89, 21), // "getSubtitleStreamInfo"
QT_MOC_LITERAL(7, 111, 16), // "getPropertyByKey"
QT_MOC_LITERAL(8, 128, 3), // "key"
QT_MOC_LITERAL(9, 132, 17), // "getAudioInfoByKey"
QT_MOC_LITERAL(10, 150, 17), // "getVideoInfoByKey"
QT_MOC_LITERAL(11, 168, 20) // "getSubtitleInfoByKey"

    },
    "JGstMediaInfo\0getProperties\0"
    "QMap<QString,QString>\0\0getAudioStreamInfo\0"
    "getVideoStreamInfo\0getSubtitleStreamInfo\0"
    "getPropertyByKey\0key\0getAudioInfoByKey\0"
    "getVideoInfoByKey\0getSubtitleInfoByKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JGstMediaInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   54,    3, 0x02 /* Public */,
       4,    0,   55,    3, 0x02 /* Public */,
       5,    0,   56,    3, 0x02 /* Public */,
       6,    0,   57,    3, 0x02 /* Public */,
       7,    1,   58,    3, 0x02 /* Public */,
       9,    1,   61,    3, 0x02 /* Public */,
      10,    1,   64,    3, 0x02 /* Public */,
      11,    1,   67,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2,
    0x80000000 | 2,
    0x80000000 | 2,
    0x80000000 | 2,
    QMetaType::QString, QMetaType::QString,    8,
    QMetaType::QString, QMetaType::QString,    8,
    QMetaType::QString, QMetaType::QString,    8,
    QMetaType::QString, QMetaType::QString,    8,

       0        // eod
};

void JGstMediaInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JGstMediaInfo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QMap<QString,QString> _r = _t->getProperties();
            if (_a[0]) *reinterpret_cast< QMap<QString,QString>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QMap<QString,QString> _r = _t->getAudioStreamInfo();
            if (_a[0]) *reinterpret_cast< QMap<QString,QString>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QMap<QString,QString> _r = _t->getVideoStreamInfo();
            if (_a[0]) *reinterpret_cast< QMap<QString,QString>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QMap<QString,QString> _r = _t->getSubtitleStreamInfo();
            if (_a[0]) *reinterpret_cast< QMap<QString,QString>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->getPropertyByKey((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->getAudioInfoByKey((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->getVideoInfoByKey((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->getSubtitleInfoByKey((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JGstMediaInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_JGstMediaInfo.data,
    qt_meta_data_JGstMediaInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JGstMediaInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JGstMediaInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JGstMediaInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JGstMediaInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
