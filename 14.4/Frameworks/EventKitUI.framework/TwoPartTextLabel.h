//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSString;

@interface TwoPartTextLabel : UILabel
{
    NSString *_secondTextPart;
    struct CGSize _part2Size;
    double _minPart2Width;
    _Bool _strikethroughPart1;
    _Bool _strikethroughPart2;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool strikethroughPart2; // @synthesize strikethroughPart2=_strikethroughPart2;
@property(nonatomic) _Bool strikethroughPart1; // @synthesize strikethroughPart1=_strikethroughPart1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setMinimumPart2Width:(double)arg1;
- (double)rightmostDisplayedPartWidth;
- (struct CGSize)idealSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)hasTwoParts;
- (struct CGSize)textPart2Size;
- (void)setTextPart1:(id)arg1;
- (void)setTextPart1:(id)arg1 part2:(id)arg2;
- (id)description;

@end

