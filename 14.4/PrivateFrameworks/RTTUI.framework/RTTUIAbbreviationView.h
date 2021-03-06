//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSDictionary, NSString, UILabel, UIView;

@interface RTTUIAbbreviationView : UIControl
{
    _Bool _drawLeftBorder;
    NSDictionary *_abbreviationData;
    UILabel *_abbreviation;
    UILabel *_hint;
    UIView *_leftBorderView;
    UIView *_highlightView;
}

+ (void)warningSquelcher;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIView *leftBorderView; // @synthesize leftBorderView=_leftBorderView;
@property(retain, nonatomic) UILabel *hint; // @synthesize hint=_hint;
@property(retain, nonatomic) UILabel *abbreviation; // @synthesize abbreviation=_abbreviation;
@property(nonatomic) _Bool drawLeftBorder; // @synthesize drawLeftBorder=_drawLeftBorder;
@property(retain, nonatomic) NSDictionary *abbreviationData; // @synthesize abbreviationData=_abbreviationData;
@property(readonly, nonatomic) NSString *abbreviationText;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)canBecomeFocused;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

