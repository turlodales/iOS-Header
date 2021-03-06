//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentInformationEventExtensionBaseContext.h>

#import <PassKitCore/PKPaymentInformationEventExtensionHostContextProtocol-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface PKPaymentInformationEventExtensionHostContext : PKPaymentInformationEventExtensionBaseContext <PKPaymentInformationEventExtensionHostContextProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)replyQueue;
- (void)handleConfigurationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleSignatureRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleInformationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)vendorContextWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)vendorContext;

@end

