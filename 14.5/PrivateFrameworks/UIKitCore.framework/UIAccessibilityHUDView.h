//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIAccessibilityHUDItem, UIBlurEffect, UIImageView, UILabel, UIVisualEffectView;

@interface UIAccessibilityHUDView : UIView
{
    UIAccessibilityHUDItem *_item;
    UIView *_transformContainer;
    UIVisualEffectView *_effectView;
    UIBlurEffect *_blurEffect;
    UIVisualEffectView *_itemEffectView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIView *_customView;
}

+ (struct CGSize)preferredHUDSize;
- (void).cxx_destruct;
@property(copy, nonatomic) UIAccessibilityHUDItem *item; // @synthesize item=_item;
- (id)customView;
- (id)imageView;
- (id)titleLabel;
- (struct UIEdgeInsets)imageInsetsForLayout;
- (id)itemContainerViewForLayout;
- (id)containerViewForLayout;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_show:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)layoutManager;
- (void)_updateLabelForItem;
- (id)_contentEffectsForItem:(id)arg1;
- (id)initWithHUDItem:(id)arg1;

@end

