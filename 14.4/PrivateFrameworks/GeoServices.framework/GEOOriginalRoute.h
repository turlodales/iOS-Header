//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, PBDataReader, PBUnknownFields;

@interface GEOOriginalRoute : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_originalDirectionsResponseID;
    NSData *_routeHandle;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _originalRoutePurpose;
    unsigned int _routeIndex;
    struct {
        unsigned int has_originalRoutePurpose:1;
        unsigned int has_routeIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_originalDirectionsResponseID:1;
        unsigned int read_routeHandle:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(nonatomic) _Bool hasRouteIndex;
@property(nonatomic) unsigned int routeIndex;
@property(retain, nonatomic) NSData *originalDirectionsResponseID;
@property(readonly, nonatomic) _Bool hasOriginalDirectionsResponseID;
@property(retain, nonatomic) NSData *routeHandle;
@property(readonly, nonatomic) _Bool hasRouteHandle;
- (int)StringAsOriginalRoutePurpose:(id)arg1;
- (id)originalRoutePurposeAsString:(int)arg1;
@property(nonatomic) _Bool hasOriginalRoutePurpose;
@property(nonatomic) int originalRoutePurpose;
- (id)initWithData:(id)arg1;
- (id)init;

@end

