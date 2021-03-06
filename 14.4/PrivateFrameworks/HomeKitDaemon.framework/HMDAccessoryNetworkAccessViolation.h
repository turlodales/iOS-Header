//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSDate;

@interface HMDAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding>
{
    NSDate *_lastViolationDate;
    NSDate *_lastResetDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)noViolation;
- (void).cxx_destruct;
@property(readonly) NSDate *lastResetDate; // @synthesize lastResetDate=_lastResetDate;
@property(readonly) NSDate *lastViolationDate; // @synthesize lastViolationDate=_lastViolationDate;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithLastViolationTimeInterval:(id)arg1 lastViolationResetTimeInterval:(id)arg2;
@property(readonly, getter=hasCurrentViolation) _Bool currentViolation;
- (id)initWithLastViolationDate:(id)arg1 lastViolationResetDate:(id)arg2;

@end

