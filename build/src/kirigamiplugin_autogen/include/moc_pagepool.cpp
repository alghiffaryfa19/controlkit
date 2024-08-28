/****************************************************************************
** Meta object code from reading C++ file 'pagepool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/pagepool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagepool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PagePool_t {
    QByteArrayData data[25];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PagePool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PagePool_t qt_meta_stringdata_PagePool = {
    {
QT_MOC_LITERAL(0, 0, 8), // "PagePool"
QT_MOC_LITERAL(1, 9, 20), // "lastLoadedUrlChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 21), // "lastLoadedItemChanged"
QT_MOC_LITERAL(4, 53, 17), // "cachePagesChanged"
QT_MOC_LITERAL(5, 71, 8), // "loadPage"
QT_MOC_LITERAL(6, 80, 11), // "QQuickItem*"
QT_MOC_LITERAL(7, 92, 3), // "url"
QT_MOC_LITERAL(8, 96, 8), // "QJSValue"
QT_MOC_LITERAL(9, 105, 8), // "callback"
QT_MOC_LITERAL(10, 114, 22), // "loadPageWithProperties"
QT_MOC_LITERAL(11, 137, 10), // "properties"
QT_MOC_LITERAL(12, 148, 10), // "urlForPage"
QT_MOC_LITERAL(13, 159, 4), // "item"
QT_MOC_LITERAL(14, 164, 10), // "pageForUrl"
QT_MOC_LITERAL(15, 175, 8), // "contains"
QT_MOC_LITERAL(16, 184, 4), // "page"
QT_MOC_LITERAL(17, 189, 10), // "deletePage"
QT_MOC_LITERAL(18, 200, 11), // "resolvedUrl"
QT_MOC_LITERAL(19, 212, 4), // "file"
QT_MOC_LITERAL(20, 217, 10), // "isLocalUrl"
QT_MOC_LITERAL(21, 228, 5), // "clear"
QT_MOC_LITERAL(22, 234, 13), // "lastLoadedUrl"
QT_MOC_LITERAL(23, 248, 14), // "lastLoadedItem"
QT_MOC_LITERAL(24, 263, 10) // "cachePages"

    },
    "PagePool\0lastLoadedUrlChanged\0\0"
    "lastLoadedItemChanged\0cachePagesChanged\0"
    "loadPage\0QQuickItem*\0url\0QJSValue\0"
    "callback\0loadPageWithProperties\0"
    "properties\0urlForPage\0item\0pageForUrl\0"
    "contains\0page\0deletePage\0resolvedUrl\0"
    "file\0isLocalUrl\0clear\0lastLoadedUrl\0"
    "lastLoadedItem\0cachePages"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PagePool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       3,  126, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    2,   87,    2, 0x02 /* Public */,
       5,    1,   92,    2, 0x22 /* Public | MethodCloned */,
      10,    3,   95,    2, 0x02 /* Public */,
      10,    2,  102,    2, 0x22 /* Public | MethodCloned */,
      12,    1,  107,    2, 0x02 /* Public */,
      14,    1,  110,    2, 0x02 /* Public */,
      15,    1,  113,    2, 0x02 /* Public */,
      17,    1,  116,    2, 0x02 /* Public */,
      18,    1,  119,    2, 0x02 /* Public */,
      20,    1,  122,    2, 0x02 /* Public */,
      21,    0,  125,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 6, QMetaType::QString, 0x80000000 | 8,    7,    9,
    0x80000000 | 6, QMetaType::QString,    7,
    0x80000000 | 6, QMetaType::QString, QMetaType::QVariantMap, 0x80000000 | 8,    7,   11,    9,
    0x80000000 | 6, QMetaType::QString, QMetaType::QVariantMap,    7,   11,
    QMetaType::QUrl, 0x80000000 | 6,   13,
    0x80000000 | 6, QMetaType::QUrl,    7,
    QMetaType::Bool, QMetaType::QVariant,   16,
    QMetaType::Void, QMetaType::QVariant,   16,
    QMetaType::QUrl, QMetaType::QString,   19,
    QMetaType::Bool, QMetaType::QUrl,    7,
    QMetaType::Void,

 // properties: name, type, flags
      22, QMetaType::QUrl, 0x00495001,
      23, 0x80000000 | 6, 0x00495009,
      24, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void PagePool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PagePool *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->lastLoadedUrlChanged(); break;
        case 1: _t->lastLoadedItemChanged(); break;
        case 2: _t->cachePagesChanged(); break;
        case 3: { QQuickItem* _r = _t->loadPage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QJSValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuickItem**>(_a[0]) = std::move(_r); }  break;
        case 4: { QQuickItem* _r = _t->loadPage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQuickItem**>(_a[0]) = std::move(_r); }  break;
        case 5: { QQuickItem* _r = _t->loadPageWithProperties((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< QJSValue(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QQuickItem**>(_a[0]) = std::move(_r); }  break;
        case 6: { QQuickItem* _r = _t->loadPageWithProperties((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQuickItem**>(_a[0]) = std::move(_r); }  break;
        case 7: { QUrl _r = _t->urlForPage((*reinterpret_cast< QQuickItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 8: { QQuickItem* _r = _t->pageForUrl((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQuickItem**>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->contains((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->deletePage((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 11: { QUrl _r = _t->resolvedUrl((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->isLocalUrl((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PagePool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PagePool::lastLoadedUrlChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PagePool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PagePool::lastLoadedItemChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PagePool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PagePool::cachePagesChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PagePool *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->lastLoadedUrl(); break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->lastLoadedItem(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->cachePages(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PagePool *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setCachePages(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PagePool::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PagePool.data,
    qt_meta_data_PagePool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PagePool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PagePool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PagePool.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PagePool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PagePool::lastLoadedUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PagePool::lastLoadedItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PagePool::cachePagesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
