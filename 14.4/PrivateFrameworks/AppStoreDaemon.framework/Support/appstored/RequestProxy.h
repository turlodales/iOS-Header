//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDRequestProxy-Protocol.h"

@class ASDRequest, RequestBrokerClient;
@protocol ASDRequestDelegate, RequestController;

@interface RequestProxy : NSObject <ASDRequestProxy>
{
    RequestBrokerClient *_broker;
    id <ASDRequestDelegate> _delegate;
    ASDRequest<RequestController> *_request;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ASDRequest<RequestController> *request; // @synthesize request=_request;
@property(readonly, nonatomic) id <ASDRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak RequestBrokerClient *broker; // @synthesize broker=_broker;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)startWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)cancelWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithBroker:(id)arg1 request:(id)arg2 delegate:(id)arg3;
- (id)init;

@end

