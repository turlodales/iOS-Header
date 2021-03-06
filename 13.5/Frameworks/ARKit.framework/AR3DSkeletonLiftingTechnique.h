//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARMLImageProcessingTechnique.h>

@class MISSING_TYPE, NSString;

@interface AR3DSkeletonLiftingTechnique : ARMLImageProcessingTechnique
{
    NSString *_inputTensorName;
}

+ (void)_transformRelativeToHip:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
+ (_Bool)_adjustBoneLength:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)arg1;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(struct CGSize)arg3;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)_endMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endLoadingMLModelSignpost;
- (void)_startLoadingMLModelSignpost;
- (id)processEspressoTensor:(id)arg1;
- (void)changeEspressoConfig:(id)arg1;
- (double)requiredTimeInterval;
- (unsigned long long)requiredSensorDataTypes;
- (id)init;

@end

