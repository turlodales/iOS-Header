//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <PassKitUI/CNAvatarViewDelegate-Protocol.h>
#import <PassKitUI/PKAccountServiceObserver-Protocol.h>
#import <PassKitUI/PKForegroundActiveArbiterObserver-Protocol.h>
#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKitUI/PKSearchServiceObserver-Protocol.h>
#import <PassKitUI/PKWorldRegionUpdaterObserver-Protocol.h>
#import <PassKitUI/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <PassKitUI/UISearchResultsUpdating-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSObject, NSString, PKAccountService, PKDashboardPaymentTransactionItemPresenter, PKDashboardTitleHeaderView, PKFamilyMemberCollection, PKPassLibrary, PKSearchQuery, PKSearchResults, PKSearchService, PKSearchSuggestionCollectionViewCell, PKTransactionGroupItemPresenter, PKTransactionGroupThumbnailPresenter, PKTransactionHistoryViewController, PKTransactionSourceCollection, PKWorldRegionUpdater, UILabel;
@protocol OS_dispatch_queue, OS_dispatch_source, PKPaymentDataProvider;

@interface PKSearchResultsViewController : UICollectionViewController <CNAvatarViewDelegate, PKAccountServiceObserver, PKSearchServiceObserver, UICollectionViewDelegateFlowLayout, PKWorldRegionUpdaterObserver, PKForegroundActiveArbiterObserver, PKPaymentDataProviderDelegate, UISearchResultsUpdating>
{
    PKDashboardTitleHeaderView *_sampleHeaderView;
    PKSearchSuggestionCollectionViewCell *_sampleSuggestionCell;
    PKDashboardPaymentTransactionItemPresenter *_transactionPresenter;
    PKTransactionGroupItemPresenter *_transactionGroupPresenter;
    PKTransactionGroupThumbnailPresenter *_thumbnailPresenter;
    PKWorldRegionUpdater *_regionUpdater;
    PKFamilyMemberCollection *_familyCollection;
    PKSearchService *_searchService;
    PKAccountService *_accountService;
    PKPassLibrary *_passLibrary;
    id <PKPaymentDataProvider> _paymentDataProvider;
    NSDictionary *_accountsPerIdentifier;
    NSDictionary *_accountUserCollectionsPerIdentifier;
    PKTransactionSourceCollection *_transactionSourceCollection;
    struct os_unfair_lock_s _lockQuery;
    NSString *_currentQueryIdentifier;
    NSMutableOrderedSet *_lastQueries;
    PKSearchQuery *_queryForCurrentResults;
    PKSearchResults *_currentResults;
    _Bool _queryInProgress;
    NSMutableDictionary *_lastResultsPerQueryIdentifier;
    NSObject<OS_dispatch_queue> *_queuePrepareResults;
    NSArray *_transactions;
    NSArray *_categories;
    NSArray *_merchants;
    NSArray *_locations;
    NSArray *_people;
    NSArray *_suggestions;
    NSMutableDictionary *_passesForResults;
    _Bool _hasReceivedResults;
    _Bool _hasLoadedRequiredData;
    unsigned long long _presentationCounter;
    unsigned long long _seeAllPresentationCounter;
    PKTransactionHistoryViewController *_seeAllHistoryVC;
    NSObject<OS_dispatch_source> *_seeAllPresentationTimer;
    _Bool _queryHasNoResults;
    _Bool _fullResultsNotAvailable;
    _Bool _hasSearchableContent;
    UILabel *_noResultsTitleLabel;
    UILabel *_noResultsBodyLabel;
    _Bool _queryIsReplay;
    _Bool _keyboardVisible;
    struct CGRect _keyboardFrame;
    _Bool _usingThumbnailLayout;
    _Bool _atNaturalRestingBounds;
    _Bool _isScrolling;
    CDStruct_973bafd3 _foregroundActiveState;
    CDUnknownBlockType _pendingPreflightCompletion;
}

- (void).cxx_destruct;
- (void)didUpdateFamilyMembers:(id)arg1;
- (void)_updateAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)accountUsersChanged:(id)arg1 forAccountIdentifier:(id)arg2;
- (void)accountChanged:(id)arg1;
- (void)accountRemoved:(id)arg1;
- (void)accountAdded:(id)arg1;
- (void)_udpateOrPresentSeeAllViewControllerForQuery:(id)arg1 groups:(id)arg2 transactions:(id)arg3;
- (id)_historyViewControllerForQuery:(id)arg1 groups:(id)arg2 headerGroup:(id)arg3;
- (void)_seeAllHeaderGroupForQuery:(id)arg1 groups:(id)arg2 transactions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_initiateSeeAllPresentationForQuery:(id)arg1;
- (_Bool)_updateGroup:(id)arg1 withRegion:(id)arg2;
- (void)worldRegionUpdated:(id)arg1 updatedRegion:(id)arg2;
- (void)_updateLayoutForKeyboardAction:(CDUnknownBlockType)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillChange:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateUIIfPossibleWithResults:(id)arg1 query:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateUIWithResults:(id)arg1 forQuery:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveResults:(id)arg1 forQuery:(id)arg2;
- (_Bool)_isQueryIdentifierMatchingCurrentQuery:(id)arg1;
- (id)_queryWithIdentifier:(id)arg1;
- (void)invalidateSearchResults;
- (void)searchDidCompleteWithError:(id)arg1 results:(id)arg2 forIdentifier:(id)arg3;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)_applyMaskToCell:(id)arg1 firstInSection:(_Bool)arg2 lastInSection:(_Bool)arg3;
- (void)_configureSuggestionCell:(id)arg1 withSuggestion:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)_numberOfItemsInSection:(long long)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_configureHeaderView:(id)arg1 inSection:(unsigned long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)_resultsLayout;
- (id)_thumbnailLayout;
- (double)_thumbnailSpacing;
- (double)_thumbnailInset;
- (id)_searchController;
- (void)_scrollViewStoppedScrolling;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPaymentDataProvider:(id)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

