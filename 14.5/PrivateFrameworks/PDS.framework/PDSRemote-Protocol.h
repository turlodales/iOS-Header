//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSSet, NSString, PDSUser;

@protocol PDSRemote
- (void)entriesForClientID:(NSString *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)entriesForUser:(PDSUser *)arg1 clientID:(NSString *)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (void)usersWithClientID:(NSString *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)activeUsersWithClientID:(NSString *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)removeAllEntriesForUser:(PDSUser *)arg1 withClientID:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)batchUpdateEntries:(NSSet *)arg1 forClientID:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)storeEntries:(NSSet *)arg1 deleteEntries:(NSSet *)arg2 withCompletion:(void (^)(NSError *))arg3;
@end

