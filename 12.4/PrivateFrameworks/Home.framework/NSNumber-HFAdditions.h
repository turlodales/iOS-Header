//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSNumber.h>

@interface NSNumber (HFAdditions)
- (id)hf_smallerNumber:(id)arg1;
- (id)hf_largerNumber:(id)arg1;
- (long long)hf_compareAbsoluteValue:(id)arg1;
- (id)hf_valueRoundedToNearestStepValue:(id)arg1 relativeToBaseValue:(id)arg2;
@property(readonly, copy, nonatomic) NSNumber *hf_absoluteValue;
@property(readonly, nonatomic) _Bool hf_isSignedValue;
@property(readonly, nonatomic) _Bool hf_isFloatValue;
@end

