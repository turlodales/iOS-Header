//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, UICollectionViewDiffableDataSource, _UIDatePickerCalendarDaySet, _UIDatePickerCalendarMonthSet;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarViewDataSourceController : NSObject
{
    NSCalendar *_calendar;
    UICollectionViewDiffableDataSource *_dataSource;
    _UIDatePickerCalendarMonthSet *_loadedMonthSet;
    _UIDatePickerCalendarDaySet *_loadedDaySet;
}

- (void).cxx_destruct;
- (long long)prepareDataSourceWithScrollPositionIfNecessary:(id)arg1;
- (long long)cleanupDataSourceWithScrollPositionIfNecessary:(id)arg1;
- (void)reloadDataSourceAroundMonth:(id)arg1;
- (void)_reloadDataSourceWithScrollPosition:(id)arg1;
- (id)initWithCalendar:(id)arg1 dataSource:(id)arg2;
- (id)_loadedDays;
- (id)_loadedMonths;

@end

