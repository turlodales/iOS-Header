//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader;

@interface GEOLPRLPRConvertRule : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_fillRules;
    NSMutableArray *_mapRules;
    NSMutableArray *_pickupRules;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _validEndTime;
    unsigned int _validStartTime;
    struct {
        unsigned int has_validEndTime:1;
        unsigned int has_validStartTime:1;
        unsigned int read_fillRules:1;
        unsigned int read_mapRules:1;
        unsigned int read_pickupRules:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)fillRuleType;
+ (Class)mapRuleType;
+ (Class)pickupRuleType;
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
@property(nonatomic) _Bool hasValidEndTime;
@property(nonatomic) unsigned int validEndTime;
@property(nonatomic) _Bool hasValidStartTime;
@property(nonatomic) unsigned int validStartTime;
- (id)fillRuleAtIndex:(unsigned long long)arg1;
- (unsigned long long)fillRulesCount;
- (void)addFillRule:(id)arg1;
- (void)clearFillRules;
@property(retain, nonatomic) NSMutableArray *fillRules;
- (id)mapRuleAtIndex:(unsigned long long)arg1;
- (unsigned long long)mapRulesCount;
- (void)addMapRule:(id)arg1;
- (void)clearMapRules;
@property(retain, nonatomic) NSMutableArray *mapRules;
- (id)pickupRuleAtIndex:(unsigned long long)arg1;
- (unsigned long long)pickupRulesCount;
- (void)addPickupRule:(id)arg1;
- (void)clearPickupRules;
@property(retain, nonatomic) NSMutableArray *pickupRules;
- (id)initWithData:(id)arg1;
- (id)init;

@end

