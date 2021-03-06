//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServicesUI/NSObject-Protocol.h>

@class UIColor, UNNotification, UNNotificationResponse;

@protocol UNNotificationContentExtension <NSObject>
- (void)didReceiveNotification:(UNNotification *)arg1;

@optional
@property(readonly, copy, nonatomic) UIColor *mediaPlayPauseButtonTintColor;
@property(readonly, nonatomic) struct CGRect mediaPlayPauseButtonFrame;
@property(readonly, nonatomic) unsigned long long mediaPlayPauseButtonType;
- (void)mediaPause;
- (void)mediaPlay;
- (void)didReceiveNotificationResponse:(UNNotificationResponse *)arg1 completionHandler:(void (^)(unsigned long long))arg2;
@end

