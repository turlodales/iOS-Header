//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/TransparencyNetworkRequest.h>

@class NSData, NSString, NSURL, NSUUID;

@interface KTLogNetworkRequest : TransparencyNetworkRequest
{
    _Bool _isGET;
    NSString *_application;
    NSURL *_url;
    NSData *_data;
    NSUUID *_uuid;
    double _timeout;
}

+ (void)addDeviceAuthentication:(id)arg1 signature:(id)arg2 timestamp:(id)arg3 certs:(id)arg4;
+ (_Bool)addAccountAuthentication:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property double timeout; // @synthesize timeout=_timeout;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain) NSData *data; // @synthesize data=_data;
@property(retain) NSURL *url; // @synthesize url=_url;
@property _Bool isGET; // @synthesize isGET=_isGET;
@property(retain) NSString *application; // @synthesize application=_application;
- (void)createRequestForAuthentication:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createGETRequestForURL:(id)arg1 timeout:(double)arg2 error:(id *)arg3;
- (id)createPOSTRequestForURL:(id)arg1 timeout:(double)arg2 contents:(id)arg3 authentication:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initPOSTWithURL:(id)arg1 data:(id)arg2 uuid:(id)arg3 application:(id)arg4;
- (id)initGETWithURL:(id)arg1 application:(id)arg2;

@end

