//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBHomeAttribute-Protocol.h>

@class NSString, _INPBHomeAttributeValue;

@interface _INPBHomeAttribute : PBCodable <_INPBHomeAttribute, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int attributeType:1;
    } _has;
    int _attributeType;
    _INPBHomeAttributeValue *_attributeValue;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) _INPBHomeAttributeValue *attributeValue; // @synthesize attributeValue=_attributeValue;
@property(nonatomic) int attributeType; // @synthesize attributeType=_attributeType;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasAttributeValue;
- (int)StringAsAttributeType:(id)arg1;
- (id)attributeTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasAttributeType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

