//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSDate, NSDictionary, NSObject, NSTimeZone;
@protocol OS_dispatch_queue;

@protocol HMDLightProfileDataSource <NSObject>
@property(readonly) double naturalLightingEnabledRetryInterval;
@property(readonly) long long naturalLightingEnabledMaxRetryCount;
@property(readonly) double naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
@property(readonly) double naturalLightingCurveUpdateInterval;
@property(readonly) NSDictionary *naturalLightingCurveResourceFileContent;
@property(readonly, copy) NSTimeZone *localTimeZone;
@property(readonly, copy) NSDate *date;
- (void)dispatchAfterTimeInterval:(double)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 block:(void (^)(void))arg3;
- (unsigned long long)millisecondsElapsedSinceStartOfDayWithDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2;
@end

