//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSCalendar, NSDateFormatter, NSDateIntervalFormatter, NSListFormatter, NSLocale, SCLTimeIntervalsFormatter;

@interface SCLScheduleFormatter : NSFormatter
{
    NSLocale *_locale;
    NSCalendar *_calendar;
    SCLTimeIntervalsFormatter *_timeIntervalsFormatter;
    NSListFormatter *_listFormatter;
    NSDateFormatter *_standaloneWeekdayFormatter;
    NSDateIntervalFormatter *_weekdayIntervalFormatter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDateIntervalFormatter *weekdayIntervalFormatter; // @synthesize weekdayIntervalFormatter=_weekdayIntervalFormatter;
@property(readonly, nonatomic) NSDateFormatter *standaloneWeekdayFormatter; // @synthesize standaloneWeekdayFormatter=_standaloneWeekdayFormatter;
@property(readonly, nonatomic) NSListFormatter *listFormatter; // @synthesize listFormatter=_listFormatter;
@property(readonly, nonatomic) SCLTimeIntervalsFormatter *timeIntervalsFormatter; // @synthesize timeIntervalsFormatter=_timeIntervalsFormatter;
@property(copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)formatterItemsForSchedule:(id)arg1;
- (id)stringForWeekdaysInItem:(id)arg1;
- (id)stringFromSchedule:(id)arg1;
- (void)_regenerateFormatters;
- (id)init;

@end

