//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, VCPFrameAnalysisStats, VCPMovieHighlightAnalyzer, VCPVideoKeyFrameAnalyzer;

@interface VCPMovieCurationAnalyzer : NSObject
{
    VCPVideoKeyFrameAnalyzer *_keyFrameAnalyzer;
    VCPMovieHighlightAnalyzer *_highlightAnalyzer;
    NSArray *_descriptorResults;
    NSArray *_qualityResuls;
    NSArray *_junkResults;
    NSArray *_faceResults;
    NSArray *_actionResults;
    NSArray *_subtleMotionResults;
    NSArray *_voiceResults;
    NSArray *_sceneResults;
    NSArray *_humanActionResults;
    NSArray *_humanPoseResults;
    NSArray *_cameraMotionResults;
    NSArray *_saliencyResults;
    NSArray *_orientationResults;
    NSDictionary *_faceRanges;
    CDStruct_e83c9415 _timeRange;
    struct CGSize _frameSize;
    VCPFrameAnalysisStats *_frameStats;
    _Bool _isLivePhoto;
    _Bool _hadFlash;
    _Bool _hadZoom;
}

- (void).cxx_destruct;
- (void)reportMovieCurationAnalysisResults:(id)arg1 withSummaryAnalytics:(id)arg2;
- (id)results;
- (void)addSummary:(id)arg1 to:(id)arg2;
- (void)addHighlight:(id)arg1 to:(id)arg2;
- (int)generateMovieCurations;
- (int)postProcessKeyFrames;
- (void)loadVideoAnalysisResults:(id)arg1 audioAnalysisResults:(id)arg2 andFaceRanges:(id)arg3 frameSize:(struct CGSize)arg4;
- (int)analyzeKeyFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (void)setMaxHighlightDuration:(float)arg1;
- (id)initWithAnalysisTypes:(unsigned long long)arg1 transform:(struct CGAffineTransform)arg2 timeRange:(CDStruct_e83c9415)arg3 isLivePhoto:(_Bool)arg4 frameStats:(id)arg5 hadFlash:(_Bool)arg6 hadZoom:(_Bool)arg7 keyFrameResults:(id)arg8;

@end

