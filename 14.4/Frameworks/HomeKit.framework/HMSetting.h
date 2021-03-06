//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMSettingValue, NSString, NSUUID;
@protocol HMSettingManager;

@interface HMSetting : NSObject <NSSecureCoding>
{
    id _value;
    NSString *_keyPath;
    NSUUID *_identifier;
    Class _valueClass;
    long long _type;
    id <HMSettingManager> _settingManager;
    NSString *_name;
    unsigned long long _properties;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property unsigned long long properties; // @synthesize properties=_properties;
@property(copy) NSString *name; // @synthesize name=_name;
@property __weak id <HMSettingManager> settingManager; // @synthesize settingManager=_settingManager;
@property long long type; // @synthesize type=_type;
@property(retain) Class valueClass; // @synthesize valueClass=_valueClass;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy) id value; // @synthesize value=_value;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)merge:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)updateValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)valueForUpdate:(id)arg1;
@property(readonly) HMSettingValue *internalValue;
@property(readonly, getter=isWritable) _Bool writable;
@property(readonly, copy) NSString *localizedTitle;
- (id)description;
- (id)_initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 value:(id)arg4 properties:(unsigned long long)arg5;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 value:(id)arg4 properties:(unsigned long long)arg5;
- (id)initWithInternal;

@end

