//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExpression.h>

@interface NSSetExpression : NSExpression
{
    NSExpression *_left;
    NSExpression *_right;
}

+ (_Bool)supportsSecureCoding;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)rightExpression;
- (id)leftExpression;
- (id)predicateFormat;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)allowEvaluation;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;

@end

