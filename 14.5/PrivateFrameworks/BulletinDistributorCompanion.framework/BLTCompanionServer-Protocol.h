//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class BLTActionInfo, NSDate, NSString;

@protocol BLTCompanionServer <NSObject>
- (void)willSendLightsAndSirensWithPublisherBulletinID:(NSString *)arg1 recordID:(NSString *)arg2 inPhoneSection:(NSString *)arg3 systemApp:(_Bool)arg4 completion:(void (^)(_Bool, unsigned long long))arg5;
- (_Bool)shouldSuppressLightsAndSirensNow;
- (void)removeBulletinWithPublisherBulletinID:(NSString *)arg1 recordID:(NSString *)arg2 sectionID:(NSString *)arg3;
- (void)handleDidPlayLightsAndSirens:(_Bool)arg1 forBulletin:(NSString *)arg2 inPhoneSection:(NSString *)arg3 transmissionDate:(NSDate *)arg4 receptionDate:(NSDate *)arg5 replyToken:(NSString *)arg6;
- (void)handleAction:(BLTActionInfo *)arg1;
@end

