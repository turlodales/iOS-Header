//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CALayer, NSString;

@protocol TSWPTextMagnifierRendererDelegate
@property(readonly, nonatomic) NSString *maskImageName;
@property(readonly, nonatomic) NSString *overlayImageName;
@property(readonly, nonatomic) NSString *underlayImageName;
- (_Bool)shouldHideCanvasLayer;
- (void)drawMagnifierClippedCanvasLayer:(CALayer *)arg1 inContext:(struct CGContext *)arg2;
@end

