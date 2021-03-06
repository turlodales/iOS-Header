//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/NoteAccountObject.h>

#import <NotesShared/ICLegacyAccount-Protocol.h>

@class NSManagedObjectContext, NSManagedObjectID, NSSet, NSString;
@protocol ICLegacyFolder;

@interface NoteAccountObject (ICLegacyAccount) <ICLegacyAccount>
@property(readonly, copy, nonatomic) NSString *localizedAttachmentsNotSupportedReason;
@property(readonly, nonatomic) _Bool isManaged;
@property(readonly, nonatomic) _Bool supportsAttachments;
@property(readonly, nonatomic) id <ICLegacyFolder> defaultFolder;
@property(readonly, nonatomic) NSSet *folders;
@property(readonly, copy, nonatomic) NSString *emailAddress;
@property(readonly, nonatomic) long long legacyAccountType;
@property(readonly, copy, nonatomic) NSString *objectIdentifier;
@property(readonly, copy, nonatomic) NSString *allItemsFolderLocalizedTitle;
@property(readonly, nonatomic) _Bool enabled;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accountIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool didChooseToMigrate;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) _Bool preventMovingNotesToOtherAccounts;
@property(readonly) Class superclass;
@end

