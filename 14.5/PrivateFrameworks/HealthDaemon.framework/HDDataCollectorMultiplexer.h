//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, NSDictionary, NSMapTable;
@protocol HDDataCollector;

@interface HDDataCollectorMultiplexer : NSObject
{
    HDProfile *_profile;
    id <HDDataCollector> _collector;
    NSDictionary *_aggregatorsByType;
    NSMapTable *_recordsByAggregator;
}

- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)setConfiguration:(id)arg1 forAggregator:(id)arg2;
- (id)mergedConfiguration;
- (void)setLastSensorDatum:(id)arg1 forAggregator:(id)arg2;
- (id)lastDatumForType:(id)arg1;
- (id)identifierForAggregator:(id)arg1;
- (id)aggregatorForType:(id)arg1;
- (void)registerForCollectionWithState:(id)arg1;
- (id)initForCollector:(id)arg1 identifier:(id)arg2 profile:(id)arg3 types:(id)arg4;

@end

