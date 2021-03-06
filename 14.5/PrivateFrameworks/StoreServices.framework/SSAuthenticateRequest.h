//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString, SSAuthenticationContext, SSLogConfig, UIViewController;
@protocol SSAuthenticateRequestDelegate;

@interface SSAuthenticateRequest : SSRequest <SSXPCCoding>
{
    SSAuthenticationContext *_authenticationContext;
    SSLogConfig *_logConfig;
    UIViewController *__parentViewController;
}

+ (_Bool)_isAuthkitEntitled;
+ (id)_accountToAuthenticateWithAuthenticationContext:(id)arg1;
+ (_Bool)localAuthenticationAvailable;
- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *_parentViewController; // @synthesize _parentViewController=__parentViewController;
@property(retain, nonatomic) SSLogConfig *logConfig; // @synthesize logConfig=_logConfig;
- (id)_verifyCredentialsOptionsFromUpdateAccountResponse:(id)arg1 skipAuthKit:(_Bool)arg2;
- (_Bool)_shouldRunAuthenticationForAccount:(id)arg1;
- (long long)_responseTypeForError:(id)arg1;
- (void)_performRemoteAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleDialogFromError:(id)arg1;
@property(readonly, nonatomic) NSString *logUUID;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)start;
- (void)startWithAuthenticateResponseBlock:(CDUnknownBlockType)arg1;
- (id)run;
@property(readonly) SSAuthenticationContext *authenticationContext;
- (id)initWithAuthenticationContext:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <SSAuthenticateRequestDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

