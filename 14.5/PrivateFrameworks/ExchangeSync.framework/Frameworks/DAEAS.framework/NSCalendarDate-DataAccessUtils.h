//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCalendarDate.h>

@interface NSCalendarDate (DataAccessUtils)
+ (id)combinedDateWithYMDFrom:(id)arg1 HMSFrom:(id)arg2 componentDatesTimezone:(id)arg3;
- (void)getGregorianDate:(CDStruct_79f9e052 *)arg1;
- (id)gmtMidnight;
- (_Bool)isGMTMidnight;
- (id)nearestMidnight;
- (id)gmtDateToDateInTimeZone:(id)arg1;
- (id)tzDateToDateInGMT:(id)arg1;
@end

