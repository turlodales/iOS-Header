//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPNavigationListenerDelegate-Protocol.h>
#import <MapsSupport/MSPSenderMessageStrategyDelegate-Protocol.h>
#import <MapsSupport/MSPSharedTripGroupSessionDelegate-Protocol.h>

@class MSPGroupSessionStorage, MSPNavigationListener, MSPSenderLiveStrategy, MSPSenderMessageStrategy, MSPSenderMinimalStrategy, MSPSharedTripGroupSession, MSPSharedTripRelay, MSPSharedTripStorageController, NSArray, NSMutableSet, NSString;
@protocol MSPSenderETAControllerDelegate, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MSPSenderETAController : NSObject <MSPNavigationListenerDelegate, MSPSharedTripGroupSessionDelegate, MSPSenderMessageStrategyDelegate>
{
    NSObject<OS_os_transaction> *_transaction;
    MSPNavigationListener *_navigationListener;
    NSMutableSet *_destinations;
    MSPSharedTripRelay *_idsRelay;
    MSPSharedTripGroupSession *_groupSession;
    MSPSenderMinimalStrategy *_minimalSender;
    MSPSenderLiveStrategy *_liveSender;
    MSPSenderMessageStrategy *_messageSender;
    MSPGroupSessionStorage *_sessionStorage;
    MSPSharedTripStorageController *_storageController;
    NSObject<MSPSenderETAControllerDelegate> *_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<MSPSenderETAControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)groupSessionEnded:(id)arg1 withError:(id)arg2;
- (void)groupSession:(id)arg1 participantDidLeave:(id)arg2;
- (void)groupSession:(id)arg1 participantDidJoin:(id)arg2;
- (void)navigationListenerStopped:(id)arg1;
- (void)navigationListenerArrived:(id)arg1;
- (void)navigationListenerTrafficUpdated:(id)arg1;
- (void)navigationListenerRouteUpdated:(id)arg1;
- (void)navigationListenerETAUpdated:(id)arg1;
- (void)navigationListenerIsReady:(id)arg1;
- (void)navigationListenerDestinationUpdated:(id)arg1;
- (void)navigationListener:(id)arg1 didFailWithError:(id)arg2;
- (void)touchedRules;
- (id)rulesForParticipant:(id)arg1;
- (_Bool)_validateNavigationState:(id *)arg1;
- (void)_stopNavigationListener;
- (void)_startNavigationListener;
- (void)_invalidateActiveHandles;
- (void)_invalidateSharedTripWithError:(id)arg1;
- (void)_sendFinishedToIdentifiers:(id)arg1;
- (void)_cleanObjects;
@property(readonly, nonatomic) NSArray *activeHandles;
- (void)stopSharing;
- (void)stopSharingWithGroup:(id)arg1;
- (_Bool)startSharingWithGroup:(id)arg1 error:(id *)arg2;
- (void)stopSharingWithMessages:(id)arg1;
- (_Bool)startSharingWithMessages:(id)arg1 error:(id *)arg2;
- (void)stopSharingWith:(id)arg1;
- (_Bool)startSharingWith:(id)arg1 error:(id *)arg2;
- (void)_startingGroupSession;
- (void)_createGroupSessionIfNeededWithIdentifier:(id)arg1;
- (void)_restoreLastSession;
- (void)_updateStorage;
- (void)dealloc;
- (id)initWithRelay:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

