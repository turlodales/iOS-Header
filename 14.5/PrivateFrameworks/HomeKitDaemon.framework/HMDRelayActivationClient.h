//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPRelayActivationClient.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccessory, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDRelayActivationClient : HAPRelayActivationClient <HMFLogging>
{
    HMDAccessory *_accessory;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_challengeIdentifier;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *challengeIdentifier; // @synthesize challengeIdentifier=_challengeIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
- (void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3;
- (void)requestChallenge;
- (void)_closeWithError:(id)arg1;
- (void)close;
- (void)open;
- (id)initWithAccessory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

