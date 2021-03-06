//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlace, GEOPDPlaceRequest, GEORPTransitLineTileInfo, GEORPTransitPoiCorrections, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPTransitPoiFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPTransitPoiCorrections *_corrections;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlace *_place;
    GEORPTransitLineTileInfo *_transitLineTileInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _correctionType;
    struct {
        unsigned int has_correctionType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_corrections:1;
        unsigned int read_directionsRequests:1;
        unsigned int read_directionsResponses:1;
        unsigned int read_placeRequest:1;
        unsigned int read_place:1;
        unsigned int read_transitLineTileInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property(readonly, nonatomic) _Bool hasPlaceRequest;
@property(retain, nonatomic) GEORPTransitLineTileInfo *transitLineTileInfo;
@property(readonly, nonatomic) _Bool hasTransitLineTileInfo;
@property(retain, nonatomic) GEOPDPlace *place;
@property(readonly, nonatomic) _Bool hasPlace;
@property(retain, nonatomic) GEORPTransitPoiCorrections *corrections;
@property(readonly, nonatomic) _Bool hasCorrections;
- (int)StringAsCorrectionType:(id)arg1;
- (id)correctionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasCorrectionType;
@property(nonatomic) int correctionType;
- (id)initWithData:(id)arg1;
- (id)init;

@end

