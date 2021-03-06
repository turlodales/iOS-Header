//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NSString, NSTimeZone, UIColor, UIFont, UILabel;

@interface MTUIDateLabel : UIView
{
    NSTimeZone *_timeZone;
    NSDate *_date;
    UILabel *_dateLabel;
    NSString *_dateLabelText;
    UIColor *_textColor;
    UIFont *_font;
    UIFont *_timeDesignatorFont;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *timeDesignatorFont; // @synthesize timeDesignatorFont=_timeDesignatorFont;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *dateLabelText; // @synthesize dateLabelText=_dateLabelText;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)_fontInfoForBaselineSpacing;
- (_Bool)_hasFontInfoForVerticalBaselineSpacing;
- (void)_updateDateString;
- (void)_updateTextString;
- (void)_updateLabel;
@property(retain, nonatomic) NSTimeZone *timeZone;
- (id)initWithFrame:(struct CGRect)arg1;

@end

