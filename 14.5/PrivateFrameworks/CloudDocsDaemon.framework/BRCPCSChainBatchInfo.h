//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAppLibrary, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface BRCPCSChainBatchInfo : NSObject
{
    NSMutableArray *_fullyChainRecordBatch;
    NSMutableDictionary *_fullyChainRecordInfoMap;
    NSMutableDictionary *_halfChainedRecordMap;
    NSMutableSet *_alreadyHalfChainedRecords;
    NSMutableArray *_recordsForFirstPhase;
    BRCAppLibrary *_appLibrary;
    _Bool _should2PhasePCSChain;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *halfChainedRecordMap; // @synthesize halfChainedRecordMap=_halfChainedRecordMap;
@property(readonly, nonatomic) _Bool should2PhasePCSChain;
@property(readonly, nonatomic) NSArray *recordsForSecondPhase;
@property(readonly, nonatomic) NSArray *recordsForFirstPhase;
@property(readonly, nonatomic) unsigned long long chainedRecordsCount;
@property(readonly, nonatomic) unsigned long long batchCount;
- (void)chainPreparedRecordBatch:(id)arg1;
- (void)_chainPreppedRecordToParent:(id)arg1;
- (void)addFullyChainedRecordInfo:(id)arg1;
- (void)prepareFirstPhaseRecordBatch;
- (_Bool)containsRecordInfo:(id)arg1;
- (id)initWithAppLibrary:(id)arg1;

@end

