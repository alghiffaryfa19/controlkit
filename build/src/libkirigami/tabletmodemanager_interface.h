/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -p tabletmodemanager_interface /home/fauzan/ksrc/kirigami/src/libkirigami/org.kde.KWin.TabletModeManager.xml
 *
 * qdbusxml2cpp is Copyright (C) 2022 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef TABLETMODEMANAGER_INTERFACE_H
#define TABLETMODEMANAGER_INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.kde.KWin.TabletModeManager
 */
class OrgKdeKWinTabletModeManagerInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.kde.KWin.TabletModeManager"; }

public:
    OrgKdeKWinTabletModeManagerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgKdeKWinTabletModeManagerInterface();

    Q_PROPERTY(bool tabletMode READ tabletMode)
    inline bool tabletMode() const
    { return qvariant_cast< bool >(property("tabletMode")); }

    Q_PROPERTY(bool tabletModeAvailable READ tabletModeAvailable)
    inline bool tabletModeAvailable() const
    { return qvariant_cast< bool >(property("tabletModeAvailable")); }

public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
    void tabletModeAvailableChanged(bool tabletModeAvailable);
    void tabletModeChanged(bool tabletMode);
};

namespace org {
  namespace kde {
    namespace KWin {
      typedef ::OrgKdeKWinTabletModeManagerInterface TabletModeManager;
    }
  }
}
#endif
