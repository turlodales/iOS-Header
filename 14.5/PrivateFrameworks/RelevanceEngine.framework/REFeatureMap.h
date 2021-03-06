//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/MLFeatureProvider-Protocol.h>
#import <RelevanceEngine/NSCopying-Protocol.h>
#import <RelevanceEngine/_REFeatureMapLoggingProperties-Protocol.h>

@class NSArray, NSDictionary, NSSet;

@interface REFeatureMap : NSObject <MLFeatureProvider, _REFeatureMapLoggingProperties, NSCopying>
{
    unsigned long long _hash;
    unsigned long long *_values;
    NSDictionary *_indices;
}

+ (id)defaultFeatureName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *loggingValues;
@property(readonly, nonatomic) NSSet *allFeatures;
- (id)description;
- (void)enumerateFeatureValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateEmptyFeaturesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateStringFeaturesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDoubleFeaturesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateInt64FeaturesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBoolFeaturesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFeaturesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasValueForFeature:(id)arg1;
- (unsigned long long)valueForFeature:(id)arg1;
- (id)featureValueForFeature:(id)arg1;
- (void)removeAllValues;
- (void)removeValueForFeature:(id)arg1;
- (void)setFeatureValue:(id)arg1 forFeature:(id)arg2;
- (void)setValue:(unsigned long long)arg1 forFeature:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)_count;
- (void)dealloc;
- (id)initWithFeatureMap:(id)arg1;
- (void)enumerateInt64FeaturesUsingIndexedBlock:(CDUnknownBlockType)arg1 emptyFeatureBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long featureCount;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;

@end

