//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardTypingSpeedLogger : NSObject
{
    long long _typingDelaySamples[7];
    long long _typingDelaySampleCount;
}

- (void)logToAggregate;
- (void)recordTypingDelay:(double)arg1;
- (id)init;

@end

