//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/UNUserNotificationCenterDelegate-Protocol.h>

@class NSString;

@interface CKSceneController : NSObject <UNUserNotificationCenterDelegate>
{
}

- (id)_suppressionContextsForChatIdentifier:(id)arg1 personCentricID:(id)arg2;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)messagesControllersFromAllScenes;
- (id)messagesSceneDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

