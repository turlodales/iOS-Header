//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface CLKDate : NSDate
{
}

+ (id)unmodifiedDate;
+ (id)complicationDate;
+ (id)unmodifiedDateWithTimeIntervalSinceNow:(double)arg1;
+ (id)complicationDateWithTimeIntervalSinceNow:(double)arg1;
+ (double)timeIntervalSinceReferenceDate;
+ (id)dateWithTimeIntervalSinceNow:(double)arg1;
+ (id)date;
- (double)timeIntervalSinceNow;
- (id)initWithTimeIntervalSinceNow:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (id)init;

@end

