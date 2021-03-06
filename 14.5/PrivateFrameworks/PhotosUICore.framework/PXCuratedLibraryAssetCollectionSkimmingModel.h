//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXAssetCollectionReference, PXCuratedLibraryViewModel, PXIndexPathSet;

@interface PXCuratedLibraryAssetCollectionSkimmingModel : NSObject
{
    PXCuratedLibraryViewModel *_viewModel;
    long long _zoomLevel;
    long long _skimmingZoomLevel;
    id _dataSourcePauseToken;
    _Bool _isPlayingSlideshow;
    _Bool _isInteractionInProgress;
    PXAssetCollectionReference *_containingAssetCollectionReference;
    PXIndexPathSet *_indexPathSetForSkimming;
    struct PXSimpleIndexPath _initialIndexPath;
    struct PXSimpleIndexPath _skimmedIndexPath;
}

- (void).cxx_destruct;
@property(nonatomic) struct PXSimpleIndexPath skimmedIndexPath; // @synthesize skimmedIndexPath=_skimmedIndexPath;
@property(readonly, nonatomic) struct PXSimpleIndexPath initialIndexPath; // @synthesize initialIndexPath=_initialIndexPath;
@property(readonly, copy, nonatomic) PXIndexPathSet *indexPathSetForSkimming; // @synthesize indexPathSetForSkimming=_indexPathSetForSkimming;
@property(readonly, nonatomic) _Bool isInteractionInProgress; // @synthesize isInteractionInProgress=_isInteractionInProgress;
@property(readonly, nonatomic) _Bool isPlayingSlideshow; // @synthesize isPlayingSlideshow=_isPlayingSlideshow;
@property(readonly, nonatomic) PXAssetCollectionReference *containingAssetCollectionReference; // @synthesize containingAssetCollectionReference=_containingAssetCollectionReference;
@property(readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)persistSkimmingState;
- (void)_updateViewModel;
@property(readonly, nonatomic) _Bool canStartSkimming;
- (void)tearDownAfterSkimmingShowHints:(_Bool)arg1 persistState:(_Bool)arg2;
- (void)_prepareIndexesForAssetCollectionReference:(id)arg1 willStartSkimming:(_Bool)arg2 willStartSlideshow:(_Bool)arg3;
- (void)transitionToSkimming;
- (void)transitionToSlideshow;
- (void)prepareForSkimmingInAssetCollectionReference:(id)arg1;
- (void)prepareForShowingHintsForAssetCollectionReference:(id)arg1;
- (void)prepareForSlideshowForAssetCollectionReference:(id)arg1;
- (id)validatedAssetCollectionReference:(id)arg1;
- (id)initWithViewModel:(id)arg1;

@end

