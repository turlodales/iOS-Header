//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/PUBrowsingVideoPlayerChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSString, PUAssetViewModel, PUBrowsingVideoPlayer, PUBrowsingViewModel, PUOneUpMergedVideoProvider, UIActivityIndicatorView, UIButton;

__attribute__((visibility("hidden")))
@interface PUBufferingIndicatorTileViewController : PUTileViewController <PUBrowsingVideoPlayerChangeObserver, PUBrowsingViewModelChangeObserver, PXChangeObserver>
{
    PUAssetViewModel *_assetViewModel;
    PUBrowsingViewModel *_browsingViewModel;
    PUOneUpMergedVideoProvider *_mergedVideoProvider;
    CDUnknownBlockType _errorAlertControllerDisplayer;
    PUBrowsingVideoPlayer *__videoPlayer;
    long long __indicatorStyle;
    UIActivityIndicatorView *__spinner;
    UIButton *__errorButton;
}

+ (struct CGSize)bufferingIndicatorTileSize;
+ (_Bool)canShowBufferingIndicatorTileForAsset:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setErrorButton:) UIButton *_errorButton; // @synthesize _errorButton=__errorButton;
@property(retain, nonatomic, setter=_setSpinner:) UIActivityIndicatorView *_spinner; // @synthesize _spinner=__spinner;
@property(nonatomic, setter=_setIndicatorStyle:) long long _indicatorStyle; // @synthesize _indicatorStyle=__indicatorStyle;
@property(retain, nonatomic, setter=_setVideoPlayer:) PUBrowsingVideoPlayer *_videoPlayer; // @synthesize _videoPlayer=__videoPlayer;
@property(copy, nonatomic) CDUnknownBlockType errorAlertControllerDisplayer; // @synthesize errorAlertControllerDisplayer=_errorAlertControllerDisplayer;
@property(retain, nonatomic) PUOneUpMergedVideoProvider *mergedVideoProvider; // @synthesize mergedVideoProvider=_mergedVideoProvider;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateIndicator;
- (void)_handleErrorButton:(id)arg1;
- (void)_setIndicatorStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)becomeReusable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

