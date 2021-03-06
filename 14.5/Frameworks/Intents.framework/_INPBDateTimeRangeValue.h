//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDateTimeRangeValue-Protocol.h>

@class NSString, _INPBDateTime, _INPBRecurrenceValue, _INPBValueMetadata;

@interface _INPBDateTimeRangeValue : PBCodable <_INPBDateTimeRangeValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int allDay:1;
        unsigned int endCalendar:1;
        unsigned int startCalendar:1;
    } _has;
    _Bool _allDay;
    long long _endCalendar;
    _INPBDateTime *_endDateTime;
    NSString *_name;
    _INPBRecurrenceValue *_recurrence;
    long long _startCalendar;
    _INPBDateTime *_startDateTime;
    _INPBValueMetadata *_valueMetadata;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(retain, nonatomic) _INPBDateTime *startDateTime; // @synthesize startDateTime=_startDateTime;
@property(nonatomic) long long startCalendar; // @synthesize startCalendar=_startCalendar;
@property(retain, nonatomic) _INPBRecurrenceValue *recurrence; // @synthesize recurrence=_recurrence;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) _INPBDateTime *endDateTime; // @synthesize endDateTime=_endDateTime;
@property(nonatomic) long long endCalendar; // @synthesize endCalendar=_endCalendar;
@property(nonatomic) _Bool allDay; // @synthesize allDay=_allDay;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(readonly, nonatomic) _Bool hasStartDateTime;
@property(nonatomic) _Bool hasStartCalendar;
@property(readonly, nonatomic) _Bool hasRecurrence;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasEndDateTime;
@property(nonatomic) _Bool hasEndCalendar;
@property(nonatomic) _Bool hasAllDay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

