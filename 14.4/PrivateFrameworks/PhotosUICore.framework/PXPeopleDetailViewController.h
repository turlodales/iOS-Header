//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPhotosDetailsUIViewController.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSArray, NSString, PXPeopleDetailStatusOverlayView, UIScrollView;

@interface PXPeopleDetailViewController : PXPhotosDetailsUIViewController <PXPhotoLibraryUIChangeObserver>
{
    _Bool _processingFaces;
    NSArray *_people;
    PXPeopleDetailStatusOverlayView *_overlayView;
    UIScrollView *_overlayScrollView;
    NSArray *_overlayConstraints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *overlayConstraints; // @synthesize overlayConstraints=_overlayConstraints;
@property(retain, nonatomic) UIScrollView *overlayScrollView; // @synthesize overlayScrollView=_overlayScrollView;
@property(retain, nonatomic) PXPeopleDetailStatusOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic, getter=isProcessingFaces) _Bool processingFaces; // @synthesize processingFaces=_processingFaces;
@property(copy, nonatomic) NSArray *people; // @synthesize people=_people;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (void)_applicationBecameActive:(id)arg1;
- (void)_updateDataSourceWithCollectionForPerson:(id)arg1;
- (void)_launchNaming:(id)arg1;
- (void)_updateHeader;
- (void)_setupHeader;
- (void)_updateOverlayConstraintsIfNeeded;
- (void)_updateOverlayContentSizeIfNeeded;
- (void)_setupProcessingOverlayView;
- (void)_loadComposition;
- (void)_createNewDetailView:(id)arg1;
- (void)_suggestionsDidFinish:(id)arg1;
- (void)refreshName;
- (void)presentBootstrapViewControllerWithType:(unsigned long long)arg1;
- (_Bool)shouldUpdateStatusBarTitle;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPeople:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

