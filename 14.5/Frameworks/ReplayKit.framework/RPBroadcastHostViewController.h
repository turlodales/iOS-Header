//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSXPCListenerEndpoint, RPBroadcastExtensionHostContext;

@interface RPBroadcastHostViewController : _UIRemoteViewController
{
    RPBroadcastExtensionHostContext *_hostContext;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
@property(retain, nonatomic) RPBroadcastExtensionHostContext *hostContext; // @synthesize hostContext=_hostContext;
- (void)updateBroadcastHandlerListenerEndpoint;
- (oneway void)completeSetupWithBroadcastURL:(id)arg1;

@end

