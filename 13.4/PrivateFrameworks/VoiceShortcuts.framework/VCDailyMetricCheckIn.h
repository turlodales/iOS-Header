//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSUserDefaults;

@interface VCDailyMetricCheckIn : NSObject
{
    NSDate *_currentDate;
    NSUserDefaults *_userDefaults;
}

+ (id)recentCheckIn;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, copy, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(readonly, copy, nonatomic) NSDate *checkInDate;
- (void)updateCheckInToNow;
- (_Bool)isCheckInAllowed;
- (id)initWithCurrentDate:(id)arg1 defaults:(id)arg2;
- (id)init;

@end

