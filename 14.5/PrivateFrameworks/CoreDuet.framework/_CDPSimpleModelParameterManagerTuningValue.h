//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@interface _CDPSimpleModelParameterManagerTuningValue : NSObject <NSSecureCoding>
{
    float _lambda;
    float _w0;
    float _threshold;
    float _score;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) float score; // @synthesize score=_score;
@property(readonly, nonatomic) float threshold; // @synthesize threshold=_threshold;
@property(readonly, nonatomic) float w0; // @synthesize w0=_w0;
@property(readonly, nonatomic) float lambda; // @synthesize lambda=_lambda;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithLambda:(float)arg1 w0:(float)arg2 threshold:(float)arg3 score:(float)arg4;

@end

