//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MKPlacePhotoGalleryViewControllerDelegate-Protocol.h"
#import "PhotoViewerToolbarControllerActionHandling-Protocol.h"
#import "UGCMorePhotosFeedViewControllerDelegate-Protocol.h"

@class MKMapItem, MKPlacePhotoGalleryViewController, MapsSceneDelegate, NSString, PhotoViewerToolbarController, RAPPlacecardImageryLayoutManager, RAPPresenter, UGCMorePhotosFeedViewController, UGCReportImageryController;
@protocol MKPlacePhotoGalleryViewControllerDelegate, MacPlacePhotoViewerActionDelegate;

__attribute__((visibility("hidden")))
@interface MacPlacePhotoViewerRootViewController : UIViewController <UGCMorePhotosFeedViewControllerDelegate, MKPlacePhotoGalleryViewControllerDelegate, PhotoViewerToolbarControllerActionHandling>
{
    MKMapItem *_mapItem;
    id <MacPlacePhotoViewerActionDelegate> _delegate;
    UGCMorePhotosFeedViewController *_photoThumbnailViewController;
    MKPlacePhotoGalleryViewController *_photoGalleryViewController;
    PhotoViewerToolbarController *_toolbarController;
    UGCReportImageryController *_reportImageryController;
    RAPPlacecardImageryLayoutManager *_reportImageryLayoutManager;
    RAPPresenter *_rapPresenter;
    MapsSceneDelegate *_mapsSceneDelegate;
    id <MKPlacePhotoGalleryViewControllerDelegate> _underlyingGalleryDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MKPlacePhotoGalleryViewControllerDelegate> underlyingGalleryDelegate; // @synthesize underlyingGalleryDelegate=_underlyingGalleryDelegate;
@property(retain, nonatomic) MapsSceneDelegate *mapsSceneDelegate; // @synthesize mapsSceneDelegate=_mapsSceneDelegate;
@property(retain, nonatomic) RAPPresenter *rapPresenter; // @synthesize rapPresenter=_rapPresenter;
@property(retain, nonatomic) RAPPlacecardImageryLayoutManager *reportImageryLayoutManager; // @synthesize reportImageryLayoutManager=_reportImageryLayoutManager;
@property(retain, nonatomic) UGCReportImageryController *reportImageryController; // @synthesize reportImageryController=_reportImageryController;
@property(retain, nonatomic) PhotoViewerToolbarController *toolbarController; // @synthesize toolbarController=_toolbarController;
@property(retain, nonatomic) MKPlacePhotoGalleryViewController *photoGalleryViewController; // @synthesize photoGalleryViewController=_photoGalleryViewController;
@property(retain, nonatomic) UGCMorePhotosFeedViewController *photoThumbnailViewController; // @synthesize photoThumbnailViewController=_photoThumbnailViewController;
@property(nonatomic) __weak id <MacPlacePhotoViewerActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void)_logAction:(int)arg1 withValue:(id)arg2;
- (void)_logUGCAction:(int)arg1 withIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) UIViewController *topmostViewController;
- (void)photoViewerToolbarControllerTappedMorePhotos:(id)arg1;
- (void)photoViewerToolbarControllerTappedRight:(id)arg1;
- (void)photoViewerToolbarControllerTappedLeft:(id)arg1;
- (void)photoViewerToolbarControllerTappedAddPhoto:(id)arg1;
@property(nonatomic) long long context;
- (void)photoThumbnailGalleryViewController:(id)arg1 selectedPhotoAtIndex:(unsigned long long)arg2 photoList:(id)arg3 imageViewForTransition:(id)arg4;
- (void)photoThumbnailGalleryViewControllerDidSelectAdd:(id)arg1 sourceView:(id)arg2;
- (void)placePhotoGalleryDidFinishDismissing:(id)arg1;
- (void)placePhotoGallery:(id)arg1 openButtonTappedAtIndex:(unsigned long long)arg2;
- (void)placePhotoGalleryDidScrollToIndex:(unsigned long long)arg1;
- (void)_updateScrollButtonsWithIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidScrollRightToIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidScrollLeftToIndex:(unsigned long long)arg1;
- (void)placePhotoGallery:(id)arg1 attributionViewTappedAtIndex:(unsigned long long)arg2;
- (void)placePhotoGalleryAdditionalViewTapped:(id)arg1;
- (void)placePhotoGalleryDidCloseAtIndex:(unsigned long long)arg1;
- (void)placePhotoGallery:(id)arg1 willCloseAtIndex:(unsigned long long)arg2;
- (void)placePhotoGalleryDidSelectAddPhoto:(id)arg1;
- (void)photoViewerToolbarController:(id)arg1 selectedReportAnIssueItem:(id)arg2;
- (void)placePhotoGallery:(id)arg1 didSelectReportImageAtIndex:(unsigned long long)arg2;
- (id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isFirstParty;
- (void)viewDidLoad;
- (id)initWithMapItem:(id)arg1 sceneDelegate:(id)arg2;
- (id)initWithMapItem:(id)arg1 sceneDelegate:(id)arg2 photoGalleryViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

