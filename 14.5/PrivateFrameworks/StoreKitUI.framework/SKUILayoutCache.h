//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, SKUILayoutCacheDelegate;

@interface SKUILayoutCache : NSObject
{
    NSMutableArray *_batchedRequests;
    id <SKUILayoutCacheDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_layouts;
    NSMutableArray *_requests;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SKUILayoutCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_populateCache;
- (void)_layoutRequestsInRange:(struct _NSRange)arg1;
- (void)_addLayoutBatch:(id)arg1;
- (struct _NSRange)populateCacheWithLayoutRequests:(id)arg1;
- (id)layoutForIndex:(long long)arg1 forced:(_Bool)arg2;
- (id)layoutForIndex:(long long)arg1;
- (void)commitLayoutRequests;
- (struct _NSRange)addLayoutRequests:(id)arg1;
- (id)init;

@end

