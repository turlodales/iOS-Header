//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface HKHeartRhythmOnboardingHistory : NSObject
{
    NSDictionary *_dataSource;
    long long _count;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) NSDictionary *dataSource; // @synthesize dataSource=_dataSource;
- (id)description;
- (_Bool)containsOnboardedVersion:(long long)arg1;
@property(readonly, nonatomic) long long maxOnboardedVersion;
- (id)_emptyHistory;
- (id)_filterOnlyLessThanVersion:(long long)arg1;
- (id)_filterLessThanOrEqualToVersion:(long long)arg1;
- (id)filteredHistoryByVersion:(long long)arg1 filterType:(long long)arg2;
- (id)initWithDictionary:(id)arg1;

@end

