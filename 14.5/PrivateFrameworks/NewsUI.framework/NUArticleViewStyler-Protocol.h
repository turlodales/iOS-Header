//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class UIColor, UITabBar, UIToolbar;

@protocol NUArticleViewStyler
@property(readonly, nonatomic) long long topBackgroundStatusBarStyle;
@property(readonly, nonatomic) long long statusBarStyle;
@property(readonly, nonatomic) UIColor *backgroundColor;
- (void)unstyleToolbar:(UIToolbar *)arg1 overrideRestoreColor:(UIColor *)arg2;
- (void)styleToolbar:(UIToolbar *)arg1;
- (void)unstyleTabBar:(UITabBar *)arg1 overrideRestoreColor:(UIColor *)arg2;
- (void)styleTabBar:(UITabBar *)arg1;
@end

