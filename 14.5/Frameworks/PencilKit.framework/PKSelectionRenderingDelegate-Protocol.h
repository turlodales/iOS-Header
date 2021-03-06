//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSObject, NSOrderedSet, PKDrawing;
@protocol OS_dispatch_queue;

@protocol PKSelectionRenderingDelegate
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *selectionHullQueue;
- (NSArray *)_lastStrokesInStrokes:(NSOrderedSet *)arg1;
- (NSArray *)_firstStrokesInStrokes:(NSOrderedSet *)arg1;
- (long long)currentIntersectionAlgorithm;
- (_Bool)isRTL;
- (struct CGColor *)selectionColor;
- (double)scaleForDrawing:(PKDrawing *)arg1;
- (struct CGRect)selectedStrokesViewClipRectForDrawing:(PKDrawing *)arg1;
- (struct CGAffineTransform)transformFromStrokeSpaceToViewInDrawing:(PKDrawing *)arg1;
@end

