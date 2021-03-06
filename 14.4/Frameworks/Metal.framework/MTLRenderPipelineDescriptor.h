//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLPipelineBufferDescriptorArray, MTLRenderPipelineColorAttachmentDescriptorArray, MTLVertexDescriptor, NSArray, NSString;
@protocol MTLFunction;

@interface MTLRenderPipelineDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;

// Remaining properties
@property(nonatomic, getter=isAlphaToCoverageEnabled) _Bool alphaToCoverageEnabled; // @dynamic alphaToCoverageEnabled;
@property(nonatomic, getter=isAlphaToOneEnabled) _Bool alphaToOneEnabled; // @dynamic alphaToOneEnabled;
@property(copy, nonatomic) NSArray *binaryArchives; // @dynamic binaryArchives;
@property(readonly) MTLRenderPipelineColorAttachmentDescriptorArray *colorAttachments; // @dynamic colorAttachments;
@property(nonatomic) unsigned long long depthAttachmentPixelFormat; // @dynamic depthAttachmentPixelFormat;
@property(readonly) MTLPipelineBufferDescriptorArray *fragmentBuffers; // @dynamic fragmentBuffers;
@property(retain, nonatomic) id <MTLFunction> fragmentFunction; // @dynamic fragmentFunction;
@property(nonatomic) unsigned long long inputPrimitiveTopology; // @dynamic inputPrimitiveTopology;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(nonatomic) unsigned long long maxTessellationFactor; // @dynamic maxTessellationFactor;
@property(nonatomic) unsigned long long maxVertexAmplificationCount; // @dynamic maxVertexAmplificationCount;
@property(nonatomic) unsigned long long rasterSampleCount; // @dynamic rasterSampleCount;
@property(nonatomic, getter=isRasterizationEnabled) _Bool rasterizationEnabled; // @dynamic rasterizationEnabled;
@property(nonatomic) unsigned long long sampleCount; // @dynamic sampleCount;
@property(nonatomic) unsigned long long stencilAttachmentPixelFormat; // @dynamic stencilAttachmentPixelFormat;
@property(nonatomic) _Bool supportIndirectCommandBuffers; // @dynamic supportIndirectCommandBuffers;
@property(nonatomic) unsigned long long tessellationControlPointIndexType; // @dynamic tessellationControlPointIndexType;
@property(nonatomic) unsigned long long tessellationFactorFormat; // @dynamic tessellationFactorFormat;
@property(nonatomic, getter=isTessellationFactorScaleEnabled) _Bool tessellationFactorScaleEnabled; // @dynamic tessellationFactorScaleEnabled;
@property(nonatomic) unsigned long long tessellationFactorStepFunction; // @dynamic tessellationFactorStepFunction;
@property(nonatomic) unsigned long long tessellationOutputWindingOrder; // @dynamic tessellationOutputWindingOrder;
@property(nonatomic) unsigned long long tessellationPartitionMode; // @dynamic tessellationPartitionMode;
@property(readonly) MTLPipelineBufferDescriptorArray *vertexBuffers; // @dynamic vertexBuffers;
@property(copy, nonatomic) MTLVertexDescriptor *vertexDescriptor; // @dynamic vertexDescriptor;
@property(retain, nonatomic) id <MTLFunction> vertexFunction; // @dynamic vertexFunction;

@end

