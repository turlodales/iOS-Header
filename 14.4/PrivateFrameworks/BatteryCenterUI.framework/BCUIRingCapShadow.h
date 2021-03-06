//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface BCUIRingCapShadow : UIView
{
    UIImageView *_shadowCapImageView;
    double _lineWidth;
    double _arcFraction;
    struct CGRect _ringBounds;
}

+ (id)_ringCapShadowImageWithRingBounds:(struct CGRect)arg1 lineWidth:(double)arg2 scale:(double)arg3;
+ (id)ringCapShadowForRingWithBounds:(struct CGRect)arg1 lineWidth:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) double arcFraction; // @synthesize arcFraction=_arcFraction;
@property(readonly, nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(readonly, nonatomic) struct CGRect ringBounds; // @synthesize ringBounds=_ringBounds;
- (struct CGRect)_shadowCapFrame;
- (id)_initWithRingBounds:(struct CGRect)arg1 lineWidth:(double)arg2;
- (void)layoutSubviews;

@end

