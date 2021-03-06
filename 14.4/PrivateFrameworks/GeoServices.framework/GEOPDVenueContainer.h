//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDVenueLabel, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueContainer : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _buildingIds;
    GEOPDVenueLabel *_label;
    unsigned long long _muid;
    unsigned long long _venueId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _browseType;
    struct {
        unsigned int has_muid:1;
        unsigned int has_venueId:1;
        unsigned int has_browseType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_buildingIds:1;
        unsigned int read_label:1;
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
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) unsigned long long muid;
- (int)StringAsBrowseType:(id)arg1;
- (id)browseTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasBrowseType;
@property(nonatomic) int browseType;
@property(retain, nonatomic) GEOPDVenueLabel *label;
@property(readonly, nonatomic) _Bool hasLabel;
- (void)setBuildingIds:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)buildingIdAtIndex:(unsigned long long)arg1;
- (void)addBuildingId:(unsigned long long)arg1;
- (void)clearBuildingIds;
@property(readonly, nonatomic) unsigned long long *buildingIds;
@property(readonly, nonatomic) unsigned long long buildingIdsCount;
@property(nonatomic) _Bool hasVenueId;
@property(nonatomic) unsigned long long venueId;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

