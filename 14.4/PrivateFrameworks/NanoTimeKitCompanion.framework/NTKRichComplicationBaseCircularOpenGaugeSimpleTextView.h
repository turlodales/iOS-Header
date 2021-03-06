//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationCurvedProgressView;

@interface NTKRichComplicationBaseCircularOpenGaugeSimpleTextView : NTKRichComplicationCircularBaseView
{
    NTKColoringLabel *_smallLabel;
    NTKColoringLabel *_centerLabel;
    NTKRichComplicationCurvedProgressView *_progressView;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NTKRichComplicationCurvedProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NTKColoringLabel *centerLabel; // @synthesize centerLabel=_centerLabel;
@property(retain, nonatomic) NTKColoringLabel *smallLabel; // @synthesize smallLabel=_smallLabel;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (id)initWithFamily:(long long)arg1;

@end

