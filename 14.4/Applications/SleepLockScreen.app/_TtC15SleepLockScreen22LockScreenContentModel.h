//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BCBatteryDeviceObserving-Protocol.h"
#import "HKSPSensitiveUIObserver-Protocol.h"
#import "HKSPSleepStorePrivateObserver-Protocol.h"

@class MISSING_TYPE;

@interface _TtC15SleepLockScreen22LockScreenContentModel : NSObject <HKSPSleepStorePrivateObserver, HKSPSensitiveUIObserver, BCBatteryDeviceObserving>
{
    MISSING_TYPE *debugIdentifier;
    MISSING_TYPE *stateDidChange;
    MISSING_TYPE *_state;
    MISSING_TYPE *sleepStore;
    MISSING_TYPE *alarmProvider;
    MISSING_TYPE *alarmSubscriber;
    MISSING_TYPE *shortcutsStore;
    MISSING_TYPE *shortcutsSubscriber;
    MISSING_TYPE *$__lazy_storage_$_gregorianCalendar;
    MISSING_TYPE *weatherModel;
    MISSING_TYPE *weatherForecastSubcriber;
    MISSING_TYPE *contentAppearanceProvider;
    MISSING_TYPE *contentAppearanceSubscriber;
    MISSING_TYPE *visible;
    MISSING_TYPE *_detailTextTypes;
    MISSING_TYPE *_detailTextTypeIndex;
    MISSING_TYPE *hasShownDoNotDisturb;
    MISSING_TYPE *detailTextTimer;
    MISSING_TYPE *_watchBattery;
    MISSING_TYPE *$__lazy_storage_$_batteryDeviceController;
    MISSING_TYPE *isObservingBattery;
    MISSING_TYPE *$__lazy_storage_$_percentFormatter;
    MISSING_TYPE *lockScreenState;
    MISSING_TYPE *sleepScheduleModel;
    MISSING_TYPE *overrideAllowShortcuts;
    MISSING_TYPE *overrideWatchBatteryLevel;
    MISSING_TYPE *demoState;
}

- (void).cxx_destruct;
- (id)init;
- (void)sensitiveUIStateChanged;
- (void)sleepStore:(id)arg1 sleepScheduleModelDidChange:(id)arg2;
- (void)connectedDevicesDidChange:(id)arg1;
- (void)dealloc;

@end

