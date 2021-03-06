//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FMClient/_TtC8FMClient7Session.h>

#import <FMClient/_TtP8FMClient21ClientSessionProtocol_-Protocol.h>
#import <FMClient/_TtP8FMClient21ServerSessionProtocol_-Protocol.h>

@interface _TtC8FMClient7Session (FMClient) <_TtP8FMClient21ServerSessionProtocol_, _TtP8FMClient21ClientSessionProtocol_>
- (void)playSound:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deviceSearch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)discoverNearbyDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidateCacheWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)voiceAssistantSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)clientConfigurationWithUpdateConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)credential:(CDUnknownBlockType)arg1;
- (void)credentialNotAuthorizedWithCredential:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sessionInfoWithCompletion:(CDUnknownBlockType)arg1;
@end

