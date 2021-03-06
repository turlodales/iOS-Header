//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/NSCopying-Protocol.h>
#import <SpringBoardUI/NSMutableCopying-Protocol.h>
#import <SpringBoardUI/SBLockScreenPluginAppearance-Protocol.h>
#import <SpringBoardUI/SBLockScreenPluginMutableAppearance-Protocol.h>

@class NSArray, NSString, SBLockScreenLegibilitySettings;

@interface SBLockScreenPluginAppearanceContext : NSObject <SBLockScreenPluginMutableAppearance, SBLockScreenPluginAppearance, NSCopying, NSMutableCopying>
{
    _Bool hidden;
    unsigned long long restrictedCapabilities;
    long long backgroundStyle;
    long long presentationStyle;
    long long notificationBehavior;
    SBLockScreenLegibilitySettings *legibilitySettings;
    NSArray *elementOverrides;
    struct CGRect presentationRegion;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect presentationRegion; // @synthesize presentationRegion;
@property(copy, nonatomic) NSArray *elementOverrides; // @synthesize elementOverrides;
@property(retain, nonatomic) SBLockScreenLegibilitySettings *legibilitySettings; // @synthesize legibilitySettings;
@property(nonatomic) long long notificationBehavior; // @synthesize notificationBehavior;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle;
@property(nonatomic) unsigned long long restrictedCapabilities; // @synthesize restrictedCapabilities;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)initWithAppearance:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

