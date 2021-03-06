//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXDiagnosticsHighlightCurationSettingsViewControllerDelegate-Protocol.h>
#import <PhotosUICore/UICollectionViewDataSource-Protocol.h>
#import <PhotosUICore/UICollectionViewDelegate-Protocol.h>
#import <PhotosUICore/UITableViewDataSource-Protocol.h>
#import <PhotosUICore/UITableViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSObject, NSString, NSURL, PHCachingImageManager, PHFetchResult, PHImageRequestOptions, PXDiagnosticsHighlightCurationSettingsViewController, UIActivityIndicatorView, UICollectionView, UISegmentedControl, UITableView, UIView;
@protocol OS_dispatch_queue;

@interface PXCuratedAssetCollectionDiagnosticsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PXDiagnosticsHighlightCurationSettingsViewControllerDelegate>
{
    UIView *_contentView;
    UISegmentedControl *_segmentedControl;
    UICollectionView *_collectionView;
    UITableView *_tableView;
    NSArray *_sectionTitles;
    NSDictionary *_tableContent;
    PHCachingImageManager *_imageManager;
    struct CGSize _thumbnailSize;
    long long _thumbnailContentMode;
    PHImageRequestOptions *_thumbnailOptions;
    struct CGRect _previousPreheatRect;
    NSMutableArray *_addedAssets;
    NSMutableArray *_removedAssets;
    NSArray *_visibleAssets;
    PHFetchResult *_allAssets;
    NSString *_keyAssetUUID;
    NSDictionary *_assetByUUID;
    NSArray *_sortedVisibleAssetUUIDs;
    NSDictionary *_curationDebugInformation;
    _Bool _curationComparisonEnabled;
    NSObject<OS_dispatch_queue> *_curationDebugFetchQueue;
    _Bool _isReady;
    UIView *_curationSettingsView;
    UIView *_curationTypeView;
    UIView *_itemDetailsView;
    NSDictionary *_dedupedSymbolIndexByItemIdentifier;
    NSURL *_screenshotURL;
    PXDiagnosticsHighlightCurationSettingsViewController *_editSettingsViewController;
    UIActivityIndicatorView *_progressView;
    _Bool _initiallyShowCuration;
    _Bool _shouldPresentTapToRadar;
    long long _currentCurationType;
    NSString *_hostLayoutDiagnosticDescription;
    NSString *_hostViewDiagnosticDescription;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *hostViewDiagnosticDescription; // @synthesize hostViewDiagnosticDescription=_hostViewDiagnosticDescription;
@property(copy, nonatomic) NSString *hostLayoutDiagnosticDescription; // @synthesize hostLayoutDiagnosticDescription=_hostLayoutDiagnosticDescription;
@property(nonatomic) _Bool shouldPresentTapToRadar; // @synthesize shouldPresentTapToRadar=_shouldPresentTapToRadar;
@property(nonatomic) long long currentCurationType; // @synthesize currentCurationType=_currentCurationType;
@property(nonatomic) _Bool initiallyShowCuration; // @synthesize initiallyShowCuration=_initiallyShowCuration;
- (id)radarRoutes;
- (id)radarDescriptionTemplate;
- (id)radarTitleTemplate;
- (id)radarComponentInfoForRoute:(id)arg1;
- (id)radarAttachmentURLs;
- (_Bool)generateSectionTitles:(out id *)arg1 andTableContent:(out id *)arg2 forIndex:(long long)arg3;
- (id)assetsForCurationType:(long long)arg1;
- (id)curationDebugInformationWithOptions:(id)arg1;
- (void)requestCurationDebugInfoWithOptions:(id)arg1 setGlobally:(_Bool)arg2;
- (id)fullCurationDebugInformation;
- (id)curationDebugInformationForCurationType:(long long)arg1;
- (id)_curationTypeKeys;
- (void)hideItemDetails:(id)arg1;
- (void)showItemDetailsWithDebugInfo:(id)arg1;
- (void)hideCurationSettings:(id)arg1;
- (void)showCurationSettings:(id)arg1;
- (void)addAssetUUIDsTo:(id)arg1 from:(id)arg2;
- (void)changeCurationType:(id)arg1;
- (void)reloadCuration;
- (void)displayCurrentCurationType;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_closeAction:(id)arg1;
- (void)_tapToRadar:(id)arg1;
- (id)_tapToRadarViewControllerWithScreenshot:(_Bool)arg1;
- (void)_switchLogsAction:(id)arg1;
- (void)_updateUIElementsVisibility;
- (void)_enumerateDifferencesBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_updateCachedAssets;
- (void)applySettings:(id)arg1 globally:(_Bool)arg2;
- (void)_editSettings:(id)arg1;
- (void)presentTapToRadarIfNeeded;
- (void)viewDidAppear:(_Bool)arg1;
- (void)showInfo:(id)arg1;
- (void)toggleCurationComparison:(id)arg1;
- (void)hideToolbarItems;
- (void)showToolbarItems;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

