//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BPSBuddyControllerHolding-Protocol.h"
#import "COSAppleIDAuthControllerDelegate-Protocol.h"
#import "COSBuddyController-Protocol.h"

@class AAUISignInViewController, COSAppleIDAuthController, NSArray, NSString;
@protocol COSBuddyControllerDelegate;

@interface COSCreateAppleIDController : UIViewController <COSAppleIDAuthControllerDelegate, COSBuddyController, BPSBuddyControllerHolding>
{
    id <COSBuddyControllerDelegate> _delegate;
    COSAppleIDAuthController *_authController;
    AAUISignInViewController *_signInController;
    NSArray *_stashedNavState;
}

+ (_Bool)controllerNeedsToRun;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *stashedNavState; // @synthesize stashedNavState=_stashedNavState;
@property(retain, nonatomic) AAUISignInViewController *signInController; // @synthesize signInController=_signInController;
@property(retain, nonatomic) COSAppleIDAuthController *authController; // @synthesize authController=_authController;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)appleIDAuthController:(id)arg1 didSignInWithSuccess:(_Bool)arg2 error:(id)arg3;
- (id)localizedWaitScreenDescription;
- (void)startCreation;
- (double)waitScreenPushGracePeriod;
- (_Bool)holdWithWaitScreen;
- (_Bool)holdBeforeDisplaying;
- (id)performanceMonitorActivityName;
- (_Bool)allowSkipping;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

