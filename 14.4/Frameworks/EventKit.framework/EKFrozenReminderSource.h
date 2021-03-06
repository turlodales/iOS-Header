//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKFrozenReminderObject.h>

@class NSString, REMAccount;

__attribute__((visibility("hidden")))
@interface EKFrozenReminderSource : EKFrozenReminderObject
{
}

+ (Class)meltedClass;
- (_Bool)disabled;
- (id)defaultAlarmOffset;
- (int)flags;
- (void)setLastSyncEndDate:(id)arg1;
- (void)setLastSyncStartDate:(id)arg1;
- (void)setLastSyncError:(unsigned long long)arg1;
- (id)lastSyncEndDate;
- (id)lastSyncStartDate;
- (unsigned long long)lastSyncError;
- (id)delegatedAccountOwnerStoreID;
- (id)externalID;
- (id)UUID;
- (id)title;
- (long long)sourceType;
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (id)meltedObjectInStore:(id)arg1;
@property(readonly, nonatomic) REMAccount *remAccount;

@end

