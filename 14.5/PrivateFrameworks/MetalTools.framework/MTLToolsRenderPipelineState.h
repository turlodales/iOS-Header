//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLRenderPipelineStateSPI-Protocol.h>

@class MTLDebugInstrumentationData, NSString;
@protocol MTLDevice;

@interface MTLToolsRenderPipelineState : MTLToolsObject <MTLRenderPipelineStateSPI>
{
}

@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *tileDebugInstrumentationData;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;
@property(readonly) unsigned long long uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long gpuAddress;
@property(readonly, nonatomic) unsigned long long resourceIndex;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;
@property(readonly) unsigned long long imageblockSampleLength;
- (id)newFragmentShaderDebugInfo;
- (id)newVertexShaderDebugInfo;
@property(readonly) long long textureWriteRoundingMode;
@property(readonly) _Bool supportIndirectCommandBuffers;
@property(readonly) _Bool threadgroupSizeMatchesTileSize;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSString *label;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

