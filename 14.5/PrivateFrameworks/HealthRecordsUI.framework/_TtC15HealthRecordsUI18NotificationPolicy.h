//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthRecordsUI/UNUserNotificationCenterDelegate-Protocol.h>
#import <HealthRecordsUI/WDNotificationPolicy-Protocol.h>

@interface _TtC15HealthRecordsUI18NotificationPolicy : NSObject <WDNotificationPolicy, UNUserNotificationCenterDelegate>
{
}

- (id)init;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end

