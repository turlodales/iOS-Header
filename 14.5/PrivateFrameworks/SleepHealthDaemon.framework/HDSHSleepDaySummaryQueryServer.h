//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class HKSHSleepDaySummaryQueryConfiguration;

@interface HDSHSleepDaySummaryQueryServer : HDQueryServer
{
    HKSHSleepDaySummaryQueryConfiguration *_configuration;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;
- (void).cxx_destruct;
- (_Bool)_queue_surfaceDaySummariesWithError:(id *)arg1;
- (void)_queue_start;
- (id)objectTypes;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end

