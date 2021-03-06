//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTinkerSharingOptInController.h>

@class COSTinkerHealthSharingSetupDelegate, HKSecondaryDevicePairingAgent, NSObject;
@protocol OS_dispatch_source;

@interface COSTinkerHealthSharingOptInController : HKTinkerSharingOptInController
{
    COSTinkerHealthSharingSetupDelegate *_setupDelegate;
    _Bool _fetchingShareStatus;
    HKSecondaryDevicePairingAgent *_healthSyncAgent;
    NSObject<OS_dispatch_source> *_timeoutSource;
    _Bool _taskDidTimeout;
}

- (void).cxx_destruct;
- (void)_cancelTaskTimeout;
- (void)_didTimeOutWithHandler:(CDUnknownBlockType)arg1;
- (void)_scheduleTaskTimeout:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2;
- (void)applyConfirmedOptin:(_Bool)arg1;
- (void)_fetchSharingStatus;
- (_Bool)holdBeforeDisplaying;
- (void)userDidRequestCancel;
- (void)dealloc;
- (id)init;

@end

