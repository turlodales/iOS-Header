//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALNNotificationIconCache;

@interface CALNUNNotificationIconMapper : NSObject
{
    CALNNotificationIconCache *_notificationIconCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CALNNotificationIconCache *notificationIconCache; // @synthesize notificationIconCache=_notificationIconCache;
- (id)unNotificationIconFromIconIdentifier:(id)arg1;
- (id)iconIdentifierFromUNNotificationIcon:(id)arg1;
- (id)initWithNotificationIconCache:(id)arg1;

@end

