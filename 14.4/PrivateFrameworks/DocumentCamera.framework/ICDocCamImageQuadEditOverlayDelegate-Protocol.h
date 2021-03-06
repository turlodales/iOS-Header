//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentCamera/NSObject-Protocol.h>

@class CALayer, ICDocCamImageQuad, ICDocCamImageQuadEditOverlay;

@protocol ICDocCamImageQuadEditOverlayDelegate <NSObject>
- (void)overlayDidLayout:(ICDocCamImageQuadEditOverlay *)arg1;
- (double)currentZoomFactorForOverlay;
- (ICDocCamImageQuad *)quadForOverlay:(ICDocCamImageQuadEditOverlay *)arg1;
- (void)selectedKnobDidChange:(CALayer *)arg1;
- (void)selectedKnobDidPanToRect:(struct CGRect)arg1;
- (struct CGRect)imageFrameInOverlayCoordinates;
- (struct CGRect)unitImageRectForOverlayRect:(struct CGRect)arg1;
@end

