//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SPOwner/SPOwnerSessionProtocol-Protocol.h>

@class NSData, NSDate, NSDateInterval, NSUUID, SPBeacon;

@protocol SPOwnerSessionPrivateProtocol <SPOwnerSessionProtocol>
- (oneway void)fakeClassicPairingWithMACAddress:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)forceKeySyncForBeaconUUID:(NSUUID *)arg1 lastObservationDate:(NSDate *)arg2 lastObservationIndex:(unsigned long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)sendUnregisterIntentWithCompletion:(void (^)(NSError *))arg1;
- (void)sendRegisterIntentWithCompletion:(void (^)(double, NSError *))arg1;
- (void)waitForBeaconStoreAvailableWithCompletion:(void (^)(void))arg1;
- (void)beaconStoreStatusWithCompletion:(void (^)(_Bool))arg1;
- (void)rawSearchResultsForBeacon:(SPBeacon *)arg1 dateInterval:(NSDateInterval *)arg2 completion:(void (^)(NSArray *))arg3;
- (oneway void)forceUpdateKeyAlignmentRecordForUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)forceUpdateKeyMapsForUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)forceDistributeKeysWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)beaconForUUID:(NSUUID *)arg1 completion:(void (^)(SPBeacon *))arg2;
@end

