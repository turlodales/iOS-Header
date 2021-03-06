//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOVLFCorrection, PBDataReader;

@interface GEOVLFSuccessDetails : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_9f2792e4 _inlierSuccessIndices;
    GEOVLFCorrection *_correction;
    double _poseConfidence;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_poseConfidence:1;
        unsigned int read_inlierSuccessIndices:1;
        unsigned int read_correction:1;
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
- (void)setInlierSuccessIndices:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)inlierSuccessIndicesAtIndex:(unsigned long long)arg1;
- (void)addInlierSuccessIndices:(unsigned int)arg1;
- (void)clearInlierSuccessIndices;
@property(readonly, nonatomic) unsigned int *inlierSuccessIndices;
@property(readonly, nonatomic) unsigned long long inlierSuccessIndicesCount;
@property(nonatomic) _Bool hasPoseConfidence;
@property(nonatomic) double poseConfidence;
@property(retain, nonatomic) GEOVLFCorrection *correction;
@property(readonly, nonatomic) _Bool hasCorrection;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

