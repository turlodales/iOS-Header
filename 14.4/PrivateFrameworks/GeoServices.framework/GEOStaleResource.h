//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOResource, PBDataReader, PBUnknownFields;

@interface GEOStaleResource : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOResource *_desiredResource;
    GEOResource *_fallbackResource;
    double _originalTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_originalTimestamp:1;
        unsigned int read_unknownFields:1;
        unsigned int read_desiredResource:1;
        unsigned int read_fallbackResource:1;
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
@property(nonatomic) _Bool hasOriginalTimestamp;
@property(nonatomic) double originalTimestamp;
@property(retain, nonatomic) GEOResource *fallbackResource;
@property(readonly, nonatomic) _Bool hasFallbackResource;
@property(retain, nonatomic) GEOResource *desiredResource;
@property(readonly, nonatomic) _Bool hasDesiredResource;
- (id)initWithData:(id)arg1;
- (id)init;

@end

