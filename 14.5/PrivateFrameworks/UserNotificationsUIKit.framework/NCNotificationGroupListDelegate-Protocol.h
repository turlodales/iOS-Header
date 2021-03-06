//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationListComponentDelegate-Protocol.h>

@class NCNotificationGroupList, NCNotificationRequest;
@protocol NCAuxiliaryOptionsProviding;

@protocol NCNotificationGroupListDelegate <NCNotificationListComponentDelegate>
- (_Bool)isViewVisibleForNotificationGroupList:(NCNotificationGroupList *)arg1;
- (_Bool)notificationGroupListShouldScrollToTop:(NCNotificationGroupList *)arg1;
- (void)notificationGroupList:(NCNotificationGroupList *)arg1 requestsScrollToTopOfGroupWithCompletion:(void (^)(void))arg2;
- (id <NCAuxiliaryOptionsProviding>)notificationGroupList:(NCNotificationGroupList *)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(NCNotificationRequest *)arg2 isLongLook:(_Bool)arg3;
- (void)notificationGroupList:(NCNotificationGroupList *)arg1 didRemoveNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationGroupListDidRemoveAllNotificationRequests:(NCNotificationGroupList *)arg1;
@end

