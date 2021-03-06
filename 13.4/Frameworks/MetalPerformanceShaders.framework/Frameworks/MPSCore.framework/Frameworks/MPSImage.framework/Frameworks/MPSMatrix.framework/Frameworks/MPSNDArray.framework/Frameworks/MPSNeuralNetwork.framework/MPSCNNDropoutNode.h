//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNDropoutNode : MPSNNFilterNode
{
    float _keepProbability;
    unsigned long long _seed;
    CDStruct_da2e99ad _maskStride;
}

+ (id)nodeWithSource:(id)arg1 keepProbability:(float)arg2 seed:(unsigned long long)arg3 maskStrideInPixels:(CDStruct_14f26992)arg4;
+ (id)nodeWithSource:(id)arg1 keepProbability:(float)arg2;
+ (id)nodeWithSource:(id)arg1;
@property(readonly, nonatomic) CDStruct_14f26992 maskStrideInPixels; // @synthesize maskStrideInPixels=_maskStride;
@property(readonly, nonatomic) unsigned long long seed; // @synthesize seed=_seed;
@property(readonly, nonatomic) float keepProbability; // @synthesize keepProbability=_keepProbability;
- (Class)gradientClass;
- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSource:(id)arg1 keepProbability:(float)arg2 seed:(unsigned long long)arg3 maskStrideInPixels:(CDStruct_14f26992)arg4;
- (id)initWithSource:(id)arg1 keepProbability:(float)arg2;
- (id)initWithSource:(id)arg1;

@end

