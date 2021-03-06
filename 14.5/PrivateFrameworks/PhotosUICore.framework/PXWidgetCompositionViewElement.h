//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXWidgetCompositionElement.h>

#import <PhotosUICore/PXTileSource-Protocol.h>
#import <PhotosUICore/PXTilingControllerScrollDelegate-Protocol.h>
#import <PhotosUICore/PXTilingControllerTransitionDelegate-Protocol.h>

@class NSMutableSet, NSString, PXBasicTileAnimator, PXTilingController, PXWidgetCompositionViewElementLayout;

@interface PXWidgetCompositionViewElement : PXWidgetCompositionElement <PXTileSource, PXTilingControllerTransitionDelegate, PXTilingControllerScrollDelegate>
{
    _Bool _isCheckingInTile;
    PXBasicTileAnimator *__tileAnimator;
    PXWidgetCompositionViewElementLayout *__layout;
    NSMutableSet *__tilesInUse;
    PXTilingController *__tilingController;
    struct CGPoint __anchorOffset;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setAnchorOffset:) struct CGPoint _anchorOffset; // @synthesize _anchorOffset=__anchorOffset;
@property(readonly, nonatomic) PXTilingController *_tilingController; // @synthesize _tilingController=__tilingController;
@property(readonly, nonatomic) NSMutableSet *_tilesInUse; // @synthesize _tilesInUse=__tilesInUse;
@property(readonly, nonatomic) PXWidgetCompositionViewElementLayout *_layout; // @synthesize _layout=__layout;
@property(readonly, nonatomic) PXBasicTileAnimator *_tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property(nonatomic) _Bool isCheckingInTile; // @synthesize isCheckingInTile=_isCheckingInTile;
- (struct CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (void)tilingController:(id)arg1 prepareForChange:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (struct CGPoint)_anchorPoint;
- (void)_loadTilingController;
- (void)saveAnchoring;
- (id)contentTilingController;
- (void)checkInViewTile:(id)arg1;
- (id)checkOutViewTile;
- (id)createTileAnimator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

