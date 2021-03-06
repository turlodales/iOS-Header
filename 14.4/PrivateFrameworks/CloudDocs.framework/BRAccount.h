//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface BRAccount : NSObject
{
    NSString *_accountID;
    NSData *_perAppAccountIdentifier;
}

+ (_Bool)refreshCurrentLoggedInAccount;
+ (id)currentLoggedInAccountWithError:(id *)arg1;
+ (id)currentCachedLoggedInAccountWithError:(id *)arg1;
+ (_Bool)_refreshCurrentLoggedInAccountForcingRefresh:(_Bool)arg1 error:(id *)arg2;
+ (void)startAccountTokenChangeObserverIfNeeded;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *perAppAccountIdentifier; // @synthesize perAppAccountIdentifier=_perAppAccountIdentifier;
- (_Bool)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 error:(id *)arg2;
- (id)containerWithPendingChanges;
- (_Bool)logoutWithError:(id *)arg1;
- (_Bool)loginWithError:(id *)arg1;
- (id)initWithAccountID:(id)arg1;
- (void)evictOldDocumentsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)getEvictableSpace:(id *)arg1 error:(id *)arg2;
- (_Bool)setOptimizeStorageEnabled:(_Bool)arg1 error:(id *)arg2;
- (_Bool)hasOptimizeStorageWithError:(id *)arg1;

@end

