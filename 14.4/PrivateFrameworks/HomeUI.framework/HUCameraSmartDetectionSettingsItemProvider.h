//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class NSMutableSet, NSSet;

@interface HUCameraSmartDetectionSettingsItemProvider : HFItemProvider
{
    NSSet *_cameraProfiles;
    unsigned long long _settingsContext;
    NSMutableSet *_smartDetectionSettingsItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *smartDetectionSettingsItems; // @synthesize smartDetectionSettingsItems=_smartDetectionSettingsItems;
@property(readonly, nonatomic) unsigned long long settingsContext; // @synthesize settingsContext=_settingsContext;
@property(readonly, copy, nonatomic) NSSet *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
- (id)items;
- (id)reloadItems;
- (id)init;
- (id)initWithCameraProfiles:(id)arg1 settingsContext:(unsigned long long)arg2;

@end

