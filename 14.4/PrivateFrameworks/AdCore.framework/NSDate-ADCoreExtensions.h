//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (ADCoreExtensions)
+ (int)minServerTime;
+ (int)maxServerTime;
+ (id)dateFromServerTime:(int)arg1;
- (id)doubleDateTimeAsString;
- (id)universalDateTimeAsString;
- (id)localDateTimeAsString;
- (int)toServerTime;
@end

