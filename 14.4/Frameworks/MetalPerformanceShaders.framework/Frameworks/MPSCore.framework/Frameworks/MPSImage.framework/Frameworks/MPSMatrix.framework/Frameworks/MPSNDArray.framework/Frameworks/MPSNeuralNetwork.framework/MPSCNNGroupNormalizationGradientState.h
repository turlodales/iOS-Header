//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNGradientState.h>

@class MPSCNNGroupNormalization;
@protocol MTLBuffer;

@interface MPSCNNGroupNormalizationGradientState : MPSNNGradientState
{
    MPSCNNGroupNormalization *_groupNormalization;
    unsigned long long _numberOfFeatureChannels;
    unsigned long long _numberOfGroups;
}

+ (id)temporaryStateWithCommandBuffer:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 groupNormalization:(id)arg3;
@property(readonly, retain, nonatomic) MPSCNNGroupNormalization *groupNormalization; // @synthesize groupNormalization=_groupNormalization;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 groupNormalization:(id)arg3;
@property(readonly, nonatomic) id <MTLBuffer> gradientForBeta;
@property(readonly, nonatomic) id <MTLBuffer> gradientForGamma;
@property(readonly, nonatomic) id <MTLBuffer> beta;
@property(readonly, nonatomic) id <MTLBuffer> gamma;

@end

