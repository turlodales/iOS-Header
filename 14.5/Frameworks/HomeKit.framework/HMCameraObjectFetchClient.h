//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class HMFMessageDestination, NSDictionary, NSMutableArray, NSObject, NSString, NSUUID, _HMContext;
@protocol OS_dispatch_queue;

@interface HMCameraObjectFetchClient : HMFObject <HMFLogging, HMFMessageReceiver>
{
    NSUUID *_UUID;
    _HMContext *_context;
    NSString *_messageName;
    HMFMessageDestination *_destination;
    NSDictionary *_payload;
    Class _classForUnarchiving;
    NSMutableArray *_fetchedObjects;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) NSMutableArray *fetchedObjects; // @synthesize fetchedObjects=_fetchedObjects;
@property(retain) Class classForUnarchiving; // @synthesize classForUnarchiving=_classForUnarchiving;
@property(copy) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, copy) HMFMessageDestination *destination; // @synthesize destination=_destination;
@property(readonly, copy) NSString *messageName; // @synthesize messageName=_messageName;
@property(readonly) _HMContext *context; // @synthesize context=_context;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (void)handleDidFetchObjectsMessage:(id)arg1;
- (void)fetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithUUID:(id)arg1 context:(id)arg2 messageName:(id)arg3 destination:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

