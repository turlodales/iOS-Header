//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC15RemindersUICore16TTRListBadgeView : UIView
{
    MISSING_TYPE *listColor;
    MISSING_TYPE *emoji;
    MISSING_TYPE *emojiFontSize;
    MISSING_TYPE *imageColor;
    MISSING_TYPE *selected;
    MISSING_TYPE *useEmojiColors;
    MISSING_TYPE *shadowParams;
    MISSING_TYPE *selectionBorderSpacing;
    MISSING_TYPE *backgroundView;
    MISSING_TYPE *selectedLayer;
    MISSING_TYPE *shadowLayer;
    MISSING_TYPE *imageView;
    MISSING_TYPE *emojiView;
    MISSING_TYPE *nonEmojiBackgroundViewGradientSettings;
    MISSING_TYPE *emojiBackgroundViewGradientSettings;
    MISSING_TYPE *layerColorsDirty;
    MISSING_TYPE *ttrAccessibilityName;
    MISSING_TYPE *ttrAccessibilityShouldIgnoreAccessibilityName;
    MISSING_TYPE *ttrAccessibilityShouldIgnoreTintColorValue;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property(nonatomic, copy) NSString *accessibilityValue;
@property(nonatomic, copy) NSString *accessibilityLabel;
@property(nonatomic) _Bool isAccessibilityElement;
@property(nonatomic) _Bool ttrAccessibilityShouldIgnoreTintColorValue; // @synthesize ttrAccessibilityShouldIgnoreTintColorValue;
@property(nonatomic) _Bool ttrAccessibilityShouldIgnoreAccessibilityName; // @synthesize ttrAccessibilityShouldIgnoreAccessibilityName;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

