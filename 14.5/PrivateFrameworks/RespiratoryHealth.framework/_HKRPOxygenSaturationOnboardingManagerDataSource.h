//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RespiratoryHealth/HKRPOxygenSaturationOnboardingManagerDataSource-Protocol.h>

@class HKFeatureAvailabilityStore, HKMobileCountryCodeManager, HKRPOxygenSaturationAvailability, HKRPOxygenSaturationOnboardingCache, HKRPOxygenSaturationSettings, NRDevice, NSString;
@protocol HKFeatureAvailabilityProviding;

__attribute__((visibility("hidden")))
@interface _HKRPOxygenSaturationOnboardingManagerDataSource : NSObject <HKRPOxygenSaturationOnboardingManagerDataSource>
{
    struct os_unfair_lock_s _lock;
    HKFeatureAvailabilityStore *_featureAvailabilityProvider;
    HKRPOxygenSaturationAvailability *_oxygenSaturationAvailability;
    HKRPOxygenSaturationSettings *_oxygenSaturationSettings;
    HKRPOxygenSaturationOnboardingCache *_onboardingCache;
    HKMobileCountryCodeManager *_mobileCountryCodeManager;
}

- (void).cxx_destruct;
- (id)_lazyPropertyWithLockedBlock:(CDUnknownBlockType)arg1;
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
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

