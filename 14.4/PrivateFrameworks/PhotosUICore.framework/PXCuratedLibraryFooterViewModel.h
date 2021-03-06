//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFooterViewModel.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXCloudQuotaControllerDelegate-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSArray, NSString, PXAssetsDataSourceCountsController, PXCPLUIStatusProvider, PXCloudQuotaController, PXContentFilterFooterController, PXCuratedLibraryAnalysisStatus, PXCuratedLibraryViewModel, PXFooterSettings;
@protocol PXCuratedLibraryFooterViewModelPresentationDelegate;

@interface PXCuratedLibraryFooterViewModel : PXFooterViewModel <PXCloudQuotaControllerDelegate, PXChangeObserver, PXSettingsKeyObserver>
{
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    PXCloudQuotaController *_cloudQuotaController;
    PXCuratedLibraryViewModel *_curatedLibraryViewModel;
    PXContentFilterFooterController *_filterFooterController;
    long long _animatedGridCycleIndex;
    _Bool _hasImportantInformation;
    _Bool _isFooterShown;
    NSArray *_syncProgressAlbums;
    id <PXCuratedLibraryFooterViewModelPresentationDelegate> _presentingDelegate;
    long long _mode;
    PXCuratedLibraryAnalysisStatus *_analysisStatus;
    PXAssetsDataSourceCountsController *_itemCountsController;
    PXFooterSettings *_settings;
}

+ (_Bool)hasCPLStatusForCPLUIStatus:(id)arg1;
+ (_Bool)hasAnalysisProgressForMode:(long long)arg1 analysisStatus:(id)arg2 cplUIStatus:(id)arg3 userDefaults:(id)arg4 outAnimatedIconMode:(long long *)arg5 outProgress:(float *)arg6 outTitle:(id *)arg7 outDescription:(id *)arg8;
+ (id)_titleWithOptionalDescription:(id *)arg1 progress:(float *)arg2 forMode:(long long)arg3 itemCountsController:(id)arg4 analysisStatus:(id)arg5 cplUIStatus:(id)arg6 inRebuild:(_Bool)arg7;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFooterShown; // @synthesize isFooterShown=_isFooterShown;
@property(readonly, nonatomic) PXFooterSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) PXAssetsDataSourceCountsController *itemCountsController; // @synthesize itemCountsController=_itemCountsController;
@property(readonly, nonatomic) PXCuratedLibraryAnalysisStatus *analysisStatus; // @synthesize analysisStatus=_analysisStatus;
@property(readonly, nonatomic) PXCloudQuotaController *cloudQuotaController; // @synthesize cloudQuotaController=_cloudQuotaController;
@property(readonly, nonatomic) _Bool hasImportantInformation; // @synthesize hasImportantInformation=_hasImportantInformation;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <PXCuratedLibraryFooterViewModelPresentationDelegate> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)presentingViewControllerForCloudQuotaController:(id)arg1;
- (void)cloudQuotaController:(id)arg1 informationBannerDidChange:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateExposedProperties;
- (void)_updateHasImportantInformation;
@property(readonly, nonatomic) NSArray *syncProgressAlbums; // @synthesize syncProgressAlbums=_syncProgressAlbums;
@property(readonly, nonatomic) _Bool shouldAlternateTitleWithAnimatedGridCycle;
- (void)footerAnimationCrossedGridCycleBoundary;
- (void)didHideFooter;
- (void)didShowFooter;
- (void)setHasImportantInformation:(_Bool)arg1;
- (id)initWithItemCountsController:(id)arg1 cplUIStatusProvider:(id)arg2 analysisStatus:(id)arg3 mode:(long long)arg4 viewModel:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

