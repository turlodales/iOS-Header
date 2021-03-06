//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOTransitDecoderData : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_accessPoints;
    NSMutableArray *_artworks;
    NSMutableArray *_halls;
    NSMutableArray *_lines;
    NSMutableArray *_stations;
    NSMutableArray *_steps;
    NSMutableArray *_stops;
    NSMutableArray *_systems;
    NSMutableArray *_transitIncidentMessages;
    NSMutableArray *_transitIncidents;
    NSMutableArray *_walkings;
    NSMutableArray *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_accessPoints:1;
        unsigned int read_artworks:1;
        unsigned int read_halls:1;
        unsigned int read_lines:1;
        unsigned int read_stations:1;
        unsigned int read_steps:1;
        unsigned int read_stops:1;
        unsigned int read_systems:1;
        unsigned int read_transitIncidentMessages:1;
        unsigned int read_transitIncidents:1;
        unsigned int read_walkings:1;
        unsigned int read_zilchPoints:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)stepType;
+ (Class)transitIncidentMessageType;
+ (Class)artworkType;
+ (Class)hallType;
+ (Class)transitIncidentType;
+ (Class)systemType;
+ (Class)zilchPointsType;
+ (Class)stopType;
+ (Class)walkingType;
+ (Class)accessPointType;
+ (Class)lineType;
+ (Class)stationType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)stepAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepsCount;
- (void)addStep:(id)arg1;
- (void)clearSteps;
@property(retain, nonatomic) NSMutableArray *steps;
- (id)transitIncidentMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)transitIncidentMessagesCount;
- (void)addTransitIncidentMessage:(id)arg1;
- (void)clearTransitIncidentMessages;
@property(retain, nonatomic) NSMutableArray *transitIncidentMessages;
- (id)artworkAtIndex:(unsigned long long)arg1;
- (unsigned long long)artworksCount;
- (void)addArtwork:(id)arg1;
- (void)clearArtworks;
@property(retain, nonatomic) NSMutableArray *artworks;
- (id)hallAtIndex:(unsigned long long)arg1;
- (unsigned long long)hallsCount;
- (void)addHall:(id)arg1;
- (void)clearHalls;
@property(retain, nonatomic) NSMutableArray *halls;
- (id)transitIncidentAtIndex:(unsigned long long)arg1;
- (unsigned long long)transitIncidentsCount;
- (void)addTransitIncident:(id)arg1;
- (void)clearTransitIncidents;
@property(retain, nonatomic) NSMutableArray *transitIncidents;
- (id)systemAtIndex:(unsigned long long)arg1;
- (unsigned long long)systemsCount;
- (void)addSystem:(id)arg1;
- (void)clearSystems;
@property(retain, nonatomic) NSMutableArray *systems;
- (id)zilchPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)zilchPointsCount;
- (void)addZilchPoints:(id)arg1;
- (void)clearZilchPoints;
@property(retain, nonatomic) NSMutableArray *zilchPoints;
- (id)stopAtIndex:(unsigned long long)arg1;
- (unsigned long long)stopsCount;
- (void)addStop:(id)arg1;
- (void)clearStops;
@property(retain, nonatomic) NSMutableArray *stops;
- (id)walkingAtIndex:(unsigned long long)arg1;
- (unsigned long long)walkingsCount;
- (void)addWalking:(id)arg1;
- (void)clearWalkings;
@property(retain, nonatomic) NSMutableArray *walkings;
- (id)accessPointAtIndex:(unsigned long long)arg1;
- (unsigned long long)accessPointsCount;
- (void)addAccessPoint:(id)arg1;
- (void)clearAccessPoints;
@property(retain, nonatomic) NSMutableArray *accessPoints;
- (id)lineAtIndex:(unsigned long long)arg1;
- (unsigned long long)linesCount;
- (void)addLine:(id)arg1;
- (void)clearLines;
@property(retain, nonatomic) NSMutableArray *lines;
- (id)stationAtIndex:(unsigned long long)arg1;
- (unsigned long long)stationsCount;
- (void)addStation:(id)arg1;
- (void)clearStations;
@property(retain, nonatomic) NSMutableArray *stations;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)artworkFromIndices:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end

