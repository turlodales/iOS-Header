//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSNumber.h>

@interface ICSPredefinedValue : NSNumber
{
    long long _value;
}

+ (_Bool)supportsSecureCoding;
+ (id)numberWithLong:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (long long)longValue;
- (void)getValue:(void *)arg1;
- (const char *)objCType;
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;
- (id)initWithLong:(long long)arg1;

@end

