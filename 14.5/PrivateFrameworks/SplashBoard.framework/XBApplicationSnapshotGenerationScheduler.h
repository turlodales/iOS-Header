//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/XBApplicationSnapshotImageGenerationScheduling-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface XBApplicationSnapshotGenerationScheduler : NSObject <XBApplicationSnapshotImageGenerationScheduling>
{
    NSObject<OS_dispatch_workloop> *_imageGenerationWorkloop;
    NSObject<OS_dispatch_queue> *_imageGenerationQueue;
    NSObject<OS_dispatch_workloop> *_dataGenerationWorkloop;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)performImageDataGenerationAsyncAndWait:(CDUnknownBlockType)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)performImageDataGenerationAsync:(CDUnknownBlockType)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)performImageGenerationAsyncAndWait:(CDUnknownBlockType)arg1;
- (void)performImageGenerationAsync:(CDUnknownBlockType)arg1;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

