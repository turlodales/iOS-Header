//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOClientNetworkMetrics : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _requestEnd;
    double _requestStart;
    NSString *_serviceIpAddress;
    NSMutableArray *_transactionMetrics;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _httpResponseCode;
    int _redirectCount;
    int _requestDataSize;
    int _responseDataSize;
    struct {
        unsigned int has_requestEnd:1;
        unsigned int has_requestStart:1;
        unsigned int has_httpResponseCode:1;
        unsigned int has_redirectCount:1;
        unsigned int has_requestDataSize:1;
        unsigned int has_responseDataSize:1;
        unsigned int read_unknownFields:1;
        unsigned int read_serviceIpAddress:1;
        unsigned int read_transactionMetrics:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)transactionMetricsType;
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
- (id)transactionMetricsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionMetricsCount;
- (void)addTransactionMetrics:(id)arg1;
- (void)clearTransactionMetrics;
@property(retain, nonatomic) NSMutableArray *transactionMetrics;
@property(nonatomic) _Bool hasRedirectCount;
@property(nonatomic) int redirectCount;
@property(nonatomic) _Bool hasRequestEnd;
@property(nonatomic) double requestEnd;
@property(nonatomic) _Bool hasRequestStart;
@property(nonatomic) double requestStart;
@property(nonatomic) _Bool hasResponseDataSize;
@property(nonatomic) int responseDataSize;
@property(nonatomic) _Bool hasRequestDataSize;
@property(nonatomic) int requestDataSize;
@property(retain, nonatomic) NSString *serviceIpAddress;
@property(readonly, nonatomic) _Bool hasServiceIpAddress;
@property(nonatomic) _Bool hasHttpResponseCode;
@property(nonatomic) int httpResponseCode;
- (id)initWithData:(id)arg1;
- (id)init;

@end

