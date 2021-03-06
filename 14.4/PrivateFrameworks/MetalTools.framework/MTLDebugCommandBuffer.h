//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsCommandBuffer.h>

@class MTLToolsObject, NSMutableSet, _MTLCommandEncoder;

@interface MTLDebugCommandBuffer : MTLToolsCommandBuffer
{
    _MTLCommandEncoder *_currentEncoder;
    struct unordered_multiset<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::__1::allocator<AttachmentDescriptorSimple>> _attachmentSet;
    struct array<AttachmentDescriptorSimple, 8> _prevAttachments;
    struct array<AttachmentDescriptorSimple, 8> _currAttachments;
    struct os_unfair_lock_s _purgeableObjectsLock;
    struct unordered_set<id<MTLDebugResourcePurgeable>, std::__1::hash<id<MTLDebugResourcePurgeable>>, std::__1::equal_to<id<MTLDebugResourcePurgeable>>, std::__1::allocator<id<MTLDebugResourcePurgeable>>> _referencedPurgeableObjects;
    struct os_unfair_lock_s _retainedObjectsLock;
    struct unordered_set<MTLToolsObject *, std::__1::hash<MTLToolsObject *>, std::__1::equal_to<MTLToolsObject *>, std::__1::allocator<MTLToolsObject *>> _externallyRetainedObjects;
    struct unordered_set<MTLToolsObject *, std::__1::hash<MTLToolsObject *>, std::__1::equal_to<MTLToolsObject *>, std::__1::allocator<MTLToolsObject *>> _internallyRetainedObjects;
    MTLToolsObject *_referencedDeadObject;
    struct os_unfair_lock_s _renderTargetAttachmentLock;
    NSMutableSet *_renderTargetAttachments;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)renderTargetInActiveRenderTargets:(id)arg1;
- (void)addActiveRenderTarget:(id)arg1;
- (void)addActiveRenderTargets:(id)arg1;
- (id)accelerationStructureCommandEncoder;
- (void *)debugBufferContentsWithLength:(unsigned long long *)arg1;
- (void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id *)arg3 count:(unsigned long long)arg4;
- (void)executeSynchronizationNotifications:(int)arg1;
- (void)addSynchronizationNotification:(CDUnknownBlockType)arg1;
- (void)unlockPurgeableObjects;
- (void)lockPurgeableObjects;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDUnion_c6e49ed4 *)arg1 capacity:(unsigned long long)arg2;
- (id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;
- (void)postCompletionHandlers;
- (void)preCompletionHandlers;
- (void)preCommit;
- (_Bool)testObjectReferenced:(id)arg1 wasInternallyRetained:(_Bool *)arg2;
- (void)removeAllReferencedObjects:(_Bool)arg1;
- (void)addReferencedObject:(id)arg1 internallyRetained:(_Bool)arg2;
- (void)addObject:(id)arg1 retained:(_Bool)arg2 purgeable:(_Bool)arg3;
- (void)addPurgeableObject:(id)arg1;
- (void)validateStoreLoadTransition:(id)arg1 atIndex:(unsigned long long)arg2 renderTargetArrayLength:(unsigned long long)arg3;
- (void)onParallelRenderCommanderEndEncoding;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (id)resourceStateCommandEncoderWithDescriptor:(id)arg1;
- (id)blitCommandEncoderWithDescriptor:(id)arg1;
- (id)computeCommandEncoderWithDescriptor:(id)arg1;
- (id)computeCommandEncoder;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (id)unwrapMTLRenderPassDescriptor:(id)arg1;
- (void)addScheduledHandler:(CDUnknownBlockType)arg1;
- (void)addCompletedHandler:(CDUnknownBlockType)arg1;
- (id)resourceStateCommandEncoder;
- (id)blitCommandEncoder;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2;
- (void)dealloc;

@end

