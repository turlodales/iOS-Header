//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface CKDatabase : NSObject
{
    NSObject<OS_dispatch_queue> *_underlyingDispatchQueue;
    CKContainer *_container;
    long long _scope;
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) long long scope; // @synthesize scope=_scope;
@property(nonatomic) __weak CKContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *underlyingDispatchQueue; // @synthesize underlyingDispatchQueue=_underlyingDispatchQueue;
- (id)CKStatusReportArray;
- (void)fetchPCSFromCacheForZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearCacheEntriesForZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearCacheEntriesForRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearCachesWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getCorruptRecordsForAllZonesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearAuthTokensForRecordWithID:(id)arg1;
- (void)clearRecordCache;
- (void)showAssetCache;
- (void)clearAssetCache;
- (unsigned long long)countAssetCacheItems;
- (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)addOperation:(id)arg1;
@property(readonly, nonatomic) long long databaseScope;
- (id)description;
- (id)CKPropertiesDescription;
- (id)_initWithContainer:(id)arg1 scope:(long long)arg2;
- (id)init;
- (void)fetchAllSubscriptionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchSubscriptionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSubscriptionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveSubscription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveRecordZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAllRecordZonesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performQuery:(id)arg1 inZoneWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteRecordWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchRecordWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_scheduleOperation:(id)arg1;

@end

