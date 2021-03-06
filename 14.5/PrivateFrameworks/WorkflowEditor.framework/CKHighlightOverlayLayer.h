//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSArray;

@interface CKHighlightOverlayLayer : CALayer
{
    NSArray *_rects;
    CALayer *_targetLayer;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
- (void).cxx_destruct;
@property __weak CALayer *targetLayer; // @synthesize targetLayer=_targetLayer;
- (id)hitTest:(struct CGPoint)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithRects:(id)arg1 targetLayer:(id)arg2;
- (id)initWithRects:(id)arg1;

// Remaining properties
@property(retain) struct CGColor *highlightColor; // @dynamic highlightColor;

@end

