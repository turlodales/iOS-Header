//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPUserSearchInput, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPDirectionsFeedbackContext : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    NSMutableArray *_directionsWaypointPlaceInfos;
    GEORPUserSearchInput *_endWaypoint;
    GEORPUserSearchInput *_startWaypoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_directionsRequests:1;
        unsigned int read_directionsResponses:1;
        unsigned int read_directionsWaypointPlaceInfos:1;
        unsigned int read_endWaypoint:1;
        unsigned int read_startWaypoint:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)directionsWaypointPlaceInfoType;
+ (Class)directionsResponseType;
+ (Class)directionsRequestType;
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
@property(retain, nonatomic) GEORPUserSearchInput *endWaypoint;
@property(readonly, nonatomic) _Bool hasEndWaypoint;
@property(retain, nonatomic) GEORPUserSearchInput *startWaypoint;
@property(readonly, nonatomic) _Bool hasStartWaypoint;
- (id)directionsWaypointPlaceInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsWaypointPlaceInfosCount;
- (void)addDirectionsWaypointPlaceInfo:(id)arg1;
- (void)clearDirectionsWaypointPlaceInfos;
@property(retain, nonatomic) NSMutableArray *directionsWaypointPlaceInfos;
- (id)directionsResponseAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsResponsesCount;
- (void)addDirectionsResponse:(id)arg1;
- (void)clearDirectionsResponses;
@property(retain, nonatomic) NSMutableArray *directionsResponses;
- (id)directionsRequestAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsRequestsCount;
- (void)addDirectionsRequest:(id)arg1;
- (void)clearDirectionsRequests;
@property(retain, nonatomic) NSMutableArray *directionsRequests;
- (id)initWithData:(id)arg1;
- (id)init;

@end

