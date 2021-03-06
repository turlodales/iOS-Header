//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDVideoStreamInterface, NSError;

@protocol HMDVideoStreamInterfaceDelegate <NSObject>
- (void)videoStreamDidUpdateConfiguration:(HMDVideoStreamInterface *)arg1;
- (void)videoStreamDidNetworkDeteriorate:(HMDVideoStreamInterface *)arg1;
- (void)videoStreamDidNetworkImprove:(HMDVideoStreamInterface *)arg1;
- (void)videoStream:(HMDVideoStreamInterface *)arg1 didStop:(NSError *)arg2;
- (void)videoStream:(HMDVideoStreamInterface *)arg1 didStart:(NSError *)arg2;
- (void)videoStream:(HMDVideoStreamInterface *)arg1 didStartRelay:(NSError *)arg2;
@end

