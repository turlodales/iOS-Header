//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepDaemon/NSObject-Protocol.h>

@class NSDate;
@protocol HDSPWakeDetector;

@protocol HDSPWakeDetectorDelegate <NSObject>
- (void)wakeDetector:(id <HDSPWakeDetector>)arg1 didDetectWakeUpEventOnDate:(NSDate *)arg2;
@end

