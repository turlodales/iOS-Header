//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSAuthenticateTask.h>

@class UIViewController;
@protocol AMSBagProtocol;

@interface AMSUIAuthenticateTask : AMSAuthenticateTask
{
    id <AMSBagProtocol> _bag;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (void)_handleDialogForFailedAuthenticationWithError:(id)arg1;
- (id)_updateAccountWithAuthKit:(id)arg1 error:(id *)arg2;
- (id)performAuthentication;
- (id)initWithRequest:(id)arg1 presentingViewController:(id)arg2;
- (id)initWithAccount:(id)arg1 presentingViewController:(id)arg2 options:(id)arg3;

@end

