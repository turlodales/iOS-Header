//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrialServer/TRIXPCInternalServiceProtocol-Protocol.h>

@class TRIServerContext;
@protocol TRITaskQueuing, TRITrialInternalEntitled;

@interface TRIInternalServiceRequestHandler : NSObject <TRIXPCInternalServiceProtocol>
{
    TRIServerContext *_serverContext;
    id <TRITaskQueuing> _taskQueue;
    id <TRITrialInternalEntitled> _entitlementWitness;
}

- (void).cxx_destruct;
- (void)dynamicNamespaceRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)startDownloadNamespaceWithName:(id)arg1 teamId:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deregisterNamespaceWithNamespaceName:(id)arg1 teamId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(id)arg3 teamId:(id)arg4 appContainerId:(id)arg5 appContainerType:(long long)arg6 cloudKitContainerId:(int)arg7 completion:(CDUnknownBlockType)arg8;
- (void)setLastFetchDate:(id)arg1 forContainer:(int)arg2 teamId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)lastFetchDateForContainer:(int)arg1 teamId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)submitTask:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)experimentNotificationsWithExperimentId:(id)arg1 cloudKitContainer:(int)arg2 teamId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)taskRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithServerContext:(id)arg1 taskQueue:(id)arg2 entitlementWitness:(id)arg3;

@end

