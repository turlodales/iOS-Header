//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSLayoutConstraint, NSTimer, STKSessionAction, UITextView, UIView;

@interface STKBaseAlertViewController : SBUIRemoteAlertServiceViewController
{
    NSTimer *_timeoutTimer;
    STKSessionAction *_sessionAction;
    UIView *_topBar;
    UIView *_bottomBar;
    UITextView *_textView;
    NSLayoutConstraint *_bottomBarBottomConstraint;
    NSLayoutConstraint *_textViewHeightConstraint;
    NSLayoutConstraint *_textViewCenterYConstraint;
}

+ (_Bool)wantsTextView;
+ (_Bool)_isSecureForRemoteViewService;
- (void).cxx_destruct;
@property(readonly, nonatomic) STKSessionAction *sessionAction; // @synthesize sessionAction=_sessionAction;
@property(readonly, nonatomic) UIView *topBar; // @synthesize topBar=_topBar;
@property(readonly, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
- (void)_displayDidTimeout;
- (void)_restartTimeoutTimer:(float)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)setTextViewText:(id)arg1;
- (id)newBottomBar;
- (id)newTopBar;
- (_Bool)validateAction:(id)arg1;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)_canShowWhileLocked;
- (void)dismiss;
- (void)clearTimeoutTimer;
- (void)startTimeoutTimerIfNecessary;
- (void)dealloc;

@end

