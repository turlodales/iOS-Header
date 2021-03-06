//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPSVector;

@interface MPSMatrixCopyDescriptor : NSObject
{
    id *_sourceMatrices;
    id *_destinationMatrices;
    CDStruct_7523a67d *_cpuOffsetsVector;
    MPSVector *_gpuOffsetsVector;
    unsigned long long _gpuBufferOffset;
    unsigned long long _allocCount;
    unsigned long long _filledCount;
}

+ (id)descriptorWithSourceMatrix:(id)arg1 destinationMatrix:(id)arg2 offsets:(CDStruct_7523a67d)arg3;
- (void)dealloc;
- (void)setCopyOperationAtIndex:(unsigned long long)arg1 sourceMatrix:(id)arg2 destinationMatrix:(id)arg3 offsets:(CDStruct_7523a67d)arg4;
- (id)initWithSourceMatrices:(id)arg1 destinationMatrices:(id)arg2 offsetVector:(id)arg3 offset:(unsigned long long)arg4;
- (id)initWithDevice:(id)arg1 count:(unsigned long long)arg2;
- (unsigned long long)filledCount;
- (unsigned long long)allocCount;
- (unsigned long long)gpuBufferOffset;
- (id)gpuOffsetsVector;
- (CDStruct_7523a67d *)cpuOffsetsVector;
- (id *)destinationMatrices;
- (id *)sourceMatrices;

@end

