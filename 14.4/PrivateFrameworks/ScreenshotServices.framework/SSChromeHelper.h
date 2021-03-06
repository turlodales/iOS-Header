//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSChromeHelper : NSObject
{
}

+ (long long)backgroundBlurEffectStyle;
+ (long long)statusBarStyle;
+ (int)statusBarVisibilityForTraitCollection:(id)arg1 isPortrait:(_Bool)arg2;
+ (double)contentSwitcherPadding;
+ (double)barButtonItemsLeftOfOpacitySlider;
+ (double)widthForOpacityControlInView:(id)arg1 withContentSwitcher:(id)arg2;
+ (double)widthForContentSwitcher:(id)arg1 forView:(id)arg2;
+ (double)screenshotTopBottomMarginPhone;
+ (double)screenshotTopBottomMarginPad;
+ (double)screenshotTopBottomMargin:(long long)arg1;
+ (double)countIndicatorOffset;
+ (struct CGRect)availableRectForFullscreenContent:(struct CGRect)arg1 layoutBounds:(struct CGRect)arg2 bleedToBottom:(_Bool)arg3 topBarHeight:(double)arg4 bottomBarHeight:(double)arg5 userInterfaceIdiom:(long long)arg6 multipleScreenshots:(_Bool)arg7;
+ (double)cropsHandleOutset;
+ (double)cropsCornerLength;
+ (double)cropsCornerWidth;
+ (double)barSeparatorSize;
+ (id)separatorView;
+ (id)barSeparatorColor;
+ (double)defaultBarButtonWidth;
+ (double)defaultBarButtonSpacing;
+ (id)createFixedSpaceBarButtonItemWithWidth:(double)arg1;
+ (void)configureNavigationBarAppearance:(id)arg1;

@end

