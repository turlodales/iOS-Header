//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HIDDisplay/HIDDisplayInterface.h>

@class NSDictionary;

@interface HIDDisplayDeviceManagementInterface : HIDDisplayInterface
{
    NSDictionary *_usageElementMap;
}

- (void).cxx_destruct;
- (_Bool)getSecurityToken:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)setupInterface;
- (_Bool)factoryReset:(unsigned char)arg1 securityToken:(unsigned long long)arg2 error:(id *)arg3;
- (id)getHIDDevices;
- (id)initWithService:(unsigned int)arg1;
- (id)initWithContainerID:(id)arg1;

@end

