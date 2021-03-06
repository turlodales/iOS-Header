//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPersistentContainer;

@interface NGMReplayManager : NSObject
{
    NSPersistentContainer *_persistentContainer;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (_Bool)deleteExpiredSendingDestinations;
- (_Bool)deleteReceivingCountersForKey:(id)arg1;
- (id)registeredPrekeyForNGMPrekey:(id)arg1 objectContext:(id)arg2;
- (_Bool)processFetchRequestAndValidate:(id)arg1 counter:(unsigned int)arg2 commit:(_Bool)arg3 theirIdentity:(id)arg4 prekey:(id)arg5 error:(id *)arg6;
- (CDUnknownBlockType)validateIncomingCounter:(unsigned int)arg1 prekey:(id)arg2 publicIdentity:(id)arg3 error:(id *)arg4;
- (unsigned int)counterForDestinationWithIdentityKey:(id)arg1 sendingIdentity:(id)arg2 error:(id *)arg3 success:(_Bool *)arg4;
- (id)computeDestinationHashForIncomingMessageFrom:(id)arg1 toLocalKey:(id)arg2;
- (id)computeDestinationHashForOutgoingMessageTo:(id)arg1 withLocalKey:(id)arg2;
- (void)logDatabaseCreationDate:(id)arg1;
- (id)persistentContainerWithError:(id *)arg1;
- (id)objectContextWithError:(id *)arg1;
- (id)persistentStoreDescription;
- (_Bool)isRunningTests;
- (_Bool)isXCTest;
- (_Bool)isBATS;
- (id)dbNameFromProcess;

@end

