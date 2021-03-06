//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitRoutingIncidentMessage : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _transitIncidentIndexs;
    NSString *_routingMessage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _routingIncidentMessageIndex;
    struct {
        unsigned int has_routingIncidentMessageIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_transitIncidentIndexs:1;
        unsigned int read_routingMessage:1;
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
- (void)setTransitIncidentIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)transitIncidentIndexAtIndex:(unsigned long long)arg1;
- (void)addTransitIncidentIndex:(unsigned int)arg1;
- (void)clearTransitIncidentIndexs;
@property(readonly, nonatomic) unsigned int *transitIncidentIndexs;
@property(readonly, nonatomic) unsigned long long transitIncidentIndexsCount;
@property(retain, nonatomic) NSString *routingMessage;
@property(readonly, nonatomic) _Bool hasRoutingMessage;
@property(nonatomic) _Bool hasRoutingIncidentMessageIndex;
@property(nonatomic) unsigned int routingIncidentMessageIndex;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

