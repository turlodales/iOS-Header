//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString;

@protocol CUMessageSessionXPCServerInterface
- (void)remoteSendRequestID:(NSString *)arg1 options:(NSDictionary *)arg2 request:(NSDictionary *)arg3 responseHandler:(void (^)(int, NSDictionary *, NSDictionary *))arg4;
- (void)remoteRegisterRequestID:(NSString *)arg1 options:(NSDictionary *)arg2;
@end

