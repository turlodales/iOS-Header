//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REMLMetricsProvider-Protocol.h>

@class NSMutableDictionary, NSMutableSet;

@interface REMLMetricsSet : NSObject <REMLMetricsProvider>
{
    NSMutableDictionary *metricsIndex;
    NSMutableSet *metricsSet;
}

- (void).cxx_destruct;
- (void)reset;
- (void)updateMetricsFromFeatures:(id)arg1 prediction:(id)arg2 truth:(id)arg3;
- (id)name;
- (id)getMetricsByName:(id)arg1;
- (_Bool)addMetrics:(id)arg1;
- (id)init;

@end

