//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGSingleViewLayout.h>

#import <PhotosUICore/PXPhotosSectionHeaderViewDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosSectionedLayoutHeader-Protocol.h>

@class NSString, PXAssetsDataSource, PXPhotosLayoutSpec, PXSelectionSnapshot;
@protocol PXPhotosSectionHeaderLayoutViewProvider, _PXAlbumSectionHeaderLayoutInteractionDelegate;

@interface _PXAlbumSectionHeaderLayout : PXGSingleViewLayout <PXPhotosSectionHeaderViewDelegate, PXPhotosSectionedLayoutHeader>
{
    _Bool _isInSelectMode;
    _Bool _areAllItemsSelected;
    _Bool _wantsBackground;
    PXPhotosLayoutSpec *_spec;
    PXSelectionSnapshot *_selectionSnapshot;
    PXAssetsDataSource *_dataSource;
    id <_PXAlbumSectionHeaderLayoutInteractionDelegate> _interactionDelegate;
    id <PXPhotosSectionHeaderLayoutViewProvider> _viewProvider;
    struct PXSimpleIndexPath _sectionIndexPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool wantsBackground; // @synthesize wantsBackground=_wantsBackground;
@property(nonatomic) __weak id <PXPhotosSectionHeaderLayoutViewProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(nonatomic) __weak id <_PXAlbumSectionHeaderLayoutInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(nonatomic) struct PXSimpleIndexPath sectionIndexPath; // @synthesize sectionIndexPath=_sectionIndexPath;
@property(retain, nonatomic) PXAssetsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) _Bool areAllItemsSelected; // @synthesize areAllItemsSelected=_areAllItemsSelected;
@property(retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // @synthesize selectionSnapshot=_selectionSnapshot;
@property(nonatomic) _Bool isInSelectMode; // @synthesize isInSelectMode=_isInSelectMode;
@property(retain, nonatomic) PXPhotosLayoutSpec *spec; // @synthesize spec=_spec;
- (void)headerView:(id)arg1 actionButtonPressed:(id)arg2;
- (void)didTapHeaderView:(id)arg1;
- (void)textSizeDidChangeForHeaderView:(id)arg1;
- (void)floatingOffsetDidChange;
- (void)_setWantsBackground:(_Bool)arg1;
- (void)_setAreAllItemsSelected:(_Bool)arg1;
- (id)init;
- (id)initWithSpec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

