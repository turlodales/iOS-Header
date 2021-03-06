//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPVideoFaceDetector.h>

@class NSArray, NSMutableArray, NSMutableDictionary, VCPCNNPoseEstimator, VCPCNNSmileDetector, VCPFrameAnalysisStats;

@interface VCPVideoFullFaceDetector : VCPVideoFaceDetector
{
    int _latestTrackID;
    VCPCNNSmileDetector *_smileDetector;
    VCPCNNPoseEstimator *_poseEstimator;
    NSArray *_existingFaceprints;
    VCPFrameAnalysisStats *_frameStats;
    float _latestFrameArea;
    CDStruct_1b6d18a9 _timeLastTracking;
    NSMutableDictionary *_faceTrackers;
    NSMutableDictionary *_keyFaces;
    NSMutableArray *_reservedIDs;
    NSMutableDictionary *_facePrints;
    NSMutableArray *_allFaces;
    NSMutableDictionary *_faceRanges;
    NSMutableArray *_frameFaceResults;
}

- (void).cxx_destruct;
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;
- (int)updateWithExistingFaces;
- (int)clusterFaces;
- (id)frameFaceResults;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (int)detectTrackFacesInFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 faces:(id)arg3;
- (_Bool)locationChange:(struct CGRect)arg1 relativeTo:(struct CGRect)arg2 landscape:(_Bool)arg3;
- (_Bool)compareFace:(id)arg1 withFace:(id)arg2;
- (void)removeSmallestKeyFace;
- (float)minProcessTimeIntervalInSecs;
- (int)detectFaces:(struct __CVBuffer *)arg1 faces:(id)arg2;
- (void)dealloc;
- (id)initWithTransform:(struct CGAffineTransform)arg1 withExistingFaceprints:(id)arg2 frameStats:(id)arg3;
- (id)initWithTransform:(struct CGAffineTransform)arg1;
- (id)faceRanges;

@end

