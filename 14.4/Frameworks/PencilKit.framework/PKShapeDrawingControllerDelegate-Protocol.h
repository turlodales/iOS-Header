//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKMetalRendererController, PKShapeDrawingController;

@protocol PKShapeDrawingControllerDelegate <NSObject>
- (void)shapeDrawingControllerShapeDetectionCancelled:(PKShapeDrawingController *)arg1;
- (void)shapeDrawingControllerShapeGestureDetected:(PKShapeDrawingController *)arg1;
- (PKMetalRendererController *)shapeDrawingControllerRendererController:(PKShapeDrawingController *)arg1;
@end

