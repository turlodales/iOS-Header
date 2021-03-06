//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMCatherineFeederInternal : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;
    struct CLConnectionClient *fLocationdConnection;
}

- (void)_feedCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3;
- (void)_startDaemonConnection;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

