//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate;

@interface PRSRankingItemRelativeFeatureContext : NSObject
{
    unsigned short _relRankFeature;
    unsigned short _absRankFeature;
    NSPredicate *_predicate;
    CDUnknownBlockType _comparator;
}

+ (void)_associatedPRSL2FeatureFromRelativeFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned short *)arg2 relRankFeatureOut:(unsigned short *)arg3;
+ (id)_predicateForRelativeFeature:(unsigned long long)arg1 currentTime:(double)arg2;
+ (CDUnknownBlockType)_resultComparatorForRelativeFeature:(unsigned long long)arg1;
+ (id)_relativeContextsForFeatures:(id)arg1 currentTime:(double)arg2;
+ (id)relativeContextsForResultSetWithCurrentTime:(double)arg1;
+ (id)relativeContextsForBundle:(id)arg1 currentTime:(double)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) unsigned short absRankFeature; // @synthesize absRankFeature=_absRankFeature;
@property(nonatomic) unsigned short relRankFeature; // @synthesize relRankFeature=_relRankFeature;
- (id)initWithFeature:(unsigned long long)arg1 currentTime:(double)arg2;

@end

