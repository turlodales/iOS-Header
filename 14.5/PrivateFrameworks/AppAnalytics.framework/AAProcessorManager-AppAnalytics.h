//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppAnalytics/AAProcessorManager.h>

@interface AAProcessorManager (AppAnalytics)
- (void)removeEventProcessor:(id)arg1;
- (void)addEventProcessor:(id)arg1;
- (void)flushWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resumeBackgroundProcessingForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
@end

