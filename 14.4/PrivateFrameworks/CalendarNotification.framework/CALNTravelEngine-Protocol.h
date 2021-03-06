//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class NSDate, NSString;
@protocol CALNTravelEngineDelegate;

@protocol CALNTravelEngine <NSObject>
@property(nonatomic) __weak id <CALNTravelEngineDelegate> delegate;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(NSString *)arg1;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(NSString *)arg1;
- (void)ceaseMonitoringForEventWithExternalURL:(NSString *)arg1;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(NSString *)arg1;
- (void)requestHypothesisRefreshAtDate:(NSDate *)arg1 forEventWithExternalURL:(NSString *)arg2;
@end

