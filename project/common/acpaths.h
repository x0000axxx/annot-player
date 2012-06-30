#ifndef ACPATHS_H
#define ACPATHS_H

// ac/acpaths.h
// 4/23/2012
#include <QtCore/QCoreApplication>
#include <QtCore/QObject>
#include <QtCore/QString>
#ifdef Q_WS_MAC
# include "mac/qtmac/qtmac.h"
#endif // Q_WS_MAC

// - Resources -

#define AC_PATH_LUA     ""      // TODO
#define AC_PATH_JSF     ""      // TODO
#define AC_PATH_DOC     ""      // TODO
#define AC_PATH_IMAGES  ""      // TODO
#define AC_PATH_LOGS    ""      // TODO

#ifdef Q_WS_WIN
# define AC_PATH_CACHES  QCoreApplication::applicationDirPath() + "/" "caches"
#elif defined(Q_WS_MAC)
# define AC_PATH_CACHES  QtMac::homeCachesPath() + "/me.annot.cloud"
#else
# define AC_PATH_CACHES  QDir::homePath() + "/.annot/cloud"
#endif // Q_WS_

#define AC_PATH_DOWNLOADS       AcLocationManager::globalInstance()->downloadsLocation()

class AcSettings;
class AcLocationManager : public QObject
{
  Q_OBJECT
  Q_DISABLE_COPY(AcLocationManager)
  typedef AcLocationManager Self;
  typedef QObject Base;

  mutable AcSettings *settings_;

public:
  static Self *globalInstance() { static Self g; return &g; }
protected:
  explicit AcLocationManager(QObject *parent = 0)
    : Base(parent), settings_(0) { init(); }

signals:
  void downloadsLocationChanged(const QString &path);

public:
  enum StorageLocation {
    DococumentsLocation,// doc/
    ImagesLocation,     // images/
    JsfLocation,        // jsf/
    LuaScriptsLocation, // lua/
    ReadOnlyLocation,   // dummy
    LogsLocation,       // OS dependendent
    CachesLocation,     // OS dependendent
    DownloadsLocation,  // language dependendent
    ReadWriteLocation   // dummy
  };

  QString storageLocation(StorageLocation l) const
  {
    switch(l) {
    case DownloadsLocation:     return downloadsLocation();
    case CachesLocation:        return AC_PATH_CACHES;
    case LogsLocation:          return AC_PATH_LOGS;
    case LuaScriptsLocation:    return AC_PATH_LUA;
    case ImagesLocation:        return AC_PATH_IMAGES;
    case DococumentsLocation:   return AC_PATH_DOC;
    case JsfLocation:           return AC_PATH_JSF;
    default: Q_ASSERT(0);       return QString();
    }
  }

  QString downloadsLocation() const;
  QString defaultDownloadsLocation() const;

public slots:
  void createDownloadsLocation();
  void openDownloadsLocation();

private:
  void init();
  AcSettings *settings() const;
};


#endif // ACPATHS_H
