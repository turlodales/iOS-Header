//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAutocompletePlaceContextMetadata, GEOPDSearchPlaceContextMetadata, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceContextMetadata : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAutocompletePlaceContextMetadata *_autocompletePlaceContextMetadata;
    unsigned long long _muid;
    GEOPDSearchPlaceContextMetadata *_searchPlaceContextMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _placeContextMetadataType;
    struct {
        unsigned int has_muid:1;
        unsigned int has_placeContextMetadataType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_autocompletePlaceContextMetadata:1;
        unsigned int read_searchPlaceContextMetadata:1;
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
@property(retain, nonatomic) GEOPDAutocompletePlaceContextMetadata *autocompletePlaceContextMetadata;
@property(readonly, nonatomic) _Bool hasAutocompletePlaceContextMetadata;
@property(retain, nonatomic) GEOPDSearchPlaceContextMetadata *searchPlaceContextMetadata;
@property(readonly, nonatomic) _Bool hasSearchPlaceContextMetadata;
- (int)StringAsPlaceContextMetadataType:(id)arg1;
- (id)placeContextMetadataTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaceContextMetadataType;
@property(nonatomic) int placeContextMetadataType;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) unsigned long long muid;
- (id)initWithData:(id)arg1;
- (id)init;

@end

