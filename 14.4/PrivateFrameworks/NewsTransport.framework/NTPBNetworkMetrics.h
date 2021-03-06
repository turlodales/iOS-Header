//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBNetworkMetrics : PBCodable <NSCopying>
{
    NSMutableArray *_failures;
    NSMutableArray *_successes;
}

+ (Class)failuresType;
+ (Class)successesType;
@property(retain, nonatomic) NSMutableArray *failures; // @synthesize failures=_failures;
@property(retain, nonatomic) NSMutableArray *successes; // @synthesize successes=_successes;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)failuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)failuresCount;
- (void)addFailures:(id)arg1;
- (void)clearFailures;
- (id)successesAtIndex:(unsigned long long)arg1;
- (unsigned long long)successesCount;
- (void)addSuccesses:(id)arg1;
- (void)clearSuccesses;
- (void)dealloc;

@end

