//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMAlarmTrigger.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@interface REMAlarmTimeIntervalTrigger : REMAlarmTrigger <NSSecureCoding>
{
    double _timeInterval;
}

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isTemporal;
- (_Bool)isEqual:(id)arg1;
- (id)_deepCopy;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeInterval:(double)arg1;
- (id)initWithObjectID:(id)arg1 timeInterval:(double)arg2;

@end

