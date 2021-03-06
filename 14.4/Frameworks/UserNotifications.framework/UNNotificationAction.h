//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface UNNotificationAction : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_title;
    unsigned long long _options;
    NSString *_textInputButtonTitle;
    NSString *_textInputPlaceholder;
    NSURL *_url;
}

+ (_Bool)supportsSecureCoding;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 options:(unsigned long long)arg4;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *textInputPlaceholder; // @synthesize textInputPlaceholder=_textInputPlaceholder;
@property(readonly, copy, nonatomic) NSString *textInputButtonTitle; // @synthesize textInputButtonTitle=_textInputButtonTitle;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)_description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 textInputButtonTitle:(id)arg4 textInputPlaceholder:(id)arg5 url:(id)arg6;

@end

