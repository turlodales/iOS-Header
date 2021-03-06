//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@interface UNNotificationTrigger : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _repeats;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)_retroactiveTriggerHysteresis;
- (_Bool)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2;
- (id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2;
- (id)nextTriggerDateAfterLastTriggerDate:(id)arg1 withRequestedDate:(id)arg2;
- (id)nextTriggerDate;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithRepeats:(_Bool)arg1;
- (id)_init;
- (id)init;

@end

