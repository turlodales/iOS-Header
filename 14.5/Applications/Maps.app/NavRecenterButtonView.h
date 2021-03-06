//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CardView.h"

@class UIButton;

__attribute__((visibility("hidden")))
@interface NavRecenterButtonView : CardView
{
    UIButton *_recenterButton;
    unsigned long long _style;
}

+ (id)_buttonForSteppingStyleWithMapView:(id)arg1;
+ (id)_buttonForNavigationStyle;
+ (id)steppingStyledRecenterButtonViewForMapView:(id)arg1;
+ (id)navigationStyledRecenterButtonView;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIButton *recenterButton; // @synthesize recenterButton=_recenterButton;
- (void)updateTheme;
- (struct CGSize)intrinsicContentSize;
- (void)_setupViewsWithButton:(id)arg1;

@end

