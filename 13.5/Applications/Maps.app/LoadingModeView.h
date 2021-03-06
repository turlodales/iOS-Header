//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsThemeView.h"

@class NSLayoutConstraint, NSString, UIActivityIndicatorView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface LoadingModeView : MapsThemeView
{
    UIActivityIndicatorView *_activityView;
    UILabel *_titleLabel;
    UIView *_contentView;
    NSLayoutConstraint *_bottomContentConstraint;
    long long _axis;
}

- (void).cxx_destruct;
- (void)setTitleColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setupConstraints;
@property(nonatomic) double bottomInset;
@property(copy, nonatomic) NSString *title;
- (id)initWithTitle:(id)arg1 axis:(long long)arg2;
- (id)initWithTitle:(id)arg1;
- (void)updateTheme;

@end

