//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/NSObject-Protocol.h>

@protocol CalSearchDataSink <NSObject>
- (void)calSearchComplete:(id)arg1;
- (void)calSearch:(id)arg1 foundOccurrences:(struct __CFArray *)arg2 cachedDays:(struct __CFArray *)arg3 cachedDaysIndexes:(struct __CFArray *)arg4;

@optional
- (void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2;
- (_Bool)calSearchShouldStopSearching:(id)arg1;
@end

