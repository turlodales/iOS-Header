//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpeakerRecognition/NSObject-Protocol.h>

@class NSData, NSDictionary, SSRSpeakerRecognitionContext;
@protocol SSRSpeakerRecognizerDelegate;

@protocol SSRSpeakerRecognizer <NSObject>
@property(readonly, nonatomic) NSDictionary *lastScoreCard;
- (void)resetWithContext:(SSRSpeakerRecognitionContext *)arg1;
- (void)endAudio;
- (void)processAudioData:(NSData *)arg1 numSamples:(unsigned long long)arg2;
- (id)initWithContext:(SSRSpeakerRecognitionContext *)arg1 delegate:(id <SSRSpeakerRecognizerDelegate>)arg2;
@end

