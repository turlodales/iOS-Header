//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, DOCTagDotView;

@interface DOCTagCheckableDotView : UIView
{
    _Bool _checked;
    DOCTagDotView *_tagDotView;
    CAShapeLayer *_borderLayer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(readonly, nonatomic) DOCTagDotView *tagDotView; // @synthesize tagDotView=_tagDotView;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
- (void)updateLayoutOfLayers;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) long long tagColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

