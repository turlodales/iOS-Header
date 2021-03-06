//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString, UIFontMetrics;

@interface AXDynamicTypeImageView : UIImageView
{
    UIFontMetrics *_fontMetrics;
    NSString *_minimumContentSizeCategory;
    NSString *_maximumContentSizeCategory;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *maximumContentSizeCategory; // @synthesize maximumContentSizeCategory=_maximumContentSizeCategory;
@property(copy, nonatomic) NSString *minimumContentSizeCategory; // @synthesize minimumContentSizeCategory=_minimumContentSizeCategory;
@property(retain, nonatomic) UIFontMetrics *fontMetrics; // @synthesize fontMetrics=_fontMetrics;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)_scaledSizeForSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithImage:(id)arg1;
- (void)_commonInit;

@end

