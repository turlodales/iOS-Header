//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVWeakReference, AVWeakReferencingDelegateStorage;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVSampleBufferVideoOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    struct OpaqueFigVisualContext *vc;
    struct OpaqueVTPixelBufferConformer *pixelBufferConformer;
    NSObject<OS_dispatch_queue> *stateQueue;
    AVWeakReferencingDelegateStorage *delegateStorage;
    CDStruct_1b6d18a9 lastImageTime;
}

@end

