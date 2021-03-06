//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBPersonalizedTodaySectionSpecificConfig : PBCodable <NSCopying>
{
    unsigned long long _maxArticlesShown;
    NSMutableArray *_mandatoryArticles;
    NSMutableArray *_personalizedArticles;
    CDStruct_df5cdcef _has;
}

+ (Class)personalizedArticlesType;
+ (Class)mandatoryArticlesType;
@property(nonatomic) unsigned long long maxArticlesShown; // @synthesize maxArticlesShown=_maxArticlesShown;
@property(retain, nonatomic) NSMutableArray *personalizedArticles; // @synthesize personalizedArticles=_personalizedArticles;
@property(retain, nonatomic) NSMutableArray *mandatoryArticles; // @synthesize mandatoryArticles=_mandatoryArticles;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMaxArticlesShown;
- (id)personalizedArticlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)personalizedArticlesCount;
- (void)addPersonalizedArticles:(id)arg1;
- (void)clearPersonalizedArticles;
- (id)mandatoryArticlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)mandatoryArticlesCount;
- (void)addMandatoryArticles:(id)arg1;
- (void)clearMandatoryArticles;
- (void)dealloc;

@end

