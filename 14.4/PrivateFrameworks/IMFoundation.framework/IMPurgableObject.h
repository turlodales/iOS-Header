//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMPurgableObject : NSObject
{
    id _instanceObject;
    CDUnknownBlockType _setupBlock;
    CDUnknownBlockType _cleanupBlock;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_receivedMemoryWarning:(id)arg1;
- (id)instance;
- (void)_cleanupInstance;
- (void)_setupInstance;
- (void)dealloc;
- (id)initWithSetupBlock:(CDUnknownBlockType)arg1 cleanupBlock:(CDUnknownBlockType)arg2 queue:(id)arg3;

@end

