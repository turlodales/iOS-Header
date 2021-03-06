//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccessory, HMDDevice, HMDMessageDispatcher, HMFUnfairLock, NSMutableArray, NSString;

@interface HMDCameraResidentMessageHandler : HMFObject <HMFLogging>
{
    HMDAccessory *_accessory;
    HMDMessageDispatcher *_messageDispatcher;
    NSString *_logIdentifier;
    NSMutableArray *_queuedMessages;
    HMFUnfairLock *_lock;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly) NSMutableArray *queuedMessages; // @synthesize queuedMessages=_queuedMessages;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) HMDMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
- (void)sendNextMessage;
- (id)nextMessage;
- (id)dequeueMessage;
- (void)enqueueMessage:(id)arg1;
@property(readonly) _Bool companionIsResident;
@property(readonly) HMDDevice *residentDeviceForCamera;
- (void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 device:(id)arg5 responseQueue:(id)arg6 responseHandler:(CDUnknownBlockType)arg7;
- (id)initWithAccessory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

