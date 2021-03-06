//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RespiratoryHealth/NSObject-Protocol.h>

@class HKMobileCountryCodeManager, HKRPOxygenSaturationOnboardingCache, HKRPOxygenSaturationSettings, NRDevice, NSString;
@protocol HKFeatureAvailabilityProviding;

@protocol HKRPOxygenSaturationOnboardingManagerDataSource <NSObject>
@property(readonly, nonatomic) HKMobileCountryCodeManager *mobileCountryCodeManager;
@property(readonly, nonatomic) HKRPOxygenSaturationOnboardingCache *onboardingCache;
@property(readonly, nonatomic) HKRPOxygenSaturationSettings *oxygenSaturationSettings;
@property(readonly, nonatomic) id <HKFeatureAvailabilityProviding> featureAvailabilityProvider;
@property(readonly, nonatomic) NRDevice *device;
@property(readonly, nonatomic) _Bool skipHardwareCheck;
@property(readonly, nonatomic) NSString *countryCodeFromCurrentLocale;
@property(readonly, nonatomic) _Bool shouldAdvertise;
@property(readonly, nonatomic, getter=isAgeGated) _Bool ageGated;
@property(readonly, nonatomic, getter=isBloodOxygenSaturationEnabled) _Bool bloodOxygenSaturationEnabled;
@end

