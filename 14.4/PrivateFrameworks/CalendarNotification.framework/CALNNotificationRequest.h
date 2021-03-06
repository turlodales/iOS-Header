//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/NSCopying-Protocol.h>
#import <CalendarNotification/NSSecureCoding-Protocol.h>

@class CALNNotificationContent, NSString;

@interface CALNNotificationRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    CALNNotificationContent *_content;
}

+ (_Bool)supportsSecureCoding;
+ (id)requestWithIdentifier:(id)arg1 content:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CALNNotificationContent *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqualToRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithIdentifier:(id)arg1 content:(id)arg2;

@end

