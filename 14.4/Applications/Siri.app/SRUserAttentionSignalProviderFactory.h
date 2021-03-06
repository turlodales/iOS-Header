//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SRUserAttentionSignalProviderFactory : NSObject
{
    double _samplingInterval;
    double _attentionLossTimeout;
    unsigned long long _supportedAttentionAwarenessEvents;
}

+ (id)_attentionAwarenessConfigurationWithIdentifier:(id)arg1 eventMask:(unsigned long long)arg2 samplingInterval:(double)arg3 attentionLossTimeout:(double)arg4;
- (unsigned long long)_touchAttentionAwarenessEventMask;
- (unsigned long long)_faceAttentionAwarenessEventMask;
- (id)wakeGestureManager;
- (id)touchAttentionAwarenessClient;
- (id)faceAttentionAwarenessClient;
- (id)initWithSamplingInterval:(double)arg1 attentionLossTimeout:(double)arg2 supportedAttentionAwarenessEvents:(unsigned long long)arg3;

@end

