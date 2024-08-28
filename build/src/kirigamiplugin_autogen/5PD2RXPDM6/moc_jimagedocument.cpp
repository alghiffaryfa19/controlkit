/****************************************************************************
** Meta object code from reading C++ file 'jimagedocument.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/ImagePreview/jimagedocument.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jimagedocument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JImageSaveThread_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JImageSaveThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JImageSaveThread_t qt_meta_stringdata_JImageSaveThread = {
    {
QT_MOC_LITERAL(0, 0, 16), // "JImageSaveThread"
QT_MOC_LITERAL(1, 17, 8), // "finished"
QT_MOC_LITERAL(2, 26, 0) // ""

    },
    "JImageSaveThread\0finished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JImageSaveThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void JImageSaveThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JImageSaveThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JImageSaveThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JImageSaveThread::finished)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject JImageSaveThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_JImageSaveThread.data,
    qt_meta_data_JImageSaveThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JImageSaveThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JImageSaveThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JImageSaveThread.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(this);
    return QObject::qt_metacast(_clname);
}

int JImageSaveThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void JImageSaveThread::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_JImageDocument_t {
    QByteArrayData data[31];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JImageDocument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JImageDocument_t qt_meta_stringdata_JImageDocument = {
    {
QT_MOC_LITERAL(0, 0, 14), // "JImageDocument"
QT_MOC_LITERAL(1, 15, 11), // "pathChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "url"
QT_MOC_LITERAL(4, 32, 18), // "visualImageChanged"
QT_MOC_LITERAL(5, 51, 13), // "editedChanged"
QT_MOC_LITERAL(6, 65, 20), // "providerImageChanged"
QT_MOC_LITERAL(7, 86, 11), // "resetHandle"
QT_MOC_LITERAL(8, 98, 15), // "updateThumbnail"
QT_MOC_LITERAL(9, 114, 17), // "cropImageFinished"
QT_MOC_LITERAL(10, 132, 4), // "path"
QT_MOC_LITERAL(11, 137, 12), // "slotFinished"
QT_MOC_LITERAL(12, 150, 6), // "rotate"
QT_MOC_LITERAL(13, 157, 5), // "angle"
QT_MOC_LITERAL(14, 163, 6), // "mirror"
QT_MOC_LITERAL(15, 170, 10), // "horizontal"
QT_MOC_LITERAL(16, 181, 8), // "vertical"
QT_MOC_LITERAL(17, 190, 4), // "crop"
QT_MOC_LITERAL(18, 195, 1), // "x"
QT_MOC_LITERAL(19, 197, 1), // "y"
QT_MOC_LITERAL(20, 199, 5), // "width"
QT_MOC_LITERAL(21, 205, 6), // "height"
QT_MOC_LITERAL(22, 212, 4), // "undo"
QT_MOC_LITERAL(23, 217, 6), // "cancel"
QT_MOC_LITERAL(24, 224, 4), // "save"
QT_MOC_LITERAL(25, 229, 6), // "saveAs"
QT_MOC_LITERAL(26, 236, 9), // "imagePath"
QT_MOC_LITERAL(27, 246, 14), // "clearUndoImage"
QT_MOC_LITERAL(28, 261, 11), // "visualImage"
QT_MOC_LITERAL(29, 273, 6), // "edited"
QT_MOC_LITERAL(30, 280, 13) // "providerImage"

    },
    "JImageDocument\0pathChanged\0\0url\0"
    "visualImageChanged\0editedChanged\0"
    "providerImageChanged\0resetHandle\0"
    "updateThumbnail\0cropImageFinished\0"
    "path\0slotFinished\0rotate\0angle\0mirror\0"
    "horizontal\0vertical\0crop\0x\0y\0width\0"
    "height\0undo\0cancel\0save\0saveAs\0imagePath\0"
    "clearUndoImage\0visualImage\0edited\0"
    "providerImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JImageDocument[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       4,  136, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    0,  102,    2, 0x06 /* Public */,
       5,    0,  103,    2, 0x06 /* Public */,
       6,    0,  104,    2, 0x06 /* Public */,
       7,    0,  105,    2, 0x06 /* Public */,
       8,    0,  106,    2, 0x06 /* Public */,
       9,    1,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,  110,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      12,    1,  111,    2, 0x02 /* Public */,
      14,    2,  114,    2, 0x02 /* Public */,
      17,    4,  119,    2, 0x02 /* Public */,
      22,    0,  128,    2, 0x02 /* Public */,
      23,    0,  129,    2, 0x02 /* Public */,
      24,    0,  130,    2, 0x02 /* Public */,
      25,    1,  131,    2, 0x02 /* Public */,
      25,    0,  134,    2, 0x22 /* Public | MethodCloned */,
      27,    0,  135,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   18,   19,   20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   26,
    QMetaType::Bool,
    QMetaType::Bool,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495103,
      28, QMetaType::QImage, 0x00495001,
      29, QMetaType::Bool, 0x00495103,
      30, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void JImageDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JImageDocument *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->visualImageChanged(); break;
        case 2: _t->editedChanged(); break;
        case 3: _t->providerImageChanged(); break;
        case 4: _t->resetHandle(); break;
        case 5: _t->updateThumbnail(); break;
        case 6: _t->cropImageFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->slotFinished(); break;
        case 8: _t->rotate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->mirror((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->crop((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 11: _t->undo(); break;
        case 12: _t->cancel(); break;
        case 13: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->saveAs((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->clearUndoImage();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JImageDocument::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JImageDocument::pathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JImageDocument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JImageDocument::visualImageChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JImageDocument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JImageDocument::editedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JImageDocument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JImageDocument::providerImageChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (JImageDocument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JImageDocument::resetHandle)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (JImageDocument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JImageDocument::updateThumbnail)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (JImageDocument::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JImageDocument::cropImageFinished)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<JImageDocument *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->path(); break;
        case 1: *reinterpret_cast< QImage*>(_v) = _t->visualImage(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->edited(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->providerImage(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<JImageDocument *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPath(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setEdited(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setProviderImage(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject JImageDocument::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_JImageDocument.data,
    qt_meta_data_JImageDocument,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JImageDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JImageDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JImageDocument.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JImageDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
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
void JImageDocument::pathChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JImageDocument::visualImageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void JImageDocument::editedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void JImageDocument::providerImageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void JImageDocument::resetHandle()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void JImageDocument::updateThumbnail()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void JImageDocument::cropImageFinished(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
