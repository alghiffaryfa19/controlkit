/****************************************************************************
** Meta object code from reading C++ file 'MediaDbusSet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../jingosMultimedia/MediaDbusSet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MediaDbusSet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MediaDbusSet_t {
    QByteArrayData data[60];
    char stringdata0[801];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MediaDbusSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MediaDbusSet_t qt_meta_stringdata_MediaDbusSet = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MediaDbusSet"
QT_MOC_LITERAL(1, 13, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 29, 29), // "org.mpris.MediaPlayer2.Player"
QT_MOC_LITERAL(3, 59, 11), // "raisePlayer"
QT_MOC_LITERAL(4, 71, 0), // ""
QT_MOC_LITERAL(5, 72, 6), // "Seeked"
QT_MOC_LITERAL(6, 79, 8), // "Position"
QT_MOC_LITERAL(7, 88, 11), // "rateChanged"
QT_MOC_LITERAL(8, 100, 7), // "newRate"
QT_MOC_LITERAL(9, 108, 13), // "volumeChanged"
QT_MOC_LITERAL(10, 122, 6), // "newVol"
QT_MOC_LITERAL(11, 129, 21), // "playbackStatusChanged"
QT_MOC_LITERAL(12, 151, 16), // "canGoNextChanged"
QT_MOC_LITERAL(13, 168, 20), // "canGoPreviousChanged"
QT_MOC_LITERAL(14, 189, 14), // "canPlayChanged"
QT_MOC_LITERAL(15, 204, 15), // "canPauseChanged"
QT_MOC_LITERAL(16, 220, 17), // "canControlChanged"
QT_MOC_LITERAL(17, 238, 14), // "canSeekChanged"
QT_MOC_LITERAL(18, 253, 19), // "currentTrackChanged"
QT_MOC_LITERAL(19, 273, 25), // "mediaPlayerPresentChanged"
QT_MOC_LITERAL(20, 299, 4), // "next"
QT_MOC_LITERAL(21, 304, 8), // "previous"
QT_MOC_LITERAL(22, 313, 4), // "Next"
QT_MOC_LITERAL(23, 318, 8), // "Previous"
QT_MOC_LITERAL(24, 327, 5), // "Pause"
QT_MOC_LITERAL(25, 333, 9), // "PlayPause"
QT_MOC_LITERAL(26, 343, 4), // "Stop"
QT_MOC_LITERAL(27, 348, 4), // "Play"
QT_MOC_LITERAL(28, 353, 4), // "Seek"
QT_MOC_LITERAL(29, 358, 6), // "Offset"
QT_MOC_LITERAL(30, 365, 11), // "SetPosition"
QT_MOC_LITERAL(31, 377, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(32, 393, 7), // "trackId"
QT_MOC_LITERAL(33, 401, 3), // "pos"
QT_MOC_LITERAL(34, 405, 7), // "OpenUri"
QT_MOC_LITERAL(35, 413, 3), // "uri"
QT_MOC_LITERAL(36, 417, 26), // "playerPlaybackStateChanged"
QT_MOC_LITERAL(37, 444, 23), // "playerIsSeekableChanged"
QT_MOC_LITERAL(38, 468, 20), // "audioPositionChanged"
QT_MOC_LITERAL(39, 489, 19), // "setPropertyPosition"
QT_MOC_LITERAL(40, 509, 15), // "newPositionInMs"
QT_MOC_LITERAL(41, 525, 20), // "audioDurationChanged"
QT_MOC_LITERAL(42, 546, 33), // "skipBackwardControlEnabledCha..."
QT_MOC_LITERAL(43, 580, 32), // "skipForwardControlEnabledChanged"
QT_MOC_LITERAL(44, 613, 19), // "playerVolumeChanged"
QT_MOC_LITERAL(45, 633, 15), // "onUrlChangeSlot"
QT_MOC_LITERAL(46, 649, 14), // "PlaybackStatus"
QT_MOC_LITERAL(47, 664, 4), // "Rate"
QT_MOC_LITERAL(48, 669, 8), // "Metadata"
QT_MOC_LITERAL(49, 678, 6), // "Volume"
QT_MOC_LITERAL(50, 685, 11), // "MinimumRate"
QT_MOC_LITERAL(51, 697, 11), // "MaximumRate"
QT_MOC_LITERAL(52, 709, 9), // "CanGoNext"
QT_MOC_LITERAL(53, 719, 13), // "CanGoPrevious"
QT_MOC_LITERAL(54, 733, 7), // "CanPlay"
QT_MOC_LITERAL(55, 741, 8), // "CanPause"
QT_MOC_LITERAL(56, 750, 10), // "CanControl"
QT_MOC_LITERAL(57, 761, 7), // "CanSeek"
QT_MOC_LITERAL(58, 769, 12), // "currentTrack"
QT_MOC_LITERAL(59, 782, 18) // "mediaPlayerPresent"

    },
    "MediaDbusSet\0D-Bus Interface\0"
    "org.mpris.MediaPlayer2.Player\0raisePlayer\0"
    "\0Seeked\0Position\0rateChanged\0newRate\0"
    "volumeChanged\0newVol\0playbackStatusChanged\0"
    "canGoNextChanged\0canGoPreviousChanged\0"
    "canPlayChanged\0canPauseChanged\0"
    "canControlChanged\0canSeekChanged\0"
    "currentTrackChanged\0mediaPlayerPresentChanged\0"
    "next\0previous\0Next\0Previous\0Pause\0"
    "PlayPause\0Stop\0Play\0Seek\0Offset\0"
    "SetPosition\0QDBusObjectPath\0trackId\0"
    "pos\0OpenUri\0uri\0playerPlaybackStateChanged\0"
    "playerIsSeekableChanged\0audioPositionChanged\0"
    "setPropertyPosition\0newPositionInMs\0"
    "audioDurationChanged\0"
    "skipBackwardControlEnabledChanged\0"
    "skipForwardControlEnabledChanged\0"
    "playerVolumeChanged\0onUrlChangeSlot\0"
    "PlaybackStatus\0Rate\0Metadata\0Volume\0"
    "MinimumRate\0MaximumRate\0CanGoNext\0"
    "CanGoPrevious\0CanPlay\0CanPause\0"
    "CanControl\0CanSeek\0currentTrack\0"
    "mediaPlayerPresent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MediaDbusSet[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      33,   16, // methods
      15,  230, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,  181,    4, 0x06 /* Public */,
       5,    1,  182,    4, 0x06 /* Public */,
       7,    1,  185,    4, 0x06 /* Public */,
       9,    1,  188,    4, 0x06 /* Public */,
      11,    0,  191,    4, 0x06 /* Public */,
      12,    0,  192,    4, 0x06 /* Public */,
      13,    0,  193,    4, 0x06 /* Public */,
      14,    0,  194,    4, 0x06 /* Public */,
      15,    0,  195,    4, 0x06 /* Public */,
      16,    0,  196,    4, 0x06 /* Public */,
      17,    0,  197,    4, 0x06 /* Public */,
      18,    0,  198,    4, 0x06 /* Public */,
      19,    0,  199,    4, 0x06 /* Public */,
      20,    0,  200,    4, 0x06 /* Public */,
      21,    0,  201,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    0,  202,    4, 0x0a /* Public */,
      23,    0,  203,    4, 0x0a /* Public */,
      24,    0,  204,    4, 0x0a /* Public */,
      25,    0,  205,    4, 0x0a /* Public */,
      26,    0,  206,    4, 0x0a /* Public */,
      27,    0,  207,    4, 0x0a /* Public */,
      28,    1,  208,    4, 0x0a /* Public */,
      30,    2,  211,    4, 0x0a /* Public */,
      34,    1,  216,    4, 0x0a /* Public */,
      36,    0,  219,    4, 0x0a /* Public */,
      37,    0,  220,    4, 0x0a /* Public */,
      38,    0,  221,    4, 0x0a /* Public */,
      39,    1,  222,    4, 0x0a /* Public */,
      41,    0,  225,    4, 0x0a /* Public */,
      42,    0,  226,    4, 0x0a /* Public */,
      43,    0,  227,    4, 0x0a /* Public */,
      44,    0,  228,    4, 0x0a /* Public */,
      45,    0,  229,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   29,
    QMetaType::Void, 0x80000000 | 31, QMetaType::LongLong,   32,   33,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      46, QMetaType::QString, 0x00495001,
      47, QMetaType::Double, 0x00495103,
      48, QMetaType::QVariantMap, 0x00495001,
      49, QMetaType::Double, 0x00495103,
       6, QMetaType::LongLong, 0x00495003,
      50, QMetaType::Double, 0x00095401,
      51, QMetaType::Double, 0x00095401,
      52, QMetaType::Bool, 0x00495001,
      53, QMetaType::Bool, 0x00495001,
      54, QMetaType::Bool, 0x00495001,
      55, QMetaType::Bool, 0x00495001,
      56, QMetaType::Bool, 0x00495001,
      57, QMetaType::Bool, 0x00495001,
      58, QMetaType::Int, 0x00495103,
      59, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       4,
       2,
       4,
       3,
       4,
       0,
       0,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,

       0        // eod
};

void MediaDbusSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MediaDbusSet *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->raisePlayer(); break;
        case 1: _t->Seeked((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 2: _t->rateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->volumeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->playbackStatusChanged(); break;
        case 5: _t->canGoNextChanged(); break;
        case 6: _t->canGoPreviousChanged(); break;
        case 7: _t->canPlayChanged(); break;
        case 8: _t->canPauseChanged(); break;
        case 9: _t->canControlChanged(); break;
        case 10: _t->canSeekChanged(); break;
        case 11: _t->currentTrackChanged(); break;
        case 12: _t->mediaPlayerPresentChanged(); break;
        case 13: _t->next(); break;
        case 14: _t->previous(); break;
        case 15: _t->Next(); break;
        case 16: _t->Previous(); break;
        case 17: _t->Pause(); break;
        case 18: _t->PlayPause(); break;
        case 19: _t->Stop(); break;
        case 20: _t->Play(); break;
        case 21: _t->Seek((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 22: _t->SetPosition((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2]))); break;
        case 23: _t->OpenUri((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->playerPlaybackStateChanged(); break;
        case 25: _t->playerIsSeekableChanged(); break;
        case 26: _t->audioPositionChanged(); break;
        case 27: _t->setPropertyPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->audioDurationChanged(); break;
        case 29: _t->skipBackwardControlEnabledChanged(); break;
        case 30: _t->skipForwardControlEnabledChanged(); break;
        case 31: _t->playerVolumeChanged(); break;
        case 32: _t->onUrlChangeSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MediaDbusSet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDbusSet::raisePlayer)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MediaDbusSet::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDbusSet::Seeked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MediaDbusSet::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDbusSet::rateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MediaDbusSet::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDbusSet::volumeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MediaDbusSet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDbusSet::playbackStatusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MediaDbusSet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDbusSet::canGoNextChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MediaDbusSet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDbusSet::canGoPreviousChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MediaDbusSet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDbusSet::canPlayChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MediaDbusSet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDbusSet::canPauseChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MediaDbusSet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDbusSet::canControlChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MediaDbusSet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDbusSet::canSeekChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MediaDbusSet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDbusSet::currentTrackChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MediaDbusSet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDbusSet::mediaPlayerPresentChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MediaDbusSet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDbusSet::next)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MediaDbusSet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaDbusSet::previous)) {
                *result = 14;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MediaDbusSet *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->PlaybackStatus(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->Rate(); break;
        case 2: *reinterpret_cast< QVariantMap*>(_v) = _t->Metadata(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->Volume(); break;
        case 4: *reinterpret_cast< qlonglong*>(_v) = _t->Position(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->MinimumRate(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->MaximumRate(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->CanGoNext(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->CanGoPrevious(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->CanPlay(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->CanPause(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->CanControl(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->CanSeek(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->currentTrack(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->mediaPlayerPresent(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MediaDbusSet *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setRate(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setVolume(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setPropertyPosition(*reinterpret_cast< qlonglong*>(_v)); break;
        case 13: _t->setCurrentTrack(*reinterpret_cast< int*>(_v)); break;
        case 14: _t->setMediaPlayerPresent(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MediaDbusSet::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_meta_stringdata_MediaDbusSet.data,
    qt_meta_data_MediaDbusSet,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MediaDbusSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaDbusSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MediaDbusSet.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int MediaDbusSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MediaDbusSet::raisePlayer()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MediaDbusSet::Seeked(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MediaDbusSet::rateChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MediaDbusSet::volumeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MediaDbusSet::playbackStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MediaDbusSet::canGoNextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MediaDbusSet::canGoPreviousChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MediaDbusSet::canPlayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MediaDbusSet::canPauseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MediaDbusSet::canControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MediaDbusSet::canSeekChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MediaDbusSet::currentTrackChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MediaDbusSet::mediaPlayerPresentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MediaDbusSet::next()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MediaDbusSet::previous()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}
struct qt_meta_stringdata_MediaPlayer2_t {
    QByteArrayData data[14];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MediaPlayer2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MediaPlayer2_t qt_meta_stringdata_MediaPlayer2 = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MediaPlayer2"
QT_MOC_LITERAL(1, 13, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 29, 22), // "org.mpris.MediaPlayer2"
QT_MOC_LITERAL(3, 52, 11), // "raisePlayer"
QT_MOC_LITERAL(4, 64, 0), // ""
QT_MOC_LITERAL(5, 65, 4), // "Quit"
QT_MOC_LITERAL(6, 70, 5), // "Raise"
QT_MOC_LITERAL(7, 76, 7), // "CanQuit"
QT_MOC_LITERAL(8, 84, 8), // "CanRaise"
QT_MOC_LITERAL(9, 93, 12), // "HasTrackList"
QT_MOC_LITERAL(10, 106, 8), // "Identity"
QT_MOC_LITERAL(11, 115, 12), // "DesktopEntry"
QT_MOC_LITERAL(12, 128, 19), // "SupportedUriSchemes"
QT_MOC_LITERAL(13, 148, 18) // "SupportedMimeTypes"

    },
    "MediaPlayer2\0D-Bus Interface\0"
    "org.mpris.MediaPlayer2\0raisePlayer\0\0"
    "Quit\0Raise\0CanQuit\0CanRaise\0HasTrackList\0"
    "Identity\0DesktopEntry\0SupportedUriSchemes\0"
    "SupportedMimeTypes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MediaPlayer2[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       3,   16, // methods
       7,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   31,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    4, 0x0a /* Public */,
       6,    0,   33,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00095401,
       8, QMetaType::Bool, 0x00095401,
       9, QMetaType::Bool, 0x00095401,
      10, QMetaType::QString, 0x00095401,
      11, QMetaType::QString, 0x00095401,
      12, QMetaType::QStringList, 0x00095401,
      13, QMetaType::QStringList, 0x00095401,

       0        // eod
};

void MediaPlayer2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MediaPlayer2 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->raisePlayer(); break;
        case 1: _t->Quit(); break;
        case 2: _t->Raise(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MediaPlayer2::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaPlayer2::raisePlayer)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MediaPlayer2 *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->CanQuit(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->CanRaise(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->HasTrackList(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->Identity(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->DesktopEntry(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->SupportedUriSchemes(); break;
        case 6: *reinterpret_cast< QStringList*>(_v) = _t->SupportedMimeTypes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject MediaPlayer2::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_meta_stringdata_MediaPlayer2.data,
    qt_meta_data_MediaPlayer2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MediaPlayer2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaPlayer2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MediaPlayer2.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int MediaPlayer2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MediaPlayer2::raisePlayer()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Mpris2_t {
    QByteArrayData data[15];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mpris2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mpris2_t qt_meta_stringdata_Mpris2 = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Mpris2"
QT_MOC_LITERAL(1, 7, 11), // "raisePlayer"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 17), // "playerNameChanged"
QT_MOC_LITERAL(4, 38, 18), // "audioPlayerChanged"
QT_MOC_LITERAL(5, 57, 28), // "showProgressOnTaskBarChanged"
QT_MOC_LITERAL(6, 86, 13), // "setPlayerName"
QT_MOC_LITERAL(7, 100, 10), // "playerName"
QT_MOC_LITERAL(8, 111, 14), // "setAudioPlayer"
QT_MOC_LITERAL(9, 126, 7), // "Player*"
QT_MOC_LITERAL(10, 134, 11), // "audioPlayer"
QT_MOC_LITERAL(11, 146, 24), // "setShowProgressOnTaskBar"
QT_MOC_LITERAL(12, 171, 5), // "value"
QT_MOC_LITERAL(13, 177, 12), // "quitControls"
QT_MOC_LITERAL(14, 190, 21) // "showProgressOnTaskBar"

    },
    "Mpris2\0raisePlayer\0\0playerNameChanged\0"
    "audioPlayerChanged\0showProgressOnTaskBarChanged\0"
    "setPlayerName\0playerName\0setAudioPlayer\0"
    "Player*\0audioPlayer\0setShowProgressOnTaskBar\0"
    "value\0quitControls\0showProgressOnTaskBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mpris2[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   58,    2, 0x0a /* Public */,
       8,    1,   61,    2, 0x0a /* Public */,
      11,    1,   64,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      13,    0,   67,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00495103,
      10, 0x80000000 | 9, 0x0049510b,
      14, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       1,
       2,
       3,

       0        // eod
};

void Mpris2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Mpris2 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->raisePlayer(); break;
        case 1: _t->playerNameChanged(); break;
        case 2: _t->audioPlayerChanged(); break;
        case 3: _t->showProgressOnTaskBarChanged(); break;
        case 4: _t->setPlayerName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setAudioPlayer((*reinterpret_cast< Player*(*)>(_a[1]))); break;
        case 6: _t->setShowProgressOnTaskBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->quitControls(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Player* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Mpris2::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mpris2::raisePlayer)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Mpris2::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mpris2::playerNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Mpris2::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mpris2::audioPlayerChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Mpris2::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mpris2::showProgressOnTaskBarChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Player* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Mpris2 *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->playerName(); break;
        case 1: *reinterpret_cast< Player**>(_v) = _t->audioPlayer(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->showProgressOnTaskBar(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Mpris2 *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlayerName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setAudioPlayer(*reinterpret_cast< Player**>(_v)); break;
        case 2: _t->setShowProgressOnTaskBar(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Mpris2::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Mpris2.data,
    qt_meta_data_Mpris2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Mpris2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mpris2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mpris2.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mpris2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
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
void Mpris2::raisePlayer()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Mpris2::playerNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Mpris2::audioPlayerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Mpris2::showProgressOnTaskBarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
