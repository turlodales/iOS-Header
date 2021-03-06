//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUBLEAdvertiser;
@protocol OS_dispatch_queue;

@interface CUOSRecoveryTarget : NSObject
{
    _Bool _activateCalled;
    CUBLEAdvertiser *_bleAdvertiser;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _progressHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_reportProgressType:(int)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (id)init;

@end

