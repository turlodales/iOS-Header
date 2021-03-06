//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IdleTimerServices/NSObject-Protocol.h>

@class ITIdleTimerConfiguration, NSString;

@protocol ITIdleTimerServerInterface <NSObject>
- (void)removeIdleTimerServiceConfiguration:(ITIdleTimerConfiguration *)arg1 forReason:(NSString *)arg2 error:(id *)arg3;
- (void)addIdleTimerServiceConfiguration:(ITIdleTimerConfiguration *)arg1 forReason:(NSString *)arg2 error:(id *)arg3;
- (_Bool)isIdleTimerServiceAvailableWithError:(id *)arg1;
@end

