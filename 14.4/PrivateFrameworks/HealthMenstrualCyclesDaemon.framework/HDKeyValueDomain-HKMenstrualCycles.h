//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDKeyValueDomain.h>

@interface HDKeyValueDomain (HKMenstrualCycles)
+ (id)hdmc_menstrualCyclesDefaultsDomainWithProfile:(id)arg1;
- (id)hdmc_lastLoggedInCycleTrackingDateWithError:(id *)arg1;
- (_Bool)hdmc_setLastLoggedInCycleTrackingDate:(id)arg1 error:(id *)arg2;
- (id)hdmc_onboardingFirstCompletedDateWithError:(id *)arg1;
- (id)hdmc_onboardingVersionCompletedWithError:(id *)arg1;
- (id)hdmc_isOnboardingCompletedWithError:(id *)arg1;
@end

