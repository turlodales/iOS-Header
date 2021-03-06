//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBLockScreenPluginAppearanceContext.h>

#import <SpringBoardUI/SBLockScreenPluginMutableAppearance-Protocol.h>

@class NSArray, NSString, SBLockScreenLegibilitySettings;

@interface SBLockScreenPluginMutableAppearanceContext : SBLockScreenPluginAppearanceContext <SBLockScreenPluginMutableAppearance>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) long long backgroundStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *elementOverrides;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(retain, nonatomic) SBLockScreenLegibilitySettings *legibilitySettings;
@property(nonatomic) long long notificationBehavior;
@property(nonatomic) struct CGRect presentationRegion;
@property(nonatomic) long long presentationStyle;
@property(nonatomic) unsigned long long restrictedCapabilities;
@property(readonly) Class superclass;

@end

