//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BPSBuddyControllerHolding-Protocol.h"
#import "COSBuddyController-Protocol.h"

@class COSAppleIDAuthController, NSDictionary, NSSManager, NSString;
@protocol COSBuddyControllerDelegate;

@interface COSTinkerFamilyCirclePostcheckViewController : UIViewController <COSBuddyController, BPSBuddyControllerHolding>
{
    id <COSBuddyControllerDelegate> _delegate;
    NSDictionary *_familyMemberAccount;
    NSSManager *_nssManager;
    COSAppleIDAuthController *_authController;
}

+ (_Bool)controllerNeedsToRun;
- (void).cxx_destruct;
@property(retain, nonatomic) COSAppleIDAuthController *authController; // @synthesize authController=_authController;
@property(retain, nonatomic) NSSManager *nssManager; // @synthesize nssManager=_nssManager;
@property(copy, nonatomic) NSDictionary *familyMemberAccount; // @synthesize familyMemberAccount=_familyMemberAccount;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)holdActivityIdentifier;
- (_Bool)controllerAllowsNavigatingBackTo;
- (void)startPostCheck;
- (void)presentAlertAndFallbackToSignInForError:(id)arg1;
- (id)localizedWaitScreenDescription;
- (double)waitScreenPushGracePeriod;
- (_Bool)holdWithWaitScreen;
- (_Bool)holdBeforeDisplaying;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

