//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIView;

@interface PKNumericBorderButton : UIButton
{
    UIView *_bottomBorder;
    UIView *_topBorder;
    UIView *_trailingBorder;
    UIView *_leadingBorder;
    UIColor *_normalBackgroundColor;
    UIColor *_highlightedBackgroundColor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(copy, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
- (void)setBorder:(unsigned long long)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)pk_applyAppearance:(id)arg1;

@end

