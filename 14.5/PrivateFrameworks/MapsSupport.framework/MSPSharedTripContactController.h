//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSSet;
@protocol MSPSharedTripContactControllerDelegate, MSPSharedTripXPCServer, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSPSharedTripContactController : NSObject
{
    NSMutableOrderedSet *_contactsValues;
    NSSet *_activeHandles;
    NSMutableSet *_pendingContacts;
    id <MSPSharedTripXPCServer> _sharedTripServer;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    id <MSPSharedTripContactControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MSPSharedTripContactControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateActiveSharingHandles:(id)arg1;
- (void)updateActiveSharingHandles:(id)arg1;
- (id)_existingValueForContact:(id)arg1;
- (_Bool)_contactIsActive:(id)arg1;
- (_Bool)contactIsActive:(id)arg1;
- (id)_activeContactsValues;
@property(readonly, nonatomic) NSOrderedSet *activeContactsValues;
- (void)_stopAllSharingWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopAllSharingWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_stopSharingWithContactValue:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopSharingWithContactValue:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_didStartSharingWithContact:(id)arg1 withCapabilityType:(unsigned long long)arg2 error:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_shareWithContactValue:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shareWithContactValue:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_notifyDelegateContactsChanged;
- (id)initWithSharedTripServer:(id)arg1;

@end

