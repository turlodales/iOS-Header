//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturb/DNDScheduleSettings.h>

@class NSDate;

@interface DNDSScheduleSettings : DNDScheduleSettings
{
    NSDate *_creationDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)settingsWithClientSettings:(id)arg1 creationDate:(id)arg2;
+ (id)defaultScheduleSettings;
+ (id)settingsForRecord:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (id)replacementObjectForCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithScheduleEnabledSetting:(unsigned long long)arg1 timePeriod:(id)arg2 bedtimeBehaviorEnabledSetting:(unsigned long long)arg3 creationDate:(id)arg4;
- (id)makeRecord;

@end

