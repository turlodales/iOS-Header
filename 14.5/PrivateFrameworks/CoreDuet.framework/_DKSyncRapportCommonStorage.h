//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSyncCommonClass-Protocol.h>
#import <CoreDuet/_DKSyncRemoteStorage-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString, RPCompanionLinkClient, _DKEventTypeResultStatsCounter;
@protocol OS_dispatch_source;

@interface _DKSyncRapportCommonStorage : NSObject <_DKSyncRemoteStorage, _DKSyncCommonClass>
{
    _Bool _running;
    NSDictionary *_failIfAsleepOption;
    _DKEventTypeResultStatsCounter *_failIfAsleepStats;
    NSString *_deviceID;
    RPCompanionLinkClient *_client;
    NSMutableDictionary *_companionLinkClients;
    unsigned long long _outstandingRequestCount;
    NSObject<OS_dispatch_source> *_companionLinkClientsCleanupTimer;
    double _retryTimeout;
    NSMutableSet *_peerSourceDeviceIDsWithCompletedHandshakes;
    _Bool _isAvailable;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
- (void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 highPriority:(_Bool)arg4 options:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (_Bool)isTransportActiveForPeer:(id)arg1;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)client;
- (void)setDeviceID:(id)arg1;
- (id)myDeviceID;
- (id)transformCaughtObject:(id)arg1 existingError:(id)arg2;
- (id)transformResponseError:(id)arg1;
- (void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2;
- (long long)transportType;
- (id)name;
- (void)cancelOutstandingOperations;
- (void)start;
- (void)dealloc;
- (id)init;

@end

