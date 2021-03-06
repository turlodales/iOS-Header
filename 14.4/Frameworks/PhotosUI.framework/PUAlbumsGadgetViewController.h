//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetUIViewController.h>

#import <PhotosUI/PXNavigableCollectionContainer-Protocol.h>

@class NSString, PUSessionInfo, PXProgrammaticNavigationDestination, UIBarButtonItem;

@interface PUAlbumsGadgetViewController : PXGadgetUIViewController <PXNavigableCollectionContainer>
{
    PXProgrammaticNavigationDestination *_px_navigationDestination;
    PUSessionInfo *_sessionInfo;
    UIBarButtonItem *_plusButtonItem;
}

+ (id)_supportedActionsByKeyCommands;
- (void).cxx_destruct;
@property(retain, nonatomic) UIBarButtonItem *plusButtonItem; // @synthesize plusButtonItem=_plusButtonItem;
@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(retain, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination; // @synthesize px_navigationDestination=_px_navigationDestination;
- (void)_handleDoneButton:(id)arg1;
- (void)_updateNavigationBar;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)navigationHelperCanCurrentlyNavigate:(id)arg1;
- (void)provideViewControllersForDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)routingOptionsForDestination:(id)arg1;
- (void)navigateToCollection:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_canNavigateToCollection:(id)arg1 skipGadgets:(_Bool)arg2;
- (_Bool)canNavigateToCollection:(id)arg1;
- (id)_navigableGadgetForCollection:(id)arg1;
- (void)_navigateToCollection:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)allowsBarManagement;
- (long long)scrollAnimationIdentifier;
- (void)configureSectionHeader:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLayout:(id)arg1 dataSourceManager:(id)arg2;
- (void)_performKeyCommand:(id)arg1;
- (id)keyCommands;
- (id)_newSharedAlbumActionWithSpec:(id)arg1;
- (id)_newFolderActionWithSpec:(id)arg1;
- (id)_newSmartAlbumActionWithSpec:(id)arg1;
- (id)_newAlbumActionWithSpec:(id)arg1;
- (id)createPlusButton;
- (void)_performCreateNewSmartAlbum;
- (void)_performCreateNewFolder;
- (void)_performCreateNewSharedAlbum;
- (void)_performCreateNewAlbum;
- (void)_performActionOfActionType:(long long)arg1;
- (_Bool)_canPerformActionOfActionType:(long long)arg1;
- (id)px_gridPresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

