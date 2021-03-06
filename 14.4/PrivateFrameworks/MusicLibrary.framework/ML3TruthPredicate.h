//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3Predicate.h>

@interface ML3TruthPredicate : ML3Predicate
{
    _Bool _truthValue;
}

+ (_Bool)supportsSecureCoding;
+ (id)falsePredicate;
+ (id)truePredicate;
- (_Bool)isFalseAlways;
- (_Bool)isTrueAlways;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)_predicateString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

