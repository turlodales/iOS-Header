//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/NSObject-Protocol.h>

@class TSPComponent, TSPObject, TSPObjectContext;

@protocol TSPComponentDelegate <NSObject>
- (void)didModifyFlushedComponent:(TSPComponent *)arg1 forObject:(TSPObject *)arg2;
- (void)flushComponent:(TSPComponent *)arg1 isDiscardingContent:(_Bool)arg2;
- (void)cacheComponent:(TSPComponent *)arg1 isDiscardingContent:(_Bool)arg2;
- (void)continueCacheOperationUsingBlock:(void (^)(void))arg1;
- (void)performCacheOperationUsingBlock:(void (^)(void))arg1;
- (TSPObject *)objectForIdentifier:(long long)arg1;
- (_Bool)shouldKeepAllCachedObjectsInMemory;
- (_Bool)isActive;
- (TSPObjectContext *)context;
@end

