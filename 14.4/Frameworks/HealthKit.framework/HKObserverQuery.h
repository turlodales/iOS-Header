//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKObserverQueryClientInterface-Protocol.h>

@class NSString;

@interface HKObserverQuery : HKQuery <HKObserverQueryClientInterface>
{
    _Bool _observeUnfrozenSeries;
    CDUnknownBlockType _updateHandler;
}

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
- (void).cxx_destruct;
@property(nonatomic) _Bool observeUnfrozenSeries; // @synthesize observeUnfrozenSeries=_observeUnfrozenSeries;
@property(readonly, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (void)queue_deliverError:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)client_dataUpdatedInDatabaseWithAnchor:(id)arg1 query:(id)arg2;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

