//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/AKBaseSignInViewController.h>

#import <AuthKitUI/AKAppleIDAuthenticationInAppContextAlertDelegate-Protocol.h>
#import <AuthKitUI/AKAppleIDAuthenticationInAppContextPasswordDelegate-Protocol.h>
#import <AuthKitUI/UITextFieldDelegate-Protocol.h>

@class AKRoundedButton, NSString, UIButton, UIColor, UILabel, UITextField, UIView;

@interface AKModalSignInViewController : AKBaseSignInViewController <AKAppleIDAuthenticationInAppContextAlertDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, UITextFieldDelegate>
{
    _Bool _hideTitle;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UITextField *_passwordField;
    AKRoundedButton *_signInButton;
    UIButton *_iForgotButton;
    UIView *_containerView;
    UIColor *_backgroundColor;
    NSString *_customBodyText;
    NSString *_customButtonTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *customButtonTitle; // @synthesize customButtonTitle=_customButtonTitle;
@property(retain, nonatomic) NSString *customBodyText; // @synthesize customBodyText=_customBodyText;
@property(nonatomic) _Bool hideTitle; // @synthesize hideTitle=_hideTitle;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIButton *iForgotButton; // @synthesize iForgotButton=_iForgotButton;
@property(retain, nonatomic) AKRoundedButton *signInButton; // @synthesize signInButton=_signInButton;
@property(retain, nonatomic) UITextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)context:(id)arg1 needsPasswordWithCompletion:(CDUnknownBlockType)arg2;
- (void)displayAlertForContext:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)_isSignInAllowed;
- (void)stopAnimating;
- (void)startAnimating;
- (void)_signInButtonTapped:(id)arg1;
- (void)_passwordRecoveryButtonWasTapped:(id)arg1;
- (void)_updateViewConstraints;
- (void)_setupConstraints;
- (id)_buttonTitle;
- (id)_bodyText;
- (void)_createViews;
- (void)_setupViews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

