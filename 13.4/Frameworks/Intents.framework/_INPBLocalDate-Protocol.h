//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBLocalDate <NSObject>
@property(nonatomic) _Bool hasYear;
@property(nonatomic) long long year;
@property(nonatomic) _Bool hasMonth;
@property(nonatomic) long long month;
@property(nonatomic) _Bool hasDayOfWeek;
@property(nonatomic) int dayOfWeek;
@property(nonatomic) _Bool hasDayOfMonth;
@property(nonatomic) long long dayOfMonth;
- (int)StringAsDayOfWeek:(NSString *)arg1;
- (NSString *)dayOfWeekAsString:(int)arg1;
@end

