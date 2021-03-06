//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, SKUIClientContext, SKUICountdown, SKUICountdownView, UIColor, UIImage, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIBrickCollectionViewCell : UICollectionViewCell
{
    NSString *_accessibilityLabel;
    SKUIClientContext *_clientContext;
    SKUICountdownView *_countdownView;
    _Bool _itemImageHidden;
    struct UIEdgeInsets _itemImageInsets;
    UIImageView *_itemImageView;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    UIImageView *_overlayImageView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *itemImageView; // @synthesize itemImageView=_itemImageView;
@property(nonatomic) struct UIEdgeInsets itemImageInsets; // @synthesize itemImageInsets=_itemImageInsets;
@property(nonatomic, getter=isItemImageHidden) _Bool itemImageHidden; // @synthesize itemImageHidden=_itemImageHidden;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
- (void)_removeOverlay;
- (void)_reloadHighlight;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *itemImage;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
@property(retain, nonatomic) SKUICountdown *countdown;
- (void)setColoringWithColorScheme:(id)arg1;

@end

