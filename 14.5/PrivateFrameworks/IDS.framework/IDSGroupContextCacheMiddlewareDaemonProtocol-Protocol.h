//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ENGroupID, ENStableGroupID;

@protocol IDSGroupContextCacheMiddlewareDaemonProtocol
- (void)deleteAllCachedValuesForGroupWithID:(ENGroupID *)arg1 WithCompletion:(void (^)(void))arg2;
- (void)deleteAllKnownGroupsWithCompletion:(void (^)(void))arg1;
- (void)fetchAllKnownGroups:(void (^)(NSArray *))arg1;
- (void)latestCachedGroupWithStableID:(ENStableGroupID *)arg1 completion:(void (^)(ENGroup *))arg2;
@end

