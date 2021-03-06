//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NearbyInteraction/NSObject-Protocol.h>

@class NIConfiguration, NIDiscoveryToken, NSString;

@protocol UWBSessionServerProtocol <NSObject>
- (void)_removeObject:(NIDiscoveryToken *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_addObject:(NIDiscoveryToken *)arg1 reply:(void (^)(NSError *))arg2;
- (void)shareSandboxToken:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)pause:(void (^)(NSError *))arg1;
- (void)runWithConfiguration:(NIConfiguration *)arg1 reply:(void (^)(NSError *))arg2;
- (void)activate:(void (^)(NSDictionary *, NSError *))arg1;
- (void)queryDeviceCapabilities:(void (^)(NSDictionary *))arg1;
@end

