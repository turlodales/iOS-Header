//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMTranscriptBubbleSizeCache : NSObject
{
    NSMutableArray *_sizeCache;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *sizeCache; // @synthesize sizeCache=_sizeCache;
- (id)_cacheEntryForMaximumWidth:(double)arg1 getEffectiveIndex:(unsigned long long *)arg2;
- (void)_insertCacheEntry:(id)arg1;
- (void)flush;
- (void)setSize:(struct CGSize)arg1 forMaximumWidth:(double)arg2;
- (struct CGSize)sizeForMaximumWidth:(double)arg1;
- (id)init;

@end

