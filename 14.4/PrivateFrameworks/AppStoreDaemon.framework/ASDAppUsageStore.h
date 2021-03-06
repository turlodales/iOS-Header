//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASDAppUsageStats, NSArray;

@interface ASDAppUsageStore : NSObject
{
    _Bool _verbose;
    ASDAppUsageStats *_leastUsageCount;
    ASDAppUsageStats *_leastUsageTime;
    ASDAppUsageStats *_topUsageCount;
    ASDAppUsageStats *_topUsageTime;
    NSArray *_usageStats;
}

+ (id)allUsageForStreams:(unsigned long long)arg1 fromDate:(id)arg2 endDate:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool verbose; // @synthesize verbose=_verbose;
@property(readonly, nonatomic) NSArray *usageStats; // @synthesize usageStats=_usageStats;
@property(readonly, nonatomic) ASDAppUsageStats *topUsageTime; // @synthesize topUsageTime=_topUsageTime;
@property(readonly, nonatomic) ASDAppUsageStats *topUsageCount; // @synthesize topUsageCount=_topUsageCount;
@property(readonly, nonatomic) ASDAppUsageStats *leastUsageTime; // @synthesize leastUsageTime=_leastUsageTime;
@property(readonly, nonatomic) ASDAppUsageStats *leastUsageCount; // @synthesize leastUsageCount=_leastUsageCount;
- (id)_sortDescriptors;
- (id)_calculateUsageFromDate:(id)arg1 endDate:(id)arg2 stats:(id)arg3 includeExtensionUsage:(_Bool)arg4;
- (id)_calculateRawUsageFromDate:(id)arg1 endDate:(id)arg2 stats:(id)arg3 streams:(unsigned long long)arg4;
- (id)_calcluateUsageFromDate:(id)arg1 endDate:(id)arg2 bundleIDs:(id)arg3 includeExtensionUsage:(_Bool)arg4;
- (void)_calculateUsageForDurationInDays:(double)arg1 bundleIDs:(id)arg2 includeExtensionUsage:(_Bool)arg3;
- (id)calcluateUsageFromDate:(id)arg1 endDate:(id)arg2 bundleIDs:(id)arg3;
- (id)calcluateUsageFromDate:(id)arg1 endDate:(id)arg2 appMetadata:(id)arg3 streams:(unsigned long long)arg4;
- (id)initWithDurationInDays:(double)arg1 bundleIDs:(id)arg2 includeExtensionUsage:(_Bool)arg3;
- (id)initWithDurationInDays:(double)arg1 bundleIDs:(id)arg2;

@end

