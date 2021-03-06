//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIColor, UIFont, UIImage;

@protocol EKStyleProvider <NSObject>

@optional
- (double)cellSpinnerAnimationDuration;
- (_Bool)usesBlackDatePicker;
- (_Bool)usesKeyboardForDatePicker;
- (NSArray *)cellSpinnerImages;
- (UIImage *)cellLocationArrow;
- (UIImage *)cellAccessoryCheckmark;
- (UIImage *)cellAccessoryDisclosureIndicator;
- (double)calendarGroupFooterHeight;
- (double)calendarSourceMinimumHeight;
- (double)calendarSourceLeftPadding;
- (double)calendarSourceBottomPadding;
- (double)calendarSourceTopPadding;
- (double)editorNotesVerticalPadding;
- (double)editorTitleVerticalPadding;
- (double)editorTableViewBottomMargin;
- (double)editorTableViewTopMargin;
- (double)editorTableViewHorizontalMargin;
- (Class)cellSelectedBackgroundViewClass;
- (Class)cellBackgroundViewClass;
- (UIFont *)calendarSourceFont;
- (UIFont *)editorSubtitleFont;
- (UIFont *)editorLabelFont;
- (UIFont *)editorTitleFont;
- (UIFont *)defaultTextFont;
- (UIColor *)navigationBarColor;
- (UIColor *)cellAccessoryDisclosureButtonColor;
- (UIColor *)cellSeparatorColor;
- (UIColor *)cellBackgroundColor;
- (UIColor *)calendarSourceShadowColor;
- (UIColor *)calendarSourceColor;
- (UIColor *)editorSubtitleColor;
- (UIColor *)editorTitleColor;
- (UIColor *)editorLabelColor;
- (UIColor *)disabledTextColor;
- (UIColor *)checkedTextColor;
- (UIColor *)defaultHighlightedTextColor;
- (UIColor *)defaultTextColor;
- (UIColor *)backgroundColorOpaque;
- (UIColor *)backgroundColor;
@end

