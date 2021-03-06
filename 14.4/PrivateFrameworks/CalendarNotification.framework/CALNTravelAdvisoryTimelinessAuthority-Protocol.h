//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class EKTravelEngineHypothesis, NSDate;

@protocol CALNTravelAdvisoryTimelinessAuthority <NSObject>
- (NSDate *)startOfRunningLatePeriodForHypothesis:(EKTravelEngineHypothesis *)arg1;
- (NSDate *)startOfLeaveNowPeriodForHypothesis:(EKTravelEngineHypothesis *)arg1;
- (unsigned long long)periodForHypothesis:(EKTravelEngineHypothesis *)arg1;
@end

