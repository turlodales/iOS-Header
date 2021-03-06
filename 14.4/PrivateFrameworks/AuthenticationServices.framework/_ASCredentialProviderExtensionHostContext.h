//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <AuthenticationServices/_ASCredentialProviderExtensionHostContextProtocol-Protocol.h>
#import <AuthenticationServices/_ASExtensionHostContext-Protocol.h>

@class NSString;
@protocol _ASCredentialProviderExtensionHostContextDelegate;

@interface _ASCredentialProviderExtensionHostContext : NSExtensionContext <_ASCredentialProviderExtensionHostContextProtocol, _ASExtensionHostContext>
{
    id <_ASCredentialProviderExtensionHostContextDelegate> _delegate;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
- (void).cxx_destruct;
@property(nonatomic) __weak id <_ASCredentialProviderExtensionHostContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareToCompleteExtensionConfigurationRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareToCancelRequestWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareToCompleteRequestWithSelectedCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

