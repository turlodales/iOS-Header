//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALNUNNotificationRequestMapper;

@interface CALNUNNotificationMapper : NSObject
{
    CALNUNNotificationRequestMapper *_notificationRequestMapper;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CALNUNNotificationRequestMapper *notificationRequestMapper; // @synthesize notificationRequestMapper=_notificationRequestMapper;
- (id)_calnNotificationFromUNNotification:(id)arg1;
- (id)calnNotificationsFromUNNotifications:(id)arg1;
- (id)calnNotificationFromUNNotification:(id)arg1;
- (id)initWithNotificationRequestMapper:(id)arg1;

@end

