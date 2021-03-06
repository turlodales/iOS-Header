//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, GEORPUpdatedLabel, NSMutableArray, NSString, PBDataReader;

@interface GEORPDetails : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOMapRegion *_displayRegion;
    GEORPUpdatedLabel *_label;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    NSMutableArray *_places;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _directionsType;
    int _displayStyle;
    int _mapType;
    struct {
        unsigned int has_directionsType:1;
        unsigned int has_displayStyle:1;
        unsigned int has_mapType:1;
        unsigned int read_displayRegion:1;
        unsigned int read_label:1;
        unsigned int read_localizedDescription:1;
        unsigned int read_localizedTitle:1;
        unsigned int read_places:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)placeType;
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
- (int)StringAsMapType:(id)arg1;
- (id)mapTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMapType;
@property(nonatomic) int mapType;
- (int)StringAsDirectionsType:(id)arg1;
- (id)directionsTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasDirectionsType;
@property(nonatomic) int directionsType;
@property(retain, nonatomic) GEORPUpdatedLabel *label;
@property(readonly, nonatomic) _Bool hasLabel;
- (id)placeAtIndex:(unsigned long long)arg1;
- (unsigned long long)placesCount;
- (void)addPlace:(id)arg1;
- (void)clearPlaces;
@property(retain, nonatomic) NSMutableArray *places;
@property(retain, nonatomic) GEOMapRegion *displayRegion;
@property(readonly, nonatomic) _Bool hasDisplayRegion;
@property(retain, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) _Bool hasLocalizedDescription;
@property(retain, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) _Bool hasLocalizedTitle;
- (int)StringAsDisplayStyle:(id)arg1;
- (id)displayStyleAsString:(int)arg1;
@property(nonatomic) _Bool hasDisplayStyle;
@property(nonatomic) int displayStyle;
- (id)initWithData:(id)arg1;
- (id)init;

@end

