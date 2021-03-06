//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@class EKPersistentSource, NSSet, NSString;

@interface EKPersistentCalendar : EKPersistentObject
{
}

+ (Class)meltedClass;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (id)calendarWithRandomUUID;
- (void)setLastSyncErrorData:(id)arg1;
- (id)lastSyncErrorData;
- (void)setLastSyncError:(unsigned long long)arg1;
- (unsigned long long)lastSyncError;
- (void)setLastSyncEndDate:(id)arg1;
- (id)lastSyncEndDate;
- (void)setLastSyncStartDate:(id)arg1;
- (id)lastSyncStartDate;
- (void)setSubscriptionID:(id)arg1;
- (id)subscriptionID;
- (void)setRefreshDate:(id)arg1;
- (id)refreshDate;
- (id)allAlarms;
- (void)setAllAlarms:(id)arg1;
- (void)setDigest:(id)arg1;
- (id)digest;
@property(copy, nonatomic) NSString *pushKey; // @dynamic pushKey;
@property(copy, nonatomic) NSString *subcalAccountID; // @dynamic subcalAccountID;
- (void)setNotes:(id)arg1;
- (id)notes;
@property(copy, nonatomic) NSString *ownerIdentityLastName; // @dynamic ownerIdentityLastName;
@property(copy, nonatomic) NSString *ownerIdentityFirstName; // @dynamic ownerIdentityFirstName;
@property(copy, nonatomic) NSString *ownerIdentityAddress; // @dynamic ownerIdentityAddress;
@property(copy, nonatomic) NSString *ownerIdentityPhoneNumber; // @dynamic ownerIdentityPhoneNumber;
@property(copy, nonatomic) NSString *ownerIdentityEmail; // @dynamic ownerIdentityEmail;
@property(copy, nonatomic) NSString *ownerIdentityDisplayName; // @dynamic ownerIdentityDisplayName;
- (void)setOwnerIdentityId:(int)arg1;
- (int)ownerIdentityId;
@property(copy, nonatomic) NSString *selfIdentityLastName; // @dynamic selfIdentityLastName;
@property(copy, nonatomic) NSString *selfIdentityFirstName; // @dynamic selfIdentityFirstName;
@property(copy, nonatomic) NSString *selfIdentityAddress; // @dynamic selfIdentityAddress;
@property(copy, nonatomic) NSString *selfIdentityPhoneNumber; // @dynamic selfIdentityPhoneNumber;
@property(copy, nonatomic) NSString *selfIdentityEmail; // @dynamic selfIdentityEmail;
@property(copy, nonatomic) NSString *selfIdentityDisplayName; // @dynamic selfIdentityDisplayName;
- (void)setAllowedEntities:(int)arg1;
- (int)allowedEntities;
@property(nonatomic) unsigned long long invitationStatus; // @dynamic invitationStatus;
@property(retain, nonatomic) EKPersistentSource *source; // @dynamic source;
@property(copy, nonatomic) NSSet *sharees; // @dynamic sharees;
- (void)setNotifications:(id)arg1;
- (id)notifications;
@property(nonatomic, getter=isPublished) _Bool published; // @dynamic published;
- (void)setIsPublished:(_Bool)arg1;
- (void)setPublishURL:(id)arg1;
- (id)publishURL;
@property(nonatomic) unsigned long long sharingInvitationResponse; // @dynamic sharingInvitationResponse;
@property(copy, nonatomic) NSString *sharedOwnerURL; // @dynamic sharedOwnerURL;
@property(copy, nonatomic) NSString *sharedOwnerName; // @dynamic sharedOwnerName;
@property(nonatomic) unsigned long long sharingStatus; // @dynamic sharingStatus;
@property(nonatomic) int flags; // @dynamic flags;
- (id)description;
@property(nonatomic) int displayOrder; // @dynamic displayOrder;
@property(retain, nonatomic) NSString *UUID; // @dynamic UUID;
@property(copy, nonatomic) NSString *colorStringRaw; // @dynamic colorStringRaw;
@property(copy, nonatomic) NSString *symbolicColorName; // @dynamic symbolicColorName;
@property(nonatomic, getter=isColorDisplayOnly) _Bool colorDisplayOnly; // @dynamic colorDisplayOnly;
@property(copy, nonatomic) NSString *unlocalizedTitle; // @dynamic unlocalizedTitle;
- (void)setExternalRepresentation:(id)arg1;
- (id)externalRepresentation;
- (void)setSyncToken:(id)arg1;
- (id)syncToken;
@property(copy, nonatomic) NSString *externalModificationTag; // @dynamic externalModificationTag;
- (void)setExternalIDTag:(id)arg1;
- (id)externalIDTag;
@property(copy, nonatomic) NSString *externalID; // @dynamic externalID;
- (int)entityType;

// Remaining properties
@property(copy, nonatomic) NSString *publishedURL; // @dynamic publishedURL;

@end

