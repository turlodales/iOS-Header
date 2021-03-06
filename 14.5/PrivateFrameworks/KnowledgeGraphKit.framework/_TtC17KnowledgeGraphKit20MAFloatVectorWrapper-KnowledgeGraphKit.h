//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeGraphKit/_TtC17KnowledgeGraphKit20MAFloatVectorWrapper.h>

#import <KnowledgeGraphKit/NSCopying-Protocol.h>
#import <KnowledgeGraphKit/NSMutableCopying-Protocol.h>

@class NSString;

@interface _TtC17KnowledgeGraphKit20MAFloatVectorWrapper (KnowledgeGraphKit) <NSCopying, NSMutableCopying>
+ (id)repeatingFloat:(float)arg1 count:(long long)arg2;
+ (id)onesOfCount:(long long)arg1;
+ (id)zerosOfCount:(long long)arg1;
- (id)initWithFloats:(const float *)arg1 count:(long long)arg2;
- (id)mutableCopyWithZone:(void *)arg1;
- (id)copyWithZone:(void *)arg1;
- (id)naturalLogarithmIfPositive;
- (id)naturalLogarithm;
@property(nonatomic, readonly) NSString *debugDescription;
@property(nonatomic, readonly) NSString *description;
- (id)data;
- (id)array;
- (float)standardDeviation;
- (float)mean;
- (float)sumOfSquares;
- (float)sum;
@property(nonatomic, readonly) long long count;
- (id)sliceFromStart:(long long)arg1 toEnd:(long long)arg2;
- (float)dotProductWithWrapper:(id)arg1;
- (id)vectorByElementwiseRaisingToExponent:(float)arg1;
- (id)vectorByElementwiseMultiplyingByWrapper:(id)arg1;
- (id)vectorByDividingByScalar:(float)arg1;
- (id)vectorByMultiplyingByScalar:(float)arg1;
- (id)vectorByAddingScalar:(float)arg1;
- (id)vectorBySubtractingScalar:(float)arg1;
- (id)vectorByAddingVector:(id)arg1;
- (id)vectorBySubtractingVector:(id)arg1;
- (float)floatAtIndex:(long long)arg1;
- (_Bool)isApproximatelyEqualTo:(id)arg1 epsilon:(float)arg2;
- (_Bool)isApproximatelyEqualTo:(id)arg1;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;
@end

