//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKSplittingDataSource.h>

@class GKGame, NSObject;
@protocol GKTurnBasedMatchesDataSourceDelegate;

@interface GKTurnBasedMatchesDataSource : GKSplittingDataSource
{
    NSObject<GKTurnBasedMatchesDataSourceDelegate> *_delegateWeak;
    GKGame *_game;
    SEL _detailPressedAction;
    struct UIEdgeInsets _cellMarginInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets cellMarginInsets; // @synthesize cellMarginInsets=_cellMarginInsets;
@property(nonatomic) SEL detailPressedAction; // @synthesize detailPressedAction=_detailPressedAction;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(nonatomic) __weak NSObject<GKTurnBasedMatchesDataSourceDelegate> *delegate; // @synthesize delegate=_delegateWeak;
- (unsigned long long)numberOfMatches;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureCollectionView:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)configureDataSource;

@end

