//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCustomObject-Protocol.h>

@class NSArray, NSString, _INPBImageValue;

@interface _INPBCustomObject : PBCodable <_INPBCustomObject, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_alternatives;
    _INPBImageValue *_displayImage;
    NSString *_displayString;
    NSString *_identifier;
    NSString *_pronunciationHint;
    NSString *_subtitleString;
}

+ (_Bool)supportsSecureCoding;
+ (Class)alternativeType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subtitleString; // @synthesize subtitleString=_subtitleString;
@property(copy, nonatomic) NSString *pronunciationHint; // @synthesize pronunciationHint=_pronunciationHint;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(retain, nonatomic) _INPBImageValue *displayImage; // @synthesize displayImage=_displayImage;
@property(copy, nonatomic) NSArray *alternatives; // @synthesize alternatives=_alternatives;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasSubtitleString;
@property(readonly, nonatomic) _Bool hasPronunciationHint;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasDisplayString;
@property(readonly, nonatomic) _Bool hasDisplayImage;
- (id)alternativeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long alternativesCount;
- (void)addAlternative:(id)arg1;
- (void)clearAlternatives;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

