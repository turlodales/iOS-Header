//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMAlarmTrigger.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSDateComponents;

@interface REMAlarmDateTrigger : REMAlarmTrigger <NSSecureCoding>
{
    NSDateComponents *_dateComponents;
}

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDateComponents *dateComponents; // @synthesize dateComponents=_dateComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isTemporal;
- (id)_deepCopy;
- (id)initWithObjectID:(id)arg1 dateComponents:(id)arg2;
- (id)initWithDateComponents:(id)arg1;

@end

