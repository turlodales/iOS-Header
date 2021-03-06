//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKCollectionDataSource.h>

@class GKContactDataSource, NSArray, NSMutableArray, NSMutableDictionary, NSObject;
@protocol GKDashboardMultiplayerPickerDatasourceDelegate, GKDashboardNearbyBrowserDelegate;

@interface GKDashboardMultiplayerPickerDataSource : GKCollectionDataSource
{
    _Bool _showsAllFriends;
    _Bool _supportsNearby;
    _Bool _nearbyOnly;
    _Bool _browsingForNearbyPlayers;
    _Bool _didLoad;
    _Bool _excludesContacts;
    _Bool _showsAllSuggestions;
    NSMutableDictionary *_playerStates;
    NSArray *_searchPlayers;
    long long _maxSelectable;
    id <GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
    CDUnknownBlockType _nearbyPlayersChangedHandler;
    long long _friendSortFilterScope;
    NSObject<GKDashboardMultiplayerPickerDatasourceDelegate> *_delegate;
    NSArray *_contactPlayers;
    NSArray *_friendPlayers;
    NSArray *_suggestedPlayers;
    NSArray *_coreRecentPlayers;
    NSArray *_recentPlayers;
    NSMutableArray *_nearbyPlayers;
    NSArray *_hiddenPlayers;
    GKContactDataSource *_contactSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GKContactDataSource *contactSource; // @synthesize contactSource=_contactSource;
@property(nonatomic) _Bool showsAllSuggestions; // @synthesize showsAllSuggestions=_showsAllSuggestions;
@property(nonatomic) _Bool excludesContacts; // @synthesize excludesContacts=_excludesContacts;
@property(nonatomic) _Bool didLoad; // @synthesize didLoad=_didLoad;
@property(nonatomic) _Bool browsingForNearbyPlayers; // @synthesize browsingForNearbyPlayers=_browsingForNearbyPlayers;
@property(retain, nonatomic) NSArray *hiddenPlayers; // @synthesize hiddenPlayers=_hiddenPlayers;
@property(retain, nonatomic) NSMutableArray *nearbyPlayers; // @synthesize nearbyPlayers=_nearbyPlayers;
@property(retain, nonatomic) NSArray *recentPlayers; // @synthesize recentPlayers=_recentPlayers;
@property(retain, nonatomic) NSArray *coreRecentPlayers; // @synthesize coreRecentPlayers=_coreRecentPlayers;
@property(retain, nonatomic) NSArray *suggestedPlayers; // @synthesize suggestedPlayers=_suggestedPlayers;
@property(retain, nonatomic) NSArray *friendPlayers; // @synthesize friendPlayers=_friendPlayers;
@property(retain, nonatomic) NSArray *contactPlayers; // @synthesize contactPlayers=_contactPlayers;
@property(nonatomic) __weak NSObject<GKDashboardMultiplayerPickerDatasourceDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long friendSortFilterScope; // @synthesize friendSortFilterScope=_friendSortFilterScope;
@property(copy, nonatomic) CDUnknownBlockType nearbyPlayersChangedHandler; // @synthesize nearbyPlayersChangedHandler=_nearbyPlayersChangedHandler;
@property(nonatomic) id <GKDashboardNearbyBrowserDelegate> nearbyDelegate; // @synthesize nearbyDelegate=_nearbyDelegate;
@property(nonatomic) _Bool nearbyOnly; // @synthesize nearbyOnly=_nearbyOnly;
@property(nonatomic) _Bool supportsNearby; // @synthesize supportsNearby=_supportsNearby;
@property(nonatomic) _Bool showsAllFriends; // @synthesize showsAllFriends=_showsAllFriends;
@property(nonatomic) long long maxSelectable; // @synthesize maxSelectable=_maxSelectable;
@property(retain, nonatomic) NSArray *searchPlayers; // @synthesize searchPlayers=_searchPlayers;
@property(retain, nonatomic) NSMutableDictionary *playerStates; // @synthesize playerStates=_playerStates;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)boundingSizeForItemsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (unsigned long long)cornerMaskForSectionHeader;
- (id)attributedFriendFilterTitle;
- (double)playerCellHeightInCollectionView:(id)arg1;
- (_Bool)_canShowMoreSuggestions;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)isShowingAddFriendsFooter;
- (id)headerTextForSection:(long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
@property(readonly, nonatomic) _Bool hasFriends;
@property(readonly, nonatomic) _Bool isShowingNearbyInstructionCell;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setNearbyPlayer:(id)arg1 reachable:(_Bool)arg2;
- (void)setNearbyPlayerID:(id)arg1 reachable:(_Bool)arg2;
- (void)searchTextHasChanged;
- (id)alternateSearchKeyForSection:(long long)arg1;
- (id)searchKeyForSection:(long long)arg1;
- (id)indexPathForFirstPlayer;
- (id)indexPathsForPlayer:(id)arg1;
- (id)firstIndexPathForPlayer:(id)arg1;
- (id)fullContactWithIdentifier:(id)arg1;
- (unsigned long long)cornerMaskForItemAtIndexPath:(id)arg1;
- (_Bool)cellSelectableStateAtIndexPath:(id)arg1 playerState:(unsigned long long)arg2;
- (void)clearSelection;
@property(readonly, nonatomic) NSArray *selectedPlayers;
- (id)playerForPlayerID:(id)arg1;
- (_Bool)isPlayerAtIndexPathCoreRecent:(id)arg1;
- (id)playerForIndexPath:(id)arg1;
- (id)playersForSection:(long long)arg1 ignoreSearch:(_Bool)arg2;
- (double)preferredCollectionHeight;
@property(readonly, nonatomic) long long unmodifiedItemCount;
- (long long)itemCount;
- (id)filterHiddenPlayersPredicate;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sortPlayersByRecentlyPlayed:(id)arg1;
- (void)sortPlayersByNickname:(id)arg1;
- (void)setupCollectionView:(id)arg1;
- (id)initWithMaxSelectable:(long long)arg1 hiddenPlayers:(id)arg2 nearbyOnly:(_Bool)arg3;

@end

