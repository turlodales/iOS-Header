//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC12GameCenterUI16AchievementBadge : UIView
{
    MISSING_TYPE *theme;
    MISSING_TYPE *metrics;
    MISSING_TYPE *style;
    MISSING_TYPE *$__lazy_storage_$_progressNumberFont;
    MISSING_TYPE *$__lazy_storage_$_progressPercentageFont;
    MISSING_TYPE *$__lazy_storage_$_numberFormatter;
    MISSING_TYPE *status;
    MISSING_TYPE *image;
    MISSING_TYPE *innerShadow;
    MISSING_TYPE *outerFoilLabel;
    MISSING_TYPE *outerFoilRing;
    MISSING_TYPE *innerFoil;
    MISSING_TYPE *progressBarLayer;
    MISSING_TYPE *iconImageView;
    MISSING_TYPE *progressLabel;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) double accessibilityProgress;
@property(nonatomic, readonly) _Bool accessibilityIsAchievementInProgress;
@property(nonatomic, readonly) _Bool accessibilityIsAchievementCompleted;
@property(nonatomic, readonly) _Bool accessibilityIsAchievementLocked;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;

@end

