//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/TAMetricsProtocol-Protocol.h>

@class NSString, TAInterVisitMetricPerDevice, TASPAdvertisement;

@interface TAMetricsInterVisit : NSObject <TAMetricsProtocol>
{
    TAInterVisitMetricPerDevice *_currentInterVisitMetric;
    TAInterVisitMetricPerDevice *_totalInterVisitMetric;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TAInterVisitMetricPerDevice *totalInterVisitMetric; // @synthesize totalInterVisitMetric=_totalInterVisitMetric;
@property(readonly, nonatomic) TAInterVisitMetricPerDevice *currentInterVisitMetric; // @synthesize currentInterVisitMetric=_currentInterVisitMetric;
@property(readonly, copy) NSString *description;
- (id)descriptionDictionary;
@property(readonly, nonatomic) TASPAdvertisement *latestAdvertisement;
- (unsigned long long)getMetricsCollectionType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

