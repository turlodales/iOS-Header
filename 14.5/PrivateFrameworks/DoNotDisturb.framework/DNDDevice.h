//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>

@interface DNDDevice : NSObject <NSCopying>
{
    unsigned long long _deviceClass;
    unsigned long long _deviceCapabilities;
}

+ (id)deviceWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2;
+ (id)currentDevice;
@property(readonly, nonatomic) unsigned long long deviceCapabilities; // @synthesize deviceCapabilities=_deviceCapabilities;
@property(readonly, nonatomic) unsigned long long deviceClass; // @synthesize deviceClass=_deviceClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2;

@end

