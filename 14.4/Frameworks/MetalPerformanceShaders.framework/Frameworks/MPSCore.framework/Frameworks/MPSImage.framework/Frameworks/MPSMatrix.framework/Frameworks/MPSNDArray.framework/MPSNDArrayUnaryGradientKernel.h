//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNDArray/MPSNDArrayMultiaryGradientKernel.h>

@interface MPSNDArrayUnaryGradientKernel : MPSNDArrayMultiaryGradientKernel
{
}

+ (unsigned long long)expectedVirtualSourceCount;
- (void)encodeToCommandBuffer:(id)arg1 sourceArray:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 destinationArray:(id)arg5;
- (id)encodeToCommandBuffer:(id)arg1 sourceArray:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;

@end

