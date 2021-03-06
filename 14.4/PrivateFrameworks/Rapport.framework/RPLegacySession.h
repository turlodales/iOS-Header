//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUMobileDeviceSession, NSMutableArray, NSString, RPDevice;
@protocol OS_dispatch_queue;

@interface RPLegacySession : NSObject
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSMutableArray *_messageSendQueue;
    _Bool _messagingReady;
    int _pairVerifyState;
    _Bool _secureReady;
    _Bool _mdEnabled;
    CUMobileDeviceSession *_mdSession;
    int _mdState;
    unsigned int _securityFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    RPDevice *_peerDevice;
    NSString *_serviceType;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _promptForPINHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) unsigned int securityFlags; // @synthesize securityFlags=_securityFlags;
@property(retain, nonatomic) RPDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)requestSystemInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_sendMessage:(id)arg1;
- (void)_sendQueuedMessages;
- (void)sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_unpairWithCompletion:(CDUnknownBlockType)arg1;
- (void)unpairWithCompletion:(CDUnknownBlockType)arg1;
- (void)_pairVerifyWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pairVerifyWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_pairSetupTryPIN:(id)arg1;
- (void)pairSetupTryPIN:(id)arg1;
- (void)_pairSetupWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pairSetupWithFlags:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (int)_runPairVerify;
- (int)_runMobileDeviceStart;
- (void)_run;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

