//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CNFuture, NSArray;

@protocol CNUICoreFamilyMemberContactsUpdating
- (CNFuture *)updateContactWhitelistByRemovingContacts:(NSArray *)arg1;
- (CNFuture *)updateContactWhitelistByAddingContacts:(NSArray *)arg1;
- (CNFuture *)updateContactListByRemovingContacts:(NSArray *)arg1;
- (CNFuture *)updateContactListByUpdatingContacts:(NSArray *)arg1;
- (CNFuture *)updateContactListByAddingContacts:(NSArray *)arg1;
@end

