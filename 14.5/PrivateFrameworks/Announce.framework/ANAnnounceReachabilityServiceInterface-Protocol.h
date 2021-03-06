//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Announce/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol ANAnnounceReachabilityServiceInterface <NSObject>
- (void)announceReachabilityForRoomUUID:(NSUUID *)arg1 inHomeUUID:(NSUUID *)arg2 reply:(void (^)(unsigned long long))arg3;
- (void)announceReachabilityForHomeUUID:(NSUUID *)arg1 reply:(void (^)(unsigned long long))arg2;
- (void)announceReachabilityForRoomName:(NSString *)arg1 inHomeName:(NSString *)arg2 reply:(void (^)(unsigned long long))arg3;
- (void)announceReachabilityForHomeName:(NSString *)arg1 reply:(void (^)(unsigned long long))arg2;
- (void)resumeWithCompletionHandler:(void (^)(void))arg1;
@end

