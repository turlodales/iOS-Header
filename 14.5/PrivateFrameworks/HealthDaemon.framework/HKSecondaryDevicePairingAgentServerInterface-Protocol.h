//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HKUnitTestingTaskServerInterface-Protocol.h>

@class HKSecondaryPairedDeviceConfiguration, NSString, NSUUID;

@protocol HKSecondaryDevicePairingAgentServerInterface <HKUnitTestingTaskServerInterface>
- (void)remote_fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchSharingStatusWithPairedGuardianWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_tearDownHealthSharingWithPairedGuardianWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_tearDownHealthSharingWithTinkerDeviceWithNRUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_performEndToEndCloudSyncWithNRDeviceUUID:(NSUUID *)arg1 syncParticipantFirst:(_Bool)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(HKSecondaryPairedDeviceConfiguration *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_requestTinkerSharingOptInWithGuardianDisplayName:(NSString *)arg1 NRDeviceUUID:(NSUUID *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

