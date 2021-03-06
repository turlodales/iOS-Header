//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <SleepHealth/HKSHSleepDaySummaryQueryClientInterface-Protocol.h>

@class NSMutableArray, NSString;

@interface HKSHSleepDaySummaryQuery : HKQuery <HKSHSleepDaySummaryQueryClientInterface>
{
    CDUnknownBlockType _resultsHandler;
    NSMutableArray *_summariesPendingDelivery;
    _Bool _ascending;
    _Bool _requireSleepAnalysis;
    _Bool _onlySleepAnalysis;
    long long _limit;
    CDStruct_ef5fcbe6 _morningIndexRange;
}

+ (void)configureClientInterface:(id)arg1;
+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool onlySleepAnalysis; // @synthesize onlySleepAnalysis=_onlySleepAnalysis;
@property(readonly, nonatomic) _Bool requireSleepAnalysis; // @synthesize requireSleepAnalysis=_requireSleepAnalysis;
@property(readonly, nonatomic) long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) _Bool ascending; // @synthesize ascending=_ascending;
@property(readonly, nonatomic) CDStruct_ef5fcbe6 morningIndexRange; // @synthesize morningIndexRange=_morningIndexRange;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)client_deliverDaySummaries:(id)arg1 clearPending:(_Bool)arg2 isFinalBatch:(_Bool)arg3 queryUUID:(id)arg4;
- (id)initWithMorningIndexRange:(CDStruct_ef5fcbe6)arg1 ascending:(_Bool)arg2 limit:(long long)arg3 requireSleepAnalysis:(_Bool)arg4 onlySleepAnalysis:(_Bool)arg5 resultsHandler:(CDUnknownBlockType)arg6;
- (id)initWithMorningIndexRange:(CDStruct_ef5fcbe6)arg1 ascending:(_Bool)arg2 limit:(long long)arg3 requireSleepAnalysis:(_Bool)arg4 resultsHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

