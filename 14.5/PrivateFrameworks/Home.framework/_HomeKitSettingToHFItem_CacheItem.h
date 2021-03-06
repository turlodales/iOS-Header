//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class HFAccessorySettingsEntity, HFItem, HMAccessorySelectionSettingItem, HMSetting, HMSettingGroup, NSDictionary, NSString;
@protocol HFHomeKitSettingsVendor;

@interface _HomeKitSettingToHFItem_CacheItem : NSObject <NAIdentifiable>
{
    HFItem *_outputItem;
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;
    HMSetting *_singleSetting;
    HMSettingGroup *_settingGroup;
    HMAccessorySelectionSettingItem *_optionItem;
    HFAccessorySettingsEntity *_accessoryGroupEntity;
    NSDictionary *_usageOptions;
}

+ (_Bool)_checkSettingGroupForSettingsThatNeedToBeDisplayed:(id)arg1 usageOptions:(id)arg2 settingGroup:(id)arg3;
+ (id)na_identity;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *usageOptions; // @synthesize usageOptions=_usageOptions;
@property(readonly, nonatomic) HFAccessorySettingsEntity *accessoryGroupEntity; // @synthesize accessoryGroupEntity=_accessoryGroupEntity;
@property(readonly, nonatomic) HMAccessorySelectionSettingItem *optionItem; // @synthesize optionItem=_optionItem;
@property(readonly, nonatomic) HMSettingGroup *settingGroup; // @synthesize settingGroup=_settingGroup;
@property(readonly, nonatomic) HMSetting *singleSetting; // @synthesize singleSetting=_singleSetting;
@property(readonly, nonatomic) id <HFHomeKitSettingsVendor> homeKitSettingsVendor; // @synthesize homeKitSettingsVendor=_homeKitSettingsVendor;
@property(readonly, nonatomic) HFItem *outputItem; // @synthesize outputItem=_outputItem;
- (_Bool)shouldBeDisplayed;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *keyPath;
@property(readonly, nonatomic) NSString *cacheKey;
@property(readonly, copy) NSString *description;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 accessoryGroupEntity:(id)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 group:(id)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3 optionItem:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

