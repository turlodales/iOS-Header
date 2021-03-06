//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface EDColorAnalyzer : NSObject
{
    NSMutableDictionary *_cache;
}

- (void).cxx_destruct;
- (id)getRandomColors:(long long)arg1 from:(id)arg2;
- (id)colorAtCenterOfSurface:(struct __IOSurface *)arg1 offset:(struct CGPoint)arg2;
- (id)colorsInSurface:(struct __IOSurface *)arg1 offset:(struct CGPoint)arg2 clipToCircle:(_Bool)arg3 clipedToRect:(struct CGRect)arg4;
- (_Bool)kmeansShouldStopWithPreviousColors:(id)arg1 newColors:(id)arg2 iterations:(long long)arg3;
- (id)kmeansColorsForColors:(id)arg1 clusters:(long long)arg2;
- (id)kmeansForColors:(id)arg1 clusters:(long long)arg2;
- (id)removeSimilarColors:(id)arg1 minDistance:(double)arg2;
- (id)colorsSuggestionsForSurface:(struct __IOSurface *)arg1 maxSuggestions:(long long)arg2 clipToCircle:(_Bool)arg3 clipedToRect:(struct CGRect)arg4;
- (void)clearCache;
- (id)init;

@end

