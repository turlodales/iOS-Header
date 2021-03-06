//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFDictionaryConvertible-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFAudioSessionCoordinationSystemInfo, AFPeerInfo, NSString;

@interface AFAudioSessionCoordinationDeviceInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
    AFPeerInfo *_peerInfo;
    AFAudioSessionCoordinationSystemInfo *_systemInfo;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AFAudioSessionCoordinationSystemInfo *systemInfo; // @synthesize systemInfo=_systemInfo;
@property(readonly, copy, nonatomic) AFPeerInfo *peerInfo; // @synthesize peerInfo=_peerInfo;
- (id)buildDictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithPeerInfo:(id)arg1 systemInfo:(id)arg2;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

