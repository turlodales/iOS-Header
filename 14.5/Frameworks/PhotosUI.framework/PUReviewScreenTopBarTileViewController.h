//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSString, PUBrowsingViewModel, PUReviewScreenBarsModel, PUReviewScreenTopBar;

__attribute__((visibility("hidden")))
@interface PUReviewScreenTopBarTileViewController : PUTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver>
{
    PUBrowsingViewModel *_browsingViewModel;
    PUReviewScreenBarsModel *_barsModel;
    PUReviewScreenTopBar *__topBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setTopBar:) PUReviewScreenTopBar *_topBar; // @synthesize _topBar=__topBar;
@property(retain, nonatomic) PUReviewScreenBarsModel *barsModel; // @synthesize barsModel=_barsModel;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateVisibilityAnimated:(_Bool)arg1;
- (void)_updateBarLayout;
- (void)_updateControls;
- (void)_handleRetakeButtonTapped:(id)arg1;
- (void)_handleDoneButtonTapped:(id)arg1;
- (void)becomeReusable;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

