//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface HRBulletedIndentedLabel : UIView
{
    NSString *_text;
    UILabel *_label;
}

+ (id)_bodyFont;
+ (id)_bodyFontTextStyle;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)lastBaselineAnchor;
- (id)firstBaselineAnchor;
- (void)_updateLeadingDetailAttributedTextSize;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithText:(id)arg1;

@end

