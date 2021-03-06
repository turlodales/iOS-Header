//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSKernel.h>

@class MISSING_TYPE, MPSKernelDAGObject;
@protocol MPSNDArrayAllocator;

@interface MPSNDArrayMultiaryBase : MPSKernel
{
    unsigned long long _srcCount;
    void *_encodeData;
    CDUnknownFunctionPointerType _encodeGradient;
    id <MPSNDArrayAllocator> _destinationArrayAllocator;
    MPSKernelDAGObject *_defaultKernelDAG;
    MPSKernelDAGObject *_defaultGradientDAG;
}

+ (unsigned long long)expectedVirtualSourceCount;
@property(retain, nonatomic) id <MPSNDArrayAllocator> destinationArrayAllocator; // @synthesize destinationArrayAllocator=_destinationArrayAllocator;
- (void)kernelDAGObjectSetup:(id *)arg1 sourceArrays:(id)arg2 sourceGradient:(id)arg3 destination:(id)arg4;
- (id)reshapeFitToTileToCommandBuffer:(id)arg1 currentSource:(id)arg2 kernelDimension:(unsigned long long)arg3 dimensionsToBeRetained: /* Error: Ran out of types for this method. */;
- (id)workloadStatisticsForSourceArrays:(id)arg1 destArrays:(id)arg2 sourceState:(id)arg3;
- (id)workloadStatisticsForSourceArrays:(id)arg1 destArrays:(id)arg2 kernel:(id)arg3 sourceState:(id)arg4;
- (id)workloadStatisticsForSourceArrays:(id)arg1 sourceState:(id)arg2;
- (id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceState:(id)arg2;
- (CDStruct_129fbded)kernelSizesForSourceIndex:(unsigned long long)arg1;
- (CDStruct_129fbded)dilationRatesForSourceIndex:(unsigned long long)arg1;
- (CDStruct_f52b1b8f)stridesForSourceIndex:(unsigned long long)arg1;
- (unsigned long long)edgeModeAtSourceIndex:(unsigned long long)arg1;
- (CDStruct_f52b1b8f)offsetsAtSourceIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)dealloc;
- (MISSING_TYPE *)dimensionsNotToBeBroadcast;
- (MISSING_TYPE *)dimensionsToBeRetained;
- (unsigned long long)maxSupportedDimensionsForSourceArrays:(id)arg1 destinationArray:(id)arg2;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceArrays:(id)arg2 sourceStates:(id)arg3 destinationArray:(id)arg4;
- (id)resultStateForSourceArrays:(id)arg1 sourceStates:(id)arg2 destinationArray:(id)arg3;
- (void)copyToGradientState:(id)arg1 sourceArrays:(id)arg2 sourceStates:(id)arg3 destinationArray:(id)arg4;
- (id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2;
- (MISSING_TYPE *)destinationStrides;
- (MISSING_TYPE *)stridesAtSourceIndex:(unsigned long long)arg1;

@end

