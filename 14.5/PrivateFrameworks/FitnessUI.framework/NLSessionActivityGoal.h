//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/NSSecureCoding-Protocol.h>

@class HKQuantity;

@interface NLSessionActivityGoal : NSObject <NSSecureCoding>
{
    double _doubleValue;
    unsigned long long _goalTypeIdentifier;
}

+ (id)goalWithGoalTypeIdentifier:(unsigned long long)arg1 value:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)goalFromURL:(id)arg1;
@property(nonatomic) unsigned long long goalTypeIdentifier; // @synthesize goalTypeIdentifier=_goalTypeIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToNLSessionActivityGoal:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)doubleValue;
- (id)_quantityForDoubleValue:(double)arg1;
- (double)_doubleValueForQuantity:(id)arg1;
@property(retain, nonatomic) HKQuantity *value;
- (id)initWithGoalTypeIdentifier:(unsigned long long)arg1 value:(id)arg2;

@end

