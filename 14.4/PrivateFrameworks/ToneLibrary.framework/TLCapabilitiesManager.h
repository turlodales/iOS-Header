//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TLCapabilitiesManager : NSObject
{
    _Bool _isRingtoneStoreAvailable;
    _Bool _isAlertToneStoreAvailable;
    NSDictionary *_deviceCodeNameSimplicationMapping;
}

+ (id)sharedCapabilitiesManager;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isHomePod) _Bool homePod;
@property(readonly, nonatomic) NSString *simplifiedDeviceCodeName;
@property(readonly, nonatomic) NSString *deviceCodeName;
@property(readonly, nonatomic) _Bool hasUserGeneratedVibrationsCapability;
@property(readonly, nonatomic) _Bool hasSynchronizedVibrationsCapability;
@property(readonly, nonatomic) _Bool hasVibratorCapability;
@property(readonly, nonatomic) _Bool wantsModernDefaultRingtone;
@property(readonly, nonatomic, getter=isAlertToneStoreAvailable) _Bool alertToneStoreAvailable;
@property(readonly, nonatomic, getter=isRingtoneStoreAvailable) _Bool ringtoneStoreAvailable;
- (void)_handleStoreAvailableItemKindsChangedNotification:(id)arg1;
- (void)_updateRingtoneStoreAvailabilityWithAvailableKinds:(id)arg1 error:(id)arg2;
- (void)_checkRingtoneStoreAvailability;
- (_Bool)_hasTelephonyCapability;
- (void)dealloc;
- (id)init;

@end

