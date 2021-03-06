//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Speech/NSCopying-Protocol.h>
#import <Speech/NSSecureCoding-Protocol.h>
#import <Speech/SRSampling-Protocol.h>

@class NSString, SFVoiceAnalytics;

@interface SFSpeechRecognitionMetadata : NSObject <SRSampling, NSCopying, NSSecureCoding>
{
    double _speakingRate;
    double _averagePauseDuration;
    double _speechStartTimestamp;
    double _speechDuration;
    SFVoiceAnalytics *_voiceAnalytics;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) SFVoiceAnalytics *voiceAnalytics; // @synthesize voiceAnalytics=_voiceAnalytics;
@property(readonly, nonatomic) double speechDuration; // @synthesize speechDuration=_speechDuration;
@property(readonly, nonatomic) double speechStartTimestamp; // @synthesize speechStartTimestamp=_speechStartTimestamp;
@property(readonly, nonatomic) double averagePauseDuration; // @synthesize averagePauseDuration=_averagePauseDuration;
@property(readonly, nonatomic) double speakingRate; // @synthesize speakingRate=_speakingRate;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)_initWithSpeechStartTimestamp:(double)arg1 speechDuration:(double)arg2 voiceAnalytics:(id)arg3 speakingRate:(double)arg4 averagePauseDuration:(double)arg5;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

