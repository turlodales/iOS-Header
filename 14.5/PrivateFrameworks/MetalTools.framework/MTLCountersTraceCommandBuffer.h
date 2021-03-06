//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MTLCountersTraceCommandBuffer : NSObject
{
    struct BinaryBuffer _commands;
    NSMutableArray *_encoders;
    struct AppendBuffer _samples;
    unsigned long long _flags;
    unsigned long long _timestamp;
}

- (id).cxx_construct;
- (void)saveCommandBuffer:(const void *)arg1 queue:(id)arg2 profilingResults:(id)arg3;
- (void)appendSamples:(const void *)arg1 length:(unsigned long long)arg2;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id)arg1;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;
- (id)resourceStateCommandEncoder;
- (id)renderCommandEncoder;
- (id)computeCommandEncoder;
- (id)blitCommandEncoder;
- (void)dealloc;
- (id)init:(_Bool)arg1;

@end

