//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIAssistantBarRoundedButtonViewButton;

__attribute__((visibility("hidden")))
@interface UIAssistantBarRoundedButtonView : UIView
{
    UIView *_shadowView;
    _Bool _dropShadow;
    UIAssistantBarRoundedButtonViewButton *_button;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIAssistantBarRoundedButtonViewButton *button; // @synthesize button=_button;
@property(nonatomic) _Bool dropShadow; // @synthesize dropShadow=_dropShadow;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

