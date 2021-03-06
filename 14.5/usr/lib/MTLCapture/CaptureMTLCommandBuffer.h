//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLCapture/CaptureMTLObject-Protocol.h>
#import <MTLCapture/MTLCommandBufferSPI-Protocol.h>

@class CaptureMTLCommandQueue, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol MTLCommandBuffer, MTLCommandBufferSPI, MTLCommandQueue, MTLDevice, MTLLogContainer, MTLSharedEvent;

@interface CaptureMTLCommandBuffer : NSObject <MTLCommandBufferSPI, CaptureMTLObject>
{
    CaptureMTLCommandQueue *_captureCommandQueue;
    id <MTLCommandBufferSPI> _baseObject;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
    struct _opaque_pthread_mutex_t _retainMutex;
    struct apr_pool_t *_pool;
    id <MTLSharedEvent> _downloadEvent;
    NSMutableArray *_downloadPoints;
    NSMutableArray *_scheduledDispatchArray;
    NSMutableArray *_completedDispatchArray;
    _Bool _presentDrawableUsed;
    _Bool _isCommitted;
    _Bool _isCapturing;
    _Bool _isCommited;
    NSMutableSet *_retainedObjects;
}

- (void).cxx_destruct;
@property(readonly) _Bool presentDrawableUsed; // @synthesize presentDrawableUsed=_presentDrawableUsed;
@property(nonatomic) _Bool isCommited; // @synthesize isCommited=_isCommited;
@property(readonly, nonatomic) _Bool isCapturing; // @synthesize isCapturing=_isCapturing;
@property(readonly, nonatomic) NSMutableSet *retainedObjects; // @synthesize retainedObjects=_retainedObjects;
- (void)waitUntilScheduled;
- (void)waitUntilCompleted;
- (void)setResourceGroups:(const id *)arg1 count:(unsigned long long)arg2;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDUnion_c6e49ed4 *)arg1 capacity:(unsigned long long)arg2;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;
- (id)resourceStateCommandEncoder;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (void)pushDebugGroup:(id)arg1;
- (void)popDebugGroup;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeCacheHintTag:(unsigned long long)arg1 resourceGroups:(const id *)arg2 count:(unsigned long long)arg3;
- (void)encodeCacheHintFinalize:(unsigned long long)arg1 resourceGroups:(const id *)arg2 count:(unsigned long long)arg3;
- (void)dropResourceGroups:(const id *)arg1 count:(unsigned long long)arg2;
- (void *)debugBufferContentsWithLength:(unsigned long long *)arg1;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (id)computeCommandEncoder;
- (void)commitAndHold;
- (id)blitCommandEncoder;
- (void)addPurgedResource:(id)arg1;
- (void)addPurgedHeap:(id)arg1;
- (id)accelerationStructureCommandEncoder;
@property(readonly, nonatomic) NSMutableDictionary *userDictionary;
@property(readonly) unsigned long long status;
@property(readonly) _Bool retainedReferences;
@property(readonly) NSDictionary *profilingResults;
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
@property(readonly) id <MTLLogContainer> logs;
@property(readonly, nonatomic, getter=getListIndex) unsigned long long listIndex;
@property(copy) NSString *label;
@property(readonly) unsigned long long globalTraceObjectID;
@property(readonly) unsigned long long errorOptions;
@property(readonly) NSError *error;
@property(readonly) id <MTLDevice> device;
@property(readonly) id <MTLCommandQueue> commandQueue;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;
- (id)originalObject;
- (id)resourceStateCommandEncoderWithDescriptor:(id)arg1;
- (id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;
- (id)computeCommandEncoderWithDescriptor:(id)arg1;
- (id)blitCommandEncoderWithDescriptor:(id)arg1;
- (id)debugCommandEncoder;
- (void)addCompletedHandler:(CDUnknownBlockType)arg1;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id)arg1;
- (void)addScheduledHandler:(CDUnknownBlockType)arg1;
- (_Bool)commitAndWaitUntilSubmitted;
- (void)commit;
- (void)enqueue;
- (_Bool)isEnqueued;
- (unsigned char)_frameBoundaryFlag;
- (void)addRequestsToDownloadQueue:(id)arg1;
- (void)_preCommitWithIndex:(unsigned long long)arg1;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (void)unionRetainSet:(id)arg1;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 captureCommandQueue:(id)arg2;
- (void)_encodeDownloadPoint;
@property(readonly) id <MTLCommandBuffer> baseObject;

// Remaining properties
@property(readonly) double GPUEndTime;
@property(readonly) double GPUStartTime;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) double kernelEndTime;
@property(readonly) double kernelStartTime;
@property(readonly) Class superclass;

@end

