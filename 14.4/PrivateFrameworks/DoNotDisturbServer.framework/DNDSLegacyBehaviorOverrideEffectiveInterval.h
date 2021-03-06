//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/NSCopying-Protocol.h>
#import <DoNotDisturbServer/NSSecureCoding-Protocol.h>

@class NSDateComponents, NSString, NSUUID;

@interface DNDSLegacyBehaviorOverrideEffectiveInterval : NSObject <NSCopying, NSSecureCoding>
{
    NSDateComponents *_startComponents;
    NSDateComponents *_endComponents;
    NSString *_calendarIdentifier;
    unsigned long long _repeatInterval;
    NSUUID *_identifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long repeatInterval; // @synthesize repeatInterval=_repeatInterval;
@property(readonly, copy, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(readonly, copy, nonatomic) NSDateComponents *endComponents; // @synthesize endComponents=_endComponents;
@property(readonly, copy, nonatomic) NSDateComponents *startComponents; // @synthesize startComponents=_startComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStartComponents:(id)arg1 endComponents:(id)arg2 calendarIdentifier:(id)arg3 repeatInterval:(unsigned long long)arg4 identifier:(id)arg5;

@end

