//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMTrigger.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSCalendar, NSDate, NSDateComponents, NSString, NSTimeZone;

@interface HMTimerTrigger : HMTrigger <NSSecureCoding>
{
    NSArray *_recurrences;
    NSString *_significantEvent;
    NSDateComponents *_significantEventOffset;
    NSDate *_fireDate;
    NSTimeZone *_timeZone;
    NSDateComponents *_recurrence;
    NSCalendar *_recurrenceCalendar;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSCalendar *recurrenceCalendar; // @synthesize recurrenceCalendar=_recurrenceCalendar;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_handleTriggerFired:(id)arg1;
- (void)_updateTimerTriggerPropertiesFromResponse:(id)arg1;
- (id)_serializeForAdd;
- (void)_updateTimerTriggerWithResponse:(CDUnknownBlockType)arg1 payloadToSend:(id)arg2;
- (void)_updateRecurrences:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRecurrences:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateRecurrence:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRecurrence:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateSignificantEventOffset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSignificantEventOffset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateSignificantEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSignificantEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateTimeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateTimeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateFireDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateFireDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setSignificantEventOffset:(id)arg1;
@property(readonly, copy, nonatomic) NSDateComponents *significantEventOffset; // @synthesize significantEventOffset=_significantEventOffset;
- (void)setSignificantEvent:(id)arg1;
@property(readonly, copy, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
- (void)setRecurrences:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property(copy, nonatomic) NSDateComponents *recurrence; // @synthesize recurrence=_recurrence;
@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
- (id)initWithName:(id)arg1 significantEvent:(id)arg2 significantEventOffset:(id)arg3 recurrences:(id)arg4;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrences:(id)arg4;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrence:(id)arg4 recurrenceCalendar:(id)arg5;
- (id)init;

@end

