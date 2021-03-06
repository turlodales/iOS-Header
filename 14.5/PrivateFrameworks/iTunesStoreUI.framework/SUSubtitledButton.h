//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIColor, UILabel;

@interface SUSubtitledButton : UIButton
{
    struct __CFDictionary *_subtitleContentLookup;
    UILabel *_subtitleView;
}

- (long long)_subtitleLineBreakMode;
- (id)_subtitleFont;
- (id)_subtitledContentForState:(unsigned long long)arg1;
- (void)_setupSubtitleView;
- (id)subtitleShadowColorForState:(unsigned long long)arg1;
- (struct CGRect)subtitleRectForContentRect:(struct CGRect)arg1;
@property(readonly, retain, nonatomic) UILabel *subtitleLabel;
- (id)subtitleForState:(unsigned long long)arg1;
- (id)subtitleColorForState:(unsigned long long)arg1;
- (void)setSubtitleShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSubtitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSubtitle:(id)arg1 forState:(unsigned long long)arg2;
@property(readonly, retain, nonatomic) UIColor *currentSubtitleShadowColor;
@property(readonly, retain, nonatomic) UIColor *currentSubtitleColor;
@property(readonly, retain, nonatomic) NSString *currentSubtitle;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (void)configureFromScriptButton:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

