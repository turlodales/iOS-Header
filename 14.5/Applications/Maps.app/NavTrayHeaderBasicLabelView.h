//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsThemeView.h"

@class NSMutableArray, UILabel;

__attribute__((visibility("hidden")))
@interface NavTrayHeaderBasicLabelView : MapsThemeView
{
    NSMutableArray *_defaultLayoutConstraints;
    NSMutableArray *_minimizedLayoutConstraints;
    unsigned long long _layout;
    UILabel *_label;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long layout; // @synthesize layout=_layout;
- (void)updateTheme;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

