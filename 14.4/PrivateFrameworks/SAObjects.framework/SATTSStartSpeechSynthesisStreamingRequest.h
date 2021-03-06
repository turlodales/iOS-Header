//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAStartRequest.h>

@class NSDictionary, NSString;

@interface SATTSStartSpeechSynthesisStreamingRequest : SAStartRequest
{
}

+ (id)startSpeechSynthesisStreamingRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startSpeechSynthesisStreamingRequest;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *voiceName;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSDictionary *speakableContextInfo;
@property(nonatomic) _Bool requiresWordTimingInfo;
@property(copy, nonatomic) NSString *quality;
@property(copy, nonatomic) NSString *languageCode;
@property(copy, nonatomic) NSString *gender;
@property(copy, nonatomic) NSString *audioType;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

