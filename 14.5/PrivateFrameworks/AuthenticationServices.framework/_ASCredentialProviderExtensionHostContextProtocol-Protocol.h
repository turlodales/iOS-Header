//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthenticationServices/NSObject-Protocol.h>

@class ASPasswordCredential, NSError;

@protocol _ASCredentialProviderExtensionHostContextProtocol <NSObject>
- (void)prepareToCancelRequestWithError:(NSError *)arg1 completion:(void (^)(void))arg2;
- (void)prepareToCompleteExtensionConfigurationRequestWithCompletion:(void (^)(void))arg1;
- (void)prepareToCompleteRequestWithSelectedCredential:(ASPasswordCredential *)arg1 completion:(void (^)(void))arg2;
@end

