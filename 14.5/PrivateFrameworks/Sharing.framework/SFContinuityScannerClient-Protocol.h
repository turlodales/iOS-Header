//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class NSSet, SFActivityAdvertisement, SFPeerDevice;

@protocol SFContinuityScannerClient <NSObject>
- (void)pairedDevicesChanged:(NSSet *)arg1;
- (void)lostDeviceWithDevice:(SFPeerDevice *)arg1;
- (void)foundDeviceWithDevice:(SFPeerDevice *)arg1;
- (void)receivedAdvertisement:(SFActivityAdvertisement *)arg1;
@end

