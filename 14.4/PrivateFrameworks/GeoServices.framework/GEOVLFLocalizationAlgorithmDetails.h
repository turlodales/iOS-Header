//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader;

@interface GEOVLFLocalizationAlgorithmDetails : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_82f37d05 _fusedConfidences;
    CDStruct_82f37d05 _solverConfidences;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _numberOfInliers;
    unsigned int _numberOfKeypoints;
    unsigned int _numberOfMatches;
    unsigned int _tKptsMs;
    unsigned int _tMatchMs;
    unsigned int _tPoseMs;
    struct {
        unsigned int has_numberOfInliers:1;
        unsigned int has_numberOfKeypoints:1;
        unsigned int has_numberOfMatches:1;
        unsigned int has_tKptsMs:1;
        unsigned int has_tMatchMs:1;
        unsigned int has_tPoseMs:1;
        unsigned int read_fusedConfidences:1;
        unsigned int read_solverConfidences:1;
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
@property(nonatomic) _Bool hasTPoseMs;
@property(nonatomic) unsigned int tPoseMs;
@property(nonatomic) _Bool hasTMatchMs;
@property(nonatomic) unsigned int tMatchMs;
@property(nonatomic) _Bool hasTKptsMs;
@property(nonatomic) unsigned int tKptsMs;
- (void)setFusedConfidences:(double *)arg1 count:(unsigned long long)arg2;
- (double)fusedConfidenceAtIndex:(unsigned long long)arg1;
- (void)addFusedConfidence:(double)arg1;
- (void)clearFusedConfidences;
@property(readonly, nonatomic) double *fusedConfidences;
@property(readonly, nonatomic) unsigned long long fusedConfidencesCount;
- (void)setSolverConfidences:(double *)arg1 count:(unsigned long long)arg2;
- (double)solverConfidenceAtIndex:(unsigned long long)arg1;
- (void)addSolverConfidence:(double)arg1;
- (void)clearSolverConfidences;
@property(readonly, nonatomic) double *solverConfidences;
@property(readonly, nonatomic) unsigned long long solverConfidencesCount;
@property(nonatomic) _Bool hasNumberOfInliers;
@property(nonatomic) unsigned int numberOfInliers;
@property(nonatomic) _Bool hasNumberOfMatches;
@property(nonatomic) unsigned int numberOfMatches;
@property(nonatomic) _Bool hasNumberOfKeypoints;
@property(nonatomic) unsigned int numberOfKeypoints;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

