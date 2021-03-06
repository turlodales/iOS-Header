//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/NSObject-Protocol.h>

@class GVEdge, GVNode, NSArray;

@protocol GVRenderer <NSObject>
- (void)drawEdge:(GVEdge *)arg1 withPath:(NSArray *)arg2;
- (void)drawNode:(GVNode *)arg1;
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;

@optional
@property(readonly) _Bool drawEdgesFirst;
@property(readonly) struct CGSize separation;
@property(readonly) int direction;
@end

