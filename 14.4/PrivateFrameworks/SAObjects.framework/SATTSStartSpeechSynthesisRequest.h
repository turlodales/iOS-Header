//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSDictionary, NSString;

@interface SATTSStartSpeechSynthesisRequest : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)startSpeechSynthesisRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startSpeechSynthesisRequest;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *voiceName;
@property(copy, nonatomic) NSString *text;
@property(nonatomic) _Bool streaming;
@property(copy, nonatomic) NSDictionary *speakableContextInfo;
@property(copy, nonatomic) NSString *quality;
@property(copy, nonatomic) NSString *languageCode;
@property(copy, nonatomic) NSString *gender;
@property(nonatomic) _Bool enableAudioInfo;
@property(copy, nonatomic) NSString *audioType;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

