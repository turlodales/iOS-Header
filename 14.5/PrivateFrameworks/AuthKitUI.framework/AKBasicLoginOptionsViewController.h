//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AKAppleIDAuthenticationInAppContext, OBPrivacyLinkController, UIButton, UIStackView, UIView;

@interface AKBasicLoginOptionsViewController : UIViewController
{
    _Bool _isCreateAppleIDAllowed;
    CDUnknownBlockType _createIDAction;
    CDUnknownBlockType _forgotAction;
    AKAppleIDAuthenticationInAppContext *_context;
    UIStackView *_optionsStack;
    UIButton *_forgotButton;
    UIButton *_createButton;
    UIView *_privacyView;
    OBPrivacyLinkController *_privacyController;
}

- (void).cxx_destruct;
@property _Bool isCreateAppleIDAllowed; // @synthesize isCreateAppleIDAllowed=_isCreateAppleIDAllowed;
@property(retain) OBPrivacyLinkController *privacyController; // @synthesize privacyController=_privacyController;
@property(retain) UIView *privacyView; // @synthesize privacyView=_privacyView;
@property(retain) UIButton *createButton; // @synthesize createButton=_createButton;
@property(retain) UIButton *forgotButton; // @synthesize forgotButton=_forgotButton;
@property(retain) UIStackView *optionsStack; // @synthesize optionsStack=_optionsStack;
@property(nonatomic) __weak AKAppleIDAuthenticationInAppContext *context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType forgotAction; // @synthesize forgotAction=_forgotAction;
@property(copy, nonatomic) CDUnknownBlockType createIDAction; // @synthesize createIDAction=_createIDAction;
- (_Bool)_shouldHideCreateButton;
- (void)_refreshCreateAppleIDButton;
- (void)_configureOptionsStack;
- (void)_configureButtonForFontAdjustment:(id)arg1;
- (void)_addPrivacyView:(id)arg1;
- (void)createPressed:(id)arg1;
- (void)forgotPressed:(id)arg1;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

