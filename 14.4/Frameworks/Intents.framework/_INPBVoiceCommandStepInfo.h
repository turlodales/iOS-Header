//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBVoiceCommandStepInfo-Protocol.h>

@class NSString;

@interface _INPBVoiceCommandStepInfo : PBCodable <_INPBVoiceCommandStepInfo, NSSecureCoding, NSCopying>
{
    CDStruct_74e42c4c _has;
    int _category;
    NSString *_applicationIdentifier;
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasName;
- (int)StringAsCategory:(id)arg1;
- (id)categoryAsString:(int)arg1;
@property(nonatomic) _Bool hasCategory;
@property(readonly, nonatomic) _Bool hasApplicationIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

