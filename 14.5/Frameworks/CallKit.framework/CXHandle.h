//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CXHandle : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;
    NSString *_value;
}

+ (_Bool)supportsSecureCoding;
+ (id)stringForType:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToHandle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 value:(id)arg2;

@end

