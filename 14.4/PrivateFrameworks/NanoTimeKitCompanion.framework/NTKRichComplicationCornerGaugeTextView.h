//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCornerBaseGaugeView.h>

@class NTKCurvedColoringLabel;

@interface NTKRichComplicationCornerGaugeTextView : NTKRichComplicationCornerBaseGaugeView
{
    NTKCurvedColoringLabel *_outerLabel;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NTKCurvedColoringLabel *outerLabel; // @synthesize outerLabel=_outerLabel;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)layoutSubviews;
- (id)init;

@end

