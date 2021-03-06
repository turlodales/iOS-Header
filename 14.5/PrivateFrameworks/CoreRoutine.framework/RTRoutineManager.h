//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/RTFrameworkProtocol-Protocol.h>

@class NSString, NSXPCConnection, RTEventAgentHelper, RTRoutineManagerRegistrantAction, RTRoutineManagerRegistrantScenarioTrigger, RTTokenBucket;
@protocol OS_dispatch_queue;

@interface RTRoutineManager : NSObject <RTFrameworkProtocol>
{
    NSXPCConnection *_xpcConnection;
    CDUnknownBlockType _visitHandler;
    CDUnknownBlockType _leechedVisitHandler;
    CDUnknownBlockType _leechedLowConfidenceVisitHandler;
    CDUnknownBlockType _vehicleEventsHandler;
    NSString *_restorationIdentifier;
    RTEventAgentHelper *_eventAgentHelper;
    RTTokenBucket *_clientThrottle;
    RTRoutineManagerRegistrantAction *_actionRegistrant;
    RTRoutineManagerRegistrantScenarioTrigger *_scenarioTriggerRegistrant;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultManager;
+ (id)modeOfTransportationToString:(long long)arg1;
+ (id)routineModeToString:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RTRoutineManagerRegistrantScenarioTrigger *scenarioTriggerRegistrant; // @synthesize scenarioTriggerRegistrant=_scenarioTriggerRegistrant;
@property(retain, nonatomic) RTRoutineManagerRegistrantAction *actionRegistrant; // @synthesize actionRegistrant=_actionRegistrant;
@property(retain, nonatomic) RTTokenBucket *clientThrottle; // @synthesize clientThrottle=_clientThrottle;
@property(retain, nonatomic) RTEventAgentHelper *eventAgentHelper; // @synthesize eventAgentHelper=_eventAgentHelper;
@property(retain, nonatomic) NSString *restorationIdentifier; // @synthesize restorationIdentifier=_restorationIdentifier;
@property(copy, nonatomic) CDUnknownBlockType vehicleEventsHandler; // @synthesize vehicleEventsHandler=_vehicleEventsHandler;
@property(copy, nonatomic) CDUnknownBlockType leechedLowConfidenceVisitHandler; // @synthesize leechedLowConfidenceVisitHandler=_leechedLowConfidenceVisitHandler;
@property(copy, nonatomic) CDUnknownBlockType leechedVisitHandler; // @synthesize leechedVisitHandler=_leechedVisitHandler;
@property(copy, nonatomic) CDUnknownBlockType visitHandler; // @synthesize visitHandler=_visitHandler;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)stopMonitoringNextPredictedLocationsOfInterest;
- (void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 geoMapItem:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3;
- (void)fetchAutomaticVehicleEventDetectionSupportedWithHandler:(CDUnknownBlockType)arg1;
- (void)stopMonitoringVehicleEvents;
- (void)startMonitoringVehicleEventsWithHandler:(CDUnknownBlockType)arg1;
- (void)onVehicleEvents:(id)arg1 error:(id)arg2;
- (void)engageInVehicleEventWithIdentifier:(id)arg1;
- (void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 geoMapItem:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2;
- (void)clearAllVehicleEvents:(CDUnknownBlockType)arg1;
- (void)clearAllVehicleEventsWithHandler:(CDUnknownBlockType)arg1;
- (void)clearAllVehicleEvents;
- (void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2;
- (void)fetchLastVehicleEventsWithHandler:(CDUnknownBlockType)arg1;
- (void)extendLifetimeOfVisitsWithIdentifiers:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)extendLifetimeOfVisitWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeVisitWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeLocationOfInterestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 customLabel:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 mapItem:(id)arg3 customLabel:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)addLocationOfInterestOfType:(long long)arg1 mapItem:(id)arg2 customLabel:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchAllLocationsOfInterestForSettingsWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchLocationOfInterestWithIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)fetchMonitoredScenarioTriggerTypesWithHandler:(CDUnknownBlockType)arg1;
- (void)onScenarioTrigger:(id)arg1 withError:(id)arg2;
- (void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1;
- (void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchPathToDiagnosticFilesWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchFormattedPostalAddressesFromMeCard:(CDUnknownBlockType)arg1;
- (void)fetchPlaceInferencesWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchStoredVisitsWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)onLeechedLowConfidenceVisit:(id)arg1 withError:(id)arg2;
- (void)stopLeechingLowConfidenceVisits;
- (void)startLeechingLowConfidenceVisitsWithHandler:(CDUnknownBlockType)arg1;
- (void)onLeechedVisit:(id)arg1 withError:(id)arg2;
- (void)stopLeechingVisits;
- (void)startLeechingVisitsWithHandler:(CDUnknownBlockType)arg1;
- (void)onVisit:(id)arg1 withError:(id)arg2;
- (void)stopMonitoringVisits;
- (void)startMonitoringVisitsWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)fetchNextPredictedLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)enumerateStoredLocationsWithOptions:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsWithOptions:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)updateCloudSyncProvisionedForAccount:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchCloudSyncAuthorizationState:(CDUnknownBlockType)arg1;
- (void)clearRoutineWithHandler:(CDUnknownBlockType)arg1;
- (void)setRoutineEnabled:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setRoutineEnabled:(_Bool)arg1;
- (void)fetchRoutineStateWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchRoutineEnabledWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)selectorIsWhitelisted:(SEL)arg1;
- (id)_proxyForServicingSelector:(SEL)arg1 asynchronous:(_Bool)arg2 withErrorHandler:(CDUnknownBlockType)arg3;
- (id)_proxyForServicingSelector:(SEL)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
- (void)handleDaemonStart;
- (void)createConnection;
- (void)_createConnection;
- (void)dealloc;
- (id)init;
- (id)initWithRestorationIdentifier:(id)arg1;
- (void)performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchCurrentPredictedLocationsOfInterestLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

