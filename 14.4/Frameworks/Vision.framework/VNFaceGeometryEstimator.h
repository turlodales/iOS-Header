//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceGeometryEstimator : VNDetector
{
}

+ (const vector_3203cf93 *)allLandmarksPointsIndexes;
- (_Bool)_buildCalibrationMatrix:(id)arg1 calibrationMatrix:(float *)arg2 error:(id *)arg3;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;

@end

