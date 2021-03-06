//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInputView.h>

@class UIColor, UIStackView;

@interface PKNumberPadInputView : UIInputView
{
    UIStackView *_verticalStackView;
    _Bool _showsDecimalPointButton;
    UIColor *_numberPadColor;
    UIColor *_textColor;
}

+ (struct CGSize)defaultSizeForInterfaceOrientation:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) UIColor *numberPadColor; // @synthesize numberPadColor=_numberPadColor;
@property(nonatomic) _Bool showsDecimalPointButton; // @synthesize showsDecimalPointButton=_showsDecimalPointButton;
- (void)_reloadSubviews;
- (void)_performInsertion:(id)arg1;
- (void)_performDelete;
- (void)_numericKeyPressed:(id)arg1;
- (void)layoutSubviews;
- (id)initWithDefaultFrameForInterfaceOrientation:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

