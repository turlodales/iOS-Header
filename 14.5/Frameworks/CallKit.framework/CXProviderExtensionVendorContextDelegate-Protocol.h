//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/NSObject-Protocol.h>

@class CXAction, CXProviderExtensionVendorContext, CXTransaction;

@protocol CXProviderExtensionVendorContextDelegate <NSObject>
- (void)providerExtensionVendorContext:(CXProviderExtensionVendorContext *)arg1 handledAudioSessionActivationStateChangedTo:(_Bool)arg2;
- (void)providerExtensionVendorContext:(CXProviderExtensionVendorContext *)arg1 handledActionTimeout:(CXAction *)arg2;
- (void)providerExtensionVendorContext:(CXProviderExtensionVendorContext *)arg1 receivedCommittedTransaction:(CXTransaction *)arg2;
@end

