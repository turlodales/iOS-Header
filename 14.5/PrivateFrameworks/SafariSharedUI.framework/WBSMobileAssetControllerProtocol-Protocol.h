//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDate;
@protocol WBSMobileAssetControllerDelegate;

@protocol WBSMobileAssetControllerProtocol
@property(readonly, nonatomic) double updateInterval;
@property(retain, nonatomic) NSDate *lastUpdateDate;
@property __weak id <WBSMobileAssetControllerDelegate> delegate;
- (void)queryURL:(void (^)(NSURL *, NSError *))arg1;
@end

