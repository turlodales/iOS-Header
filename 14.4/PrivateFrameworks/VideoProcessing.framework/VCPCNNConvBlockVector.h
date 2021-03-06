//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPCNNConvBlock.h>

@interface VCPCNNConvBlockVector : VCPCNNConvBlock
{
    CDUnknownFunctionPointerType CalculateDotProductOfChunk;
}

+ (_Bool)isFilterSizeSupported:(int)arg1;
- (int)forward;
- (int)chunkFourForward;
- (int)straightForwardForChunkFour;
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;
- (id)initWithParameters:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(_Bool)arg4 padding:(_Bool)arg5 groups:(int)arg6 stride:(int)arg7 batchNorm:(_Bool)arg8;

@end

