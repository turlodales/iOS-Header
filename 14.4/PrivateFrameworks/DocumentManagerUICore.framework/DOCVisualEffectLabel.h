//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface DOCVisualEffectLabel : UIVisualEffectView
{
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) long long textAlignment;
@property(nonatomic) long long numberOfLines;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @dynamic adjustsFontForContentSizeCategory;
@property(nonatomic) long long lineBreakMode; // @dynamic lineBreakMode;
@property(copy, nonatomic) UIFont *font; // @dynamic font;
@property(copy, nonatomic) UIColor *textColor;
@property(copy, nonatomic) NSString *text; // @dynamic text;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)viewForLastBaselineLayout;
- (id)initWithEffect:(id)arg1;

@end

