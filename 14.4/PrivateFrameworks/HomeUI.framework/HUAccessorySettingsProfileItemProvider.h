//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HFAccessorySettingManagedConfigurationAdapter, HMSettingGroup, NSMutableSet;

@interface HUAccessorySettingsProfileItemProvider : HFItemProvider
{
    CDUnknownBlockType _filter;
    HMSettingGroup *_settingGroup;
    NSMutableSet *_accessorySettingsProfileItems;
    HFAccessorySettingManagedConfigurationAdapter *_adapter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HFAccessorySettingManagedConfigurationAdapter *adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) NSMutableSet *accessorySettingsProfileItems; // @synthesize accessorySettingsProfileItems=_accessorySettingsProfileItems;
@property(retain, nonatomic) HMSettingGroup *settingGroup; // @synthesize settingGroup=_settingGroup;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdapter:(id)arg1 settingGroup:(id)arg2;

@end

