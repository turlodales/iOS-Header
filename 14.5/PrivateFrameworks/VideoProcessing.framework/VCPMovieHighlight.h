//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VCPImageDescriptor, VCPVideoKeyFrame;

@interface VCPMovieHighlight : NSObject
{
    _Bool _isAutoPlayable;
    _Bool _isTrimmed;
    float _score;
    float _junkScore;
    float _qualityScore;
    float _expressionScore;
    float _actionScore;
    float _voiceScore;
    float _humanActionScore;
    float _humanPoseScore;
    VCPImageDescriptor *_descriptor;
    VCPVideoKeyFrame *_keyFrame;
    struct CGRect _bestPlaybackCrop;
    CDStruct_e83c9415 _timerange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VCPVideoKeyFrame *keyFrame; // @synthesize keyFrame=_keyFrame;
@property(retain, nonatomic) VCPImageDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(nonatomic) _Bool isTrimmed; // @synthesize isTrimmed=_isTrimmed;
@property(nonatomic) _Bool isAutoPlayable; // @synthesize isAutoPlayable=_isAutoPlayable;
@property(nonatomic) struct CGRect bestPlaybackCrop; // @synthesize bestPlaybackCrop=_bestPlaybackCrop;
@property(nonatomic) float humanPoseScore; // @synthesize humanPoseScore=_humanPoseScore;
@property(nonatomic) float humanActionScore; // @synthesize humanActionScore=_humanActionScore;
@property(nonatomic) float voiceScore; // @synthesize voiceScore=_voiceScore;
@property(nonatomic) float actionScore; // @synthesize actionScore=_actionScore;
@property(nonatomic) float expressionScore; // @synthesize expressionScore=_expressionScore;
@property(nonatomic) float qualityScore; // @synthesize qualityScore=_qualityScore;
@property(nonatomic) float junkScore; // @synthesize junkScore=_junkScore;
@property(nonatomic) float score; // @synthesize score=_score;
@property(nonatomic) CDStruct_e83c9415 timerange; // @synthesize timerange=_timerange;
- (void)checkAutoPlayable;
- (void)copyScoresFrom:(id)arg1;
- (_Bool)isShort;
- (void)mergeSegment:(id)arg1;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1;

@end

