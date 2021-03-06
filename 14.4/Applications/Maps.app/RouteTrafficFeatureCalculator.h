//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMapTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RouteTrafficFeatureCalculator : NSObject
{
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    NSCache *_cache;
    NSMapTable *_completionHandlers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
- (void)_calculateCameraFeaturesForRoute:(id)arg1;
- (void)_startCalculationTaskForRoute:(id)arg1 completion:(id)arg2;
- (void)trafficFeaturesForRoute:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearCachedTrafficFeaturesForRoute:(id)arg1;
- (id)cachedTrafficFeaturesForRoute:(id)arg1;
- (id)init;

@end

