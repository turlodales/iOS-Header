//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate;

__attribute__((visibility("hidden")))
@interface SCLHistoryGroupKey : NSObject
{
    NSCalendar *_calendar;
    NSDate *_referenceDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCalendar:(id)arg1 referenceDate:(id)arg2;

@end

