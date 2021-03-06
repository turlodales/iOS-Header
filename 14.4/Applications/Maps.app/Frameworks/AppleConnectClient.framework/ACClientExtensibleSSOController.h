//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleConnectClient/ACClientExtensibleSSOAuthenticatorDelegate-Protocol.h>
#import <AppleConnectClient/ACClientExtensibleSSOController-Protocol.h>

@class NSMutableArray, NSString;
@protocol ACAppSSOMessagesTransformer, ACClientExtensibleSSOAuthenticator;

__attribute__((visibility("hidden")))
@interface ACClientExtensibleSSOController : NSObject <ACClientExtensibleSSOAuthenticatorDelegate, ACClientExtensibleSSOController>
{
    id <ACClientExtensibleSSOAuthenticator> _authenticator;
    id <ACAppSSOMessagesTransformer> _messagesTransformer;
    NSMutableArray *_pendingAuthRequests;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *pendingAuthRequests; // @synthesize pendingAuthRequests=_pendingAuthRequests;
@property(readonly, nonatomic) id <ACAppSSOMessagesTransformer> messagesTransformer; // @synthesize messagesTransformer=_messagesTransformer;
@property(readonly, nonatomic) id <ACClientExtensibleSSOAuthenticator> authenticator; // @synthesize authenticator=_authenticator;
- (void)extensibleSSOAuthenticator:(id)arg1 didCompleteWithError:(id)arg2;
- (void)extensibleSSOAuthenticator:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)sendAppSSOAuthenticationResponse:(id)arg1;
- (void)performAuthenticationWithRequest:(id)arg1;
- (void)authenticateWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)removeAllAuthenticationRequests;
- (id)removeAuthenticationRequestAtIndex:(unsigned long long)arg1;
- (id)allAuthenticationRequests;
- (id)authenticationRequestAtIndex:(unsigned long long)arg1;
- (unsigned long long)addAuthenticationRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (id)invalidParametersError;
- (id)initWithAuthenticator:(id)arg1 messagesTransformer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

