//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitServices/BSXPCSecureCoding-Protocol.h>
#import <UIKitServices/NSCopying-Protocol.h>
#import <UIKitServices/NSMutableCopying-Protocol.h>

@class NSDictionary, NSString;

@interface UISDeviceContext : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying>
{
    NSDictionary *_deviceInfoKeysToValues;
}

+ (id)_allKeys;
+ (id)_keysToValueTypes;
+ (_Bool)supportsBSXPCSecureCoding;
+ (id)defaultContext;
- (void).cxx_destruct;
- (id)_dictionaryWithOnlyValidKeysFromDictionary:(id)arg1;
- (id)_rawDeviceInfoKeysToValues;
- (_Bool)_isDeviceInfoValue:(id)arg1 appropriateForKey:(id)arg2;
- (_Bool)_isDeviceInfoType:(long long)arg1 appropriateForKey:(id)arg2;
- (long long)_valueTypeForValue:(id)arg1;
- (long long)_valueTypeForKey:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)deviceInfoStringValueForKey:(id)arg1;
- (_Bool)deviceInfoBoolValueForKey:(id)arg1;
- (long long)deviceInfoIntegerValueForKey:(id)arg1;
- (double)deviceInfoFloatValueForKey:(id)arg1;
- (_Bool)hasDeviceInfoValueForKey:(id)arg1;
- (id)initWithDeviceInfoValues:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

