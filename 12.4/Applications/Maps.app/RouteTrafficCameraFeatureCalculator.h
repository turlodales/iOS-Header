//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMapTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RouteTrafficCameraFeatureCalculator : NSObject
{
    NSObject<OS_dispatch_queue> *_calculationQueue;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    NSCache *_cache;
    NSMapTable *_completionHandlers;
}

@property(retain, nonatomic) NSMapTable *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *calculationQueue; // @synthesize calculationQueue=_calculationQueue;
- (void).cxx_destruct;
- (void)_calculateCameraFeaturesForRoute:(id)arg1;
- (void)_startCalculationTaskForRoute:(id)arg1 completion:(id)arg2;
- (void)trafficCameraFeaturesForRoute:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)cachedTrafficCameraFeaturesForRoute:(id)arg1;
- (id)init;

@end

