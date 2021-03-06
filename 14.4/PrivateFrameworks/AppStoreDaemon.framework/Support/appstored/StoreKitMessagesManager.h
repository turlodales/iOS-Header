//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PushMessageConsumer-Protocol.h"

@class NSString, StoreKitMessagesDatabaseStore;
@protocol OS_dispatch_queue;

@interface StoreKitMessagesManager : NSObject <PushMessageConsumer>
{
    StoreKitMessagesDatabaseStore *_databaseStore;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_removeRevocationsForAccountID:(id)arg1 inApp:(id)arg2;
- (void)_getRevocationsForAccountID:(id)arg1 inApp:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)addRevocationsForProductIdentifiers:(id)arg1 forBundleID:(id)arg2 forAccountID:(id)arg3;
- (void)_checkServerForMessagesForAccount:(id)arg1 messageInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)fetchRevocationsForOctaneWithBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)fetchRevocationsForAccount:(id)arg1 inApp:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)showMessage:(id)arg1 forAccount:(id)arg2 inApp:(id)arg3;
- (void)messageURLForAccount:(id)arg1 inApp:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

