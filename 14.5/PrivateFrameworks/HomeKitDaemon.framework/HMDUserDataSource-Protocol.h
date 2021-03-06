//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HMDCloudShareMessenger, HMDHome, HMDUser, HMDUserDataController, HMDUserSettingsBackingStoreController, NSObject, NSString, NSUUID;
@protocol HMDSettingsControllerProtocol, HMDUserDataControllerDelegate, HMDUserSettingsBackingStoreControllerDelegate, OS_dispatch_queue;

@protocol HMDUserDataSource
- (_Bool)isCurrentUser:(HMDUser *)arg1;
- (HMDUserSettingsBackingStoreController *)userDataBackingStoreControllerWithDelegate:(id <HMDUserSettingsBackingStoreControllerDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 zoneName:(NSString *)arg3 home:(HMDHome *)arg4 shareMessenger:(HMDCloudShareMessenger *)arg5;
- (HMDUserDataController *)userDataControllerWithDelegate:(id <HMDUserDataControllerDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 userID:(NSUUID *)arg3 homeID:(NSUUID *)arg4 sharedSettingsController:(id <HMDSettingsControllerProtocol>)arg5 privateSettingsController:(id <HMDSettingsControllerProtocol>)arg6;
@end

