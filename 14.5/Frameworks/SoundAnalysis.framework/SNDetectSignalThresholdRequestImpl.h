//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNAnalyzing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNDetectSignalThresholdRequestImpl : NSObject <SNAnalyzing>
{
    shared_ptr_f6ac7592 _graph;
    unsigned int _blockSize;
    double _sampleRate;
    double _magnitudeThreshold;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) double magnitudeThreshold; // @synthesize magnitudeThreshold=_magnitudeThreshold;
@property(nonatomic) unsigned int blockSize; // @synthesize blockSize=_blockSize;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
- (id)sharedProcessorConfiguration;
@property(readonly, nonatomic) struct Box *resultsBox;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)resultsFromBox:(struct Box *)arg1 renderedWithFrameCount:(int)arg2;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
- (id)initWithSampleRate:(double)arg1 blockSize:(int)arg2 magnitudeThreshold:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

