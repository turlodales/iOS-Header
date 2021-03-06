//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/ACDDatabaseProtocol-Protocol.h>

@class NSPersistentStoreCoordinator, NSString;

@interface ACDTransientDatabase : NSObject <ACDDatabaseProtocol>
{
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

- (void).cxx_destruct;
- (id)createConnection;
- (id)_addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

