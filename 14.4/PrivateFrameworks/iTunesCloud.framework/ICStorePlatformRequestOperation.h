//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICStorePlatformRequest, ICStoreURLRequest, ICURLSession, NSObject;
@protocol OS_dispatch_queue;

@interface ICStorePlatformRequestOperation : ICAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICStoreURLRequest *_activeURLRequest;
    ICStorePlatformRequestOperation *_strongSelf;
    ICURLSession *_urlSession;
    ICStorePlatformRequest *_platformRequest;
    CDUnknownBlockType _responseHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, copy, nonatomic) ICStorePlatformRequest *platformRequest; // @synthesize platformRequest=_platformRequest;
- (id)_URLRequestWithBaseURL:(id)arg1;
- (id)_requestContext;
- (void)_finishWithResponse:(id)arg1 error:(id)arg2;
- (void)_executeUnpersonalized;
- (void)_executePersonalized;
- (void)_enqueueDataRequest:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)execute;
- (void)cancel;
- (id)initWithPlatformRequest:(id)arg1 usingURLSession:(id)arg2;
- (id)initWithPlatformRequest:(id)arg1;

@end

