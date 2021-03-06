//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMNatalimeterInternal : NSObject
{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    _Bool fStartedUpdates;
    CDUnknownBlockType fHandler;
}

- (unsigned long long)_promptsNeeded;
- (void)_stopAbsoluteNatalimetryDataUpdates;
- (void)_startAbsoluteNatalimetryDataUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_handleQueryResponse:(shared_ptr_bdcc6d0f)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

