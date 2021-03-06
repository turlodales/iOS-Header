//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPRandom-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@protocol MPRandom;

@interface MPRandomDistribution : NSObject <MPRandom, NSSecureCoding>
{
    id <MPRandom> _source;
    long long _lowestValue;
    long long _highestValue;
    unsigned long long _numberOfPossibleOutcomes;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long numberOfPossibleOutcomes; // @synthesize numberOfPossibleOutcomes=_numberOfPossibleOutcomes;
@property(readonly, nonatomic) long long highestValue; // @synthesize highestValue=_highestValue;
@property(readonly, nonatomic) long long lowestValue; // @synthesize lowestValue=_lowestValue;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;
- (id)init;

@end

