//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface AWDNWAccumulator : PBCodable <NSCopying>
{
    NSMutableArray *_durations;
    NSString *_name;
}

+ (Class)durationsType;
@property(retain, nonatomic) NSMutableArray *durations; // @synthesize durations=_durations;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)durationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)durationsCount;
- (void)addDurations:(id)arg1;
- (void)clearDurations;
@property(readonly, nonatomic) _Bool hasName;
- (void)dealloc;

@end

