//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AssistantUI/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class NSString, UIStatusBar, UIView;
@protocol AFUISiriSetupViewControllerDelegate;

@interface AFUISiriSetupViewController : UIViewController <UIAdaptivePresentationControllerDelegate>
{
    UIView *_contentView;
    NSString *_selectedRecognitionLanguageCode;
    _Bool _visible;
    _Bool _lastTimeShown;
    id <AFUISiriSetupViewControllerDelegate> _delegate;
    UIView *_siriSetupView;
    UIStatusBar *_statusBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic, getter=_statusBar, setter=_setStatusBar:) UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property(retain, nonatomic) UIView *siriSetupView; // @synthesize siriSetupView=_siriSetupView;
@property(nonatomic) _Bool lastTimeShown; // @synthesize lastTimeShown=_lastTimeShown;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <AFUISiriSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;
- (_Bool)presentationControllerShouldDismiss:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)_laterTapped:(id)arg1;
- (void)_continueWithLanguageCode:(id)arg1 commitLanguageCodeToPreferences:(_Bool)arg2;
- (void)_continueTapped:(id)arg1;
- (void)animatedDisappearanceWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animatedAppearanceWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

