//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REFeatureValue.h>

@interface _REIntegerFeatureValue : REFeatureValue
{
    unsigned long long _value;
}

+ (id)featureValueWithInt64:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)_integralFeatureValue;
- (unsigned long long)hash;
- (unsigned long long)type;
- (unsigned long long)int64Value;
- (id)initWithValue:(long long)arg1;

@end

