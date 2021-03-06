//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentExecutionRequest-Protocol.h>

@class NSString, _INPBAppIdentifier;

@interface _INPBIntentExecutionRequest : PBCodable <_INPBIntentExecutionRequest, NSSecureCoding, NSCopying>
{
    CDStruct_a8e956ad _has;
    int _encodingFormat;
    _INPBAppIdentifier *_appIdentifier;
    NSString *_encodedIntent;
    NSString *_encodedIntentDefinition;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) int encodingFormat; // @synthesize encodingFormat=_encodingFormat;
@property(copy, nonatomic) NSString *encodedIntentDefinition; // @synthesize encodedIntentDefinition=_encodedIntentDefinition;
@property(copy, nonatomic) NSString *encodedIntent; // @synthesize encodedIntent=_encodedIntent;
@property(retain, nonatomic) _INPBAppIdentifier *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsEncodingFormat:(id)arg1;
- (id)encodingFormatAsString:(int)arg1;
@property(nonatomic) _Bool hasEncodingFormat;
@property(readonly, nonatomic) _Bool hasEncodedIntentDefinition;
@property(readonly, nonatomic) _Bool hasEncodedIntent;
@property(readonly, nonatomic) _Bool hasAppIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

