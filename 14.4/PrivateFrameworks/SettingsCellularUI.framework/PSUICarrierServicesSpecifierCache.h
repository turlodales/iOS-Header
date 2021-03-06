//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>
#import <SettingsCellularUI/CoreTelephonyClientSubscriberDelegate-Protocol.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PSUICarrierServicesSpecifierCache : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate>
{
    CoreTelephonyClient *_client;
    NSMutableDictionary *_specifiersDict;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *specifiersDict; // @synthesize specifiersDict=_specifiersDict;
@property(retain, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)carrierBundleChange:(id)arg1;
- (void)openURLWithSpecifier:(id)arg1;
- (void)_allowClicks;
- (void)dialCarrierServiceNumber:(id)arg1;
- (id)readPreference:(id)arg1;
- (id)specifiers:(id)arg1;
- (void)fetchSpecifiers;
- (id)newMMSInfoSpecifierWithTarget:(id)arg1 context:(id)arg2;
- (id)newMyAccountSpecifierWithTarget:(id)arg1 context:(id)arg2;
- (void)willEnterForeground;
- (void)_clearCache;
- (void)dealloc;
- (id)init;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

