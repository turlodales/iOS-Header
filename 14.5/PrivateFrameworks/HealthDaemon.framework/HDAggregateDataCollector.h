//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDataCollector.h>

@class NSDictionary, _HKDelayedOperation;
@protocol HDSensorDatum;

@interface HDAggregateDataCollector : HDDataCollector
{
    _HKDelayedOperation *_historicalFetchOperation;
    id <HDSensorDatum> _lastReceivedSensorDatum;
    _Bool _didReceiveSensorDatum;
    NSDictionary *_lastReceivedSecondaryContext;
    _Bool _fetchingHistoricalData;
    _Bool _needsHistoricalFetch;
    double _maxDatumDuration;
}

- (void).cxx_destruct;
- (void)willPersistHKObjects:(id)arg1;
- (id)hkObjectsFromSensorData:(id)arg1 baseSensorDatum:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (void)fetchHistoricalSensorDataSinceDatum:(id)arg1 databaseIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginUpdatesFromDatum:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)updateHistoricalDataForcedUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateHistoricalData;
- (id)_queue_processSensorDataBatched:(id)arg1 firstDatum:(id)arg2 lastSensorDatum:(id *)arg3;
- (void)_queue_processSensorData:(id)arg1 lastSensorDatum:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_fetchHistoricalDataForcedUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_fetchHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_handleUpdatingHistoricalDataForcedUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_handleUpdatingHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_handleCMDatabaseReset;
- (void)_queue_updateLastReceivedSecondaryContext:(id)arg1;
- (void)_queue_updateLastReceivedSensorDatum:(id)arg1;
- (id)_queue_lastReceivedSecondaryContext;
- (id)_queue_lastReceivedSensorDatum;
- (void)_queue_beginUpdates;
- (void)_queue_beginStreaming;
@property(readonly, nonatomic) _Bool requiresSampleAggregation;
- (double)_queue_maxDatumDuration;
@property double maxDatumDuration;
- (double)_queue_aggregationInterval;
- (void)_queue_executeHistoricalFetchOperation;
- (id)initWithProfile:(id)arg1;

@end

