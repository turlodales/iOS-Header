//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUILegacyButton.h>

@class UIAlertController, UIImage, UIViewController, VUICircularProgress, VUIDownloadButtonViewModel;

__attribute__((visibility("hidden")))
@interface VUILegacyDownloadButton : VUILegacyButton
{
    _Bool _showsTextInDownloadedState;
    _Bool _observingDownloadProgress;
    _Bool _wasDeleted;
    _Bool _wasCanceled;
    _Bool _isForLibrary;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _downloadStateChangeHandler;
    UIImage *_notDownloadedImage;
    UIImage *_connectingImage;
    UIImage *_downloadingImage;
    UIImage *_downloadedImage;
    UIImage *_expiredDownloadImage;
    VUIDownloadButtonViewModel *_viewModel;
    VUICircularProgress *_progressIndicator;
    UIAlertController *_deleteConfirmationAlertController;
}

+ (id)defaultLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) UIAlertController *deleteConfirmationAlertController; // @synthesize deleteConfirmationAlertController=_deleteConfirmationAlertController;
@property(nonatomic) _Bool isForLibrary; // @synthesize isForLibrary=_isForLibrary;
@property(nonatomic) _Bool wasCanceled; // @synthesize wasCanceled=_wasCanceled;
@property(nonatomic) _Bool wasDeleted; // @synthesize wasDeleted=_wasDeleted;
@property(nonatomic) _Bool observingDownloadProgress; // @synthesize observingDownloadProgress=_observingDownloadProgress;
@property(retain, nonatomic) VUICircularProgress *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) VUIDownloadButtonViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImage *expiredDownloadImage; // @synthesize expiredDownloadImage=_expiredDownloadImage;
@property(retain, nonatomic) UIImage *downloadedImage; // @synthesize downloadedImage=_downloadedImage;
@property(retain, nonatomic) UIImage *downloadingImage; // @synthesize downloadingImage=_downloadingImage;
@property(retain, nonatomic) UIImage *connectingImage; // @synthesize connectingImage=_connectingImage;
@property(retain, nonatomic) UIImage *notDownloadedImage; // @synthesize notDownloadedImage=_notDownloadedImage;
@property(copy, nonatomic) CDUnknownBlockType downloadStateChangeHandler; // @synthesize downloadStateChangeHandler=_downloadStateChangeHandler;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) _Bool showsTextInDownloadedState; // @synthesize showsTextInDownloadedState=_showsTextInDownloadedState;
- (void)_stopObservingDownloadProgress:(id)arg1;
- (void)_startObservingDownloadProgress:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_configureProgressIndicatorWithProperties:(id)arg1;
- (void)_insertProgressIndicatorWithFrame:(struct CGRect)arg1;
- (id)_buttonPropertiesForState:(unsigned long long)arg1 downloadExpirationDate:(id)arg2;
- (void)_updateDownloadProgress:(double)arg1 animated:(_Bool)arg2;
- (void)_updateButtonToDownloadedWithProperties:(id)arg1;
- (void)_updateButtonToDownloadingWithProperties:(id)arg1;
- (void)_updateButtonToConnectingWithProperties:(id)arg1;
- (void)_updateButtonToNotDownloadedWithProperties:(id)arg1;
- (void)_updateButtonToState:(unsigned long long)arg1 downloadExpirationDate:(id)arg2;
- (void)_updateButtonToState:(unsigned long long)arg1 oldState:(unsigned long long)arg2;
- (id)_imageForDownloadState:(unsigned long long)arg1 downloadExpirationDate:(id)arg2;
- (id)_expiredDownloadImage;
- (id)_pausedImage;
- (id)_downloadedImage;
- (id)_downloadingImage;
- (id)_connectingImage;
- (id)_notDownloadedImage;
- (void)_setImage:(id)arg1;
- (void)_setTitleWithProperties:(id)arg1;
- (void)_startDownloadIfPossibleRemovingFromUIOnCancellationOrFailure:(_Bool)arg1;
- (void)_dismissConfirmationAlertController;
- (void)_handleAppDidEnterBackgroundNotification:(id)arg1;
- (_Bool)_shouldShowRenewalOption;
- (id)_renewalAlertAction;
- (void)_askUserAndDeleteIfNeeded;
- (void)_layoutProgressIndicator;
- (void)_downloadButtonTapped:(id)arg1;
- (id)_localize:(id)arg1 token:(id)arg2 value:(id)arg3;
- (struct CGSize)_imageSizeThatFits:(struct CGSize)arg1;
- (void)updateWithAssetController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)dealloc;
- (void)updateWithElement:(id)arg1;
- (id)initWithMediaEntity:(id)arg1 layout:(id)arg2;
- (id)initWithAssetController:(id)arg1 layout:(id)arg2;
- (id)initWithPlayable:(id)arg1 layout:(id)arg2;

@end

