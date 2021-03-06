//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSAutoFillQuirksManager, WBSSavedPasswordStore;

@interface WBSSavedPasswordAuditor : NSObject
{
    WBSSavedPasswordStore *_savedPasswordStore;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WBSAutoFillQuirksManager *autoFillQuirksManager; // @synthesize autoFillQuirksManager=_autoFillQuirksManager;
@property(readonly, nonatomic) WBSSavedPasswordStore *savedPasswordStore; // @synthesize savedPasswordStore=_savedPasswordStore;
- (id)duplicatePasswordsInPasswords:(id)arg1;
- (id)savedPasswordsWithDuplicatedPassword:(id)arg1;
- (_Bool)savedPasswordIsReused:(id)arg1;
@property(readonly, nonatomic) _Bool passwordStoreHasDuplicatedPasswords;
- (_Bool)_passwordIsReused:(id)arg1 byOtherSavedPassword:(id)arg2;
- (_Bool)_savedPasswordQualifiesForReuseAuditing:(id)arg1;
- (id)initWithSavedPasswordStore:(id)arg1 autoFillQuirksManager:(id)arg2;
- (id)init;

@end

