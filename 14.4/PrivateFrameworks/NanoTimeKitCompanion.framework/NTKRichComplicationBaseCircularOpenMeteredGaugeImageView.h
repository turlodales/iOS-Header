//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationCurvedProgressView, NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularOpenMeteredGaugeImageView : NTKRichComplicationCircularBaseView
{
    NTKRichComplicationCurvedProgressView *_progressView;
    NTKRichComplicationImageView *_centerImageView;
    NTKColoringLabel *_smallLabel;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (long long)progressFillStyle;
- (void).cxx_destruct;
@property(retain, nonatomic) NTKColoringLabel *smallLabel; // @synthesize smallLabel=_smallLabel;
@property(retain, nonatomic) NTKRichComplicationImageView *centerImageView; // @synthesize centerImageView=_centerImageView;
@property(retain, nonatomic) NTKRichComplicationCurvedProgressView *progressView; // @synthesize progressView=_progressView;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;
- (CDStruct_7660b417)_layoutConstraintsWithDevice:(id)arg1 family:(long long)arg2;
- (double)_smallLabelFontWeight;
- (void)setPaused:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFamily:(long long)arg1;

@end

