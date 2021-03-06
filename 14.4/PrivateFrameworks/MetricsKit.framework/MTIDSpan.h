//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MTIDSpan : NSObject
{
    unsigned long long _serialNumber;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_referenceDate;
}

+ (id)localCalendar;
+ (id)spanForScheme:(id)arg1 date:(id)arg2 referenceDate:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
- (id)initWithScheme:(id)arg1 date:(id)arg2 referenceDate:(id)arg3;

@end

