//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, REMListChangeItem;

@interface REMListCalDAVNotificationContextChangeItem : NSObject
{
    REMListChangeItem *_listChangeItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) REMListChangeItem *listChangeItem; // @synthesize listChangeItem=_listChangeItem;
- (void)updateCalDAVNotification:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)clearCalDAVNotifications;
- (void)removeCalDAVNotication:(id)arg1;
- (void)_addCalDAVNotification:(id)arg1;
- (id)addCalDAVNotificationWithUUIDString:(id)arg1 hostURL:(id)arg2 externalIdentifier:(id)arg3 externalModificationTag:(id)arg4;
@property(readonly, nonatomic) NSArray *calDAVNotifications;
- (id)initWithListChangeItem:(id)arg1;

@end

