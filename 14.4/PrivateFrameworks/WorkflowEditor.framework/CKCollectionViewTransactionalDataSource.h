//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowEditor/CKTransactionalComponentDataSourceListener-Protocol.h>
#import <WorkflowEditor/UICollectionViewDataSource-Protocol.h>

@class CKComponentDataSourceAttachController, CKTransactionalComponentDataSource, CKTransactionalComponentDataSourceState, NSMapTable, NSString, UICollectionView;
@protocol CKSupplementaryViewDataSource;

@interface CKCollectionViewTransactionalDataSource : NSObject <UICollectionViewDataSource, CKTransactionalComponentDataSourceListener>
{
    CKTransactionalComponentDataSource *_componentDataSource;
    id <CKSupplementaryViewDataSource> _supplementaryViewDataSource;
    CDUnknownFunctionPointerType _cellConfigurationFunction;
    CKTransactionalComponentDataSourceState *_currentState;
    CKComponentDataSourceAttachController *_attachController;
    NSMapTable *_cellToIndexPathMap;
    NSMapTable *_indexPathToCellMap;
    NSMapTable *_cellToItemMap;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) __weak id <CKSupplementaryViewDataSource> supplementaryViewDataSource; // @synthesize supplementaryViewDataSource=_supplementaryViewDataSource;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)announceDidEndDisplayingCell:(id)arg1;
- (void)announceWillDisplayCell:(id)arg1;
- (void)updateConfiguration:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)reloadWithMode:(unsigned long long)arg1 userInfo:(id)arg2;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (id)modelForItemAtIndexPath:(id)arg1;
- (void)_detachComponentLayoutForRemovedItemsAtIndexPaths:(id)arg1 inState:(id)arg2;
- (void)transactionalComponentDataSource:(id)arg1 didModifyPreviousState:(id)arg2 byApplyingChanges:(id)arg3;
- (void)applyChangeset:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)initWithCollectionView:(id)arg1 supplementaryViewDataSource:(id)arg2 configuration:(id)arg3 cellConfigurationFunction:(CDUnknownFunctionPointerType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

