//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "COSOptinViewController.h"

@class COSAppleIDAuthController;

@interface COSFamilyAccountChoiceViewController : COSOptinViewController
{
    COSAppleIDAuthController *_authController;
}

+ (_Bool)controllerNeedsToRun;
- (void).cxx_destruct;
@property(retain, nonatomic) COSAppleIDAuthController *authController; // @synthesize authController=_authController;
- (id)okayButtonTitle;
- (id)suggestedButtonTitle;
- (void)okayButtonPressed:(id)arg1;
- (void)suggestedButtonPressed:(id)arg1;
- (id)detailString;
- (id)titleString;
- (id)privacyBundles;
- (id)init;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

