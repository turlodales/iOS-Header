//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, PXBarSpec, UIViewController;
@protocol PXActionPerformerDelegate;

@interface PXBarsController : NSObject
{
    struct {
        _Bool needsUpdateBars;
    } _needsUpdateFlags;
    _Bool _wantsAnimatedBarsUpdate;
    UIViewController *_viewController;
    id <PXActionPerformerDelegate> _actionPerformerDelegate;
    PXBarSpec *_barSpec;
    NSMutableDictionary *_barButtonItemCache;
    NSMutableDictionary *_barButtonItemCachedPlacement;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *barButtonItemCachedPlacement; // @synthesize barButtonItemCachedPlacement=_barButtonItemCachedPlacement;
@property(readonly, nonatomic) NSMutableDictionary *barButtonItemCache; // @synthesize barButtonItemCache=_barButtonItemCache;
@property(retain, nonatomic) PXBarSpec *barSpec; // @synthesize barSpec=_barSpec;
@property(nonatomic) _Bool wantsAnimatedBarsUpdate; // @synthesize wantsAnimatedBarsUpdate=_wantsAnimatedBarsUpdate;
@property(nonatomic) __weak id <PXActionPerformerDelegate> actionPerformerDelegate; // @synthesize actionPerformerDelegate=_actionPerformerDelegate;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) double fixedSpaceForEndButtonSpacing;
@property(readonly, nonatomic) double fixedSpaceForInterButtonSpacing;
- (void)purgeCachedBarButtonItemsForIdentifiers:(id)arg1;
- (id)cachedBarButtonItemForIdentifier:(id)arg1;
- (void)invalidateBarButtonItemWithIdentifier:(id)arg1;
- (id)createBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2;
- (id)_getCachedOrCreateNewBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *toolbarItemIdentifiers;
@property(readonly, nonatomic) NSArray *rightBarButtonItemIdentifiers;
@property(readonly, nonatomic) NSArray *leftBarButtonItemIdentifiers;
- (void)updateBars;
- (void)_updateBarsIfNeeded;
- (void)updateIfNeeded;
- (void)invalidateBars;
- (_Bool)_needsUpdate;
- (id)init;

@end

