//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HeartHealth/NSObject-Protocol.h>

@class HKHRCardioFitnessNotificationStatus, HKHRCardioFitnessOnboardingStatus;

@protocol HKHRCardioFitnessFeatureStatusManagerClient <NSObject>
- (void)client_didUpdateNotificationStatus:(HKHRCardioFitnessNotificationStatus *)arg1;
- (void)client_didUpdateOnboardingStatus:(HKHRCardioFitnessOnboardingStatus *)arg1;
@end

