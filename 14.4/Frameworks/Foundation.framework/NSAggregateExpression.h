//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExpression.h>

__attribute__((visibility("hidden")))
@interface NSAggregateExpression : NSExpression
{
    id _collection;
}

+ (_Bool)supportsSecureCoding;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)collection;
- (id)constantValue;
- (id)predicateFormat;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)allowEvaluation;
- (id)initWithCollection:(id)arg1;

@end

