//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ActivityRingsUI/ARUIRingGroupDelegate-Protocol.h>

@class ARUIRenderContext, ARUIRenderer, ARUIRingGroup, ARUIRingGroupController, CAMetalLayer, NSArray, NSString, UIImage;

@interface ARUIRingsView : UIView <ARUIRingGroupDelegate>
{
    ARUIRenderContext *_renderContext;
    _Bool _backgrounded;
    _Bool _inViewHierarchy;
    NSArray *_ringGroups;
    NSArray *_ringGroupControllers;
    _Bool _shouldBypassApplicationStateChecking;
    _Bool _discardBackBuffers;
    _Bool _shouldRenderOnLayout;
    _Bool _viewIsVisible;
    _Bool _paused;
    ARUIRenderer *_renderer;
    long long _preferredFramesPerSecond;
    double _emptyRingAlpha;
    unsigned long long _iconTextureRows;
    unsigned long long _iconTextureColumns;
    UIImage *_iconSpriteImage;
}

+ (void)clearSharedCaches;
+ (Class)layerClass;
+ (id)ringsViewConfiguredForCompanionOfType:(long long)arg1 withRenderer:(id)arg2;
+ (id)ringsViewConfiguredForOneRingOnCompanionOfType:(long long)arg1;
+ (id)ringsViewConfiguredForThreeRingsOnCompanionWithRenderer:(id)arg1;
+ (id)ringsViewConfiguredForThreeRingsOnCompanion;
+ (id)ringsViewConfiguredForWatchOfType:(long long)arg1 withIcon:(_Bool)arg2 renderer:(id)arg3;
+ (id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1 withIcon:(_Bool)arg2;
+ (id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1 withRenderer:(id)arg2;
+ (id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1;
+ (id)ringsViewConfiguredForThreeRingsOnWatchWithRenderer:(id)arg1;
+ (id)ringsViewConfiguredForThreeRingsOnWatch;
+ (void)load;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *iconSpriteImage; // @synthesize iconSpriteImage=_iconSpriteImage;
@property(nonatomic) unsigned long long iconTextureColumns; // @synthesize iconTextureColumns=_iconTextureColumns;
@property(nonatomic) unsigned long long iconTextureRows; // @synthesize iconTextureRows=_iconTextureRows;
@property(nonatomic) double emptyRingAlpha; // @synthesize emptyRingAlpha=_emptyRingAlpha;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) _Bool viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(nonatomic) _Bool shouldRenderOnLayout; // @synthesize shouldRenderOnLayout=_shouldRenderOnLayout;
@property(nonatomic) _Bool discardBackBuffers; // @synthesize discardBackBuffers=_discardBackBuffers;
@property(nonatomic) _Bool shouldBypassApplicationStateChecking; // @synthesize shouldBypassApplicationStateChecking=_shouldBypassApplicationStateChecking;
@property(readonly, nonatomic) ARUIRenderer *renderer; // @synthesize renderer=_renderer;
- (void)setContentMode:(long long)arg1;
@property(readonly, nonatomic) UIImage *snapshot;
@property(nonatomic) _Bool synchronizesWithCA;
- (void)ringGroupHasUpdated:(id)arg1;
- (void)_updateRingGroupPauseState;
- (void)willMoveToWindow:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (void)_didEnterBackground:(id)arg1;
- (void)_discardBackBuffers;
- (void)layoutSubviews;
- (id)_anySpriteSheet;
- (id)_allRings;
- (_Bool)_shouldAllowRendering;
- (void)setOpaque:(_Bool)arg1;
- (void)_updateRenderContext;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) CAMetalLayer *metalLayer;
- (id)ringGroups;
@property(readonly, nonatomic) ARUIRingGroup *ringGroup;
- (void)_sharedInitWithRingGroups:(id)arg1 renderer:(id)arg2;
- (id)initWithRingGroups:(id)arg1 renderer:(id)arg2;
- (id)initWithRingGroups:(id)arg1;
- (id)initWithRingGroup:(id)arg1 renderer:(id)arg2;
- (id)initWithRingGroup:(id)arg1;
- (void)_sharedInitWithWithRingGroupControllers:(id)arg1 renderer:(id)arg2;
@property(readonly, nonatomic) NSArray *ringGroupControllers;
@property(readonly, nonatomic) ARUIRingGroupController *ringGroupController;
- (id)initWithRingGroupControllers:(id)arg1 renderer:(id)arg2;
- (id)initWithRingGroupControllers:(id)arg1;
- (id)initWithRingGroupController:(id)arg1 renderer:(id)arg2;
- (id)initWithRingGroupController:(id)arg1;
- (void)setActiveEnergyPercentage:(double)arg1 briskPercentage:(double)arg2 movingHoursPercentage:(double)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setBriskPercentage:(double)arg1 animated:(_Bool)arg2;
- (void)setMovingHoursPercentage:(double)arg1 animated:(_Bool)arg2;
- (void)setActiveEnergyPercentage:(double)arg1 animated:(_Bool)arg2;
- (id)sim_snapshot;
- (void)sim_updateFallbackRings;
- (void)sim_layoutSubviews;
- (void)sim_setOpaque:(_Bool)arg1;
@property(retain, nonatomic) NSArray *shapeLayers; // @dynamic shapeLayers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

