//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MapsUICollectionViewDiffableDataSourceCellProviding-Protocol.h"
#import "UGCPhotoCollectionViewCellDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UGCAddPhotoCollectionViewCell, UIBarButtonItem, UICollectionViewDiffableDataSource, UIColor, UIView, UIViewController;
@protocol UGCPhotoCarouselRequestDelegate;

__attribute__((visibility("hidden")))
@interface UGCPhotoCarouselController : NSObject <UICollectionViewDelegate, MapsUICollectionViewDiffableDataSourceCellProviding, UGCPhotoCollectionViewCellDelegate>
{
    NSMutableArray *_viewModels;
    UICollectionViewDiffableDataSource *_diffableDataSource;
    UGCAddPhotoCollectionViewCell *_addCell;
    unsigned long long _maximumNumberOfPhotos;
    NSString *_downloadToken;
    UIViewController *_presentingViewController;
    id <UGCPhotoCarouselRequestDelegate> _delegate;
    UIBarButtonItem *_anchoringBarButtonItem;
    UIColor *_cellBackgroundColor;
    CDUnknownBlockType _changeHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property(nonatomic) unsigned long long maximumNumberOfPhotos; // @synthesize maximumNumberOfPhotos=_maximumNumberOfPhotos;
@property(retain, nonatomic) UIColor *cellBackgroundColor; // @synthesize cellBackgroundColor=_cellBackgroundColor;
@property(readonly, nonatomic) __weak UIBarButtonItem *anchoringBarButtonItem; // @synthesize anchoringBarButtonItem=_anchoringBarButtonItem;
@property(nonatomic) __weak id <UGCPhotoCarouselRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)photoCellDidCancel:(id)arg1;
@property(readonly, nonatomic) __weak UIView *anchoringView;
- (id)_buildSnapshotFromCurrentState;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;
- (id)_viewModelForIdentifier:(id)arg1;
- (void)_updateAddButtonState;
- (void)_removeImageForIdentifier:(id)arg1;
@property(readonly, nonatomic) unsigned long long totalNumberOfItems;
- (void)_cellRequestsRemoveImageForIdentifier:(id)arg1;
- (void)setupCollectionView:(id)arg1;
- (void)_invokeChangeHandler;
- (void)_addViewModel:(id)arg1;
- (void)addImageURL:(id)arg1 forIdentifier:(id)arg2;
- (void)addImage:(id)arg1 forIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 maximumNumberOfPhotos:(unsigned long long)arg2;
@property(readonly, nonatomic) NSString *downloadToken; // @synthesize downloadToken=_downloadToken;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

