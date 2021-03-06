//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HMIConfidence : HMFObject <NSSecureCoding>
{
    double _value;
    NSArray *_levelThresholds;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSArray *levelThresholds; // @synthesize levelThresholds=_levelThresholds;
@property(readonly) double value; // @synthesize value=_value;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)shortDescription;
- (id)description;
@property(readonly) long long level;
- (id)initWithValue:(double)arg1 levelThresholds:(id)arg2;

@end

