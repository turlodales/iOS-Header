//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HMDMediaDestinationMessageHandler, HMFMessage, NSUUID;

@protocol HMDMediaDestinationMessageHandlerDelegate
- (void)mediaDestinationMessageHandler:(HMDMediaDestinationMessageHandler *)arg1 didReceiveUpdateAudioGroupIdentifierRequestMessage:(HMFMessage *)arg2 audioGroupIdentifier:(NSUUID *)arg3;
- (void)mediaDestinationMessageHandler:(HMDMediaDestinationMessageHandler *)arg1 didReceiveUpdateSupportedOptionsRequestMessage:(HMFMessage *)arg2 supportOptions:(unsigned long long)arg3;
@end

