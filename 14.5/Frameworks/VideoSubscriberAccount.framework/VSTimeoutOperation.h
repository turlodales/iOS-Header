//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperation, NSOperationQueue;

@interface VSTimeoutOperation : VSAsyncOperation
{
    NSOperation *_operation;
    double _timeout;
    NSOperationQueue *_privateQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) NSOperation *operation; // @synthesize operation=_operation;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithOperation:(id)arg1 timeout:(double)arg2;
- (id)init;

@end

