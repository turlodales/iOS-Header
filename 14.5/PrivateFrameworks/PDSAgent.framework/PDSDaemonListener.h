//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDSAgent/PDSRemote-Protocol.h>

@class NSArray, PDSEntryStore, PDSUserTracker;

@interface PDSDaemonListener : NSObject <PDSRemote>
{
    _Bool _bypassClientIDCheck;
    NSArray *_clientIDs;
    PDSEntryStore *_entryStore;
    PDSUserTracker *_userTracker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PDSUserTracker *userTracker; // @synthesize userTracker=_userTracker;
@property(retain, nonatomic) PDSEntryStore *entryStore; // @synthesize entryStore=_entryStore;
@property(retain, nonatomic) NSArray *clientIDs; // @synthesize clientIDs=_clientIDs;
@property(readonly, nonatomic) _Bool bypassClientIDCheck; // @synthesize bypassClientIDCheck=_bypassClientIDCheck;
- (void)entriesForClientID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)entriesForUser:(id)arg1 clientID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)usersWithClientID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)activeUsersWithClientID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeAllEntriesForUser:(id)arg1 withClientID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)batchUpdateEntries:(id)arg1 forClientID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)storeEntries:(id)arg1 deleteEntries:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)initWithClientIDs:(id)arg1 entryStore:(id)arg2 userTracker:(id)arg3;
- (id)initWithEntryStore:(id)arg1 userTracker:(id)arg2;

@end

