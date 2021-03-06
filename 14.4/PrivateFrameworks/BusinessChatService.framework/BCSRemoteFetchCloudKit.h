//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSBloomFilterAndConfigRemoteFetching-Protocol.h>
#import <BusinessChatService/BCSConfigRemoteFetching-Protocol.h>
#import <BusinessChatService/BCSItemRemoteFetching-Protocol.h>
#import <BusinessChatService/BCSShardItemInstantiating-Protocol.h>
#import <BusinessChatService/BCSShardRemoteFetching-Protocol.h>
#import <BusinessChatService/BSDescriptionProviding-Protocol.h>

@class CKContainer, NSString;
@protocol BCSBloomFilterExtractorProtocol, BCSCloudKitDatabaseProtocol, BCSCloudKitQueryProviding, BCSCoalesceHelperProtocol, BCSICloudServerEnvironmentProtocol, BCSMetricFactoryProtocol, BCSOperationGroupFactoryProtocol, BCSQueryOperationFactoryProtocol, BCSQueryOperationProtocol;

@interface BCSRemoteFetchCloudKit : NSObject <BSDescriptionProviding, BCSConfigRemoteFetching, BCSShardRemoteFetching, BCSBloomFilterAndConfigRemoteFetching, BCSItemRemoteFetching, BCSShardItemInstantiating>
{
    id <BCSICloudServerEnvironmentProtocol> _environment;
    id <BCSCloudKitDatabaseProtocol> _database;
    id <BCSQueryOperationProtocol> _queryOperation;
    id <BCSCloudKitQueryProviding> _queryProvider;
    id <BCSQueryOperationFactoryProtocol> _queryOperationFactory;
    CKContainer *_databaseContainer;
    id <BCSCoalesceHelperProtocol> _coalesceHelper;
    id <BCSBloomFilterExtractorProtocol> _bloomFilterExtractor;
    id <BCSOperationGroupFactoryProtocol> _operationGroupFactory;
    id <BCSMetricFactoryProtocol> _metricFactory;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) id <BCSMetricFactoryProtocol> metricFactory; // @synthesize metricFactory=_metricFactory;
@property(readonly, retain, nonatomic) id <BCSOperationGroupFactoryProtocol> operationGroupFactory; // @synthesize operationGroupFactory=_operationGroupFactory;
@property(readonly, retain, nonatomic) id <BCSBloomFilterExtractorProtocol> bloomFilterExtractor; // @synthesize bloomFilterExtractor=_bloomFilterExtractor;
@property(readonly, retain, nonatomic) id <BCSCoalesceHelperProtocol> coalesceHelper; // @synthesize coalesceHelper=_coalesceHelper;
@property(readonly, retain, nonatomic) id <BCSICloudServerEnvironmentProtocol> environment; // @synthesize environment=_environment;
@property(readonly, retain, nonatomic) CKContainer *databaseContainer; // @synthesize databaseContainer=_databaseContainer;
@property(readonly, retain, nonatomic) id <BCSQueryOperationFactoryProtocol> queryOperationFactory; // @synthesize queryOperationFactory=_queryOperationFactory;
@property(readonly, retain, nonatomic) id <BCSCloudKitQueryProviding> queryProvider; // @synthesize queryProvider=_queryProvider;
@property(readonly, retain, nonatomic) id <BCSCloudKitDatabaseProtocol> database; // @synthesize database=_database;
- (void)_configureOperationForQuery:(id)arg1 clientBundleID:(id)arg2 xpcActivity:(id)arg3 requestSpecificAdditionalHTTPHeaders:(id)arg4 type:(long long)arg5;
- (id)_queryOperationForQuery:(id)arg1 configurationBlock:(CDUnknownBlockType)arg2 multipleFetchCompletion:(CDUnknownBlockType)arg3;
- (id)_queryOperationForQuery:(id)arg1 configurationBlock:(CDUnknownBlockType)arg2 singleFetchCompletion:(CDUnknownBlockType)arg3;
- (id)_queryOperationForQuery:(id)arg1 clientBundleID:(id)arg2 xpcActivity:(id)arg3 requestSpecificAdditionalHTTPHeaders:(id)arg4 type:(long long)arg5 multipleFetchCompletion:(CDUnknownBlockType)arg6;
- (id)_queryOperationForQuery:(id)arg1 clientBundleID:(id)arg2 xpcActivity:(id)arg3 requestSpecificAdditionalHTTPHeaders:(id)arg4 type:(long long)arg5 singleFetchCompletion:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic) long long supportedType;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)shardItemFromURL:(id)arg1;
- (id)_itemsFromCloudKitResults:(id)arg1 forType:(long long)arg2;
- (id)_additionalHTTPHeadersForItemFetchWithType:(long long)arg1;
- (void)fetchItemsWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3 forClientBundleID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_additionalHTTPHeadersForConfigAndShardFetchWithType:(long long)arg1;
- (void)fetchBloomFilterAndConfigItemWithType:(long long)arg1 clientBundleID:(id)arg2 xpcActivity:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchBloomFilterAndConfigItemWithType:(long long)arg1 clientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_additionalHTTPHeadersForShardFetchWithType:(long long)arg1;
- (void)fetchShardMatching:(id)arg1 clientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_additionalHTTPHeadersForConfigFetchWithType:(long long)arg1;
- (void)fetchConfigItemWithType:(long long)arg1 clientBundleID:(id)arg2 xpcActivity:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchConfigItemWithType:(long long)arg1 clientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithEnvironment:(id)arg1 database:(id)arg2 databaseContainer:(id)arg3 queryProvider:(id)arg4 queryOperationFactory:(id)arg5 coalesceHelper:(id)arg6 bloomFilterExtractor:(id)arg7 operationGroupFactory:(id)arg8 metricFactory:(id)arg9;
- (id)initWithEnvironment:(id)arg1 database:(id)arg2 databaseContainer:(id)arg3 queryOperationFactory:(id)arg4 coalesceHelper:(id)arg5 bloomFilterExtractor:(id)arg6 operationGroupFactory:(id)arg7 metricFactory:(id)arg8;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

