//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOCarInfo, GEOMapRegion, GEOMapsServerMetadata, GEOPlaceActionDetails, GEORouteDetails, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOMapsUsageFeedbackCollection : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    struct GEOSessionID _sessionID;
    GEOCarInfo *_carInfo;
    GEOMapRegion *_mapRegion;
    GEOPlaceActionDetails *_placeActionDetails;
    NSString *_providerId;
    GEORouteDetails *_routeDetails;
    GEOMapsServerMetadata *_serverMetadata;
    double _sessionRelativeTimestamp;
    double _zoomLevel;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _actionType;
    int _locationBucket;
    int _sequenceNumber;
    int _uiTarget;
    struct {
        unsigned int has_sessionID:1;
        unsigned int has_sessionRelativeTimestamp:1;
        unsigned int has_zoomLevel:1;
        unsigned int has_actionType:1;
        unsigned int has_locationBucket:1;
        unsigned int has_sequenceNumber:1;
        unsigned int has_uiTarget:1;
        unsigned int read_carInfo:1;
        unsigned int read_mapRegion:1;
        unsigned int read_placeActionDetails:1;
        unsigned int read_providerId:1;
        unsigned int read_routeDetails:1;
        unsigned int read_serverMetadata:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
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
- (int)StringAsUiTarget:(id)arg1;
- (id)uiTargetAsString:(int)arg1;
@property(nonatomic) _Bool hasUiTarget;
@property(nonatomic) int uiTarget;
- (int)StringAsLocationBucket:(id)arg1;
- (id)locationBucketAsString:(int)arg1;
@property(nonatomic) _Bool hasLocationBucket;
@property(nonatomic) int locationBucket;
@property(retain, nonatomic) GEOMapsServerMetadata *serverMetadata;
@property(readonly, nonatomic) _Bool hasServerMetadata;
@property(retain, nonatomic) NSString *providerId;
@property(readonly, nonatomic) _Bool hasProviderId;
@property(retain, nonatomic) GEORouteDetails *routeDetails;
@property(readonly, nonatomic) _Bool hasRouteDetails;
@property(nonatomic) _Bool hasSequenceNumber;
@property(nonatomic) int sequenceNumber;
@property(nonatomic) _Bool hasZoomLevel;
@property(nonatomic) double zoomLevel;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) _Bool hasMapRegion;
@property(retain, nonatomic) GEOCarInfo *carInfo;
@property(readonly, nonatomic) _Bool hasCarInfo;
@property(retain, nonatomic) GEOPlaceActionDetails *placeActionDetails;
@property(readonly, nonatomic) _Bool hasPlaceActionDetails;
@property(nonatomic) _Bool hasSessionRelativeTimestamp;
@property(nonatomic) double sessionRelativeTimestamp;
- (int)StringAsActionType:(id)arg1;
- (id)actionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasActionType;
@property(nonatomic) int actionType;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) struct GEOSessionID sessionID;
- (id)initWithData:(id)arg1;
- (id)init;

@end

