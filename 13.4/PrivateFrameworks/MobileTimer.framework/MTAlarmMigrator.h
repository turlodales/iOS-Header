//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTAlarm, NSMutableArray;

@interface MTAlarmMigrator : NSObject
{
    NSMutableArray *_alarms;
    MTAlarm *_sleepAlarm;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MTAlarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property(retain, nonatomic) NSMutableArray *alarms; // @synthesize alarms=_alarms;
- (void)cleanUpOldNotifications;
- (void)removeFromOldStorage;
- (void)migrateFromOldStorage;

@end

