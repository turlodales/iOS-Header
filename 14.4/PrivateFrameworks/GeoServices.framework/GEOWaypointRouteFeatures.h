//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOWaypointRouteFeatures : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _Bool _avoidsHighways;
    _Bool _avoidsTolls;
    _Bool _avoidsTraffic;
    struct {
        unsigned int has_avoidsHighways:1;
        unsigned int has_avoidsTolls:1;
        unsigned int has_avoidsTraffic:1;
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
@property(nonatomic) _Bool hasAvoidsTraffic;
@property(nonatomic) _Bool avoidsTraffic;
@property(nonatomic) _Bool hasAvoidsHighways;
@property(nonatomic) _Bool avoidsHighways;
@property(nonatomic) _Bool hasAvoidsTolls;
@property(nonatomic) _Bool avoidsTolls;

@end

