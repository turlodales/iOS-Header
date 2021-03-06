//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBControlHomeIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBControlHomeIntentResponse : PBCodable <_INPBControlHomeIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_entityResponses;
}

+ (_Bool)supportsSecureCoding;
+ (Class)entityResponsesType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *entityResponses; // @synthesize entityResponses=_entityResponses;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)entityResponsesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long entityResponsesCount;
- (void)addEntityResponses:(id)arg1;
- (void)clearEntityResponses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

