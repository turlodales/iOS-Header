//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteLoginBase.h>

#import <HomeKitDaemon/HMDRemoteLoginInitiatorAuthenticationDelegate-Protocol.h>

@class HMDRemoteLoginAnisetteDataProviderBridge, HMDRemoteLoginInitiatorSession, HMDRemoteLoginMessageSender, NSString;

@interface HMDRemoteLoginInitiator : HMDRemoteLoginBase <HMDRemoteLoginInitiatorAuthenticationDelegate>
{
    HMDRemoteLoginInitiatorSession *_loginSession;
    HMDRemoteLoginAnisetteDataProviderBridge *_anisetteProviderBridge;
    HMDRemoteLoginMessageSender *_remoteMessageSender;
}

+ (_Bool)hasMessageReceiverChildren;
+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // @synthesize remoteMessageSender=_remoteMessageSender;
@property(retain, nonatomic) HMDRemoteLoginAnisetteDataProviderBridge *anisetteProviderBridge; // @synthesize anisetteProviderBridge=_anisetteProviderBridge;
@property(retain, nonatomic) HMDRemoteLoginInitiatorSession *loginSession; // @synthesize loginSession=_loginSession;
- (void)didCompleteAuthentication:(id)arg1 error:(id)arg2 loggedInAccount:(id)arg3;
- (id)messageReceiverChildren;
- (void)_resetCurrentSession:(id)arg1;
- (void)_callCompletion:(id)arg1 loggedInAccount:(id)arg2 authSession:(id)arg3;
- (void)_handleSignoutResponse:(id)arg1 error:(id)arg2 message:(id)arg3;
- (void)_handleRemoteLoginSignout:(id)arg1;
- (void)_proxyLoginWithSessionID:(id)arg1 authResults:(id)arg2 remoteDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleRemoteLoginProxyAuthentication:(id)arg1;
- (void)_handleProxyDeviceResponse:(id)arg1 error:(id)arg2 message:(id)arg3;
- (void)_handleRemoteLoginProxiedDevice:(id)arg1;
- (void)_companionLoginWithSessionID:(id)arg1 account:(id)arg2 remoteDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleRemoteLoginCompanionAuthentication:(id)arg1;
- (void)registerForMessages;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 remoteLoginHandler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

