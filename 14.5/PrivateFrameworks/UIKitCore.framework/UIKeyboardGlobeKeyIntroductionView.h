//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSDate, UIButton, UILabel, UITextView, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface UIKeyboardGlobeKeyIntroductionView : UIView
{
    CDUnknownBlockType _completionBlock;
    _UIBackdropView *_backdropView;
    UILabel *_titleLabel;
    UITextView *_descriptionLabel;
    UIButton *_continueButton;
    NSDate *_startDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) UITextView *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)continueButtonTapped;
- (long long)backdropStyleForRenderConfig:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;

@end

