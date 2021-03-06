//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNClustererOptions.h>

@interface VNClustererBuilderOptions : VNClustererOptions
{
    float _ageClassifierBabyThreshold;
    float _ageClassifierKidThreshold;
}

+ (_Bool)_defaultAgeClassifierKidThreshold:(float *)arg1 forFaceprintRequestRevision:(unsigned long long)arg2 error:(id *)arg3;
+ (_Bool)_defaultAgeClassifierBabyThreshold:(float *)arg1 forFaceprintRequestRevision:(unsigned long long)arg2 error:(id *)arg3;
@property(nonatomic) float ageClassifierKidThreshold; // @synthesize ageClassifierKidThreshold=_ageClassifierKidThreshold;
@property(nonatomic) float ageClassifierBabyThreshold; // @synthesize ageClassifierBabyThreshold=_ageClassifierBabyThreshold;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4;

@end

