//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAbAssignInfo, GEOLocalTime, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAnalyticMetadata : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOSessionID _sessionId;
    GEOAbAssignInfo *_abAssignInfo;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_hardwareModel;
    NSString *_loggedAbExperiment;
    NSString *_osVersion;
    NSString *_productName;
    double _relativeTimestamp;
    GEOLocalTime *_requestTime;
    NSMutableArray *_serviceTags;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _requestSource;
    unsigned int _sequenceNumber;
    _Bool _isFromApi;
    _Bool _isInternalInstall;
    _Bool _isInternalTool;
    _Bool _isSiriOriginalRequest;
    struct {
        unsigned int has_sessionId:1;
        unsigned int has_relativeTimestamp:1;
        unsigned int has_requestSource:1;
        unsigned int has_sequenceNumber:1;
        unsigned int has_isFromApi:1;
        unsigned int has_isInternalInstall:1;
        unsigned int has_isInternalTool:1;
        unsigned int has_isSiriOriginalRequest:1;
        unsigned int read_unknownFields:1;
        unsigned int read_abAssignInfo:1;
        unsigned int read_appIdentifier:1;
        unsigned int read_appMajorVersion:1;
        unsigned int read_appMinorVersion:1;
        unsigned int read_hardwareModel:1;
        unsigned int read_loggedAbExperiment:1;
        unsigned int read_osVersion:1;
        unsigned int read_productName:1;
        unsigned int read_requestTime:1;
        unsigned int read_serviceTags:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)serviceTagType;
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
@property(nonatomic) _Bool hasIsSiriOriginalRequest;
@property(nonatomic) _Bool isSiriOriginalRequest;
@property(nonatomic) _Bool hasRelativeTimestamp;
@property(nonatomic) double relativeTimestamp;
@property(retain, nonatomic) GEOLocalTime *requestTime;
@property(readonly, nonatomic) _Bool hasRequestTime;
@property(retain, nonatomic) GEOAbAssignInfo *abAssignInfo;
@property(readonly, nonatomic) _Bool hasAbAssignInfo;
@property(retain, nonatomic) NSString *loggedAbExperiment;
@property(readonly, nonatomic) _Bool hasLoggedAbExperiment;
@property(retain, nonatomic) NSString *productName;
@property(readonly, nonatomic) _Bool hasProductName;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(retain, nonatomic) NSMutableArray *serviceTags;
@property(nonatomic) _Bool hasIsFromApi;
@property(nonatomic) _Bool isFromApi;
- (int)StringAsRequestSource:(id)arg1;
- (id)requestSourceAsString:(int)arg1;
@property(nonatomic) _Bool hasRequestSource;
@property(nonatomic) int requestSource;
@property(nonatomic) _Bool hasSequenceNumber;
@property(nonatomic) unsigned int sequenceNumber;
@property(nonatomic) _Bool hasSessionId;
@property(nonatomic) struct GEOSessionID sessionId;
@property(nonatomic) _Bool hasIsInternalInstall;
@property(nonatomic) _Bool isInternalInstall;
@property(nonatomic) _Bool hasIsInternalTool;
@property(nonatomic) _Bool isInternalTool;
@property(retain, nonatomic) NSString *osVersion;
@property(readonly, nonatomic) _Bool hasOsVersion;
@property(retain, nonatomic) NSString *hardwareModel;
@property(readonly, nonatomic) _Bool hasHardwareModel;
@property(retain, nonatomic) NSString *appMinorVersion;
@property(readonly, nonatomic) _Bool hasAppMinorVersion;
@property(retain, nonatomic) NSString *appMajorVersion;
@property(readonly, nonatomic) _Bool hasAppMajorVersion;
@property(retain, nonatomic) NSString *appIdentifier;
@property(readonly, nonatomic) _Bool hasAppIdentifier;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithTraits:(id)arg1;

@end

