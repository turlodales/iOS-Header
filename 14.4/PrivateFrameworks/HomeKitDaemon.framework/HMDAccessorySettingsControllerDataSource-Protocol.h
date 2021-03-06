//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HMDAccessorySettingsController, HMDBackingStore, HMFActivity, NSArray, NSUUID;

@protocol HMDAccessorySettingsControllerDataSource
@property double homepodSettingsCreationTimestamp;
@property double homepodSetupLatency;
@property double setupStartTimestamp;
@property(retain) HMFActivity *setupActivity;
@property(readonly) HMDBackingStore *backingStore;
- (NSArray *)modelsToMigrateSettingsForController:(HMDAccessorySettingsController *)arg1;
- (NSArray *)modelsToMakeSettingsForController:(HMDAccessorySettingsController *)arg1 parentUUID:(NSUUID *)arg2;
@end

