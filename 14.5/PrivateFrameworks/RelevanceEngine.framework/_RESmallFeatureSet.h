//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REFeatureSet.h>

@class REFeature;

@interface _RESmallFeatureSet : REFeatureSet
{
    REFeature *_features[3];
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)allFeatures;
- (_Bool)containsFeature:(id)arg1;
- (id)featureWithName:(id)arg1;
- (unsigned long long)count;
- (id)initWithFeatures:(id)arg1;
- (id)initWithFeature:(id)arg1;
- (id)init;

@end

