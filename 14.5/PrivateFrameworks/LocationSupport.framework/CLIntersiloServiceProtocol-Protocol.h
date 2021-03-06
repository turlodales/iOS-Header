//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloProxyDelegateProtocol-Protocol.h>

@class CLSilo, NSArray;
@protocol CLIntersiloProxyDelegateProtocol;

@protocol CLIntersiloServiceProtocol <CLIntersiloProxyDelegateProtocol>
+ (void)performSyncOnSilo:(CLSilo *)arg1 invoker:(void (^)(void))arg2;
+ (void)becameFatallyBlocked:(NSArray *)arg1 index:(unsigned long long)arg2;
+ (CLSilo *)getSilo;
+ (_Bool)isSupported;

@optional
- (void)setDelegateEntityName:(const char *)arg1;
- (void)registerDelegate:(id <CLIntersiloProxyDelegateProtocol>)arg1 inSilo:(CLSilo *)arg2;
- (void)endService;
- (void)beginService;
@end

