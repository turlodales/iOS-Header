//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationView.h>

@protocol NTKRichComplicationRectangularBaseViewDelegate;

@interface NTKRichComplicationRectangularBaseView : NTKRichComplicationView
{
    id <NTKRichComplicationRectangularBaseViewDelegate> _delegate;
}

+ (void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(_Bool)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6;
+ (id)viewWithLegacyComplicationType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <NTKRichComplicationRectangularBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_transitToHighlightState:(_Bool)arg1 fraction:(double)arg2;
- (id)_createAndAddColoringLabelWithFontSize:(double)arg1 weight:(double)arg2 usesTextProviderTintColoring:(_Bool)arg3;
- (id)initWithFamily:(long long)arg1;
- (id)init;

@end

