//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeed/NSObject-Protocol.h>

@class FCSubscriptionController, NSSet;

@protocol FCSubscriptionObserving <NSObject>

@optional
- (void)subscriptionControllerDidResetToEmpty:(FCSubscriptionController *)arg1;
- (void)subscriptionController:(FCSubscriptionController *)arg1 didFindTagsWithNotificationSupport:(NSSet *)arg2;
- (void)subscriptionController:(FCSubscriptionController *)arg1 didAddTags:(NSSet *)arg2 changeTags:(NSSet *)arg3 moveTags:(NSSet *)arg4 removeTags:(NSSet *)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7;
@end

