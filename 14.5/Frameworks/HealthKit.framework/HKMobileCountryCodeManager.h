//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient, RadiosPreferences;

@interface HKMobileCountryCodeManager : NSObject
{
    CoreTelephonyClient *_coreTelephonyClient;
    struct __CTServerConnection *_coreTelephonyServerConnection;
    RadiosPreferences *_radiosPreferences;
}

- (void).cxx_destruct;
- (id)_copyISOForMCC:(id)arg1 error:(id *)arg2;
- (id)_overriddenISOMobileCountryCode;
- (id)_overriddenMobileCountryCode;
- (id)_wrapperWithMobileCountryCode:(id)arg1 error:(id *)arg2;
- (id)_resolveMobileCountryCodeOverridesWithError:(id *)arg1;
- (_Bool)_isLocationAvailableWithError:(id *)arg1;
- (id)mobileCountryCodeFromCellularWithError:(id *)arg1;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(CDUnknownBlockType)arg1;
- (void)currentMobileCountryCodeFromCellularWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

