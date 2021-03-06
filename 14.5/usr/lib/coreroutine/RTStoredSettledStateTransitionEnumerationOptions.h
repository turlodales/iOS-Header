//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateInterval, NSNumber;

@interface RTStoredSettledStateTransitionEnumerationOptions : NSObject
{
    _Bool _ascending;
    NSDateInterval *_dateInterval;
    NSNumber *_limit;
    unsigned long long _batchSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(readonly, nonatomic) NSNumber *limit; // @synthesize limit=_limit;
@property(copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, nonatomic) _Bool ascending; // @synthesize ascending=_ascending;
- (id)description;
- (id)initWithAscending:(_Bool)arg1 dateInterval:(id)arg2 limit:(id)arg3 batchSize:(unsigned long long)arg4;

@end

