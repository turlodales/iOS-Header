//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, SKUIScrollingTabBarBackgroundView;

__attribute__((visibility("hidden")))
@interface SKUICrossFadingTabBar : UIView
{
    SKUIScrollingTabBarBackgroundView *_backgroundView;
    NSArray *_tabBarButtons;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *tabBarButtons; // @synthesize tabBarButtons=_tabBarButtons;
@property(readonly, nonatomic) SKUIScrollingTabBarBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

