//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRDMediaRemoteClient, NSObject;
@protocol OS_xpc_object;

@protocol MRDXPCMessageHandling <NSObject>
- (void)handleXPCMessage:(NSObject<OS_xpc_object> *)arg1 fromClient:(MRDMediaRemoteClient *)arg2;
@end

