//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPFeedbackIdLookupResult, GEORPFeedbackImageUploadResult, GEORPFeedbackLayoutConfigResult, GEORPFeedbackQueryResult, GEORPFeedbackSubmissionResult, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPFeedbackIdLookupResult *_idLookupResult;
    GEORPFeedbackImageUploadResult *_imageUploadResult;
    GEORPFeedbackLayoutConfigResult *_layoutConfigResult;
    GEORPFeedbackQueryResult *_queryResult;
    GEORPFeedbackSubmissionResult *_submissionResult;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_idLookupResult:1;
        unsigned int read_imageUploadResult:1;
        unsigned int read_layoutConfigResult:1;
        unsigned int read_queryResult:1;
        unsigned int read_submissionResult:1;
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
@property(retain, nonatomic) GEORPFeedbackLayoutConfigResult *layoutConfigResult;
@property(readonly, nonatomic) _Bool hasLayoutConfigResult;
@property(retain, nonatomic) GEORPFeedbackImageUploadResult *imageUploadResult;
@property(readonly, nonatomic) _Bool hasImageUploadResult;
@property(retain, nonatomic) GEORPFeedbackQueryResult *queryResult;
@property(readonly, nonatomic) _Bool hasQueryResult;
@property(retain, nonatomic) GEORPFeedbackIdLookupResult *idLookupResult;
@property(readonly, nonatomic) _Bool hasIdLookupResult;
@property(retain, nonatomic) GEORPFeedbackSubmissionResult *submissionResult;
@property(readonly, nonatomic) _Bool hasSubmissionResult;
- (id)initWithData:(id)arg1;
- (id)init;

@end

