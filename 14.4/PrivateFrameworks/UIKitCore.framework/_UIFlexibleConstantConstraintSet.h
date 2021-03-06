//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIConstantConstraintSet.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface _UIFlexibleConstantConstraintSet : _UIConstantConstraintSet
{
    NSLayoutConstraint *_minConstraint;
    NSLayoutConstraint *_maxConstraint;
    NSLayoutConstraint *_equalityConstraint;
    _Bool _equalityConstraintPrefersMin;
    double _minConstant;
    double _maxConstant;
    double _equalityConstant;
}

+ (id)constraintSetWithCollapsableConstantPreferredEqualityConstraint:(id)arg1 equalityPriority:(unsigned long long)arg2;
+ (id)constraintSetWithRequiredEqualityConstraint:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double equalityConstant; // @synthesize equalityConstant=_equalityConstant;
@property(nonatomic) double maxConstant; // @synthesize maxConstant=_maxConstant;
@property(nonatomic) double minConstant; // @synthesize minConstant=_minConstant;
- (id)_otherInequalityConstraint;
- (id)_preferredInequalityConstraint;
- (void)_updateInequalityConstants;
- (_Bool)_equalityConstraintIsRequired;
- (id)_initWithEqualityConstraint:(id)arg1 equalityPriority:(unsigned long long)arg2 prefersMin:(_Bool)arg3;

@end

