//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface TIMetricDescriptorRegistry : NSObject
{
    _Bool _loaded;
    NSDictionary *_config;
    NSMutableDictionary *_metricDescriptors;
    NSMutableSet *_invalidMetricNames;
}

+ (id)registryWithDescriptors:(id)arg1 andInvalidMetricNames:(id)arg2;
+ (id)registryWithConfig:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) NSMutableSet *invalidMetricNames; // @synthesize invalidMetricNames=_invalidMetricNames;
@property(readonly, nonatomic) NSMutableDictionary *metricDescriptors; // @synthesize metricDescriptors=_metricDescriptors;
@property(readonly, nonatomic) NSDictionary *config; // @synthesize config=_config;
- (id)valueFromError:(id)arg1 forKey:(id)arg2;
- (id)contextFromError:(id)arg1;
- (void)loadMetricDescriptors;
- (id)metricDescriptorWithName:(id)arg1;
- (id)initWithDescriptors:(id)arg1 andInvalidMetricNames:(id)arg2;
- (id)initWithConfig:(id)arg1;

@end

