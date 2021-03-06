//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSPredicate : NSObject <NSSecureCoding, NSCopying>
{
    struct _predicateFlags {
        unsigned int _evaluationBlocked:1;
        unsigned int _reservedPredicateFlags:31;
    } _predicateFlags;
    unsigned int reserved;
}

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithBlock:(CDUnknownBlockType)arg1;
+ (id)predicateWithValue:(_Bool)arg1;
+ (id)predicateWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)predicateWithFormat:(id)arg1;
+ (id)predicateWithFormat:(id)arg1 argumentArray:(id)arg2;
+ (struct __CFLocale *)retainedLocale;
+ (id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned long long)arg2;
+ (void)initialize;
@property(readonly, copy) NSString *predicateFormat;
- (id)description;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (_Bool)evaluateWithObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)allowEvaluation;
- (_Bool)_allowsEvaluation;
- (id)generateMetadataDescription;
- (void)_validateForMetadataQueryScopes:(id)arg1;

@end

