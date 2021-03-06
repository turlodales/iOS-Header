//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDiffableDataSourceSnapshot, NSMapTable, _UIDiffableDataSourceDiffer;

__attribute__((visibility("hidden")))
@interface _UIDiffableDataSourceSectionSnapshotRebaser : NSObject
{
    NSDiffableDataSourceSnapshot *_initialSnapshot;
    NSDiffableDataSourceSnapshot *_finalSnapshot;
    _UIDiffableDataSourceDiffer *_dataSourceDiffer;
    NSMapTable *_initialSectionSnapshots;
    NSMapTable *_rebasedSectionSnapshots;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *rebasedSectionSnapshots; // @synthesize rebasedSectionSnapshots=_rebasedSectionSnapshots;
- (id)_computeSectionTransactionsIncludingSectionDifferences:(_Bool)arg1;
- (id)_transactionIncludingSectionDifferences:(_Bool)arg1 source:(long long)arg2;
- (id)computeApplyTransactionIncludingSectionDifferences:(_Bool)arg1;
- (id)computeReorderingTransaction;
- (void)_rebaseForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4 shouldPerformChildSnapshotMoves:(_Bool)arg5;
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4 shouldPerformChildSnapshotMoves:(_Bool)arg5;
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3 dataSourceDiffer:(id)arg4;
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 initialSectionSnapshots:(id)arg3;

@end

