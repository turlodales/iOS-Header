//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSXPCConnection, PKXPCService;

@protocol PKXPCServiceDelegate <NSObject>
- (void)remoteService:(PKXPCService *)arg1 didInterruptConnection:(NSXPCConnection *)arg2;
- (void)remoteService:(PKXPCService *)arg1 didEstablishConnection:(NSXPCConnection *)arg2;

@optional
- (void)remoteServiceDidSuspend:(PKXPCService *)arg1;
- (void)remoteServiceDidResume:(PKXPCService *)arg1;
@end

