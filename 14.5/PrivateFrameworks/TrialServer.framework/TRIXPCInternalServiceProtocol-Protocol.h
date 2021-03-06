//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDate, NSString, NSURL, TRIDownloadOptions, TRITaskQueuingOptions;
@protocol TRITask;

@protocol TRIXPCInternalServiceProtocol
- (void)dynamicNamespaceRecordsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)startDownloadNamespaceWithName:(NSString *)arg1 teamId:(NSString *)arg2 options:(TRIDownloadOptions *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)deregisterNamespaceWithNamespaceName:(NSString *)arg1 teamId:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)registerNamespaceWithNamespaceName:(NSString *)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(NSURL *)arg3 teamId:(NSString *)arg4 appContainerId:(NSString *)arg5 appContainerType:(long long)arg6 cloudKitContainerId:(int)arg7 completion:(void (^)(_Bool, NSError *))arg8;
- (void)setLastFetchDate:(NSDate *)arg1 forContainer:(int)arg2 teamId:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)lastFetchDateForContainer:(int)arg1 teamId:(NSString *)arg2 completion:(void (^)(NSDate *, NSError *))arg3;
- (void)submitTask:(id <TRITask>)arg1 options:(TRITaskQueuingOptions *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)experimentNotificationsWithExperimentId:(NSString *)arg1 cloudKitContainer:(int)arg2 teamId:(NSString *)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)taskRecordsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

