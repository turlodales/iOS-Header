//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/TSUConcurrentMutableDictionaryCache.h>

@interface TSTLayoutSpaceBezierPathCache : TSUConcurrentMutableDictionaryCache
{
}

- (void)insertBezierPath:(id)arg1 gridRange:(CDStruct_58eae27c)arg2 transform:(struct CGAffineTransform *)arg3 inset:(double)arg4 reoriginToZero:(_Bool)arg5;
- (id)bezierPathForGridRange:(CDStruct_58eae27c)arg1 transform:(struct CGAffineTransform *)arg2 inset:(double)arg3 reoriginToZero:(_Bool)arg4;

@end

