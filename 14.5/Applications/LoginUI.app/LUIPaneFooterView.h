//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LUIProgressAnimationProtocol-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton;
@protocol LUIPaneFooterViewDelegate;

@interface LUIPaneFooterView : UIView <LUIProgressAnimationProtocol>
{
    _Bool _signInButtonEnabled;
    id <LUIPaneFooterViewDelegate> _delegate;
    UIButton *_signInButton;
    UIActivityIndicatorView *_spinner;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIButton *signInButton; // @synthesize signInButton=_signInButton;
@property(nonatomic) _Bool signInButtonEnabled; // @synthesize signInButtonEnabled=_signInButtonEnabled;
@property(nonatomic) __weak id <LUIPaneFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopProgressAnimation;
- (void)startProgressAnimation;
- (void)signInButtonPressed;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

