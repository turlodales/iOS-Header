//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@class ACAccount, ACAccountType, NSArray;

@protocol CNACAccountProvider <NSObject>
- (_Bool)isAnyAccountSyncableIgnoringAccount:(ACAccount *)arg1;
- (_Bool)isAccountSyncable:(ACAccount *)arg1;
- (NSArray *)childAccountsForAccount:(ACAccount *)arg1;
- (NSArray *)accountsWithAccountType:(ACAccountType *)arg1;
- (NSArray *)allAccountTypes;
@end

