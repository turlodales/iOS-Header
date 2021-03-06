//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBVoiceCommandDeviceInformation-Protocol.h>

@class NSString;

@interface _INPBVoiceCommandDeviceInformation : PBCodable <_INPBVoiceCommandDeviceInformation, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int deviceIdiom:1;
        unsigned int isHomePodInUltimateMode:1;
    } _has;
    _Bool _isHomePodInUltimateMode;
    int _deviceIdiom;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isHomePodInUltimateMode; // @synthesize isHomePodInUltimateMode=_isHomePodInUltimateMode;
@property(nonatomic) int deviceIdiom; // @synthesize deviceIdiom=_deviceIdiom;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasIsHomePodInUltimateMode;
- (int)StringAsDeviceIdiom:(id)arg1;
- (id)deviceIdiomAsString:(int)arg1;
@property(nonatomic) _Bool hasDeviceIdiom;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

