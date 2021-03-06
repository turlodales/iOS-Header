//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngineUI/REUpNextBaseCell.h>

@class NSArray, NSLayoutConstraint, UIFont, UIImageView, UILabel, UILayoutGuide, UIVisualEffectView;

@interface REUpNextThumbnailCell : REUpNextBaseCell
{
    UILayoutGuide *_labelLayoutGuide;
    UIImageView *_imageView;
    UILabel *_headerLabel;
    UILabel *_descriptionLine1Label;
    UILabel *_descriptionLine2Label;
    UIVisualEffectView *_headerEffectView;
    UIVisualEffectView *_descriptionLine1EffectView;
    UIVisualEffectView *_descriptionLine2EffectView;
    UIVisualEffectView *_imageEffectView;
    UIFont *_standardFont;
    UIFont *_italicFont;
    UIFont *_boldFont;
    NSArray *_withHeaderConstraints;
    NSArray *_withoutHeaderConstraints;
    NSArray *_withDescription2Constraints;
    NSArray *_withoutDescription2Constraints;
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageHeightConstraint;
    _Bool _showingHeader;
    _Bool _showingThreeLineLayout;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)configureWithContent:(id)arg1;
- (void)updateConstraints;
- (id)secondaryEffectViews;
- (id)primaryEffectViews;
- (void)defaultTextColorDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

