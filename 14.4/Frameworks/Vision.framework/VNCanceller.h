//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VNCanceller : NSObject
{
    CDUnknownBlockType _signallingBlock;
    struct os_unfair_lock_s _lock;
    _Bool _signalled;
}

- (void).cxx_destruct;
- (_Bool)wasSignalled;
- (void)signalCancellation;
- (void)reset;
- (_Bool)tryToPerformBlock:(CDUnknownBlockType)arg1 usingSignallingBlock:(CDUnknownBlockType)arg2;
- (void)_releaseSignallingBlock;
- (id)init;

@end

