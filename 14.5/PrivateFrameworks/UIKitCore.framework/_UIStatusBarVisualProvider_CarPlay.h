//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIStatusBarCellularItemTypeStringProvider-Protocol.h>
#import <UIKitCore/_UIStatusBarVisualProvider-Protocol.h>

@class NSString, _UIStatusBar, _UIStatusBarRegion;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_CarPlay : NSObject <_UIStatusBarCellularItemTypeStringProvider, _UIStatusBarVisualProvider>
{
    _Bool _showingSensorActivityIndicator;
    _Bool _showingPill;
    _UIStatusBar *_statusBar;
    _UIStatusBarRegion *_timeRegion;
    _UIStatusBarRegion *_radarRegion;
}

+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;
+ (Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool showingPill; // @synthesize showingPill=_showingPill;
@property(nonatomic) _Bool showingSensorActivityIndicator; // @synthesize showingSensorActivityIndicator=_showingSensorActivityIndicator;
@property(retain, nonatomic) _UIStatusBarRegion *radarRegion; // @synthesize radarRegion=_radarRegion;
@property(retain, nonatomic) _UIStatusBarRegion *timeRegion; // @synthesize timeRegion=_timeRegion;
@property(nonatomic) __weak _UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
- (_Bool)showSensorActivityIndicatorWithoutPortalView;
- (id)setupInContainerView:(id)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)_animationForPillTime;
- (id)_animationForSensorIndicator;
- (id)_animationForQuietMode;
- (id)_animationForBackgroundActivityPill;
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)willUpdateWithData:(id)arg1;
- (id)styleAttributesForStyle:(long long)arg1;
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double *)arg3;
- (id)stringForCellularType:(long long)arg1 condensed:(_Bool)arg2;
- (void)itemCreated:(id)arg1;
@property(readonly, nonatomic) _Bool supportsIndirectPointerTouchActions;

// Remaining properties
@property(readonly, nonatomic) _Bool canFixupDisplayItemAttributes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

