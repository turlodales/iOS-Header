//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface IMDMessageServicesCenter : NSObject
{
    NSObject<OS_xpc_object> *_connection;
}

+ (id)sharedInstance;
- (void)requestWatchdogForMessageGuid:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestWatchdogWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestWatchdogWithGUID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)requestExpireStateForMessageGuid:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestExpireStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestExpireStateWithGUID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)requestRoutingForMessageGuid:(id)arg1 inChat:(id)arg2 error:(unsigned int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)requestRoutingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestRoutingWithGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned int)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)_connect;
- (_Bool)_disconnect;
- (void)_disconnected;
- (void)dealloc;
- (id)init;

@end

