//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/UICollectionViewDataSource-Protocol.h>
#import <WorkflowUI/UICollectionViewDelegate-Protocol.h>
#import <WorkflowUI/WFActionDrawerStateConfigurable-Protocol.h>

@class NSArray, NSString, UICollectionView, WFActionDrawerCoordinator;

@interface WFActionDrawerAppsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, WFActionDrawerStateConfigurable>
{
    WFActionDrawerCoordinator *_coordinator;
    NSArray *_appItems;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *appItems; // @synthesize appItems=_appItems;
@property(readonly, nonatomic) __weak WFActionDrawerCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (_Bool)moveToState:(id)arg1 animated:(_Bool)arg2;
- (id)state;
- (double)expectedCollectionViewWidth;
- (void)fetchBundleIdentifiersFromRecentDonationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchBundleIdentifiersFromActionRegistryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateAppItems;
- (double)insetForCollectionViewWidth:(double)arg1 numberOfItems:(long long)arg2 itemSize:(double)arg3 spacing:(double)arg4;
- (double)insetForEqualSpacingWithCollectionViewWidth:(double)arg1 numberOfItems:(long long)arg2 itemSize:(double)arg3;
- (long long)numberOfItemsWithWidth:(double)arg1 totalWidth:(double)arg2 minimumSpacing:(double)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

