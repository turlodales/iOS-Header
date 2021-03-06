//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMEMessageDatagramConnection-Protocol.h>

@class HMDDevice, NSString, NSUUID;

@interface HMDRemoteEventRouterConnection : NSObject <HMEMessageDatagramConnection>
{
    NSUUID *_deviceIdentifier;
    HMDDevice *_device;
}

- (void).cxx_destruct;
@property(readonly) __weak HMDDevice *device; // @synthesize device=_device;
@property(readonly, copy) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

