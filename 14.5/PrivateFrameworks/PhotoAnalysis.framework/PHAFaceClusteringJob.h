//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAVisionServiceFaceProcessingWorkerAdditionalJob.h>

@class PHAVisionServiceFaceProcessingWorkerJobKeepAlive;

@interface PHAFaceClusteringJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob
{
    PHAVisionServiceFaceProcessingWorkerJobKeepAlive *_keepAlive;
}

- (void).cxx_destruct;
- (_Bool)stopJob:(id *)arg1;
- (_Bool)startJob:(id *)arg1;
- (void)_handleClusteringCompletion;
- (void)_stopJobKeepAlive;
- (void)_startJobKeepAlive;
- (float)completionScore;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2;

@end

