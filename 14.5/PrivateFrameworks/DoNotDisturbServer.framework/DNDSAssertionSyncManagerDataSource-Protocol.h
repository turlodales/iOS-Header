//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDSPairedDevice;
@protocol DNDSAssertionSyncManager;

@protocol DNDSAssertionSyncManagerDataSource <NSObject>
- (DNDSPairedDevice *)currentlyActivePairedDeviceForSyncManager:(id <DNDSAssertionSyncManager>)arg1;
@end

