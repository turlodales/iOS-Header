//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEAgentExtension.h>

#import <NetworkExtension/NEExtensionTunnelProviderHostDelegate-Protocol.h>
#import <NetworkExtension/NEVPNPluginDriver-Protocol.h>

@class NSString;

@interface NEAgentTunnelExtension : NEAgentExtension <NEExtensionTunnelProviderHostDelegate, NEVPNPluginDriver>
{
    _Bool _cancelCalled;
}

@property _Bool cancelCalled; // @synthesize cancelCalled=_cancelCalled;
- (void)sendStatus:(long long)arg1 withDisconnectError:(id)arg2;
- (void)sendExtensionFailed;
- (void)handleExtensionStartedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)extension:(id)arg1 didRequestSocket:(_Bool)arg2 interface:(id)arg3 local:(id)arg4 remote:(id)arg5 effectivePID:(int)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)extensionDidDetachIPC:(id)arg1;
- (void)extension:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)extension:(id)arg1 didSetStatus:(long long)arg2;
- (void)extension:(id)arg1 didStartWithError:(id)arg2;
- (void)attachIPCWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)disconnectWithReason:(int)arg1;
- (void)connectWithParameters:(id)arg1;
- (id)driverInterface;
- (id)managerInterface;
- (void)handleAppsUpdateEnds:(id)arg1;
- (void)handleAppsUpdateEnding:(id)arg1;
- (void)handleAppsUpdateBegins:(id)arg1;
- (void)handleAppsUninstalled:(id)arg1;
- (void)handleCancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

