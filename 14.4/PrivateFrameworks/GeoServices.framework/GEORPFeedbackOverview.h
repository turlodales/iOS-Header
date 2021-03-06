//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPTimestamp, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackOverview : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPTimestamp *_createdAt;
    GEORPTimestamp *_lastUpdatedAt;
    NSString *_stateDescription;
    NSString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _feedbackState;
    int _type;
    struct {
        unsigned int has_feedbackState:1;
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_createdAt:1;
        unsigned int read_lastUpdatedAt:1;
        unsigned int read_stateDescription:1;
        unsigned int read_title:1;
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
@property(retain, nonatomic) NSString *stateDescription;
@property(readonly, nonatomic) _Bool hasStateDescription;
- (int)StringAsFeedbackState:(id)arg1;
- (id)feedbackStateAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedbackState;
@property(nonatomic) int feedbackState;
@property(retain, nonatomic) GEORPTimestamp *lastUpdatedAt;
@property(readonly, nonatomic) _Bool hasLastUpdatedAt;
@property(retain, nonatomic) GEORPTimestamp *createdAt;
@property(readonly, nonatomic) _Bool hasCreatedAt;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool hasTitle;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
- (id)initWithData:(id)arg1;
- (id)init;

@end

