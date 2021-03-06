//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoard/NSObject-Protocol.h>

@class NSSet, RBProcess, RBProcessStateChangeSet, RBSAuditToken, RBSLaunchRequest, RBSProcessHandle, RBSProcessIdentity, RBSProcessInstance, RBSProcessPredicate, RBSTerminateRequest, RBSystemState;
@protocol RBSProcessIdentifier;

@protocol RBProcessManaging <NSObject>
- (NSSet *)busyExtensionInstancesFromSet:(NSSet *)arg1;
- (void)removeStateForProcessIdentity:(RBSProcessIdentity *)arg1;
- (void)applySystemState:(RBSystemState *)arg1;
- (void)didUpdateProcessStates:(RBProcessStateChangeSet *)arg1 completion:(void (^)(void))arg2;
- (void)executeTerminateRequest:(RBSTerminateRequest *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (RBSProcessHandle *)executeLaunchRequest:(RBSLaunchRequest *)arg1 withError:(out id *)arg2;
- (_Bool)isActiveProcess:(RBProcess *)arg1;
- (NSSet *)processesMatchingPredicate:(RBSProcessPredicate *)arg1;
- (RBProcess *)processForInstance:(RBSProcessInstance *)arg1;
- (RBProcess *)processForIdentity:(RBSProcessIdentity *)arg1;
- (RBProcess *)processForAuditToken:(RBSAuditToken *)arg1;
- (RBProcess *)processForIdentifier:(id <RBSProcessIdentifier>)arg1;
@end

