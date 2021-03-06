//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsThemeView.h"

@class NSLayoutConstraint, UIView;

__attribute__((visibility("hidden")))
@interface MapsProgressBarView : MapsThemeView
{
    double _progress;
    UIView *_fillView;
    NSLayoutConstraint *_progressFillConstraint;
    unsigned long long _fillStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long fillStyle; // @synthesize fillStyle=_fillStyle;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)_updateFillTintColor;
- (void)_updateFillConstraint;
- (void)layoutSubviews;
- (void)updateTheme;
- (void)_customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

