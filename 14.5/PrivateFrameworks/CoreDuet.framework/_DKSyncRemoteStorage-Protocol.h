//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, _DKSyncPeer;

@protocol _DKSyncRemoteStorage
- (long long)transportType;
- (NSString *)name;
- (void)fetchSourceDeviceIDFromPeer:(_DKSyncPeer *)arg1 highPriority:(_Bool)arg2 completion:(void (^)(NSUUID *, NSString *, NSError *))arg3;
- (void)cancelOutstandingOperations;
- (_Bool)isAvailable;
- (void)start;
@end

