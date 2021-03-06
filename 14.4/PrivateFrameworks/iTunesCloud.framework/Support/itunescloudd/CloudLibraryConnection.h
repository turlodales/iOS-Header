//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, ICUserIdentity, ICUserIdentityStore;
@protocol OS_dispatch_queue;

@interface CloudLibraryConnection : NSObject
{
    unsigned int _databaseID;
    long long _connectionState;
    ICConnectionConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
@property(readonly, nonatomic) unsigned int databaseID; // @synthesize databaseID=_databaseID;
- (void)disconnect;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_onQueue_sendRequest:(id)arg1 withInternalResponseHandler:(CDUnknownBlockType)arg2;
- (void)sendRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) ICUserIdentityStore *userIdentityStore;
@property(readonly, nonatomic) ICUserIdentity *userIdentity;
- (id)initWithConfiguration:(id)arg1;

@end

