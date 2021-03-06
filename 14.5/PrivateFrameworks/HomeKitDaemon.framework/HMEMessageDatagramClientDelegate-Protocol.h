//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMERouterClientDelegate-Protocol.h>

@class HMEMessageDatagramClient, NSArray, NSUUID;

@protocol HMEMessageDatagramClientDelegate <HMERouterClientDelegate>
- (void)clientDidDisconnect:(HMEMessageDatagramClient *)arg1;
- (void)clientDidConnect:(HMEMessageDatagramClient *)arg1 serverIdentifier:(NSUUID *)arg2;
- (void)client:(HMEMessageDatagramClient *)arg1 sendDisconnectWithCompletion:(void (^)(NSError *))arg2;
- (void)client:(HMEMessageDatagramClient *)arg1 sendChangeRegistrationsWithAddedFilters:(NSArray *)arg2 removedFilters:(NSArray *)arg3 completion:(void (^)(NSError *))arg4;
- (void)client:(HMEMessageDatagramClient *)arg1 sendConnectWithAddedFilters:(NSArray *)arg2 completion:(void (^)(NSUUID *, NSError *))arg3;
- (void)client:(HMEMessageDatagramClient *)arg1 sendKeepAliveWithCompletion:(void (^)(NSError *))arg2;
@end

