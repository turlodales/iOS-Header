//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class PXGSpriteReference;

@protocol PXGAnchorConstraints
- (void)keepEdge:(unsigned int)arg1 ofSpriteWithReference:(PXGSpriteReference *)arg2 referencingOptions:(unsigned long long)arg3 greaterThanOrEqualToVisibleEdge:(unsigned int)arg4 offset:(double)arg5;
- (void)keepEdge:(unsigned int)arg1 ofSpriteWithReference:(PXGSpriteReference *)arg2 referencingOptions:(unsigned long long)arg3 lessThanOrEqualToVisibleEdge:(unsigned int)arg4 offset:(double)arg5;
- (void)keepVisiblePortionOfSpriteWithReference:(PXGSpriteReference *)arg1 referencingOptions:(unsigned long long)arg2 padding:(struct UIEdgeInsets)arg3 visuallyStableForAttribute:(long long)arg4;
- (void)keepSpriteWithReference:(PXGSpriteReference *)arg1 referencingOptions:(unsigned long long)arg2 visuallyStableForAttribute:(long long)arg3;
@end

