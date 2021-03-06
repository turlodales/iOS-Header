//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTMaterialView, PKPaletteToolPreview;

@interface PKPalettePencilInteractionFeedbackView : UIView
{
    UIView *_clippingView;
    MTMaterialView *_backgroundView;
    PKPaletteToolPreview *_toolPreview;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKPaletteToolPreview *toolPreview; // @synthesize toolPreview=_toolPreview;
@property(retain, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
- (void)showPreviewForTool:(id)arg1 scalingFactor:(double)arg2 animated:(_Bool)arg3;
- (void)layoutSubviews;
- (void)_setCornerRadius:(double)arg1;
- (id)init;

@end

