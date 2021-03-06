//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBMainWorkspaceTransaction.h>

#import <SpringBoard/FBApplicationProcessLaunchTransactionObserver-Protocol.h>

@class NSMapTable, NSMutableSet, NSString;

@interface SBSuspendedWorkspaceTransaction : SBMainWorkspaceTransaction <FBApplicationProcessLaunchTransactionObserver>
{
    NSMapTable *_launchTransactionToSceneEntityMap;
    NSMutableSet *_outstandingProcessLaunchTransactions;
    NSMutableSet *_incompleteProcessLaunchTransactions;
    _Bool _anyLaunchFailed;
}

- (void).cxx_destruct;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)_didComplete;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_begin;
- (void)_sendActivationResultWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

