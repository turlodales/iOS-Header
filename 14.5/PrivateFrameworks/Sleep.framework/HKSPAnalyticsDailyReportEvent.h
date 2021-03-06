//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sleep/HKSPAnalyticsEvent-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface HKSPAnalyticsDailyReportEvent : NSObject <HKSPAnalyticsEvent>
{
    _Bool _isImproveHealthAndActivitySubmissionAllowed;
    _Bool _watchSleepTrackingEnabled;
    _Bool _timeInBedTrackingEnabled;
    _Bool _bedTimeWindDownRemindersEnabled;
    _Bool _wakeUpResultsEnabled;
    _Bool _scheduledSleepModeEnabled;
    _Bool _chargeRemindersEnabled;
    _Bool _scheduleDisabled;
    _Bool _scheduleMigration;
    _Bool _scheduleChangePast24Hours;
    _Bool _scheduleChangePast7days;
    _Bool _interactedWithWindDownLast24Hrs;
    _Bool _alarmFriday;
    _Bool _alarmMonday;
    _Bool _alarmSaturday;
    _Bool _alarmSunday;
    _Bool _alarmThursday;
    _Bool _alarmTuesday;
    _Bool _alarmWednesday;
    _Bool _scheduleFriday;
    _Bool _scheduleMonday;
    _Bool _scheduleSaturday;
    _Bool _scheduleSunday;
    _Bool _scheduleThursday;
    _Bool _scheduleTuesday;
    _Bool _scheduleWednesday;
    _Bool _isDefaultScheduleFriday;
    _Bool _isDefaultScheduleMonday;
    _Bool _isDefaultScheduleSaturday;
    _Bool _isDefaultScheduleSunday;
    _Bool _isDefaultScheduleThursday;
    _Bool _isDefaultScheduleTuesday;
    _Bool _isDefaultScheduleWednesday;
    _Bool _didWearWatchToSleepLastNight;
    NSNumber *_userAge;
    NSString *_biologicalSex;
    NSNumber *_weeksSinceOnboardedSleepSchedule;
    NSNumber *_weeksSinceOnboardedSleepTracking;
    NSNumber *_weeksSinceOnboardedWindDownActions;
    NSString *_activeWatchProductType;
    double _sleepGoal;
    NSString *_hapticToneIdentifierFriday;
    NSString *_hapticToneIdentifierMonday;
    NSString *_hapticToneIdentifierSaturday;
    NSString *_hapticToneIdentifierSunday;
    NSString *_hapticToneIdentifierThursday;
    NSString *_hapticToneIdentifierTuesday;
    NSString *_hapticToneIdentifierWednesday;
    NSNumber *_stddevActualTimeAsleep;
    NSNumber *_stddevScheduledTimeAsleep;
    NSNumber *_stddevActualVsScheduledTimeAsleep;
    long long _daysWornWatchToSleepInLast7Days;
    long long _weekendDaysWornWatchToSleepInLast7Days;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didWearWatchToSleepLastNight; // @synthesize didWearWatchToSleepLastNight=_didWearWatchToSleepLastNight;
@property(nonatomic) long long weekendDaysWornWatchToSleepInLast7Days; // @synthesize weekendDaysWornWatchToSleepInLast7Days=_weekendDaysWornWatchToSleepInLast7Days;
@property(nonatomic) long long daysWornWatchToSleepInLast7Days; // @synthesize daysWornWatchToSleepInLast7Days=_daysWornWatchToSleepInLast7Days;
@property(copy, nonatomic) NSNumber *stddevActualVsScheduledTimeAsleep; // @synthesize stddevActualVsScheduledTimeAsleep=_stddevActualVsScheduledTimeAsleep;
@property(copy, nonatomic) NSNumber *stddevScheduledTimeAsleep; // @synthesize stddevScheduledTimeAsleep=_stddevScheduledTimeAsleep;
@property(copy, nonatomic) NSNumber *stddevActualTimeAsleep; // @synthesize stddevActualTimeAsleep=_stddevActualTimeAsleep;
@property(nonatomic) _Bool isDefaultScheduleWednesday; // @synthesize isDefaultScheduleWednesday=_isDefaultScheduleWednesday;
@property(nonatomic) _Bool isDefaultScheduleTuesday; // @synthesize isDefaultScheduleTuesday=_isDefaultScheduleTuesday;
@property(nonatomic) _Bool isDefaultScheduleThursday; // @synthesize isDefaultScheduleThursday=_isDefaultScheduleThursday;
@property(nonatomic) _Bool isDefaultScheduleSunday; // @synthesize isDefaultScheduleSunday=_isDefaultScheduleSunday;
@property(nonatomic) _Bool isDefaultScheduleSaturday; // @synthesize isDefaultScheduleSaturday=_isDefaultScheduleSaturday;
@property(nonatomic) _Bool isDefaultScheduleMonday; // @synthesize isDefaultScheduleMonday=_isDefaultScheduleMonday;
@property(nonatomic) _Bool isDefaultScheduleFriday; // @synthesize isDefaultScheduleFriday=_isDefaultScheduleFriday;
@property(copy, nonatomic) NSString *hapticToneIdentifierWednesday; // @synthesize hapticToneIdentifierWednesday=_hapticToneIdentifierWednesday;
@property(copy, nonatomic) NSString *hapticToneIdentifierTuesday; // @synthesize hapticToneIdentifierTuesday=_hapticToneIdentifierTuesday;
@property(copy, nonatomic) NSString *hapticToneIdentifierThursday; // @synthesize hapticToneIdentifierThursday=_hapticToneIdentifierThursday;
@property(copy, nonatomic) NSString *hapticToneIdentifierSunday; // @synthesize hapticToneIdentifierSunday=_hapticToneIdentifierSunday;
@property(copy, nonatomic) NSString *hapticToneIdentifierSaturday; // @synthesize hapticToneIdentifierSaturday=_hapticToneIdentifierSaturday;
@property(copy, nonatomic) NSString *hapticToneIdentifierMonday; // @synthesize hapticToneIdentifierMonday=_hapticToneIdentifierMonday;
@property(copy, nonatomic) NSString *hapticToneIdentifierFriday; // @synthesize hapticToneIdentifierFriday=_hapticToneIdentifierFriday;
@property(nonatomic) _Bool scheduleWednesday; // @synthesize scheduleWednesday=_scheduleWednesday;
@property(nonatomic) _Bool scheduleTuesday; // @synthesize scheduleTuesday=_scheduleTuesday;
@property(nonatomic) _Bool scheduleThursday; // @synthesize scheduleThursday=_scheduleThursday;
@property(nonatomic) _Bool scheduleSunday; // @synthesize scheduleSunday=_scheduleSunday;
@property(nonatomic) _Bool scheduleSaturday; // @synthesize scheduleSaturday=_scheduleSaturday;
@property(nonatomic) _Bool scheduleMonday; // @synthesize scheduleMonday=_scheduleMonday;
@property(nonatomic) _Bool scheduleFriday; // @synthesize scheduleFriday=_scheduleFriday;
@property(nonatomic) _Bool alarmWednesday; // @synthesize alarmWednesday=_alarmWednesday;
@property(nonatomic) _Bool alarmTuesday; // @synthesize alarmTuesday=_alarmTuesday;
@property(nonatomic) _Bool alarmThursday; // @synthesize alarmThursday=_alarmThursday;
@property(nonatomic) _Bool alarmSunday; // @synthesize alarmSunday=_alarmSunday;
@property(nonatomic) _Bool alarmSaturday; // @synthesize alarmSaturday=_alarmSaturday;
@property(nonatomic) _Bool alarmMonday; // @synthesize alarmMonday=_alarmMonday;
@property(nonatomic) _Bool alarmFriday; // @synthesize alarmFriday=_alarmFriday;
@property(nonatomic) _Bool interactedWithWindDownLast24Hrs; // @synthesize interactedWithWindDownLast24Hrs=_interactedWithWindDownLast24Hrs;
@property(nonatomic) _Bool scheduleChangePast7days; // @synthesize scheduleChangePast7days=_scheduleChangePast7days;
@property(nonatomic) _Bool scheduleChangePast24Hours; // @synthesize scheduleChangePast24Hours=_scheduleChangePast24Hours;
@property(nonatomic) _Bool scheduleMigration; // @synthesize scheduleMigration=_scheduleMigration;
@property(nonatomic) _Bool scheduleDisabled; // @synthesize scheduleDisabled=_scheduleDisabled;
@property(nonatomic) _Bool chargeRemindersEnabled; // @synthesize chargeRemindersEnabled=_chargeRemindersEnabled;
@property(nonatomic) _Bool scheduledSleepModeEnabled; // @synthesize scheduledSleepModeEnabled=_scheduledSleepModeEnabled;
@property(nonatomic) _Bool wakeUpResultsEnabled; // @synthesize wakeUpResultsEnabled=_wakeUpResultsEnabled;
@property(nonatomic) _Bool bedTimeWindDownRemindersEnabled; // @synthesize bedTimeWindDownRemindersEnabled=_bedTimeWindDownRemindersEnabled;
@property(nonatomic) _Bool timeInBedTrackingEnabled; // @synthesize timeInBedTrackingEnabled=_timeInBedTrackingEnabled;
@property(nonatomic) _Bool watchSleepTrackingEnabled; // @synthesize watchSleepTrackingEnabled=_watchSleepTrackingEnabled;
@property(nonatomic) double sleepGoal; // @synthesize sleepGoal=_sleepGoal;
@property(copy, nonatomic) NSString *activeWatchProductType; // @synthesize activeWatchProductType=_activeWatchProductType;
@property(copy, nonatomic) NSNumber *weeksSinceOnboardedWindDownActions; // @synthesize weeksSinceOnboardedWindDownActions=_weeksSinceOnboardedWindDownActions;
@property(copy, nonatomic) NSNumber *weeksSinceOnboardedSleepTracking; // @synthesize weeksSinceOnboardedSleepTracking=_weeksSinceOnboardedSleepTracking;
@property(copy, nonatomic) NSNumber *weeksSinceOnboardedSleepSchedule; // @synthesize weeksSinceOnboardedSleepSchedule=_weeksSinceOnboardedSleepSchedule;
@property(copy, nonatomic) NSString *biologicalSex; // @synthesize biologicalSex=_biologicalSex;
@property(copy, nonatomic) NSNumber *userAge; // @synthesize userAge=_userAge;
@property(nonatomic) _Bool isImproveHealthAndActivitySubmissionAllowed; // @synthesize isImproveHealthAndActivitySubmissionAllowed=_isImproveHealthAndActivitySubmissionAllowed;
@property(readonly, nonatomic) NSDictionary *eventPayload;
@property(readonly, nonatomic) NSString *eventName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

