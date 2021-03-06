//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKFetchOperationDelegate-Protocol.h>

@class NSMutableArray, NSString;

@interface HKOutstandingFetchOperationManager : NSObject <HKFetchOperationDelegate>
{
    _Bool _needsRebalanceFetchOperations;
    NSMutableArray *_pendingNormalPriorityFetchOperations;
    NSMutableArray *_pendingHighPriorityFetchOperations;
    NSMutableArray *_activeFetchOperations;
    long long _maxConcurrentFetchOperations;
}

+ (id)sharedOperationManager;
+ (void)setSharedOperationManager:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long maxConcurrentFetchOperations; // @synthesize maxConcurrentFetchOperations=_maxConcurrentFetchOperations;
- (void)fetchOperationDidUpdatePriority:(id)arg1;
- (void)_logOperationCompletion:(id)arg1;
- (void)_logOperationStart:(id)arg1;
- (void)_executeFetchOperation:(id)arg1;
- (_Bool)_noHighPriorityActiveOperations;
- (void)_fillActiveFetchOperations;
- (void)_rebalanceFetchOperations;
- (void)_setNeedsRebalanceFetchOperations;
- (_Bool)_removeFetchOperationFromActiveOperations:(id)arg1;
- (_Bool)_removeFetchOperationFromPendingOperations:(id)arg1;
- (void)removeFetchOperation:(id)arg1;
- (void)removeFetchOperations:(id)arg1;
- (void)addFetchOperation:(id)arg1;
- (void)addFetchOperations:(id)arg1;
- (id)initWithMaxConcurrentFetchOperations:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

