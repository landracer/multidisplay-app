#ifndef MOBILEGPS_H
#define MOBILEGPS_H

#include <QObject>
#if defined(QT_MAEMO5_ENABLE) || defined(Q_OS_ANDROID)
#include <QGeoPositionInfo>
#include <QGeoCoordinate>
#include <QGeoPositionInfoSource>
#endif
#include <QList>
#include <QElapsedTimer>

#include "MdGpsSerial.h"

#if defined QT_MAEMO5_ENABLE
QTM_USE_NAMESPACE
#endif

struct MdPos {
    int time;
    int timeDelta;
#if defined(QT_MAEMO5_ENABLE) || defined(Q_OS_ANDROID)
    QGeoPositionInfo pos;
#endif
};
QDataStream& operator<< (QDataStream& s, MdPos *p);
QDataStream& operator>> (QDataStream& s, MdPos *p);

class MobileGPS : public QObject
{
    Q_OBJECT

public:
    MobileGPS(QObject *parent = 0);

    enum { MAGICNUMBER = 0xFEABFEAB, VERSION = 1 };

    bool saveTrack (QString fn);
    bool saveTrackBinary (QString fn);
    //! broken
    bool loadTrack (QString fn);
    bool loadTrackBinary (QString fn);
    void clearData();

#if defined(QT_MAEMO5_ENABLE) || defined(Q_OS_ANDROID)
    QGeoPositionInfo& lastPos() { return lastPositionInfo; };
#endif
    quint32 updateCount () { return gpsUpdateCount; };

    int millisSinceLastGpsUpdate;
    int elapsedSinceLastMdFrame;
    int millisToNextMdFrame;


public slots:
#if defined(QT_MAEMO5_ENABLE) || defined(Q_OS_ANDROID)
    void positionUpdated(const QGeoPositionInfo &info);
#endif
    void mdFrameReceived();

protected:

private:
#if defined(QT_MAEMO5_ENABLE) || defined(Q_OS_ANDROID)
    QGeoPositionInfoSource *source;
    QGeoPositionInfo lastPositionInfo;
    QGeoCoordinate lastCoord;
#endif
    QList<MdPos*> track;
    quint32 gpsUpdateCount;
    QElapsedTimer freqMeasure;
    QElapsedTimer deltaMdFrame;
    MdGpsSerial *gpsSerial;
};

#endif // MOBILEGPS_H
