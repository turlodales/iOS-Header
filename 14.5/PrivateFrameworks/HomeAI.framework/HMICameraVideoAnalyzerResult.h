//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeAI/NSSecureCoding-Protocol.h>

@class HMICameraVideoFragment, NSArray, NSDate, NSDictionary;

@interface HMICameraVideoAnalyzerResult : NSObject <NSSecureCoding>
{
    float _analysisFPS;
    long long _events;
    NSDictionary *_annotationScores;
    NSArray *_posterFrames;
    NSArray *_frameResults;
    NSDate *_creationDate;
    long long _resultCode;
    double _timeToAnalyzeFragment;
    double _timeSinceFragmentWasSubmitted;
    HMICameraVideoFragment *_videoFragment;
    unsigned long long _lastSequenceNumber;
    CDStruct_1b6d18a9 _duration;
}

+ (id)_annotationScoresFromAnalyzerEvents:(id)arg1;
+ (long long)_eventsFromAnalyzerEvents:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) unsigned long long lastSequenceNumber; // @synthesize lastSequenceNumber=_lastSequenceNumber;
@property float analysisFPS; // @synthesize analysisFPS=_analysisFPS;
@property(retain) HMICameraVideoFragment *videoFragment; // @synthesize videoFragment=_videoFragment;
@property double timeSinceFragmentWasSubmitted; // @synthesize timeSinceFragmentWasSubmitted=_timeSinceFragmentWasSubmitted;
@property double timeToAnalyzeFragment; // @synthesize timeToAnalyzeFragment=_timeToAnalyzeFragment;
@property long long resultCode; // @synthesize resultCode=_resultCode;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly) NSArray *frameResults; // @synthesize frameResults=_frameResults;
@property(readonly) NSArray *posterFrames; // @synthesize posterFrames=_posterFrames;
@property(readonly) NSDictionary *annotationScores; // @synthesize annotationScores=_annotationScores;
@property(readonly) long long events; // @synthesize events=_events;
- (_Bool)isEqual:(id)arg1 excludeTime:(_Bool)arg2;
- (id)aggregatedEventTypes;
- (id)aggregatedEvents;
- (id)maxConfidenceEventForEventClass:(Class)arg1;
- (long long)confidenceThatEventOccurred:(long long)arg1;
- (id)initWithPosterFrames:(id)arg1 frameResults:(id)arg2 duration:(CDStruct_1b6d18a9)arg3 creationDate:(id)arg4 resultCode:(long long)arg5 lastSequenceNumber:(unsigned long long)arg6;
- (id)initWithEvents:(long long)arg1 posterFrames:(id)arg2 frameResults:(id)arg3 annotationScores:(id)arg4 duration:(CDStruct_1b6d18a9)arg5 creationDate:(id)arg6 resultCode:(long long)arg7 lastSequenceNumber:(unsigned long long)arg8;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

