//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class BLTPBBulletinSummary, NSSet, NSString;

@protocol BLTBulletinDistributorSubscriberDeviceDelegate <NSObject>
- (_Bool)isLocallyConnectedToRemote;
- (void)sendBulletinSummary:(BLTPBBulletinSummary *)arg1;
- (void)getWillNanoPresentNotificationForSectionID:(NSString *)arg1 subsectionIDs:(NSSet *)arg2 completion:(void (^)(_Bool))arg3;
- (void)getWillNanoPresentNotificationForSectionID:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
@end

