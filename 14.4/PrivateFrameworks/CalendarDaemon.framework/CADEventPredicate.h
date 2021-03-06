//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>
#import <CalendarDaemon/NSSecureCoding-Protocol.h>

@class NSString, NSTimeZone;

@interface CADEventPredicate : EKPredicate <EKDefaultPropertiesLoading, NSSecureCoding>
{
    _Bool _shouldLoadProposedTimesInRange;
    _Bool _shouldLoadDefaultProperties;
    _Bool _excludeAllDayEvents;
    _Bool _excludeTimedEvents;
    _Bool _excludeDeclined;
    _Bool _excludeProposed;
    _Bool _excludeDeclinedUnlessProposed;
}

+ (id)predicateWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(_Bool)arg5;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool excludeDeclinedUnlessProposed; // @synthesize excludeDeclinedUnlessProposed=_excludeDeclinedUnlessProposed;
@property(nonatomic) _Bool excludeProposed; // @synthesize excludeProposed=_excludeProposed;
@property(nonatomic) _Bool excludeDeclined; // @synthesize excludeDeclined=_excludeDeclined;
@property(nonatomic) _Bool excludeTimedEvents; // @synthesize excludeTimedEvents=_excludeTimedEvents;
@property(nonatomic) _Bool excludeAllDayEvents; // @synthesize excludeAllDayEvents=_excludeAllDayEvents;
@property(readonly, nonatomic) _Bool shouldLoadDefaultProperties; // @synthesize shouldLoadDefaultProperties=_shouldLoadDefaultProperties;
@property(readonly, nonatomic) _Bool shouldLoadProposedTimesInRange; // @synthesize shouldLoadProposedTimesInRange=_shouldLoadProposedTimesInRange;
- (_Bool)isEqual:(id)arg1;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)defaultPropertiesToLoad;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) NSString *eventUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 title:(id)arg2 calendars:(id)arg3;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(_Bool)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

