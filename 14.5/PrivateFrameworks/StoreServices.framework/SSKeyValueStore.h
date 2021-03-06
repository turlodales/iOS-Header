//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSKeyValueStoreDatabase, SSXPCConnection;

@interface SSKeyValueStore : NSObject
{
    SSXPCConnection *_connection;
    SSKeyValueStoreDatabase *_database;
    _Bool _useLocalRead;
    _Bool _useLocalWrite;
}

+ (_Bool)isLocalReadable;
- (void)_loadDatabaseIfNecessary;
- (void)removeAccountFromDomain:(id)arg1;
- (void)readUsingSessionBlock:(CDUnknownBlockType)arg1;
- (void)modifyUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (id)iTunesValueForKey:(id)arg1 usedDomain:(id *)arg2;
@property(readonly, getter=isLocalWritable) _Bool localWritable;
@property(readonly, getter=isLocalReadable) _Bool localReadable;
- (id)copyAccounts;
- (void)removeAccountDictionaries;
- (id)accountDictionaries;
- (void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2;
- (void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)removeAllValuesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)removeAllValuesForDomain:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeAllValuesForDomain:(id)arg1;
- (void)getValuesForDomain:(id)arg1 keys:(const id *)arg2 count:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)getValueForDomain:(id)arg1 key:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

