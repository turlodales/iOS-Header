//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioPCMBuffer, NSMutableArray, SNAudioStreamAnalyzer;

@interface VCPAudioClassifier : NSObject
{
    unsigned long long _analysisTypes;
    SNAudioStreamAnalyzer *_SNAnalyzer;
    AVAudioPCMBuffer *_pcmBuffer;
    long long _framePosition;
    float _sampleRate;
    NSMutableArray *_detectors;
}

- (void).cxx_destruct;
- (id)results;
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;
- (int)setupWithSample:(struct opaqueCMSampleBuffer *)arg1 andSampleBatchSize:(int)arg2;
- (id)initWithTypes:(unsigned long long)arg1;

@end

