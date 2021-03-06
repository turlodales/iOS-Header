//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSCH3DSceneRenderCacheObject : NSObject
{
    _Bool mCachingEnabled;
    NSMutableArray *mDynamicResources;
    NSMutableArray *mChildCacheObjects;
}

+ (id)cacheObject;
- (id)childCacheObjectAtIndex:(unsigned long long)arg1;
- (id)resourceAtIndex:(unsigned long long)arg1 created:(_Bool *)arg2 ifAbsent:(CDUnknownBlockType)arg3;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)resourceCount;
@property(nonatomic) _Bool cachingEnabled;
- (void)p_updateResourceUpdateFlags:(int)arg1;
- (int)p_resourceUpdateFlag;
- (void)allocateDynamicResourcesIntoArray:(id)arg1;
- (void)flushCache;
- (void)dealloc;
- (id)init;

@end

