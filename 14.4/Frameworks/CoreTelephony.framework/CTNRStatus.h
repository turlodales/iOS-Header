//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@interface CTNRStatus : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isSADisabled;
    _Bool _isNSADisabled;
    unsigned long long _saDisabledReasonMask;
    unsigned long long _nsaDisabledReasonMask;
}

+ (_Bool)supportsSecureCoding;
+ (id)default;
@property(nonatomic) unsigned long long nsaDisabledReasonMask; // @synthesize nsaDisabledReasonMask=_nsaDisabledReasonMask;
@property(nonatomic) _Bool isNSADisabled; // @synthesize isNSADisabled=_isNSADisabled;
@property(nonatomic) unsigned long long saDisabledReasonMask; // @synthesize saDisabledReasonMask=_saDisabledReasonMask;
@property(nonatomic) _Bool isSADisabled; // @synthesize isSADisabled=_isSADisabled;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithSADisabled:(_Bool)arg1 saReasonMask:(unsigned long long)arg2 nsaDisabled:(_Bool)arg3 nsaReasonMask:(unsigned long long)arg4;

@end

