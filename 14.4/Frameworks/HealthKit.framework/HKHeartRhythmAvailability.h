//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKActiveWatchRemoteFeatureAvailabilityDataSource, HKHealthStore, HKKeyValueDomain, HKMobileCountryCodeManager, HKObserverSet, HKWatchAppAvailability, NSDate, NSMutableSet, NSNumber, NSUserDefaults;

@interface HKHeartRhythmAvailability : NSObject
{
    struct os_unfair_lock_s _cacheLock;
    struct os_unfair_lock_s _onboardingKeysReadLock;
    NSNumber *_isAtrialFibrillationDetectionDisabledCache;
    NSNumber *_isElectrocardiogramDisabledCache;
    int _onboardingStateDidChangeNotificationToken;
    int _featureAvailabilityConditionsDidUpdateNotificationToken;
    int _userCharacteristicsDidChangeNotificationToken;
    HKHealthStore *_healthStore;
    HKKeyValueDomain *_keyValueDomain;
    NSUserDefaults *_heartRhythmUserDefaults;
    HKObserverSet *_heartRhythmAvailabilityObservers;
    HKActiveWatchRemoteFeatureAvailabilityDataSource *_availabilityDataSource;
    NSMutableSet *_onboardingKeysReadSet;
    HKMobileCountryCodeManager *_mobileCountryCodeManager;
    HKWatchAppAvailability *_ecgAppAvailability;
}

+ (long long)currentAtrialFibrillationDetectionOnboardingVersion;
+ (_Bool)isAtrialFibrillationDetectionDisabledForOnboardingCountryCode:(id)arg1;
+ (_Bool)_isAtrialFibrillationDetectionDisabledWithDataSource:(id)arg1;
+ (_Bool)_isAtrialFibrillationDetectionSupportedOnPhone:(id)arg1;
+ (_Bool)isAtrialFibrillationDetectionSupportedOnPairedPhone;
+ (_Bool)atrialFibrillationDetectionSupportedForDevice:(id)arg1;
+ (unsigned long long)atrialFibrillationDetectionSupportedState;
+ (unsigned long long)_atrialFibrillationDetectionSupportedStateForDeviceRegion:(id)arg1;
+ (unsigned long long)atrialFibrillationDetectionSupportedStateForActiveWatch;
+ (unsigned long long)atrialFibrillationDetectionSupportedStateForWatch:(id)arg1;
+ (_Bool)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnAllWatches;
+ (_Bool)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnActiveWatch;
+ (_Bool)isAtrialFibrillationSupportedForOnboardingCountryCodeAndWatchOSVersion:(id)arg1;
+ (_Bool)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnAnyWatch;
+ (_Bool)isAtrialFibrillationDetectionSupportedOrNeedsGeolocation;
+ (_Bool)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnWatch:(id)arg1;
+ (_Bool)isAtrialFibrillationDetectionSettingEnabled;
+ (id)_history:(id)arg1 addCurrentOnboardingVersionCompletedIfApplicable:(long long)arg2 countryCode:(id)arg3;
+ (id)_onboardingHistoryWithVersionCompletedKey:(id)arg1 keyValueDomain:(id)arg2;
+ (id)electrocardiogramOnboardingHistoryMaxKnownWithKeyValueDomain:(id)arg1;
+ (long long)currentElectrocardiogramOnboardingVersion;
+ (_Bool)_isElectrocardiogramDisabledWithDataSource:(id)arg1;
+ (void)installElectrocardiogramAppOnActiveWatch:(CDUnknownBlockType)arg1;
+ (id)_availabilityPlistURL;
+ (id)_ECG2SupportedCountriesOnDevice:(id)arg1;
+ (id)_ECG2SupportedCountriesOnDevice;
+ (_Bool)_isECG2SupportedForCountryCode:(id)arg1 andPhoneDevice:(id)arg2;
+ (_Bool)_isECG2SupportedForCountryCode:(id)arg1 andWatchDevice:(id)arg2;
+ (_Bool)_isECG1SupportedOnCompanionDevice:(id)arg1 geolocatedCountryCode:(id)arg2;
+ (_Bool)_isElectrocardiogramSupportedOnCompanionDevice:(id)arg1 geolocatedCountryCode:(id)arg2;
+ (_Bool)_isElectrocardiogramSupportedOnPhone:(id)arg1 geolocatedCountryCode:(id)arg2;
+ (_Bool)_isElectrocardiogramSupportedOnPhone:(id)arg1;
+ (_Bool)electrocardiogramSupportedForDevice:(id)arg1;
+ (_Bool)isElectrocardiogramSupportedOnPairedPhoneWithGeolocatedCountryCode:(id)arg1;
+ (_Bool)isElectrocardiogramSupportedOnPairedPhone;
+ (unsigned long long)electrocardiogramSupportedState;
+ (unsigned long long)_electrocardiogramSupportedStateForDeviceRegion:(id)arg1;
+ (_Bool)isElectrocardiogramAppDeletableForActiveWatch;
+ (unsigned long long)electrocardiogramSupportedStateForActiveWatch;
+ (unsigned long long)electrocardiogramSupportedStateForWatch:(id)arg1;
+ (_Bool)isElectrocardiogramSupportedOnAllWatches;
+ (_Bool)isElectrocardiogramSupportedOnActiveWatch;
+ (_Bool)isElectrocardiogramSupportedOnAnyWatch;
+ (_Bool)isElectrocardiogramSupportedOnWatch:(id)arg1;
+ (_Bool)isElectrocardiogramAppInstallableForLocale:(id)arg1;
+ (_Bool)shouldInstallWatchApp;
+ (id)_onboardingCountryCodeKeyFromCompletedKey:(id)arg1;
+ (id)_onboardingHistoryKeyFromCompletedKey:(id)arg1;
+ (id)featureAvailabilityUserDefaults;
+ (id)currentDeviceRegionCode;
+ (_Bool)isCompanionRegionCheckEnabledOnPairedPhone;
+ (_Bool)isCompanionRegionCheckEnabledForDevice:(id)arg1;
+ (_Bool)isCompanionRegionCheckEnabledForActiveWatch;
+ (Class)deviceRegionFeatureSupportedStateProviderForCompanionDevice:(id)arg1;
+ (Class)deviceRegionFeatureSupportedStateProviderForCurrentWatchOSDevice;
+ (id)pairedDevices;
+ (id)activePairedDevice;
+ (_Bool)isHeartRateEnabledInPrivacy;
- (void).cxx_destruct;
@property(retain, nonatomic) HKWatchAppAvailability *ecgAppAvailability; // @synthesize ecgAppAvailability=_ecgAppAvailability;
@property(retain, nonatomic) HKMobileCountryCodeManager *mobileCountryCodeManager; // @synthesize mobileCountryCodeManager=_mobileCountryCodeManager;
@property(nonatomic) int userCharacteristicsDidChangeNotificationToken; // @synthesize userCharacteristicsDidChangeNotificationToken=_userCharacteristicsDidChangeNotificationToken;
@property(nonatomic) int featureAvailabilityConditionsDidUpdateNotificationToken; // @synthesize featureAvailabilityConditionsDidUpdateNotificationToken=_featureAvailabilityConditionsDidUpdateNotificationToken;
@property(nonatomic) int onboardingStateDidChangeNotificationToken; // @synthesize onboardingStateDidChangeNotificationToken=_onboardingStateDidChangeNotificationToken;
@property(retain, nonatomic) NSMutableSet *onboardingKeysReadSet; // @synthesize onboardingKeysReadSet=_onboardingKeysReadSet;
@property(retain, nonatomic) HKActiveWatchRemoteFeatureAvailabilityDataSource *availabilityDataSource; // @synthesize availabilityDataSource=_availabilityDataSource;
@property(retain, nonatomic) HKObserverSet *heartRhythmAvailabilityObservers; // @synthesize heartRhythmAvailabilityObservers=_heartRhythmAvailabilityObservers;
@property(retain, nonatomic) NSUserDefaults *heartRhythmUserDefaults; // @synthesize heartRhythmUserDefaults=_heartRhythmUserDefaults;
@property(retain, nonatomic) HKKeyValueDomain *keyValueDomain; // @synthesize keyValueDomain=_keyValueDomain;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void)resetAtrialFibrillationDetectionOnboarding;
@property(readonly, nonatomic, getter=isAtrialFibrillationDetectionDisabled) _Bool atrialFibrillationDetectionDisabled;
- (void)_resetIsAtrialFibrillationDetectionDisabledCacheWithLock:(_Bool)arg1;
- (_Bool)shouldAdvertiseAtrialFibrillationDetectionForWatch:(id)arg1;
- (_Bool)shouldAdvertiseAtrialFibrillationDetectionForActiveWatch;
- (void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocationForWatch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocationForActiveWatch:(CDUnknownBlockType)arg1;
- (void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocation:(CDUnknownBlockType)arg1;
- (_Bool)isAtrialFibrillationDetectionStateSupportedOnAnyWatchForOnboardingCountry:(id)arg1;
- (_Bool)isAtrialFibrillationDetectionStateSupportedForOnboardingCountryCode:(id)arg1 onWatch:(id)arg2;
- (_Bool)isAtrialFibrillationDetectionStateSupportedOnActiveWatchForOnboardingCountryCode:(id)arg1;
- (void)_setAtrialFibrillationDetectionOnboardingCompletedForVersion:(long long)arg1 inCountryCode:(id)arg2;
- (void)setAtrialFibrillationDetectionOnboardingCompletedForCountryCode:(id)arg1;
- (id)atrialFibrillationDetectionOnboardingCountryCode;
@property(readonly, nonatomic, getter=isAtrialFibrillationDetectionOnboardingCompleted) _Bool atrialFibrillationDetectionOnboardingCompleted;
- (id)_electrocardiogramOnboardingHistoryKnown;
- (id)_electrocardiogramOnboardingHistory;
- (id)electrocardiogramOnboardingHistoryType:(long long)arg1;
- (_Bool)isElectrocardiogramOnboardingCompletedForAnyOnboardingVersion;
@property(readonly, nonatomic) NSDate *electrocardiogramFirstOnboardingCompletedDate;
@property(readonly, nonatomic, getter=isElectrocardiogramRecordingDisabled) _Bool electrocardiogramRecordingDisabled;
- (void)_resetIsElectrocardiogramDisabledCacheWithLock:(_Bool)arg1;
- (void)electrocardiogramAppInstallStateOnActiveWatch:(CDUnknownBlockType)arg1;
- (_Bool)_isECG1SupportedForCountryCode:(id)arg1 watchOSVersion:(unsigned int)arg2 isWatchOSSeedBuild:(_Bool)arg3;
- (void)isElectrocardiogramOnboardingAvailableInCurrentLocationForWatch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isElectrocardiogramOnboardingAvailableInCurrentLocationForActiveWatch:(CDUnknownBlockType)arg1;
- (void)isElectrocardiogramOnboardingAvailableInCurrentLocation:(CDUnknownBlockType)arg1;
- (_Bool)_shouldAdvertiseECG2UpgradeWithDevice:(id)arg1;
- (_Bool)_shouldAdvertiseElectrocardiogramUpgradeForDevice:(id)arg1;
- (_Bool)shouldAdvertiseElectrocardiogramUpgradeForActivePhone;
- (_Bool)shouldAdvertiseElectrocardiogramUpgradeForActiveWatch;
- (_Bool)_shouldAdvertiseWithAdvertiseECGVersions:(id)arg1;
- (id)_ecg2AvailabilityWithPhoneDevice:(id)arg1;
- (id)_ecg2AvailabilityWithWatchDevice:(id)arg1;
- (_Bool)_shouldAdvertiseECG2DirectOnboardingWithWatchDevice:(id)arg1;
- (_Bool)_shouldAdvertiseECGDirectOnboardingWithDevice:(id)arg1;
- (_Bool)shouldAdvertiseElectrocardiogramForWatch:(id)arg1;
- (_Bool)shouldAdvertiseElectrocardiogramForActiveWatch;
- (_Bool)isElectrocardiogramAppInstallAllowedForWatch:(id)arg1;
- (void)setAllowInstallingElectrocardiogramWatchApp:(_Bool)arg1;
- (_Bool)_activePairedDevicesSupportECGAlgorithmVersionTwo:(id)arg1;
- (_Bool)activePairedDevicesSupportElectrocardiogramAlgorithmVersion:(long long)arg1;
- (void)resetElectrocardiogramOnboarding;
@property(nonatomic, getter=isElectrocardiogramFirstRecordingCompleted) _Bool electrocardiogramFirstRecordingCompleted;
- (void)_setElectrocardiogramOnboardingCompletedForVersion:(long long)arg1 inCountryCode:(id)arg2;
- (void)unitTest_setElectrocardiogramOnboardingCompletedForVersion:(long long)arg1 countryCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setElectrocardiogramOnboardingCompletedVersion:(long long)arg1 countryCode:(id)arg2;
- (void)setElectrocardiogramFirstOnboardingCompletedDate:(id)arg1;
- (void)setElectrocardiogramOnboardingCompleted;
- (id)_electrocardiogramFirstOnboardingCompletedDate;
- (id)electrocardiogramOnboardingCountryCode;
- (long long)electrocardiogramOnboardingCompletedVersionNoCache;
- (void)updateElectrocardiogramWatchAppInstallIsAllowed;
- (void)updateOnboardingCompletionVersionCache;
- (_Bool)isElectrocardiogramOnboardingCompletedNoCache;
@property(readonly, nonatomic, getter=isElectrocardiogramOnboardingCompleted) _Bool electrocardiogramOnboardingCompleted;
- (_Bool)isElectrocardiogramAvailableForOnboardingCountryCode:(id)arg1;
- (_Bool)isElectrocardiogramAvailableOnWatch:(id)arg1 countryCode:(id)arg2;
- (void)_triggerFeatureAvailabilityUpdateOnPhoneAndWatchWithDelay:(long long)arg1;
- (void)_removeFirstOnboardingCompletedDatesForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setFirstOnboardingCompletedDate:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setOnboardingVersionCompleted:(long long)arg1 forKey:(id)arg2 additionalValues:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_makeOnboardingHistoryWithVersionCompleted:(long long)arg1 versionCompletedKey:(id)arg2 additionalValues:(id)arg3 countryCodeKey:(id)arg4;
- (void)_updateOnboardingCompletionForKey:(id)arg1 andVersion:(long long)arg2;
- (long long)_getOnboardingVersionForKey:(id)arg1;
- (_Bool)_isOnboardingCompletedForKey:(id)arg1 version:(long long)arg2 useCache:(_Bool)arg3;
- (_Bool)_isOnboardingCompletedForKey:(id)arg1 version:(long long)arg2;
- (void)_localeDidChange;
- (void)_pairedOrActiveDevicesDidChange:(id)arg1;
- (void)_featureAvailabilityConditionsDidUpdate;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (_Bool)_meetsMinimumAgeRequirementWithMinimumRequiredAge:(long long)arg1 currentDate:(id)arg2;
- (_Bool)_meetsMinimumAgeRequirementForAtrialFibrillationDetectionWithCurrentDate:(id)arg1;
- (_Bool)_meetsMinimumAgeRequirementForElectrocardiogramWithCurrentDate:(id)arg1;
- (_Bool)isHeartAgeGatingEnabledOnWatch:(id)arg1 currentDate:(id)arg2;
- (_Bool)isHeartAgeGatingEnabledOnActiveWatchWithCurrentDate:(id)arg1;
- (void)notifyHeartRhythmAvailabilityDidUpdate;
- (void)removeHeartRhythmAvailabilityObserver:(id)arg1;
- (void)addHeartRhythmAvailabilityObserver:(id)arg1;
- (void)dealloc;
- (id)initWithHealthStore:(id)arg1;

@end

