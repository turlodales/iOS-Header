//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class BKSHIDEventDeferringPredicate, BKSHIDEventDeferringTarget, NSString;

@interface BKSHIDEventDeferringRule : NSObject <NSCopying, NSSecureCoding>
{
    BKSHIDEventDeferringPredicate *_predicate;
    BKSHIDEventDeferringTarget *_target;
    NSString *_reason;
}

+ (_Bool)supportsSecureCoding;
+ (id)ruleForDeferringEventsMatchingPredicate:(id)arg1 toTarget:(id)arg2 withReason:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) BKSHIDEventDeferringTarget *target; // @synthesize target=_target;
@property(readonly, copy, nonatomic) BKSHIDEventDeferringPredicate *predicate; // @synthesize predicate=_predicate;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithPredicate:(id)arg1 target:(id)arg2 reason:(id)arg3;
- (id)init;

@end

