//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/NSExtensionRequestHandling-Protocol.h>
#import <PhotosUI/PUPhotoPicker-Protocol.h>
#import <PhotosUI/PUPhotoPickerRemoteNavigationControllerDelegate-Protocol.h>
#import <PhotosUI/PUPhotoPickerTestSupportHandler-Protocol.h>

@class NSArray, NSDictionary, NSLayoutConstraint, NSString, PUAssetPickerCoordinator, PUPhotoPickerExtensionContext, PUPhotoPickerRemoteNavigationController, PUPhotoPickerRemoteViewControllerRequestOptions;

@interface PUPhotoPickerRemoteViewController : UIViewController <PUPhotoPickerRemoteNavigationControllerDelegate, NSExtensionRequestHandling, PUPhotoPicker, PUPhotoPickerTestSupportHandler>
{
    PUPhotoPickerExtensionContext *_extensionContext;
    UIViewController *_contentViewController;
    PUPhotoPickerRemoteNavigationController *_contentNavigationController;
    PUPhotoPickerRemoteViewControllerRequestOptions *_options;
    PUAssetPickerCoordinator *_assetPickerCoordinator;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    NSLayoutConstraint *_leadingSafeAreaConstraint;
    NSLayoutConstraint *_trailingSafeAreaConstraint;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *trailingSafeAreaConstraint; // @synthesize trailingSafeAreaConstraint=_trailingSafeAreaConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingSafeAreaConstraint; // @synthesize leadingSafeAreaConstraint=_leadingSafeAreaConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) PUAssetPickerCoordinator *assetPickerCoordinator; // @synthesize assetPickerCoordinator=_assetPickerCoordinator;
@property(retain, nonatomic) PUPhotoPickerRemoteViewControllerRequestOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) PUPhotoPickerRemoteNavigationController *contentNavigationController; // @synthesize contentNavigationController=_contentNavigationController;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) __weak PUPhotoPickerExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (_Bool)_useLibraryPresentation;
- (void)_allowSharingSelectionOfInfoDictionaries:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_logAssetSelectionIfNeeded:(id)arg1;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)_handlePerformTraitCollectionUpdateUsingData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performPhotosSelection;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
- (void)didSelectMediaWithInfoDictionary:(id)arg1 allowedHandler:(CDUnknownBlockType)arg2;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(long long)arg1;
- (void)cancelPhotoPicker;
- (void)presentViewController:(id)arg1;
@property(readonly, nonatomic) NSDictionary *properties;
@property(readonly, nonatomic) _Bool convertAutoloopsToGIF;
@property(readonly, nonatomic) _Bool showsPrompt;
@property(readonly, nonatomic) _Bool showsFileSizePicker;
@property(readonly, nonatomic) _Bool requiresPickingConfirmation;
@property(readonly, nonatomic) unsigned long long multipleSelectionLimit;
@property(readonly, nonatomic) _Bool allowsMultipleSelection;
@property(readonly, nonatomic) NSArray *mediaTypes;
@property(readonly, nonatomic) unsigned long long savingOptions;
- (void)photoPickerRemoteNavigationController:(id)arg1 viewControllerToPush:(id)arg2;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)_setPhotoPickerInViewController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)_loadContentViewIfNeeded;
- (void)_handleViewControllerRequestWithOptions:(id)arg1 error:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

