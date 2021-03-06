//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSAuthenticateTask.h>

#import <AppleMediaServicesUI/AMSAuthenticateTaskDelegate-Protocol.h>

@class NSString, UIViewController;
@protocol AMSBagProtocol;

@interface AMSUIAuthenticateTask : AMSAuthenticateTask <AMSAuthenticateTaskDelegate>
{
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (id)_createAuthKitUpdateTaskForAccount:(id)arg1;
- (void)authenticateTask:(id)arg1 handleDialogRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)performAuthentication;
- (id)initWithRequest:(id)arg1 presentingViewController:(id)arg2;
- (id)initWithAccount:(id)arg1 presentingViewController:(id)arg2 options:(id)arg3;

// Remaining properties
@property(retain, nonatomic) id <AMSBagProtocol> bag;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

