//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIMotionEffectEventProvider.h>

@class CMMotionManager, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectCoreMotionEventProvider : _UIMotionEffectEventProvider
{
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionEventQueue;
}

- (void).cxx_destruct;
- (double)slowUpdateIntervalForLogs;
- (double)fastUpdateIntervalForLogs;
- (_Bool)shouldLogEvents;
- (id)currentEvent;
- (void)stopGeneratingEvents;
- (void)startGeneratingEvents;
- (void)setSlowUpdatesEnabled:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

