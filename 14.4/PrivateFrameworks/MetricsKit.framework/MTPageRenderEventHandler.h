//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTEventHandler.h>

#import <MetricsKit/MTPerfBaseMeasurementTransformation-Protocol.h>

@class NSString;
@protocol MTPageRenderEventHandlerDelegate;

@interface MTPageRenderEventHandler : MTEventHandler <MTPerfBaseMeasurementTransformation>
{
}

- (id)xpSamplingPercentageUsers:(id)arg1;
- (id)xpSessionDuration:(id)arg1;
- (id)eventVersion:(id)arg1;
- (id)eventType;
- (id)knownFields;
- (id)metricsDataWithPageId:(id)arg1 pageType:(id)arg2 pageContext:(id)arg3 eventData:(id)arg4;
- (id)metricsDataWithPerfMeasurement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MTPageRenderEventHandlerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

