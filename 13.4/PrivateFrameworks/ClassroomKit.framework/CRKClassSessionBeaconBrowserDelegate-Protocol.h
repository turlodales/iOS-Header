//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class CRKClassSessionBeaconBrowser, CRKRemoteEndpoint, DMFControlSessionIdentifier, NSError;

@protocol CRKClassSessionBeaconBrowserDelegate <NSObject>
- (void)beaconBrowser:(CRKClassSessionBeaconBrowser *)arg1 didFailWithError:(NSError *)arg2;
- (void)beaconBrowser:(CRKClassSessionBeaconBrowser *)arg1 didFindBeaconForInvitationSessionWithEndpoint:(CRKRemoteEndpoint *)arg2;
- (void)beaconBrowser:(CRKClassSessionBeaconBrowser *)arg1 didFindBeaconForClassSession:(DMFControlSessionIdentifier *)arg2 flags:(unsigned short)arg3;
@end

