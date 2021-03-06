//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@interface CTDataConnectionAvailabilityStatus : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _available;
    int _csiError;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int csiError; // @synthesize csiError=_csiError;
@property(nonatomic) _Bool available; // @synthesize available=_available;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

