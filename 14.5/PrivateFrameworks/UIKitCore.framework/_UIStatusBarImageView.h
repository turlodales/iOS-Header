//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIImageView.h>

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class NSString, UIAccessibilityHUDItem, UIImage;

@interface _UIStatusBarImageView : UIImageView <_UIStatusBarDisplayable>
{
    _Bool _useDisabledAppearanceForAccessibilityHUD;
    long long _fontStyle;
    UIImage *_accessibilityHUDImage;
    double _iconScale;
}

- (void).cxx_destruct;
@property(nonatomic) double iconScale; // @synthesize iconScale=_iconScale;
@property(retain, nonatomic) UIImage *accessibilityHUDImage; // @synthesize accessibilityHUDImage=_accessibilityHUDImage;
@property(nonatomic) _Bool useDisabledAppearanceForAccessibilityHUD; // @synthesize useDisabledAppearanceForAccessibilityHUD=_useDisabledAppearanceForAccessibilityHUD;
@property(nonatomic) long long fontStyle; // @synthesize fontStyle=_fontStyle;
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
- (void)applyStyleAttributes:(id)arg1;
@property(readonly, nonatomic) _Bool prefersBaselineAlignment;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsCrossfade;

@end

