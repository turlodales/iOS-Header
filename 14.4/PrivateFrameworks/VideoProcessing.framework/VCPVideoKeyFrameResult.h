//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPVideoKeyFrameResult : NSObject
{
    float _score;
    CDStruct_1b6d18a9 _timeStamp;
}

@property(readonly, nonatomic) float score; // @synthesize score=_score;
@property(readonly, nonatomic) CDStruct_1b6d18a9 timeStamp; // @synthesize timeStamp=_timeStamp;
- (id)initWithTime:(CDStruct_1b6d18a9)arg1 andScore:(float)arg2;

@end

