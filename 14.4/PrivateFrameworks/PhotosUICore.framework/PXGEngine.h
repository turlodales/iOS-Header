//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGLayoutUpdateDelegate-Protocol.h>
#import <PhotosUICore/PXGMetalRendererDelegate-Protocol.h>
#import <PhotosUICore/PXGTextureManagerDelegate-Protocol.h>
#import <PhotosUICore/PXTilingScrollControllerUpdateDelegate-Protocol.h>

@class NSArray, NSString, PXDisplayLink, PXGAXCoalescingResponder, PXGAnimator, PXGChangeDetails, PXGLayout, PXGMetalRenderer, PXGSpriteDataStore, PXGSpriteMetadataStore, PXGTextureManager, PXGViewEnvironment, PXGViewRenderer, PXScrollViewController, PXScrollViewSpeedometer;
@protocol PXGEngineDelegate;

@interface PXGEngine : NSObject <PXGMetalRendererDelegate, PXGLayoutUpdateDelegate, PXGTextureManagerDelegate, PXTilingScrollControllerUpdateDelegate, PXChangeObserver>
{
    PXGAnimator *_animator;
    PXGSpriteDataStore *_layoutSpriteDataStore;
    PXGChangeDetails *_layoutChangeDetails;
    struct CGPoint _viewportShift;
    struct CGPoint _previousVisibleOrigin;
    PXGSpriteDataStore *_animationPresentationSpriteDataStore;
    PXGSpriteDataStore *_animationTargetSpriteDataStore;
    PXGLayout *_animationLayout;
    PXGChangeDetails *_animationChangeDetails;
    PXGSpriteMetadataStore *_presentationSpriteMetadaStore;
    CDStruct_d97c9657 _updateFlags;
    unsigned long long _previousUpdateEntities;
    CDStruct_a02a4563 _previousInteractionState;
    unsigned long long _pendingUpdateEntities;
    _Bool _keepDisplayLinkAlive;
    double _renderForTargetTimestamp;
    double _lastRenderCompletionTimestamp;
    _Bool _animatorWasAnimatingAtBeginningOfFrame;
    _Bool _isUpdatingScrollView;
    _Bool _viewSizeDidChange;
    _Bool _lowMemoryMode;
    CDUnknownBlockType _pendingIsInvisibleForSomeTimeBlock;
    _Bool _extensionHostIsInBackground;
    _Bool _didRenderThisFrame;
    _Bool _expectingScrollEvents;
    _Bool _gotScrollEventThisFrame;
    _Bool _missedScrollEventThisFrame;
    _Bool _isInvisibleForSomeTime;
    _Bool _visible;
    _Bool _statsTrackingEnabled;
    _Bool _slowAnimationsEnabled;
    _Bool _wantsImmediateUpdates;
    _Bool _isInitialLoad;
    PXScrollViewController *_scrollViewController;
    PXScrollViewSpeedometer *_scrollViewSpeedometer;
    PXGLayout *_layout;
    PXGTextureManager *_textureManager;
    CDUnknownBlockType _animationRenderingCompletionHandler;
    double _lastScrollEventTime;
    id <PXGEngineDelegate> _delegate;
    PXGMetalRenderer *_metalRenderer;
    PXGViewRenderer *_viewRenderer;
    NSArray *_renderers;
    PXGViewEnvironment *_viewEnvironment;
    CDStruct_58b866b9 *_stats;
    PXDisplayLink *_displayLink;
    PXGAXCoalescingResponder *_coalescingAXResponder;
    CDStruct_a02a4563 _interactionState;
    struct _PXGEngineScrollState _scrollState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXGAXCoalescingResponder *coalescingAXResponder; // @synthesize coalescingAXResponder=_coalescingAXResponder;
@property(nonatomic) _Bool isInitialLoad; // @synthesize isInitialLoad=_isInitialLoad;
@property(nonatomic) _Bool wantsImmediateUpdates; // @synthesize wantsImmediateUpdates=_wantsImmediateUpdates;
@property(nonatomic) _Bool slowAnimationsEnabled; // @synthesize slowAnimationsEnabled=_slowAnimationsEnabled;
@property(readonly, nonatomic) PXDisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(readonly, nonatomic) CDStruct_58b866b9 *stats; // @synthesize stats=_stats;
@property(nonatomic) _Bool statsTrackingEnabled; // @synthesize statsTrackingEnabled=_statsTrackingEnabled;
@property(retain, nonatomic) PXGViewEnvironment *viewEnvironment; // @synthesize viewEnvironment=_viewEnvironment;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) NSArray *renderers; // @synthesize renderers=_renderers;
@property(readonly, nonatomic) PXGViewRenderer *viewRenderer; // @synthesize viewRenderer=_viewRenderer;
@property(readonly, nonatomic) PXGMetalRenderer *metalRenderer; // @synthesize metalRenderer=_metalRenderer;
@property(nonatomic) __weak id <PXGEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isInvisibleForSomeTime; // @synthesize isInvisibleForSomeTime=_isInvisibleForSomeTime;
@property(nonatomic) _Bool missedScrollEventThisFrame; // @synthesize missedScrollEventThisFrame=_missedScrollEventThisFrame;
@property(nonatomic) double lastScrollEventTime; // @synthesize lastScrollEventTime=_lastScrollEventTime;
@property(nonatomic) _Bool gotScrollEventThisFrame; // @synthesize gotScrollEventThisFrame=_gotScrollEventThisFrame;
@property(nonatomic) _Bool expectingScrollEvents; // @synthesize expectingScrollEvents=_expectingScrollEvents;
@property(nonatomic) _Bool didRenderThisFrame; // @synthesize didRenderThisFrame=_didRenderThisFrame;
@property(nonatomic) CDStruct_a02a4563 interactionState; // @synthesize interactionState=_interactionState;
@property(readonly, nonatomic) struct _PXGEngineScrollState scrollState; // @synthesize scrollState=_scrollState;
@property(copy, nonatomic) CDUnknownBlockType animationRenderingCompletionHandler; // @synthesize animationRenderingCompletionHandler=_animationRenderingCompletionHandler;
@property(readonly, nonatomic) PXGTextureManager *textureManager; // @synthesize textureManager=_textureManager;
@property(retain, nonatomic) PXGLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) PXScrollViewSpeedometer *scrollViewSpeedometer; // @synthesize scrollViewSpeedometer=_scrollViewSpeedometer;
@property(retain, nonatomic) PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(readonly, nonatomic) _Bool debugEngineUpdates;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)tilingScrollControllerDidScroll:(id)arg1;
- (void)tilingScrollControllerDidUpdate:(id)arg1;
- (void)textureManagerNeedsUpdate:(id)arg1;
- (void)layoutNeedsUpdate:(id)arg1;
- (void)metalRendererDidChangeTextureConverter:(id)arg1;
- (void)rendererNeedsUpdate:(id)arg1;
- (void)rendererPerformRender:(id)arg1;
- (void)renderer:(id)arg1 viewportSizeWillChange:(struct CGSize)arg2;
- (void)_updateScrollStateWithReason:(unsigned long long)arg1;
- (void)_resetChangeDetails;
- (void)_render;
- (void)_setNeedsRender;
- (_Bool)_shouldDeferContentOffsetUpdates;
- (_Bool)_shouldWaitForScrollEvent;
- (_Bool)_shouldDeferRenderUntilNextFrame;
- (_Bool)_isInBackground;
- (void)_enumerateRenderers:(CDUnknownBlockType)arg1;
- (void)_updateTextureManager;
- (void)_updateInteractionState;
- (void)_updateAnimatorWithTargetTimestamp:(double)arg1;
- (void)_updateLayout;
- (void)_updateIfNeededWithReason:(id)arg1;
- (void)ensureUpdatedLayout;
- (void)__setNeedsUpdate;
- (void)_forceInvalidate:(unsigned long long)arg1;
- (void)_deferredInvalidate:(unsigned long long)arg1;
- (void)_invalidateOrDefer:(unsigned long long)arg1;
- (void)_updateDisplayLink;
- (void)handleDisplayLink:(id)arg1;
@property(readonly, nonatomic) PXGAnimator *ppt_animator;
@property(readonly, nonatomic) long long currentFrameTime;
- (void)test_installRenderSnapshotHandler:(CDUnknownBlockType)arg1;
- (void)_releaseResources;
- (void)_purgeResources;
- (void)_hasBeenInvisibleForSomeTime;
@property(nonatomic) _Bool lowMemoryMode;
- (void)_extensionHostWillEnterForeground:(id)arg1;
- (void)_extensionHostDidEnterBackground:(id)arg1;
- (void)handleScreensDidWakeNotification:(id)arg1;
- (_Bool)copyPresentedSpriteFor:(id)arg1 geometry:(CDStruct_3ab912e1 *)arg2 style:(CDStruct_506f5052 *)arg3 info:(CDStruct_9d1ebe49 *)arg4;
- (void)enumerateSpritesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithAnimator:(id)arg1 textureManager:(id)arg2 metalRenderer:(id)arg3 viewRenderer:(id)arg4 displayLinkClass:(Class)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

